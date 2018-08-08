#ifndef CANARD_MCAN_H_
#define CANARD_MCAN_H_

#ifdef __cplusplus
extern "C"
{
#endif

// CANx instances
#define CANARD_MCAN_CAN0       ((volatile CanardMcan*)0x40030000)
#define CANARD_MCAN_CAN1       ((volatile CanardMcan*)0x40034000)

typedef struct {
	volatile uint32_t	CREL;			///< 0x00 - (MCAN) Core Release Register
	volatile uint32_t	ENDN;			///< 0x04 - (MCAN) Endian Register
	volatile uint32_t	CUST;			///< 0x08 - (MCAN) Customer Register
	volatile uint32_t	FBTP;			///< 0x0C - (MCAN) Fast Bit Timing and Prescaler Register
	volatile uint32_t	TEST;			///< 0x10 - (MCAN) Test Register
	volatile uint32_t	RWD;			///< 0x14 - (MCAN) RAM Watchdog Register
	volatile uint32_t	CCCR;			///< 0x18 - (MCAN) CC Control Register
	volatile uint32_t	BTP;			///< 0x1C - (MCAN) Bit Timing and Prescaler Register
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





#ifdef __cplusplus
}
#endif
#endif /* CANARD_MCAN_H_ */