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
volatile CANARD_MCAN_MESSAGE_RAM* message_ram(const CanardMcan* const interface);
void canardMcanInitializeMessageRam(volatile CanardMcan* const interface);
void canardMcanInitializeTiming(volatile CanardMcan* interface, struct CanardMcanTimingConfiguration const timing);

/* API functions */

int16_t canardMcanInit(volatile CanardMcan* interface, struct CanardMcanConfiguration const config) {
	
	/* Start configuration. */
	interface->CCCR |= MCAN_CCCR_INIT;
	interface->CCCR |= MCAN_CCCR_CCE;
	
	// TODO: Insert initialize interrupts from config.interrupt
	canardMcanInitializeTiming(interface, config.timing);
	canardMcanInitializeMessageRam(interface);
	
	/* Finish configuration */
	interface->CCCR &= ~MCAN_CCCR_INIT;
	
	/* Wait for can-bus sync */ 
	while (interface->CCCR & MCAN_CCCR_INIT);
	
	return 0;
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
	
	uint8_t dlc;
	if (frame->data_len <= 8) {
		dlc = frame->data_len;
	#if CANARD_MCAN_FD_SUPPORT
	} else if (can_fd) {
		switch(frame->data_len) {
		case 64:
			dlc == 0xf;
			break;
		case 48:
			dlc == 0xe;
			break;
		case 32:
			dlc == 0xd;
			break;
		case 24:
			dlc == 0xc;
			break;
		case 20:
			dlc == 0xb;
			break;
		case: 16;
			dlc == 0xa;
			break;
		case 12:
			dlc == 0x9;
			break;
		default:
			return CANARD_MCAN_STATUS_UNSUPPORTED_DATA_LENGTH;			
	#endif
	} else {
		return CANARD_MCAN_STATUS_UNSUPPORTED_DATA_LENGTH;
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
	
	interface->TXBAR |= MCAN_TXBAR_AR((1<<put_index));
	
	return 0;
}


/* Private (helper) functions */

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
	interface->RXESC = MCAN_RXESC_F0DS_8_BYTE | MCAN_RXESC_F1DS_8_BYTE | MCAN_RXESC_RBDS_8_BYTE;
	#elif CANARD_MCAN_FRAME_DATA_LENGTH == 64
	interface->RXESC = MCAN_RXESC_F0DS_64_BYTE | MCAN_RXESC_F1DS_64_BYTE | MCAN_RXESC_RBDS_64_BYTE;
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
	interface->RXF0C = ((uint32_t) interface_message_ram->rx_fifo0 & MCAN_RXF1C_F1SA_Msk) | MCAN_RXF1C_F1S(CANARD_MCAN_RX_FIFO_SIZE);
		
	/* Configure Tx-buffers */
	interface->TXBC = ((uint32_t) interface_message_ram->tx_buffers & MCAN_TXBC_TBSA_Msk) | MCAN_TXBC_TFQS(CANARD_MCAN_TX_BUFFER_SIZE) | MCAN_TXBC_TFQM;
}

void canardMcanInitializeTiming(volatile CanardMcan* interface, struct CanardMcanTimingConfiguration const timing) {
	interface->BTP = (MCAN_BTP_TSEG2(timing.seg2) | MCAN_BTP_TSEG1(timing.seg1) | MCAN_BTP_BRP(timing.brp) | MCAN_BTP_SJW(timing.sjw) ); //mcan set baudrate
}
