#include <stdbool.h>

#include "canard.h"

#ifndef CANARD_MCAN_H_
#define CANARD_MCAN_H_

#ifdef __cplusplus
extern "C"
{
#endif

/* Configurable parameters parameters */

/* 
 * Transmit buffer size in number of elements.
 * Each buffer element uses 16 or 72 bytes of static memory depending on whether CAN-FD frames are supported
 */
#ifndef CANARD_MCAN_TX_BUFFER_SIZE
	#define CANARD_MCAN_TX_BUFFER_SIZE 32
#endif

/* 
 * Receive FIFO 0 size in number of elements.
 * Each FIFO element uses 16 or 72 bytes of static memory depending on whether CAN-FD frames are supported
 */
#ifndef CANARD_MCAN_RX_FIFO_SIZE
	#define CANARD_MCAN_RX_FIFO_SIZE 64
#endif

/* 
 * Number of Extended-ID filters
 * Each filter uses 8 bytes of static memory
 */
#ifndef CANARD_MCAN_EXTENDED_FILTER_BUFFER_SIZE
	#define CANARD_MCAN_EXTENDED_FILTER_BUFFER_SIZE 64
#endif

/* 
 * Setting to `false` saves space by allocating 8 data bytes instead of 64 data bytes in buffers.
 * The total buffer element size will then become 16 bytes instead of 72 bytes.
 */
#ifndef CANARD_MCAN_FD_SUPPORT
	#define CANARD_MCAN_FD_SUPPORT false
#endif

/* CANx instances */
#define CANARD_MCAN_CAN0       ((volatile CanardMcan*)0x40030000)
#define CANARD_MCAN_CAN1       ((volatile CanardMcan*)0x40034000)


/* API types */
enum CanardMcanStatusCode {
	CANARD_MCAN_STATUS_OK = 0,
	CANARD_MCAN_STATUS_BUFFER_FULL = -1,
	CANARD_MCAN_STATUS_UNSUPPORTED_DATA_LENGTH = -2,

	/* CAN-FD support is not compiled in. Set `CANARD_MCAN_FD_SUPPORT` to `true` fix this */
	CANARD_MCAN_STATUS_NO_FD_SUPPORT = -3,
	
	/* Found a CAN2.0A (Base-ID) frame when something else was expected */
	CANARD_MCAN_STATUS_UNEXPECTED_BASE_ID_2_FRAME = -4,

	/* Found a CAN2.0B (Extended-ID) frame when something else was expected */
	CANARD_MCAN_STATUS_UNEXPECTED_EXTENDED_ID_2_FRAME = -5,
	
	/* Found a CAN-FD Base-ID frame when something else was expected */
	CANARD_MCAN_STATUS_UNEXPECTED_BASE_ID_FD_FRAME = -6,
	
	/* Found a CAN-FD Extended-ID frame when something else was expected */
	CANARD_MCAN_STATUS_UNEXPECTED_EXTENDED_ID_FD_FRAME = -7,
};

struct CanardMcanTimingConfiguration {
	uint32_t seg2:7;
	uint32_t :1;
	uint32_t seg1:8;
	uint32_t brp:9;
	uint32_t sjw:7;
};

struct CanardMcanConfiguration {
	struct CanardMcanTimingConfiguration timing;	
};
 
typedef struct {
	volatile uint32_t	CREL;			///< 0x00 - (MCAN) Core Release Register
	volatile uint32_t	ENDN;			///< 0x04 - (MCAN) Endian Register
	volatile uint32_t	CUST;			///< 0x08 - (MCAN) Customer Register
	volatile uint32_t	DBTP;			///< 0x0C - (MCAN) Data Bit Timing and Prescaler Register
	volatile uint32_t	TEST;			///< 0x10 - (MCAN) Test Register
	volatile uint32_t	RWD;			///< 0x14 - (MCAN) RAM Watchdog Register
	volatile uint32_t	CCCR;			///< 0x18 - (MCAN) CC Control Register
	volatile uint32_t	NBTP;			///< 0x1C - (MCAN) Nominial Bit Timing and Prescaler Register
	volatile uint32_t	TSCC;			///< 0x20 - (MCAN) Timestamp Counter Configuration Register
	volatile uint32_t	TSCV;			///< 0x24 - (MCAN) Timestamp Counter Value Register
	volatile uint32_t	TOCC;			///< 0x28 - (MCAN) Timeout Counter Configuration Register
	volatile uint32_t	TOCV;			///< 0x2C - (MCAN) Timeout Counter Value Register
	const uint32_t		_reserved0[4];	///< 0x30-0x3F
	volatile uint32_t	ECR;			///< 0x40 - (MCAN) Error Counter Register
	volatile uint32_t	PSR;			///< 0x44 - (MCAN) Protocol Status Register
	volatile uint32_t	TDCR;			///< 0x48 - (MCAN) Transmitter Delay Compensation Register
	const uint32_t		_reserved1[1];	///< 0x4C-0x4F
	volatile uint32_t	IR;				///< 0x50 - (MCAN) Interrupt Register
	volatile uint32_t	IE;				///< 0x54 - (MCAN) Interrupt Enable Register
	volatile uint32_t	ILS;			///< 0x58 - (MCAN) Interrupt Line Select Register
	volatile uint32_t	ILE;			///< 0x5C - (MCAN) Interrupt Line Enable Register
	const uint32_t		_reserved2[8];	///< 0x60-0x7F
	volatile uint32_t	GFC;			///< 0x80 - (MCAN) Global Filter Configuration Register
	volatile uint32_t	SIDFC;			///< 0x84 - (MCAN) Standard ID Filter Configuration Register
	volatile uint32_t	XIDFC;			///< 0x88 - (MCAN) Extended ID Filter Configuration Register
	const uint32_t		_reserved3[1];	///< 0x8C-0x8F
	volatile uint32_t	XIDAM;			///< 0x90 - (MCAN) Extended ID AND Mask Register
	volatile uint32_t	HPMS;			///< 0x94 - (MCAN) High Priority Message Status Register
	volatile uint32_t	NDAT1;			///< 0x98 - (MCAN) New Data 1 Register
	volatile uint32_t	NDAT2;			///< 0x9C - (MCAN) New Data 2 Register
	volatile uint32_t	RXF0C;			///< 0xA0 - (MCAN) Receive FIFO 0 Configuration Register
	volatile uint32_t	RXF0S;			///< 0xA4 - (MCAN) Receive FIFO 0 Status Register
	volatile uint32_t	RXF0A;			///< 0xA8 - (MCAN) Receive FIFO 0 Acknowledge Register
	volatile uint32_t	RXBC;			///< 0xAC - (MCAN) Receive Rx Buffer Configuration Register
	volatile uint32_t	RXF1C;			///< 0xB0 - (MCAN) Receive FIFO 1 Configuration Register
	volatile uint32_t	RXF1S;			///< 0xB4 - (MCAN) Receive FIFO 1 Status Register
	volatile uint32_t	RXF1A;			///< 0xB8 - (MCAN) Receive FIFO 1 Acknowledge Register
	volatile uint32_t	RXESC;			///< 0xBC - (MCAN) Receive Buffer / FIFO Element Size Configuration Register
	volatile uint32_t	TXBC;			///< 0xC0 - (MCAN) Transmit Buffer Configuration Register
	volatile uint32_t	TXFQS;			///< 0xC4 - (MCAN) Transmit FIFO/Queue Status Register
	volatile uint32_t	TXESC;			///< 0xC8 - (MCAN) Transmit Buffer Element Size Configuration Register
	volatile uint32_t	TXBRP;			///< 0xCC - (MCAN) Transmit Buffer Request Pending Register
	volatile uint32_t	TXBAR;			///< 0xD0 - (MCAN) Transmit Buffer Add Request Register
	volatile uint32_t	TXBCR;			///< 0xD4 - (MCAN) Transmit Buffer Cancellation Request Register
	volatile uint32_t	TXBTO;			///< 0xD8 - (MCAN) Transmit Buffer Transmission Occurred Register
	volatile uint32_t	TXBCF;			///< 0xDC - (MCAN) Transmit Buffer Cancellation Finished Register
	volatile uint32_t	TXBTIE;			///< 0xE0 - (MCAN) Transmit Buffer Transmission Interrupt Enable Register
	volatile uint32_t	TXBCIE;			///< 0xE4 - (MCAN) Transmit Buffer Cancellation Finished Interrupt Enable Register
	const uint32_t		_reserved4[2];	///< 0xE8-0xEF
	volatile uint32_t	TXEFC;			///< 0xF0 - (MCAN) Transmit Event FIFO Configuration Register
	volatile uint32_t	TXEFS;			///< 0xF4 - (MCAN) Transmit Event FIFO Status Register
	volatile uint32_t	TXEFA;			///< 0xF8 - (MCAN) Transmit Event FIFO Acknowledge Register
} CanardMcan;


/* API functions */

/* Initialize the can controller to set configurations */
int16_t canardMcanInit(volatile CanardMcan* interface, struct CanardMcanConfiguration const config);

/* Transmit a CanardCANFrame as a CAN2.0B frame */ 
int16_t canardMcanTransmit(volatile CanardMcan* interface, const CanardCANFrame* const frame);

/* A more general transmit function that allows transmitting FD frames or frames with base ID (!extended_id).
 *
 * If `can_fd` is set, frame.data_len must be less than or equal 64 and be a supported `data_len` (1..8, 12, 16, 20, 24, 32, 48 or 64).
 */ 
int16_t canardMcanTransmitAs(volatile CanardMcan* interface, const CanardCANFrame* const frame, const bool can_fd, const bool extended_id);



/* Parameters not setable from the application code */
#define CANARD_MCAN_TX_BUFFER_SIZE_MAX 32
#define CANARD_MCAN_RX_FIFO_SIZE_MAX 64
#define CANARD_MCAN_EXTENDED_FILTER_BUFFER_SIZE_MAX 64


/* Parameters calculated from configurable parameters */
#if CANARD_MCAN_FD_SUPPORT
#define CANARD_MCAN_FRAME_DATA_LENGTH 64
#else
#define CANARD_MCAN_FRAME_DATA_LENGTH 8
#endif


/* Checks */
/* Checks on application defined parameters */
CANARD_STATIC_ASSERT(CANARD_MCAN_RX_FIFO_SIZE <= CANARD_MCAN_RX_FIFO_SIZE_MAX, "The defined RX FIFO size is not supported");
CANARD_STATIC_ASSERT(CANARD_MCAN_TX_BUFFER_SIZE <= CANARD_MCAN_TX_BUFFER_SIZE_MAX, "The defined TX buffer size is not supported");
CANARD_STATIC_ASSERT(CANARD_MCAN_EXTENDED_FILTER_BUFFER_SIZE <= CANARD_MCAN_EXTENDED_FILTER_BUFFER_SIZE_MAX, "The defined extended filter buffer size is not supported");


#ifdef __cplusplus
}
#endif
#endif /* CANARD_MCAN_H_ */