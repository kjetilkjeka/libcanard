#include <stdint.h>
#include <stdbool.h>

#include "_reg_map_mcan.h"
#include "_message_ram_map_mcan.h"
#include "canard_mcan.h"
#include "canard.h"

/* The message RAM contains lot of different buffers for the mcan unit. See the datasheet for more information */
static volatile CANARD_MCAN_MESSAGE_RAM mcan0_message_ram;
static volatile CANARD_MCAN_MESSAGE_RAM mcan1_message_ram;

/* Private (helper) function declarations */
enum CanardMcanStatusCode dlc_from_data_len(uint8_t data_len, uint8_t* dlc);
enum CanardMcanStatusCode data_len_from_dlc(uint8_t dlc, uint8_t* data_len);
volatile CANARD_MCAN_MESSAGE_RAM* message_ram(const volatile CanardMcan* const interface);
void canardMcanInitializeMessageRam(volatile CanardMcan* const interface);
void canardMcanInitializeTiming(
	volatile CanardMcan* interface, 
	struct CanardMcanTimingConfiguration const timing, 
	struct CanardMcanDataTimingConfiguration const data_timing,
	struct CanardMcanTransmitterDelayCompensationConfiguration const transmitter_delay_compensation
);
void canardMcanInitializeInterrupts(volatile CanardMcan* interface, struct CanardMcanInterruptConfiguration const interrupts);

/* API functions */

int16_t canardMcanInit(volatile CanardMcan* interface, struct CanardMcanConfiguration const config) {
	
	/* Start configuration. */
	interface->CCCR |= CANARD_MCAN_CCCR_INIT;
	interface->CCCR |= CANARD_MCAN_CCCR_CCE;

	interface->CCCR |= CANARD_MCAN_CCCR_FDOE | CANARD_MCAN_CCCR_BRSE;
	
	canardMcanInitializeTiming(interface, config.timing, config.data_timing, config.transmitter_delay_compensation);
	canardMcanInitializeMessageRam(interface);
	canardMcanInitializeInterrupts(interface, config.interrupts);

	interface->GFC = (config.filter.enable_standard_frames ? CANARD_MCAN_GFC_ANFS(2) : CANARD_MCAN_GFC_ANFS(0))
					| (config.filter.enable_extended_frames ? CANARD_MCAN_GFC_ANFE(2) : CANARD_MCAN_GFC_ANFE(0));

    /* Finish configuration */
	interface->CCCR &= ~CANARD_MCAN_CCCR_INIT;
	
	/* Wait for can-bus sync */ 
	while (interface->CCCR & CANARD_MCAN_CCCR_INIT);
	
	return CANARD_MCAN_STATUS_OK;
}

int16_t canardMcanTransmit(volatile CanardMcan* interface, const CanardCANFrame* const frame) {
	return canardMcanTransmitAs(interface, frame, false);	
}

int16_t canardMcanTransmitAs(volatile CanardMcan* interface, const CanardCANFrame* const frame, const bool can_fd) {
	uint8_t dlc = 0;
	bool extended_id = (frame->id & CANARD_CAN_FRAME_EFF);
	uint16_t ret = dlc_from_data_len(frame->data_len, &dlc);

	if (ret != CANARD_MCAN_STATUS_OK) {
		return ret;
	}
	
	if (interface->TXFQS & CANARD_MCAN_TXFQS_TFQF) {
		return CANARD_MCAN_STATUS_BUFFER_FULL;	
	};
	
	uint32_t put_index = (interface->TXFQS & CANARD_MCAN_TXFQS_TFQPI_Msk) >> CANARD_MCAN_TXFQS_TFQPI_Pos; // FIXME: put_index has to be calculated from TXBRP to assure correct sequencing for uavcan.
	volatile CANARD_MCAN_MESSAGE_RAM* interface_message_ram = message_ram(interface);
	
	interface_message_ram->tx_buffers[put_index].T0 = (extended_id ? CANARD_MCAN_MESSAGE_TX_BUFFER_T0_XTD | CANARD_MCAN_MESSAGE_TX_BUFFER_T0_ID_EXTENDED(frame->id) : CANARD_MCAN_MESSAGE_TX_BUFFER_T0_ID_BASE(frame->id));
	interface_message_ram->tx_buffers[put_index].T1 = (can_fd ? (CANARD_MCAN_MESSAGE_TX_BUFFER_T1_FDF | CANARD_MCAN_MESSAGE_TX_BUFFER_T1_BRS) : 0) | CANARD_MCAN_MESSAGE_TX_BUFFER_T1_DLC(dlc);
	
	for (int i=0; i <= frame->data_len; i++) {
		interface_message_ram->tx_buffers[put_index].data[i] = frame->data[i];
	}
	
	interface->TXBAR = (1<<put_index);
	
	return CANARD_MCAN_STATUS_OK;
}

int16_t canardMcanReceive(volatile CanardMcan* interface, CanardCANFrame* const frame) {
	bool can_fd = false;
	int16_t ret_val = canardMcanReceiveAs(interface, frame, &can_fd);
	
	if (ret_val != 0) {
		return ret_val;
	} else if (can_fd) {
		return CANARD_MCAN_STATUS_UNEXPECTED_FD_FRAME;
	} else {
		return ret_val;
	}
}

int16_t canardMcanReceiveAs(volatile CanardMcan* interface, CanardCANFrame* frame, bool* can_fd ) {
	// This function assumes that only RX fifo 0 is in use.
	if (((interface->RXF0S & CANARD_MCAN_RXF0S_F0FL_Msk) >> CANARD_MCAN_RXF0S_F0FL_Pos) == 0) { // If Rx fifo empty
		return CANARD_MCAN_STATUS_BUFFER_EMPTY;
	}
	
	uint32_t get_index = ((interface->RXF0S & CANARD_MCAN_RXF0S_F0GI_Msk) >> CANARD_MCAN_RXF0S_F0GI_Pos);
	volatile CANARD_MCAN_MESSAGE_RAM* interface_message_ram = message_ram(interface);
	
	*can_fd = (interface_message_ram->rx_fifo0[get_index].R1 & CANARD_MCAN_MESSAGE_RX_BUFFER_R1_FDF_Msk) >> CANARD_MCAN_MESSAGE_RX_BUFFER_R1_FDF_Pos;
	bool extended_id = (interface_message_ram->rx_fifo0[get_index].R0 & CANARD_MCAN_MESSAGE_RX_BUFFER_R0_XTD_Msk) >> CANARD_MCAN_MESSAGE_RX_BUFFER_R0_XTD_Pos;
	
	if (extended_id) {
		frame->id = (interface_message_ram->rx_fifo0[get_index].R0 & CANARD_MCAN_MESSAGE_RX_BUFFER_R0_ID_EXTENDED_Msk) >> CANARD_MCAN_MESSAGE_RX_BUFFER_R0_ID_EXTENDED_Pos;
	} else {
		frame->id = (interface_message_ram->rx_fifo0[get_index].R0 & CANARD_MCAN_MESSAGE_RX_BUFFER_R0_ID_BASE_Msk) >> CANARD_MCAN_MESSAGE_RX_BUFFER_R0_ID_BASE_Pos;
	}
	uint8_t dlc = (interface_message_ram->rx_fifo0[get_index].R1 & CANARD_MCAN_MESSAGE_RX_BUFFER_R1_DLC_Msk) >> CANARD_MCAN_MESSAGE_RX_BUFFER_R1_DLC_Pos;
	
	data_len_from_dlc(dlc, &(frame->data_len));
	if (extended_id) {
		frame->id |= CANARD_CAN_FRAME_EFF;
	}
	
	for (int i=0; i < frame->data_len; i++) {
		frame->data[i] = interface_message_ram->rx_fifo0[get_index].data[i];
	}
	
	interface->RXF0A = get_index;
	
	return CANARD_MCAN_STATUS_OK;
}

void canardMcanReadInterruptStatus(volatile CanardMcan* interface, struct CanardMcanInterrupts* interrupts) {
	uint32_t ir = interface->IR;

	interrupts->receive_fifo_0_new_message = (ir | CANARD_MCAN_IR_RF0N) != 0;
	interrupts->receive_fifo_0_watermark_reached = (ir | CANARD_MCAN_IR_RF0W) != 0;
	interrupts->receive_fifo_0_full = (ir | CANARD_MCAN_IR_RF0F) != 0;
	interrupts->receive_fifo_0_message_lost = (ir | CANARD_MCAN_IR_RF0L) != 0;
}

void canardMcanClearInterruptStatus(volatile CanardMcan* interface, const struct CanardMcanInterrupts* interrupts) {
	interface->IR = 
		(interrupts->receive_fifo_0_new_message ? CANARD_MCAN_IR_RF0N : 0) |
		(interrupts->receive_fifo_0_watermark_reached ? CANARD_MCAN_IR_RF0W : 0) |
		(interrupts->receive_fifo_0_full ? CANARD_MCAN_IR_RF0F : 0) |
		(interrupts->receive_fifo_0_message_lost ? CANARD_MCAN_IR_RF0L : 0);
}

int16_t canardMcanFilterSetExtendedMask(volatile CanardMcan* interface, uint8_t index, uint32_t filter, uint32_t mask) {
	if (index > CANARD_MCAN_EXTENDED_FILTER_BUFFER_SIZE) {
		return CANARD_MCAN_INVALID_FILTER_INDEX;
	}

	message_ram(interface)->extended_filters[index].F0 = CANARD_MCAN_MESSAGE_XF_BUFFER_F0_EFEC(1)
	                                                   | CANARD_MCAN_MESSAGE_XF_BUFFER_F0_EFID1(filter);

	message_ram(interface)->extended_filters[index].F1 = CANARD_MCAN_MESSAGE_XF_BUFFER_F1_EFT(2)
	                                                   | CANARD_MCAN_MESSAGE_XF_BUFFER_F1_EFID2(mask);
    
    return CANARD_MCAN_STATUS_OK;
}

int16_t canardMcanFilterSetStandardMask(volatile CanardMcan* interface, uint8_t index, uint16_t filter, uint16_t mask) {
	if (index > CANARD_MCAN_STANDARD_FILTER_BUFFER_SIZE) {
		return CANARD_MCAN_INVALID_FILTER_INDEX;
	}

	message_ram(interface)->standard_filters[index].S0 = CANARD_MCAN_MESSAGE_SF_BUFFER_S0_SFEC(1)
	                                                   | CANARD_MCAN_MESSAGE_SF_BUFFER_S0_SFID1(filter)
	                                                   | CANARD_MCAN_MESSAGE_SF_BUFFER_S0_SFT(2)
	                                                   | CANARD_MCAN_MESSAGE_SF_BUFFER_S0_SFID2(mask);
                                                       
    return CANARD_MCAN_STATUS_OK;
}

int16_t canardMcanFilterDisableExtended(volatile CanardMcan* interface, uint8_t index) {
	if (index > CANARD_MCAN_EXTENDED_FILTER_BUFFER_SIZE) {
		return CANARD_MCAN_INVALID_FILTER_INDEX;
	}

	message_ram(interface)->extended_filters[index].F0 = CANARD_MCAN_MESSAGE_XF_BUFFER_F0_EFEC(0);
    
    return CANARD_MCAN_STATUS_OK;
}

int16_t canardMcanFilterDisableStandard(volatile CanardMcan* interface, uint8_t index) {
	if (index > CANARD_MCAN_STANDARD_FILTER_BUFFER_SIZE) {
		return CANARD_MCAN_INVALID_FILTER_INDEX;
	}

	message_ram(interface)->standard_filters[index].S0 = CANARD_MCAN_MESSAGE_SF_BUFFER_S0_SFEC(0);
    
    return CANARD_MCAN_STATUS_OK;
}


/* Private (helper) functions */

enum CanardMcanStatusCode dlc_from_data_len(uint8_t data_len, uint8_t* dlc) {
	switch(data_len) {
	case 64:
		*dlc = 0xf;
		break;
	case 48:
		*dlc = 0xe;
		break;
	case 32:
		*dlc = 0xd;
		break;
	case 24:
		*dlc = 0xc;
		break;
	case 20:
		*dlc = 0xb;
		break;
	case 16:
		*dlc = 0xa;
		break;
	case 12:
		*dlc = 0x9;
		break;
	case 8:
		*dlc = 0x8;
		break;
	case 7:
		*dlc = 0x7;
		break;
	case 6:
		*dlc = 0x6;
		break;
	case 5:
		*dlc = 0x5;
		break;
	case 4:
		*dlc = 0x4;
		break;
	case 3:
		*dlc = 0x3;
		break;
	case 2:
		*dlc = 0x2;
		break;
	case 1:
		*dlc = 0x1;
		break;
	case 0:
		*dlc = 0x0;
		break;
	default:
		return CANARD_MCAN_STATUS_UNSUPPORTED_DATA_LENGTH;
	}
	
	return CANARD_MCAN_STATUS_OK;
}

enum CanardMcanStatusCode data_len_from_dlc(uint8_t dlc, uint8_t* data_len) {
	switch(dlc) {
	case 0xf:
		*data_len = 64;		
		break;
	case 0xe:
		*data_len = 48;
		break;
	case 0xd:
		*data_len = 32;
		break;
	case 0xc:
		*data_len = 24;
		break;
	case 0xb:
		*data_len = 20;
		break;
	case 0xa:
		*data_len = 16;
		break;
	case 0x9:
		*data_len = 12;
		break;
	case 0x8:
		*data_len = 8;
		break;
	case 0x7:
		*data_len = 7;
		break;
	case 0x6:
		*data_len = 6;
		break;
	case 0x5:
		*data_len = 5;
		break;
	case 0x4:
		*data_len = 4;
		break;
	case 0x3:
		*data_len = 3;
		break;
	case 0x2:
		*data_len = 2;
		break;
	case 0x1:
		*data_len = 1;
		break;
	case 0x0:
		*data_len = 0;
		break;
	default:
		return CANARD_MCAN_STATUS_UNSUPPORTED_DATA_LENGTH;
	}
		
	return CANARD_MCAN_STATUS_OK;
}

volatile CANARD_MCAN_MESSAGE_RAM* message_ram(const volatile CanardMcan* const interface) {
	if (interface == CANARD_MCAN_CAN0) {
		return &mcan0_message_ram;
	} else if (interface == CANARD_MCAN_CAN1) {
		return &mcan1_message_ram;
	} else {
		return NULL;
	}
}

void canardMcanInitializeMessageRam(volatile CanardMcan* interface) {
	/* Configure size of rx and tx buffers (including Rx-FIFO) */
	interface->RXESC = CANARD_MCAN_RXESC_F0DS(7) | CANARD_MCAN_RXESC_F1DS(7) | CANARD_MCAN_RXESC_RBDS(7);
	interface->TXESC = CANARD_MCAN_TXESC_TBDS(7);
	
	volatile CANARD_MCAN_MESSAGE_RAM* interface_message_ram = message_ram(interface);
	
	/* Configure system IO bus matrix */
	if (interface == CANARD_MCAN_CAN0) {
		(*((volatile uint32_t*)0x40088110)) = ((uint32_t)interface_message_ram & 0xffff0000);
	} else if (interface == CANARD_MCAN_CAN1) {
		(*((volatile uint32_t*)0x40088114)) = ((uint32_t)interface_message_ram & 0xffff0000);
	}

	
	/* No standard ID filters, Rx-fifo1, Rx-buffers or Tx-Fifo, only Rx-FIFO0 and Tx-Buffer are used for this application */
	/* Configure extended ID filter buffer */
	interface->XIDFC = ((uint32_t) interface_message_ram->extended_filters & CANARD_MCAN_XIDFC_FLESA_Msk) | CANARD_MCAN_XIDFC_LSE(CANARD_MCAN_EXTENDED_FILTER_BUFFER_SIZE);

	/* Configure standard ID filter buffer */
	interface->SIDFC = ((uint32_t) interface_message_ram->standard_filters & CANARD_MCAN_SIDFC_FLSSA_Msk) | CANARD_MCAN_SIDFC_LSS(CANARD_MCAN_STANDARD_FILTER_BUFFER_SIZE);
	
	/* Configure Fifo 0 */
	interface->RXF0C = ((uint32_t) interface_message_ram->rx_fifo0 & CANARD_MCAN_RXF0C_F0SA_Msk) | CANARD_MCAN_RXF0C_F0S(CANARD_MCAN_RX_FIFO_SIZE);
		
	/* Configure Tx-buffers */
	interface->TXBC = ((uint32_t) interface_message_ram->tx_buffers & CANARD_MCAN_TXBC_TBSA_Msk) | CANARD_MCAN_TXBC_TFQS(CANARD_MCAN_TX_BUFFER_SIZE) | CANARD_MCAN_TXBC_TFQM;
}

void canardMcanInitializeTiming(
	volatile CanardMcan* interface, 
	struct CanardMcanTimingConfiguration const timing, 
	struct CanardMcanDataTimingConfiguration const data_timing,
	struct CanardMcanTransmitterDelayCompensationConfiguration const transmitter_delay_compensation
) {
	interface->NBTP = (CANARD_MCAN_NBTP_NTSEG2(timing.seg2) | CANARD_MCAN_NBTP_NTSEG1(timing.seg1) | CANARD_MCAN_NBTP_NBRP(timing.brp) | CANARD_MCAN_NBTP_NSJW(timing.sjw) );
	interface->DBTP = (CANARD_MCAN_DBTP_DSJW(data_timing.sjw) | CANARD_MCAN_DBTP_DTSEG2(data_timing.seg2) | CANARD_MCAN_DBTP_DTSEG1(data_timing.seg1) | CANARD_MCAN_DBTP_DBRP(data_timing.brp) | CANARD_MCAN_DBTP_TDC );
	interface->TDCR = (CANARD_MCAN_TDCR_TDCO(transmitter_delay_compensation.tdco) | CANARD_MCAN_TDCR_TDCF(transmitter_delay_compensation.tdcf));
}

void canardMcanInitializeInterrupts(volatile CanardMcan* interface, struct CanardMcanInterruptConfiguration const interrupts) {
	interface->ILE = 
		(interrupts.enable_interrupt_line0 ? CANARD_MCAN_ILE_EINT0 : 0) | 
		(interrupts.enable_interrupt_line1 ? CANARD_MCAN_ILE_EINT1 : 0);

	interface->ILS = 
		(interrupts.interrupt_line_select.receive_fifo_0_new_message ? CANARD_MCAN_ILS_RF0NL : 0) |
		(interrupts.interrupt_line_select.receive_fifo_0_watermark_reached ? CANARD_MCAN_ILS_RF0WL : 0) |
		(interrupts.interrupt_line_select.receive_fifo_0_full ? CANARD_MCAN_ILS_RF0FL : 0) |
		(interrupts.interrupt_line_select.receive_fifo_0_message_lost ? CANARD_MCAN_ILS_RF0LL : 0);

	interface->IE = 
		(interrupts.interrupt_enable.receive_fifo_0_new_message ? CANARD_MCAN_IE_RF0NE : 0) |
		(interrupts.interrupt_enable.receive_fifo_0_watermark_reached ? CANARD_MCAN_IE_RF0WE : 0) |
		(interrupts.interrupt_enable.receive_fifo_0_full ? CANARD_MCAN_IE_RF0FE : 0) |
		(interrupts.interrupt_enable.receive_fifo_0_message_lost ? CANARD_MCAN_IE_RF0LE : 0);

}
