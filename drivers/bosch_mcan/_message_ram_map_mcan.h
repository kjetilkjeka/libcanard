#include "canard_mcan.h"
#include "canard.h"

#ifndef _REG_MAP_MCAN_MESSAGE_RAM1_H_
#define _REG_MAP_MCAN_MESSAGE_RAM1_H_

typedef struct {
	volatile uint32_t R0;
	volatile uint32_t R1;
	volatile uint8_t data[CANARD_MCAN_FRAME_DATA_LENGTH];
} CANARD_MCAN_MESSAGE_RX_BUFFER_ELEMENT;

#define CANARD_MCAN_MESSAGE_RX_BUFFER_R0_ID_EXTENDED_Pos (0)
#define CANARD_MCAN_MESSAGE_RX_BUFFER_R0_ID_EXTENDED_Msk (0x1fffffffU << CANARD_MCAN_MESSAGE_RX_BUFFER_R0_ID_EXTENDED_Pos)
#define CANARD_MCAN_MESSAGE_RX_BUFFER_R0_ID_EXTENDED(value) ((value << CANARD_MCAN_MESSAGE_RX_BUFFER_R0_ID_EXTENDED_Pos) & CANARD_MCAN_MESSAGE_RX_BUFFER_R0_ID_EXTENDED_Msk)

#define CANARD_MCAN_MESSAGE_RX_BUFFER_R0_ID_BASE_Pos (19)
#define CANARD_MCAN_MESSAGE_RX_BUFFER_R0_ID_BASE_Msk (0x7ffU << CANARD_MCAN_MESSAGE_RX_BUFFER_R0_ID_BASE_Pos)
#define CANARD_MCAN_MESSAGE_RX_BUFFER_R0_ID_BASE(value) ((value << CANARD_MCAN_MESSAGE_RX_BUFFER_R0_ID_BASE_Pos) & CANARD_MCAN_MESSAGE_RX_BUFFER_R0_ID_BASE_Msk)

#define CANARD_MCAN_MESSAGE_RX_BUFFER_R0_RTR_Pos (29)
#define CANARD_MCAN_MESSAGE_RX_BUFFER_R0_RTR_Msk (0x1U << CANARD_MCAN_MESSAGE_RX_BUFFER_R0_RTR_Pos)
#define CANARD_MCAN_MESSAGE_RX_BUFFER_R0_RTR (1 << CANARD_MCAN_MESSAGE_RX_BUFFER_R0_RTR_Pos)

#define CANARD_MCAN_MESSAGE_RX_BUFFER_R0_XTD_Pos (30)
#define CANARD_MCAN_MESSAGE_RX_BUFFER_R0_XTD_Msk (0x1U << CANARD_MCAN_MESSAGE_RX_BUFFER_R0_XTD_Pos)
#define CANARD_MCAN_MESSAGE_RX_BUFFER_R0_XTD (1 << CANARD_MCAN_MESSAGE_RX_BUFFER_R0_XTD_Pos)

#define CANARD_MCAN_MESSAGE_RX_BUFFER_R0_ESI_Pos (31)
#define CANARD_MCAN_MESSAGE_RX_BUFFER_R0_ESI_Msk (0x1U << CANARD_MCAN_MESSAGE_RX_BUFFER_R0_ESI_Pos)
#define CANARD_MCAN_MESSAGE_RX_BUFFER_R0_ESI (1 << CANARD_MCAN_MESSAGE_RX_BUFFER_R0_ESI_Pos)

#define CANARD_MCAN_MESSAGE_RX_BUFFER_R1_RXTS_Pos (0)
#define CANARD_MCAN_MESSAGE_RX_BUFFER_R1_RXTS_Msk (0xffffU << CANARD_MCAN_MESSAGE_RX_BUFFER_R1_RXTS_Pos)
#define CANARD_MCAN_MESSAGE_RX_BUFFER_R1_RXTS(value) ((value << CANARD_MCAN_MESSAGE_RX_BUFFER_R1_RXTS_Pos) & CANARD_MCAN_MESSAGE_RX_BUFFER_R1_RXTS_Msk)

#define CANARD_MCAN_MESSAGE_RX_BUFFER_R1_DLC_Pos (16)
#define CANARD_MCAN_MESSAGE_RX_BUFFER_R1_DLC_Msk (0xfU << CANARD_MCAN_MESSAGE_RX_BUFFER_R1_DLC_Pos)
#define CANARD_MCAN_MESSAGE_RX_BUFFER_R1_DLC(value) ((value << CANARD_MCAN_MESSAGE_RX_BUFFER_R1_DLC_Pos) & CANARD_MCAN_MESSAGE_RX_BUFFER_R1_DLC_Msk)

#define CANARD_MCAN_MESSAGE_RX_BUFFER_R1_BRS_Pos (20)
#define CANARD_MCAN_MESSAGE_RX_BUFFER_R1_BRS_Msk (0x1U << CANARD_MCAN_MESSAGE_RX_BUFFER_R1_BRS_Pos)
#define CANARD_MCAN_MESSAGE_RX_BUFFER_R1_BRS (1 << CANARD_MCAN_MESSAGE_RX_BUFFER_R1_BRS_Pos)

#define CANARD_MCAN_MESSAGE_RX_BUFFER_R1_FDF_Pos (21)
#define CANARD_MCAN_MESSAGE_RX_BUFFER_R1_FDF_Msk (0x1U << CANARD_MCAN_MESSAGE_RX_BUFFER_R1_FDF_Pos)
#define CANARD_MCAN_MESSAGE_RX_BUFFER_R1_FDF (1 << CANARD_MCAN_MESSAGE_RX_BUFFER_R1_FDF_Pos)

#define CANARD_MCAN_MESSAGE_RX_BUFFER_R1_FIDX_Pos (24)
#define CANARD_MCAN_MESSAGE_RX_BUFFER_R1_FIDX_Msk (0x7fU << CANARD_MCAN_MESSAGE_RX_BUFFER_R1_FIDX_Pos)
#define CANARD_MCAN_MESSAGE_RX_BUFFER_R1_FIDX(value) ((value << CANARD_MCAN_MESSAGE_RX_BUFFER_R1_FIDX_Pos) & CANARD_MCAN_MESSAGE_RX_BUFFER_R1_FIDX_Msk)

#define CANARD_MCAN_MESSAGE_RX_BUFFER_R1_ANMF_Pos (31)
#define CANARD_MCAN_MESSAGE_RX_BUFFER_R1_ANMF_Msk (0x1U << CANARD_MCAN_MESSAGE_RX_BUFFER_R1_ANMF_Pos)
#define CANARD_MCAN_MESSAGE_RX_BUFFER_R1_ANMF (1 << CANARD_MCAN_MESSAGE_RX_BUFFER_R1_ANMF_Pos)


typedef struct {
	volatile uint32_t T0;
	volatile uint32_t T1;
	volatile uint8_t data[CANARD_MCAN_FRAME_DATA_LENGTH];
} CANARD_MCAN_MESSAGE_TX_BUFFER_ELEMENT;

#define CANARD_MCAN_MESSAGE_TX_BUFFER_T0_ID_EXTENDED_Pos (0)
#define CANARD_MCAN_MESSAGE_TX_BUFFER_T0_ID_EXTENDED_Msk (0x1fffffffU << CANARD_MCAN_MESSAGE_TX_BUFFER_T0_ID_EXTENDED_Pos)
#define CANARD_MCAN_MESSAGE_TX_BUFFER_T0_ID_EXTENDED(value) ((value << CANARD_MCAN_MESSAGE_TX_BUFFER_T0_ID_EXTENDED_Pos) & CANARD_MCAN_MESSAGE_TX_BUFFER_T0_ID_EXTENDED_Msk)

#define CANARD_MCAN_MESSAGE_TX_BUFFER_T0_ID_BASE_Pos (18)
#define CANARD_MCAN_MESSAGE_TX_BUFFER_T0_ID_BASE_Msk (0x7ffU << CANARD_MCAN_MESSAGE_TX_BUFFER_T0_ID_BASE_Pos)
#define CANARD_MCAN_MESSAGE_TX_BUFFER_T0_ID_BASE(value) ((value << CANARD_MCAN_MESSAGE_TX_BUFFER_T0_ID_BASE_Pos) & CANARD_MCAN_MESSAGE_TX_BUFFER_T0_ID_BASE_Msk)

#define CANARD_MCAN_MESSAGE_TX_BUFFER_T0_RTR_Pos (29)
#define CANARD_MCAN_MESSAGE_TX_BUFFER_T0_RTR_Msk (0x1U << CANARD_MCAN_MESSAGE_TX_BUFFER_T0_RTR_Pos)
#define CANARD_MCAN_MESSAGE_TX_BUFFER_T0_RTR (1 << CANARD_MCAN_MESSAGE_TX_BUFFER_T0_RTR_Pos)

#define CANARD_MCAN_MESSAGE_TX_BUFFER_T0_XTD_Pos (30)
#define CANARD_MCAN_MESSAGE_TX_BUFFER_T0_XTD_Msk (0x1U << CANARD_MCAN_MESSAGE_TX_BUFFER_T0_XTD_Pos)
#define CANARD_MCAN_MESSAGE_TX_BUFFER_T0_XTD (1 << CANARD_MCAN_MESSAGE_TX_BUFFER_T0_XTD_Pos)

#define CANARD_MCAN_MESSAGE_TX_BUFFER_T0_ESI_Pos (31)
#define CANARD_MCAN_MESSAGE_TX_BUFFER_T0_ESI_Msk (0x1U << CANARD_MCAN_MESSAGE_TX_BUFFER_T0_ESI_Pos)
#define CANARD_MCAN_MESSAGE_TX_BUFFER_T0_ESI (1 << CANARD_MCAN_MESSAGE_TX_BUFFER_T0_ESI_Pos)

#define CANARD_MCAN_MESSAGE_TX_BUFFER_T1_DLC_Pos (16)
#define CANARD_MCAN_MESSAGE_TX_BUFFER_T1_DLC_Msk (0xFU << CANARD_MCAN_MESSAGE_TX_BUFFER_T1_DLC_Pos)
#define CANARD_MCAN_MESSAGE_TX_BUFFER_T1_DLC(value) ((value << CANARD_MCAN_MESSAGE_TX_BUFFER_T1_DLC_Pos) & CANARD_MCAN_MESSAGE_TX_BUFFER_T1_DLC_Msk)

#define CANARD_MCAN_MESSAGE_TX_BUFFER_T1_BRS_Pos (20)
#define CANARD_MCAN_MESSAGE_TX_BUFFER_T1_BRS_Msk (0x1U << CANARD_MCAN_MESSAGE_TX_BUFFER_T1_BRS_Pos)
#define CANARD_MCAN_MESSAGE_TX_BUFFER_T1_BRS (1 << CANARD_MCAN_MESSAGE_TX_BUFFER_T1_BRS_Pos)

#define CANARD_MCAN_MESSAGE_TX_BUFFER_T1_FDF_Pos (21)
#define CANARD_MCAN_MESSAGE_TX_BUFFER_T1_FDF_Msk (0x1U << CANARD_MCAN_MESSAGE_TX_BUFFER_T1_FDF_Pos)
#define CANARD_MCAN_MESSAGE_TX_BUFFER_T1_FDF (1 << CANARD_MCAN_MESSAGE_TX_BUFFER_T1_FDF_Pos)

#define CANARD_MCAN_MESSAGE_TX_BUFFER_T1_EFC_Pos (23)
#define CANARD_MCAN_MESSAGE_TX_BUFFER_T1_EFC_Msk (0x1U << CANARD_MCAN_MESSAGE_TX_BUFFER_T1_EFC_Pos)
#define CANARD_MCAN_MESSAGE_TX_BUFFER_T1_EFC (1 << CANARD_MCAN_MESSAGE_TX_BUFFER_T1_EFC_Pos)

#define CANARD_MCAN_MESSAGE_TX_BUFFER_T1_MM_Pos (24)
#define CANARD_MCAN_MESSAGE_TX_BUFFER_T1_MM_Msk (0xFFU << CANARD_MCAN_MESSAGE_TX_BUFFER_T1_MM_Pos)
#define CANARD_MCAN_MESSAGE_TX_BUFFER_T1_MM(value) ((value << CANARD_MCAN_MESSAGE_TX_BUFFER_T1_MM_Pos) & CANARD_MCAN_MESSAGE_TX_BUFFER_T1_MM_Msk)


typedef struct {
	volatile uint32_t F0;
	volatile uint32_t F1;
} CANARD_MCAN_MESSAGE_EXTENDED_ID_FILTER_ELEMENT;


typedef struct {
	volatile CANARD_MCAN_MESSAGE_EXTENDED_ID_FILTER_ELEMENT extended_filters[CANARD_MCAN_EXTENDED_FILTER_BUFFER_SIZE];
	volatile CANARD_MCAN_MESSAGE_RX_BUFFER_ELEMENT rx_fifo0[CANARD_MCAN_RX_FIFO_SIZE];
	volatile CANARD_MCAN_MESSAGE_TX_BUFFER_ELEMENT tx_buffers[CANARD_MCAN_TX_BUFFER_SIZE];
} CANARD_MCAN_MESSAGE_RAM;



#endif /* _REG_MAP_MCAN_MESSAGE_RAM1_H_ */