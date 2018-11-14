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
volatile CANARD_MCAN_MESSAGE_RAM* message_ram(const CanardMcan* const interface);
void canardMcanInitializeMessageRam(volatile CanardMcan* const interface);
void canardMcanInitializeTiming(volatile CanardMcan* interface, struct CanardMcanTimingConfiguration const timing);
void canardMcanInitializeInterrupts(volatile CanardMcan* interface, struct CanardMcanInterruptConfiguration const interrupts);

/* API functions */

int16_t canardMcanInit(volatile CanardMcan* interface, struct CanardMcanConfiguration const config) {
	
	/* Start configuration. */
	interface->CCCR |= MCAN_CCCR_INIT;
	interface->CCCR |= MCAN_CCCR_CCE;
	
	canardMcanInitializeTiming(interface, config.timing);
	canardMcanInitializeMessageRam(interface);
	canardMcanInitializeInterrupts(interface, config.interrupts);

	/* Finish configuration */
	interface->CCCR &= ~MCAN_CCCR_INIT;
	
	/* Wait for can-bus sync */ 
	while (interface->CCCR & MCAN_CCCR_INIT);
	
	return CANARD_MCAN_STATUS_OK;
}

int16_t canardMcanTransmit(volatile CanardMcan* interface, const CanardCANFrame* const frame) {
	return canardMcanTransmitAs(interface, frame, false, true);	
}

int16_t canardMcanTransmitAs(volatile CanardMcan* interface, const CanardCANFrame* const frame, const bool can_fd, const bool extended_id) {
	#if !CANARD_MCAN_FD_SUPPORT
	if (can_fd) {
		return CANARD_MCAN_STATUS_NO_FD_SUPPORT;
	}
	#endif
	
	uint8_t dlc = 0;
	uint16_t ret = dlc_from_data_len(frame->data_len, &dlc);
	if (ret != CANARD_MCAN_STATUS_OK) {
		return ret;
	}
	
	if (interface->TXFQS & MCAN_TXFQS_TFQF) {
		return CANARD_MCAN_STATUS_BUFFER_FULL;	
	};
	
	uint32_t put_index = (interface->TXFQS & MCAN_TXFQS_TFQPI_Msk) >> MCAN_TXFQS_TFQPI_Pos; // FIXME: put_index has to be calculated from TXBRP to assure correct sequencing for uavcan.
	volatile CANARD_MCAN_MESSAGE_RAM* interface_message_ram = message_ram(interface);
	
	interface_message_ram->tx_buffers[put_index].T0 = (extended_id ? MCAN_MESSAGE_TX_BUFFER_T0_XTD : 0) | MCAN_MESSAGE_TX_BUFFER_T0_ID(frame->id);
	interface_message_ram->tx_buffers[put_index].T1 = (can_fd ? (MCAN_MESSAGE_TX_BUFFER_T1_FDF | MCAN_MESSAGE_TX_BUFFER_T1_BRS) : 0) | MCAN_MESSAGE_TX_BUFFER_T1_DLC(dlc);
	
	for (int i=0; i <= frame->data_len; i++) {
		interface_message_ram->tx_buffers[put_index].data[i] = frame->data[i];
	}
	
	interface->TXBAR = (1<<put_index);
	
	return CANARD_MCAN_STATUS_OK;
}

int16_t canardMcanReceive(volatile CanardMcan* interface, CanardCANFrame* const frame) {
	bool can_fd = false;
	bool extended_id = true;
	int16_t ret_val = canardMcanReceiveAs(interface, frame, &can_fd, &extended_id);
	
	if (ret_val != 0) {
		return ret_val;
	} else if (can_fd && !extended_id) {
		return CANARD_MCAN_STATUS_UNEXPECTED_BASE_ID_FD_FRAME;
	} else if (can_fd) {
		return CANARD_MCAN_STATUS_UNEXPECTED_EXTENDED_ID_FD_FRAME;
	} else if (!extended_id) {
		return CANARD_MCAN_STATUS_UNEXPECTED_BASE_ID_2_FRAME;
	} else {
		return ret_val;
	}
}

int16_t canardMcanReceiveAs(volatile CanardMcan* interface, CanardCANFrame* frame, bool* can_fd, bool* extended_id ) {
	// This function assumes that only RX fifo 0 is in use.
	
	if (((interface->RXF0S & MCAN_RXF0S_F0FL_Msk) >> MCAN_RXF0S_F0FL_Pos) == 0) { // If Rx fifo empty
		return CANARD_MCAN_STATUS_BUFFER_EMPTY;
	}
	
	uint32_t get_index = ((interface->RXF0S & MCAN_RXF0S_F0GI_Msk) >> MCAN_RXF0S_F0GI_Pos);
	volatile CANARD_MCAN_MESSAGE_RAM* interface_message_ram = message_ram(interface);
	
	*can_fd = (interface_message_ram->rx_fifo0[get_index].R1 & MCAN_MESSAGE_RX_BUFFER_R1_FDF_Msk) >> MCAN_MESSAGE_RX_BUFFER_R1_FDF_Pos;
	*extended_id = (interface_message_ram->rx_fifo0[get_index].R0 & MCAN_MESSAGE_RX_BUFFER_R0_XTD_Msk) >> MCAN_MESSAGE_RX_BUFFER_R0_XTD_Pos;
	
	frame->id = (interface_message_ram->rx_fifo0[get_index].R0 & MCAN_MESSAGE_RX_BUFFER_R0_ID_Msk) >> MCAN_MESSAGE_RX_BUFFER_R0_ID_Pos;
	uint8_t dlc = (interface_message_ram->rx_fifo0[get_index].R1 & MCAN_MESSAGE_RX_BUFFER_R1_DLC_Msk) >> MCAN_MESSAGE_RX_BUFFER_R1_DLC_Pos;
	
	data_len_from_dlc(dlc, &(frame->data_len));
	
	for (int i=0; i < frame->data_len; i++) {
		frame->data[i] = interface_message_ram->rx_fifo0[get_index].data[i];
	}
	
	interface->RXF0A = get_index;
	
	return CANARD_MCAN_STATUS_OK;
}

void canardMcanReadInterruptStatus(volatile CanardMcan* interface, struct CanardMcanInterrupts* interrupts) {
	uint32_t ir = interface->IR;

	interrupts->receive_fifo_0_new_message = (ir | MCAN_IR_RF0N) != 0;
	interrupts->receive_fifo_0_watermark_reached = (ir | MCAN_IR_RF0W) != 0;
	interrupts->receive_fifo_0_full = (ir | MCAN_IR_RF0F) != 0;
	interrupts->receive_fifo_0_message_lost = (ir | MCAN_IR_RF0L) != 0;
}

void canardMcanClearInterruptStatus(volatile CanardMcan* interface, const struct CanardMcanInterrupts* interrupts) {
	interface->IR = 
		(interrupts->receive_fifo_0_new_message ? MCAN_IR_RF0N : 0) |
		(interrupts->receive_fifo_0_watermark_reached ? MCAN_IR_RF0W : 0) |
		(interrupts->receive_fifo_0_full ? MCAN_IR_RF0F : 0) |
		(interrupts->receive_fifo_0_message_lost ? MCAN_IR_RF0L : 0);
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

volatile CANARD_MCAN_MESSAGE_RAM* message_ram(const CanardMcan* const interface) {
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
	#if CANARD_MCAN_FRAME_DATA_LENGTH == 8
	interface->RXESC = MCAN_RXESC_F0DS(000) | MCAN_RXESC_F1DS(000) | MCAN_RXESC_RBDS(000);
	#elif CANARD_MCAN_FRAME_DATA_LENGTH == 64
	interface->RXESC = MCAN_RXESC_F0DS(111) | MCAN_RXESC_F1DS(111) | MCAN_RXESC_RBDS(111);
	#else
	#error "Unsupported frame data length"
	#endif
	
	CANARD_MCAN_MESSAGE_RAM* interface_message_ram = message_ram(interface);
	
	/* Configure system IO bus matrix */
	if (interface == CANARD_MCAN_CAN0) {
		(*((volatile uint32_t*)0x40088110)) = ((uint32_t)interface_message_ram & 0xffff0000);
	} else if (interface == CANARD_MCAN_CAN1) {
		(*((volatile uint32_t*)0x40088114)) = ((uint32_t)interface_message_ram & 0xffff0000);
	}

	
	/* No standard ID filters, Rx-fifo1, Rx-buffers or Tx-Fifo, only Rx-FIFO0 and Tx-Buffer are used for this application */
	/* Configure extended ID filter buffer */
	interface->XIDFC = ((uint32_t) interface_message_ram->extended_filters & MCAN_XIDFC_FLESA_Msk) | MCAN_XIDFC_LSE(CANARD_MCAN_EXTENDED_FILTER_BUFFER_SIZE);
	
	/* Configure Fifo 0 */
	interface->RXF0C = ((uint32_t) interface_message_ram->rx_fifo0 & MCAN_RXF0C_F0SA_Msk) | MCAN_RXF0C_F0S(CANARD_MCAN_RX_FIFO_SIZE);
		
	/* Configure Tx-buffers */
	interface->TXBC = ((uint32_t) interface_message_ram->tx_buffers & MCAN_TXBC_TBSA_Msk) | MCAN_TXBC_TFQS(CANARD_MCAN_TX_BUFFER_SIZE) | MCAN_TXBC_TFQM;
}

void canardMcanInitializeTiming(volatile CanardMcan* interface, struct CanardMcanTimingConfiguration const timing) {
	interface->NBTP = (MCAN_NBTP_NTSEG2(timing.seg2) | MCAN_NBTP_NTSEG1(timing.seg1) | MCAN_NBTP_NBRP(timing.brp) | MCAN_NBTP_NSJW(timing.sjw) ); //mcan set baudrate
}

void canardMcanInitializeInterrupts(volatile CanardMcan* interface, struct CanardMcanInterruptConfiguration const interrupts) {
	interface->ILE = 
		(interrupts.enable_interrupt_line0 ? MCAN_ILE_EINT0 : 0) | 
		(interrupts.enable_interrupt_line1 ? MCAN_ILE_EINT1 : 0);

	interface->ILS = 
		(interrupts.interrupt_line_select.receive_fifo_0_new_message ? MCAN_ILS_RF0NL : 0) |
		(interrupts.interrupt_line_select.receive_fifo_0_watermark_reached ? MCAN_ILS_RF0WL : 0) |
		(interrupts.interrupt_line_select.receive_fifo_0_full ? MCAN_ILS_RF0FL : 0) |
		(interrupts.interrupt_line_select.receive_fifo_0_message_lost ? MCAN_ILS_RF0LL : 0);

	interface->IE = 
		(interrupts.interrupt_enable.receive_fifo_0_new_message ? MCAN_IE_RF0NE : 0) |
		(interrupts.interrupt_enable.receive_fifo_0_watermark_reached ? MCAN_IE_RF0WE : 0) |
		(interrupts.interrupt_enable.receive_fifo_0_full ? MCAN_IE_RF0FE : 0) |
		(interrupts.interrupt_enable.receive_fifo_0_message_lost ? MCAN_IE_RF0LE : 0);

}
