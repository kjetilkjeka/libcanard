/* Register definitions can be added when needed from: http://www.bosch-semiconductors.com/media/ip_modules/pdf_2/m_can/mcan_users_manual_v3212.pdf 
 *
 * Map created for version 3.2.12
 */


#ifndef _REG_MAP_MCAN_H_
#define _REG_MAP_MCAN_H_



#define _U_(x) x ## U    /**< C code: Unsigned integer literal constant value */
#define _L_(x) x ## L    /**< C code: Long integer literal constant value */
#define _UL_(x) x ## UL  /**< C code: Unsigned Long integer literal constant value */

/* CANARD_MCAN_CREL - Core Release Register - 0x00 */
#define CANARD_MCAN_CREL_DAY_Pos                   0                                               /* (CANARD_MCAN_CREL) Timestamp Day Position */                                         
#define CANARD_MCAN_CREL_DAY_Msk                   (_U_(0xFF) << CANARD_MCAN_CREL_DAY_Pos)               /* (CANARD_MCAN_CREL) Timestamp Day Mask */
#define CANARD_MCAN_CREL_DAY(value)                (CANARD_MCAN_CREL_DAY_Msk & ((value) << CANARD_MCAN_CREL_DAY_Pos))
#define CANARD_MCAN_CREL_MON_Pos                   8                                              /* (CANARD_MCAN_CREL) Timestamp Month Position */
#define CANARD_MCAN_CREL_MON_Msk                   (_U_(0xFF) << CANARD_MCAN_CREL_MON_Pos)               /* (CANARD_MCAN_CREL) Timestamp Month Mask */
#define CANARD_MCAN_CREL_MON(value)                (CANARD_MCAN_CREL_MON_Msk & ((value) << CANARD_MCAN_CREL_MON_Pos))
#define CANARD_MCAN_CREL_YEAR_Pos                  16                                             /* (CANARD_MCAN_CREL) Timestamp Year Position */
#define CANARD_MCAN_CREL_YEAR_Msk                  (_U_(0xF) << CANARD_MCAN_CREL_YEAR_Pos)               /* (CANARD_MCAN_CREL) Timestamp Year Mask */
#define CANARD_MCAN_CREL_YEAR(value)               (CANARD_MCAN_CREL_YEAR_Msk & ((value) << CANARD_MCAN_CREL_YEAR_Pos))
#define CANARD_MCAN_CREL_SUBSTEP_Pos               20                                             /* (CANARD_MCAN_CREL) Sub-step of Core Release Position */
#define CANARD_MCAN_CREL_SUBSTEP_Msk               (_U_(0xF) << CANARD_MCAN_CREL_SUBSTEP_Pos)            /* (CANARD_MCAN_CREL) Sub-step of Core Release Mask */
#define CANARD_MCAN_CREL_SUBSTEP(value)            (CANARD_MCAN_CREL_SUBSTEP_Msk & ((value) << CANARD_MCAN_CREL_SUBSTEP_Pos))
#define CANARD_MCAN_CREL_STEP_Pos                  24                                             /* (CANARD_MCAN_CREL) Step of Core Release Position */
#define CANARD_MCAN_CREL_STEP_Msk                  (_U_(0xF) << CANARD_MCAN_CREL_STEP_Pos)               /* (CANARD_MCAN_CREL) Step of Core Release Mask */
#define CANARD_MCAN_CREL_STEP(value)               (CANARD_MCAN_CREL_STEP_Msk & ((value) << CANARD_MCAN_CREL_STEP_Pos))
#define CANARD_MCAN_CREL_REL_Pos                   28                                             /* (CANARD_MCAN_CREL) Core Release Position */
#define CANARD_MCAN_CREL_REL_Msk                   (_U_(0xF) << CANARD_MCAN_CREL_REL_Pos)                /* (CANARD_MCAN_CREL) Core Release Mask */
#define CANARD_MCAN_CREL_REL(value)                (CANARD_MCAN_CREL_REL_Msk & ((value) << CANARD_MCAN_CREL_REL_Pos))

/* CANARD_MCAN_DBTP - Data Bit Timing and Prescaler Register - 0x0C */
#define CANARD_MCAN_DBTP_DSJW_Pos                  (0)																/* Data (Re) Synchronization Jump Width Position */
#define CANARD_MCAN_DBTP_DSJW_Msk                  (_U_(0x7) << CANARD_MCAN_DBTP_DSJW_Pos)								/* Data (Re) Synchronization Jump Width Mask */
#define CANARD_MCAN_DBTP_DSJW(value)               (CANARD_MCAN_DBTP_DSJW_Msk & ((value) << CANARD_MCAN_DBTP_DSJW_Pos))          /* Data (Re) Synchronization Jump Width */
#define CANARD_MCAN_DBTP_DTSEG2_Pos                (4)																/* Data Time Segment After Sample Point Position */
#define CANARD_MCAN_DBTP_DTSEG2_Msk                (_U_(0xF) << CANARD_MCAN_DBTP_DTSEG2_Pos)								/* Data Time Segment After Sample Point Mask */
#define CANARD_MCAN_DBTP_DTSEG2(value)             (CANARD_MCAN_DBTP_DTSEG2_Msk & ((value) << CANARD_MCAN_DBTP_DTSEG2_Pos))      /* Data Time Segment After Sample Point */
#define CANARD_MCAN_DBTP_DTSEG1_Pos                (8)																/* Data Time Segment Before Sample Point Position */
#define CANARD_MCAN_DBTP_DTSEG1_Msk                (_U_(0x1F) << CANARD_MCAN_DBTP_DTSEG1_Pos)								/* Data Time Segment Before Sample Point Mask */
#define CANARD_MCAN_DBTP_DTSEG1(value)             (CANARD_MCAN_DBTP_DTSEG1_Msk & ((value) << CANARD_MCAN_DBTP_DTSEG1_Pos))      /* Data Time Segment Before Sample Point */
#define CANARD_MCAN_DBTP_DBRP_Pos                  (16)															/* Fast Baud Rate Prescaler Position */
#define CANARD_MCAN_DBTP_DBRP_Msk                  (_U_(0x1F) << CANARD_MCAN_DBTP_DBRP_Pos)								/* Fast Baud Rate Prescaler Mask */
#define CANARD_MCAN_DBTP_DBRP(value)               (CANARD_MCAN_DBTP_DBRP_Msk & ((value) << CANARD_MCAN_DBTP_DBRP_Pos))          /* Fast Baud Rate Prescaler */
#define CANARD_MCAN_DBTP_TDC_Pos                   (23)															/* Transceiver Delay Compensation Position */
#define CANARD_MCAN_DBTP_TDC_Msk                   (_U_(0x1) << CANARD_MCAN_DBTP_TDC_Pos)									/* Transceiver Delay Compensation Mask */
#define CANARD_MCAN_DBTP_TDC                       CANARD_MCAN_DBTP_TDC_Msk       										/* Transceiver Delay Compensation */

/* CANARD_MCAN_CCCR - CC Control Register - 0x18 */
#define CANARD_MCAN_CCCR_INIT_Pos                  0                                              /* (CANARD_MCAN_CCCR) Initialization Position */
#define CANARD_MCAN_CCCR_INIT_Msk                  (_U_(0x1) << CANARD_MCAN_CCCR_INIT_Pos)               /* (CANARD_MCAN_CCCR) Initialization Mask */
#define CANARD_MCAN_CCCR_INIT                      CANARD_MCAN_CCCR_INIT_Msk                             /* (CANARD_MCAN_CCCR) Initialization */
#define CANARD_MCAN_CCCR_CCE_Pos                   1                                              /* (CANARD_MCAN_CCCR) Configuration Change Enable Position */
#define CANARD_MCAN_CCCR_CCE_Msk                   (_U_(0x1) << CANARD_MCAN_CCCR_CCE_Pos)                /* (CANARD_MCAN_CCCR) Configuration Change Enable Mask */
#define CANARD_MCAN_CCCR_CCE                       CANARD_MCAN_CCCR_CCE_Msk                              /* (CANARD_MCAN_CCCR) Configuration Change Enable */
#define CANARD_MCAN_CCCR_ASM_Pos                   2                                              /* (CANARD_MCAN_CCCR) Restricted Operation Mode Position */
#define CANARD_MCAN_CCCR_ASM_Msk                   (_U_(0x1) << CANARD_MCAN_CCCR_ASM_Pos)                /* (CANARD_MCAN_CCCR) Restricted Operation Mode Mask */
#define CANARD_MCAN_CCCR_ASM                       CANARD_MCAN_CCCR_ASM_Msk                              /* (CANARD_MCAN_CCCR) Restricted Operation Mode */
#define CANARD_MCAN_CCCR_CSA_Pos                   3                                              /* (CANARD_MCAN_CCCR) Clock Stop Acknowledge Position */
#define CANARD_MCAN_CCCR_CSA_Msk                   (_U_(0x1) << CANARD_MCAN_CCCR_CSA_Pos)                /* (CANARD_MCAN_CCCR) Clock Stop Acknowledge Mask */
#define CANARD_MCAN_CCCR_CSA                       CANARD_MCAN_CCCR_CSA_Msk                              /* (CANARD_MCAN_CCCR) Clock Stop Acknowledge */
#define CANARD_MCAN_CCCR_CSR_Pos                   4                                              /* (CANARD_MCAN_CCCR) Clock Stop Request Position */
#define CANARD_MCAN_CCCR_CSR_Msk                   (_U_(0x1) << CANARD_MCAN_CCCR_CSR_Pos)                /* (CANARD_MCAN_CCCR) Clock Stop Request Mask */
#define CANARD_MCAN_CCCR_CSR                       CANARD_MCAN_CCCR_CSR_Msk                              /* (CANARD_MCAN_CCCR) Clock Stop Request */
#define CANARD_MCAN_CCCR_MON_Pos                   5                                              /* (CANARD_MCAN_CCCR) Bus Monitoring Mode Position */
#define CANARD_MCAN_CCCR_MON_Msk                   (_U_(0x1) << CANARD_MCAN_CCCR_MON_Pos)                /* (CANARD_MCAN_CCCR) Bus Monitoring Mode Mask */
#define CANARD_MCAN_CCCR_MON                       CANARD_MCAN_CCCR_MON_Msk                              /* (CANARD_MCAN_CCCR) Bus Monitoring Mode */
#define CANARD_MCAN_CCCR_DAR_Pos                   6                                              /* (CANARD_MCAN_CCCR) Disable Automatic Retransmission Position */
#define CANARD_MCAN_CCCR_DAR_Msk                   (_U_(0x1) << CANARD_MCAN_CCCR_DAR_Pos)                /* (CANARD_MCAN_CCCR) Disable Automatic Retransmission Mask */
#define CANARD_MCAN_CCCR_DAR                       CANARD_MCAN_CCCR_DAR_Msk                              /* (CANARD_MCAN_CCCR) Disable Automatic Retransmission */
#define CANARD_MCAN_CCCR_TEST_Pos                  7                                              /* (CANARD_MCAN_CCCR) Test Mode Enable Position */
#define CANARD_MCAN_CCCR_TEST_Msk                  (_U_(0x1) << CANARD_MCAN_CCCR_TEST_Pos)               /* (CANARD_MCAN_CCCR) Test Mode Enable Mask */
#define CANARD_MCAN_CCCR_TEST                      CANARD_MCAN_CCCR_TEST_Msk                             /* (CANARD_MCAN_CCCR) Test Mode Enable */
#define CANARD_MCAN_CCCR_FDOE_Pos                   8                                              /* (CANARD_MCAN_CCCR) FD Operation Enable Position */
#define CANARD_MCAN_CCCR_FDOE_Msk                   (_U_(0x3) << CANARD_MCAN_CCCR_FDOE_Pos)                /* (CANARD_MCAN_CCCR) FD Operation Enable Mask */
#define CANARD_MCAN_CCCR_FDOE                      (CANARD_MCAN_CCCR_FDOE_Msk)                            /* (CANARD_MCAN_CCCR) FD Operation Enable */
#define CANARD_MCAN_CCCR_BRSE_Pos                   9                                              /* (CANARD_MCAN_CCCR) Bit Rate Switch Enable Position */
#define CANARD_MCAN_CCCR_BRSE_Msk                   (_U_(0x3) << CANARD_MCAN_CCCR_BRSE_Pos)                /* (CANARD_MCAN_CCCR) Bit Rate Switch Enable Mask */
#define CANARD_MCAN_CCCR_BRSE                      (CANARD_MCAN_CCCR_BRSE_Msk)                            /* (CANARD_MCAN_CCCR) Bit Rate Switch Enable */
#define CANARD_MCAN_CCCR_PXHD_Pos                   12                                             /* (CANARD_MCAN_CCCR) Protocol Exception Handling Disable Position */
#define CANARD_MCAN_CCCR_PXHD_Msk                   (_U_(0x1) << CANARD_MCAN_CCCR_FDO_Pos)                /* (CANARD_MCAN_CCCR) Protocol Exception Handling Disable Mask */
#define CANARD_MCAN_CCCR_PXHD                       CANARD_MCAN_CCCR_FDO_Msk                              /* (CANARD_MCAN_CCCR) Protocol Exception Handling Disable */
#define CANARD_MCAN_CCCR_EFBI_Pos                  13                                             /* (CANARD_MCAN_CCCR) Edge Filtering during Bus Integration Position */
#define CANARD_MCAN_CCCR_EFBI_Msk                  (_U_(0x1) << CANARD_MCAN_CCCR_FDBS_Pos)               /* (CANARD_MCAN_CCCR) Edge Filtering during Bus Integration Mask */
#define CANARD_MCAN_CCCR_EFBI                      CANARD_MCAN_CCCR_FDBS_Msk                             /* (CANARD_MCAN_CCCR) Edge Filtering during Bus Integration */
#define CANARD_MCAN_CCCR_TXP_Pos                   14                                             /* (CANARD_MCAN_CCCR) Transmit Pause Position */
#define CANARD_MCAN_CCCR_TXP_Msk                   (_U_(0x1) << CANARD_MCAN_CCCR_TXP_Pos)                /* (CANARD_MCAN_CCCR) Transmit Pause Mask */
#define CANARD_MCAN_CCCR_TXP                       CANARD_MCAN_CCCR_TXP_Msk                              /* (CANARD_MCAN_CCCR) Transmit Pause */
#define CANARD_MCAN_CCCR_NISO_Pos                  15                                             /* (CANARD_MCAN_CCCR) Non-ISO Operation Position */
#define CANARD_MCAN_CCCR_NISO_Msk                  (_U_(0x1) << CANARD_MCAN_CCCR_NISO_Pos)               /* (CANARD_MCAN_CCCR) Non-ISO Operation Mask */
#define CANARD_MCAN_CCCR_NISO                      CANARD_MCAN_CCCR_NISO_Msk                             /* (CANARD_MCAN_CCCR) Non-ISO Operation */

/* CANARD_MCAN_NBTP - Nominal Bit Timing and Prescaler Register - 0x1C */
#define CANARD_MCAN_NBTP_NTSEG2_Pos                  (0)															/* Time Segment After Sample Point Position */
#define CANARD_MCAN_NBTP_NTSEG2_Msk                  (_U_(0x7F) << CANARD_MCAN_NBTP_NTSEG2_Pos)							/* Time Segment After Sample Point Mask */
#define CANARD_MCAN_NBTP_NTSEG2(value)               (CANARD_MCAN_NBTP_NTSEG2_Msk & ((value) << CANARD_MCAN_NBTP_NTSEG2_Pos))    /* Time Segment After Sample Point */
#define CANARD_MCAN_NBTP_NTSEG1_Pos                  (8)															/* Time Segment Before Sample Point Position */
#define CANARD_MCAN_NBTP_NTSEG1_Msk                  (_U_(0xFF) << CANARD_MCAN_NBTP_NTSEG1_Pos)							/* Time Segment Before Sample Point Mask */
#define CANARD_MCAN_NBTP_NTSEG1(value)               (CANARD_MCAN_NBTP_NTSEG1_Msk & ((value) << CANARD_MCAN_NBTP_NTSEG1_Pos))    /* Time Segment Before Sample Point */
#define CANARD_MCAN_NBTP_NBRP_Pos                    (16)															/* Baud Rate Prescaler Position */
#define CANARD_MCAN_NBTP_NBRP_Msk                    (_U_(0x1FF) << CANARD_MCAN_NBTP_NBRP_Pos)							/* Baud Rate Prescaler Mask */
#define CANARD_MCAN_NBTP_NBRP(value)                 (CANARD_MCAN_NBTP_NBRP_Msk & ((value) << CANARD_MCAN_NBTP_NBRP_Pos))        /* Baud Rate Prescaler */
#define CANARD_MCAN_NBTP_NSJW_Pos                    (25)															/* (Re) Synchronization Jump Width Position */
#define CANARD_MCAN_NBTP_NSJW_Msk                    (_U_(0x7F) << CANARD_MCAN_NBTP_NSJW_Pos)								/* (Re) Synchronization Jump Width Mask */
#define CANARD_MCAN_NBTP_NSJW(value)                 (CANARD_MCAN_NBTP_NSJW_Msk & ((value) << CANARD_MCAN_NBTP_NSJW_Pos))        /* (Re) Synchronization Jump Width */

/* CANARD_MCAN_TDCR - Transmitter Delay Compensation Register - 0x48 */
#define CANARD_MCAN_TDCR_TDCF_Pos                  0                                                               /* (CANARD_MCAN_TDCR) Transmitter Delay Compensation Filter Position */
#define CANARD_MCAN_TDCR_TDCF_Msk                  (_U_(0x7F) << CANARD_MCAN_TDCR_TDCF_Pos)                               /* (CANARD_MCAN_TDCR) Transmitter Delay Compensation Filter Mask */
#define CANARD_MCAN_TDCR_TDCF(value)               (CANARD_MCAN_TDCR_TDCF_Msk & ((value) << CANARD_MCAN_TDCR_TDCF_Pos))          /* (CANARD_MCAN_TDCR) Transmitter Delay Compensation Filter */
#define CANARD_MCAN_TDCR_TDCO_Pos                  8                                                               /* (CANARD_MCAN_TDCR) Transmitter Delay Compensation Offset Position */
#define CANARD_MCAN_TDCR_TDCO_Msk                  (_U_(0x7F) << CANARD_MCAN_TDCR_TDCO_Pos)                               /* (CANARD_MCAN_TDCR) Transmitter Delay Compensation Offset Mask */
#define CANARD_MCAN_TDCR_TDCO(value)               (CANARD_MCAN_TDCR_TDCO_Msk & ((value) << CANARD_MCAN_TDCR_TDCO_Pos))          /* (CANARD_MCAN_TDCR) Transmitter Delay Compensation Offset */ 

/* CANARD_MCAN_IR - Interrupt Register - 0x50 */
#define CANARD_MCAN_IR_RF0N_Pos                    0                                              /* (CANARD_MCAN_IR) Receive FIFO 0 New Message Position */
#define CANARD_MCAN_IR_RF0N_Msk                    (_U_(0x1) << CANARD_MCAN_IR_RF0N_Pos)                 /* (CANARD_MCAN_IR) Receive FIFO 0 New Message Mask */
#define CANARD_MCAN_IR_RF0N                        CANARD_MCAN_IR_RF0N_Msk                               /* (CANARD_MCAN_IR) Receive FIFO 0 New Message */
#define CANARD_MCAN_IR_RF0W_Pos                    1                                              /* (CANARD_MCAN_IR) Receive FIFO 0 Watermark Reached Position */
#define CANARD_MCAN_IR_RF0W_Msk                    (_U_(0x1) << CANARD_MCAN_IR_RF0W_Pos)                 /* (CANARD_MCAN_IR) Receive FIFO 0 Watermark Reached Mask */
#define CANARD_MCAN_IR_RF0W                        CANARD_MCAN_IR_RF0W_Msk                               /* (CANARD_MCAN_IR) Receive FIFO 0 Watermark Reached */
#define CANARD_MCAN_IR_RF0F_Pos                    2                                              /* (CANARD_MCAN_IR) Receive FIFO 0 Full Position */
#define CANARD_MCAN_IR_RF0F_Msk                    (_U_(0x1) << CANARD_MCAN_IR_RF0F_Pos)                 /* (CANARD_MCAN_IR) Receive FIFO 0 Full Mask */
#define CANARD_MCAN_IR_RF0F                        CANARD_MCAN_IR_RF0F_Msk                               /* (CANARD_MCAN_IR) Receive FIFO 0 Full */
#define CANARD_MCAN_IR_RF0L_Pos                    3                                              /* (CANARD_MCAN_IR) Receive FIFO 0 Message Lost Position */
#define CANARD_MCAN_IR_RF0L_Msk                    (_U_(0x1) << CANARD_MCAN_IR_RF0L_Pos)                 /* (CANARD_MCAN_IR) Receive FIFO 0 Message Lost Mask */
#define CANARD_MCAN_IR_RF0L                        CANARD_MCAN_IR_RF0L_Msk                               /* (CANARD_MCAN_IR) Receive FIFO 0 Message Lost */
#define CANARD_MCAN_IR_RF1N_Pos                    4                                              /* (CANARD_MCAN_IR) Receive FIFO 1 New Message Position */
#define CANARD_MCAN_IR_RF1N_Msk                    (_U_(0x1) << CANARD_MCAN_IR_RF1N_Pos)                 /* (CANARD_MCAN_IR) Receive FIFO 1 New Message Mask */
#define CANARD_MCAN_IR_RF1N                        CANARD_MCAN_IR_RF1N_Msk                               /* (CANARD_MCAN_IR) Receive FIFO 1 New Message */
#define CANARD_MCAN_IR_RF1W_Pos                    5                                              /* (CANARD_MCAN_IR) Receive FIFO 1 Watermark Reached Position */
#define CANARD_MCAN_IR_RF1W_Msk                    (_U_(0x1) << CANARD_MCAN_IR_RF1W_Pos)                 /* (CANARD_MCAN_IR) Receive FIFO 1 Watermark Reached Mask */
#define CANARD_MCAN_IR_RF1W                        CANARD_MCAN_IR_RF1W_Msk                               /* (CANARD_MCAN_IR) Receive FIFO 1 Watermark Reached */
#define CANARD_MCAN_IR_RF1F_Pos                    6                                              /* (CANARD_MCAN_IR) Receive FIFO 1 Full Position */
#define CANARD_MCAN_IR_RF1F_Msk                    (_U_(0x1) << CANARD_MCAN_IR_RF1F_Pos)                 /* (CANARD_MCAN_IR) Receive FIFO 1 Full Mask */
#define CANARD_MCAN_IR_RF1F                        CANARD_MCAN_IR_RF1F_Msk                               /* (CANARD_MCAN_IR) Receive FIFO 1 Full */
#define CANARD_MCAN_IR_RF1L_Pos                    7                                              /* (CANARD_MCAN_IR) Receive FIFO 1 Message Lost Position */
#define CANARD_MCAN_IR_RF1L_Msk                    (_U_(0x1) << CANARD_MCAN_IR_RF1L_Pos)                 /* (CANARD_MCAN_IR) Receive FIFO 1 Message Lost Mask */
#define CANARD_MCAN_IR_RF1L                        CANARD_MCAN_IR_RF1L_Msk                               /* (CANARD_MCAN_IR) Receive FIFO 1 Message Lost */
#define CANARD_MCAN_IR_HPM_Pos                     8                                              /* (CANARD_MCAN_IR) High Priority Message Position */
#define CANARD_MCAN_IR_HPM_Msk                     (_U_(0x1) << CANARD_MCAN_IR_HPM_Pos)                  /* (CANARD_MCAN_IR) High Priority Message Mask */
#define CANARD_MCAN_IR_HPM                         CANARD_MCAN_IR_HPM_Msk                                /* (CANARD_MCAN_IR) High Priority Message Mask */
#define CANARD_MCAN_IR_TC_Pos                      9                                              /* (CANARD_MCAN_IR) Transmission Completed Position */
#define CANARD_MCAN_IR_TC_Msk                      (_U_(0x1) << CANARD_MCAN_IR_TC_Pos)                   /* (CANARD_MCAN_IR) Transmission Completed Mask */
#define CANARD_MCAN_IR_TC                          CANARD_MCAN_IR_TC_Msk                                 /* (CANARD_MCAN_IR) Transmission Completed */
#define CANARD_MCAN_IR_TCF_Pos                     10                                             /* (CANARD_MCAN_IR) Transmission Cancellation Finished Position */
#define CANARD_MCAN_IR_TCF_Msk                     (_U_(0x1) << CANARD_MCAN_IR_TCF_Pos)                  /* (CANARD_MCAN_IR) Transmission Cancellation Finished Mask */
#define CANARD_MCAN_IR_TCF                         CANARD_MCAN_IR_TCF_Msk                                /* (CANARD_MCAN_IR) Transmission Cancellation Finished */
#define CANARD_MCAN_IR_TFE_Pos                     11                                             /* (CANARD_MCAN_IR) Tx FIFO Empty Position */
#define CANARD_MCAN_IR_TFE_Msk                     (_U_(0x1) << CANARD_MCAN_IR_TFE_Pos)                  /* (CANARD_MCAN_IR) Tx FIFO Empty Mask */
#define CANARD_MCAN_IR_TFE                         CANARD_MCAN_IR_TFE_Msk                                /* (CANARD_MCAN_IR) Tx FIFO Empty */
#define CANARD_MCAN_IR_TEFN_Pos                    12                                             /* (CANARD_MCAN_IR) Tx Event FIFO New Entry Position */
#define CANARD_MCAN_IR_TEFN_Msk                    (_U_(0x1) << CANARD_MCAN_IR_TEFN_Pos)                 /* (CANARD_MCAN_IR) Tx Event FIFO New Entry Mask */
#define CANARD_MCAN_IR_TEFN                        CANARD_MCAN_IR_TEFN_Msk                               /* (CANARD_MCAN_IR) Tx Event FIFO New Entry */
#define CANARD_MCAN_IR_TEFW_Pos                    13                                             /* (CANARD_MCAN_IR) Tx Event FIFO Watermark Reached Position */
#define CANARD_MCAN_IR_TEFW_Msk                    (_U_(0x1) << CANARD_MCAN_IR_TEFW_Pos)                 /* (CANARD_MCAN_IR) Tx Event FIFO Watermark Reached Mask */
#define CANARD_MCAN_IR_TEFW                        CANARD_MCAN_IR_TEFW_Msk                               /* (CANARD_MCAN_IR) Tx Event FIFO Watermark Reached */
#define CANARD_MCAN_IR_TEFF_Pos                    14                                             /* (CANARD_MCAN_IR) Tx Event FIFO Full Position */
#define CANARD_MCAN_IR_TEFF_Msk                    (_U_(0x1) << CANARD_MCAN_IR_TEFF_Pos)                 /* (CANARD_MCAN_IR) Tx Event FIFO Full Mask */
#define CANARD_MCAN_IR_TEFF                        CANARD_MCAN_IR_TEFF_Msk                               /* (CANARD_MCAN_IR) Tx Event FIFO Full */
#define CANARD_MCAN_IR_TEFL_Pos                    15                                             /* (CANARD_MCAN_IR) Tx Event FIFO Element Lost Position */
#define CANARD_MCAN_IR_TEFL_Msk                    (_U_(0x1) << CANARD_MCAN_IR_TEFL_Pos)                 /* (CANARD_MCAN_IR) Tx Event FIFO Element Lost Mask */
#define CANARD_MCAN_IR_TEFL                        CANARD_MCAN_IR_TEFL_Msk                               /* (CANARD_MCAN_IR) Tx Event FIFO Element Lost */
#define CANARD_MCAN_IR_TSW_Pos                     16                                             /* (CANARD_MCAN_IR) Timestamp Wraparound Position */
#define CANARD_MCAN_IR_TSW_Msk                     (_U_(0x1) << CANARD_MCAN_IR_TSW_Pos)                  /* (CANARD_MCAN_IR) Timestamp Wraparound Mask */
#define CANARD_MCAN_IR_TSW                         CANARD_MCAN_IR_TSW_Msk                                /* (CANARD_MCAN_IR) Timestamp Wraparound */
#define CANARD_MCAN_IR_MRAF_Pos                    17                                             /* (CANARD_MCAN_IR) Message RAM Access Failure Position */
#define CANARD_MCAN_IR_MRAF_Msk                    (_U_(0x1) << CANARD_MCAN_IR_MRAF_Pos)                 /* (CANARD_MCAN_IR) Message RAM Access Failure Mask */
#define CANARD_MCAN_IR_MRAF                        CANARD_MCAN_IR_MRAF_Msk                               /* (CANARD_MCAN_IR) Message RAM Access Failure */
#define CANARD_MCAN_IR_TOO_Pos                     18                                             /* (CANARD_MCAN_IR) Timeout Occurred Position */
#define CANARD_MCAN_IR_TOO_Msk                     (_U_(0x1) << CANARD_MCAN_IR_TOO_Pos)                  /* (CANARD_MCAN_IR) Timeout Occurred Mask */
#define CANARD_MCAN_IR_TOO                         CANARD_MCAN_IR_TOO_Msk                                /* (CANARD_MCAN_IR) Timeout Occurred */
#define CANARD_MCAN_IR_DRX_Pos                     19                                             /* (CANARD_MCAN_IR) Message stored to Dedicated Receive Buffer Position */
#define CANARD_MCAN_IR_DRX_Msk                     (_U_(0x1) << CANARD_MCAN_IR_DRX_Pos)                  /* (CANARD_MCAN_IR) Message stored to Dedicated Receive Buffer Mask */
#define CANARD_MCAN_IR_DRX                         CANARD_MCAN_IR_DRX_Msk                                /* (CANARD_MCAN_IR) Message stored to Dedicated Receive Buffer */
#define CANARD_MCAN_IR_BEC_Pos                     20                                             /* (CANARD_MCAN_IR) Bit Error Corrected Position */
#define CANARD_MCAN_IR_BEC_Msk                     (_U_(0x1) << CANARD_MCAN_IR_BEC_Pos)                  /* (CANARD_MCAN_IR) Bit Error Corrected Mask */
#define CANARD_MCAN_IR_BEC                         CANARD_MCAN_IR_BEC_Msk                                /* (CANARD_MCAN_IR) Bit Error Corrected */
#define CANARD_MCAN_IR_BEU_Pos                     21                                             /* (CANARD_MCAN_IR) Bit Error Uncorrected Position */
#define CANARD_MCAN_IR_BEU_Msk                     (_U_(0x1) << CANARD_MCAN_IR_BEU_Pos)                  /* (CANARD_MCAN_IR) Bit Error Uncorrected Mask */
#define CANARD_MCAN_IR_BEU                         CANARD_MCAN_IR_BEU_Msk                                /* (CANARD_MCAN_IR) Bit Error Uncorrected */
#define CANARD_MCAN_IR_ELO_Pos                     22                                             /* (CANARD_MCAN_IR) Error Logging Overflow Position */
#define CANARD_MCAN_IR_ELO_Msk                     (_U_(0x1) << CANARD_MCAN_IR_ELO_Pos)                  /* (CANARD_MCAN_IR) Error Logging Overflow Mask */
#define CANARD_MCAN_IR_ELO                         CANARD_MCAN_IR_ELO_Msk                                /* (CANARD_MCAN_IR) Error Logging Overflow */
#define CANARD_MCAN_IR_EP_Pos                      23                                             /* (CANARD_MCAN_IR) Error Passive Position */
#define CANARD_MCAN_IR_EP_Msk                      (_U_(0x1) << CANARD_MCAN_IR_EP_Pos)                   /* (CANARD_MCAN_IR) Error Passive Mask */
#define CANARD_MCAN_IR_EP                          CANARD_MCAN_IR_EP_Msk                                 /* (CANARD_MCAN_IR) Error Passive */
#define CANARD_MCAN_IR_EW_Pos                      24                                             /* (CANARD_MCAN_IR) Warning Status Position */
#define CANARD_MCAN_IR_EW_Msk                      (_U_(0x1) << CANARD_MCAN_IR_EW_Pos)                   /* (CANARD_MCAN_IR) Warning Status Mask */
#define CANARD_MCAN_IR_EW                          CANARD_MCAN_IR_EW_Msk                                 /* (CANARD_MCAN_IR) Warning Status */
#define CANARD_MCAN_IR_BO_Pos                      25                                             /* (CANARD_MCAN_IR) Bus_Off Status Position */
#define CANARD_MCAN_IR_BO_Msk                      (_U_(0x1) << CANARD_MCAN_IR_BO_Pos)                   /* (CANARD_MCAN_IR) Bus_Off Status Mask */
#define CANARD_MCAN_IR_BO                          CANARD_MCAN_IR_BO_Msk                                 /* (CANARD_MCAN_IR) Bus_Off Status instead */
#define CANARD_MCAN_IR_WDI_Pos                     26                                             /* (CANARD_MCAN_IR) Watchdog Interrupt Position */
#define CANARD_MCAN_IR_WDI_Msk                     (_U_(0x1) << CANARD_MCAN_IR_WDI_Pos)                  /* (CANARD_MCAN_IR) Watchdog Interrupt Mask */
#define CANARD_MCAN_IR_WDI                         CANARD_MCAN_IR_WDI_Msk                                /* (CANARD_MCAN_IR) Watchdog Interrupt */
#define CANARD_MCAN_IR_PEA_Pos                     27                                             /* (CANARD_MCAN_IR) Protocol Error in Arbitration Phase Position */
#define CANARD_MCAN_IR_PEA_Msk                     (_U_(0x1) << CANARD_MCAN_IR_PEA_Pos)                  /* (CANARD_MCAN_IR) Protocol Error in Arbitration Phase Mask */
#define CANARD_MCAN_IR_PEA                         CANARD_MCAN_IR_PEA_Msk                                /* (CANARD_MCAN_IR) Protocol Error in Arbitration Phase */
#define CANARD_MCAN_IR_PED_Pos                     28                                             /* (CANARD_MCAN_IR) Protocol Error in Data Phase Position */
#define CANARD_MCAN_IR_PED_Msk                     (_U_(0x1) << CANARD_MCAN_IR_PED_Pos)                  /* (CANARD_MCAN_IR) Protocol Error in Data Phase Mask */
#define CANARD_MCAN_IR_PED                         CANARD_MCAN_IR_PED_Msk                                /* (CANARD_MCAN_IR) Protocol Error in Data Phase */
#define CANARD_MCAN_IR_ARA_Pos                     29                                             /* (CANARD_MCAN_IR) Access to Reserved Address Position */
#define CANARD_MCAN_IR_ARA_Msk                     (_U_(0x1) << CANARD_MCAN_IR_ARA_Pos)                  /* (CANARD_MCAN_IR) Access to Reserved Address Mask */
#define CANARD_MCAN_IR_ARA                         CANARD_MCAN_IR_ARA_Msk                                /* (CANARD_MCAN_IR) Access to Reserved Address */

/* CANARD_MCAN_IE - Interrupt Enable Register - 0x54 */
#define CANARD_MCAN_IE_RF0NE_Pos                   0                                              /* (CANARD_MCAN_IE) Receive FIFO 0 New Message Interrupt Enable Position */
#define CANARD_MCAN_IE_RF0NE_Msk                   (_U_(0x1) << CANARD_MCAN_IE_RF0NE_Pos)                /* (CANARD_MCAN_IE) Receive FIFO 0 New Message Interrupt Enable Mask */
#define CANARD_MCAN_IE_RF0NE                       CANARD_MCAN_IE_RF0NE_Msk                              /* (CANARD_MCAN_IE) Receive FIFO 0 New Message Interrupt Enable */
#define CANARD_MCAN_IE_RF0WE_Pos                   1                                              /* (CANARD_MCAN_IE) Receive FIFO 0 Watermark Reached Interrupt Enable Position */
#define CANARD_MCAN_IE_RF0WE_Msk                   (_U_(0x1) << CANARD_MCAN_IE_RF0WE_Pos)                /* (CANARD_MCAN_IE) Receive FIFO 0 Watermark Reached Interrupt Enable Mask */
#define CANARD_MCAN_IE_RF0WE                       CANARD_MCAN_IE_RF0WE_Msk                              /* (CANARD_MCAN_IE) Receive FIFO 0 Watermark Reached Interrupt Enable */
#define CANARD_MCAN_IE_RF0FE_Pos                   2                                              /* (CANARD_MCAN_IE) Receive FIFO 0 Full Interrupt Enable Position */
#define CANARD_MCAN_IE_RF0FE_Msk                   (_U_(0x1) << CANARD_MCAN_IE_RF0FE_Pos)                /* (CANARD_MCAN_IE) Receive FIFO 0 Full Interrupt Enable Mask */
#define CANARD_MCAN_IE_RF0FE                       CANARD_MCAN_IE_RF0FE_Msk                              /* (CANARD_MCAN_IE) Receive FIFO 0 Full Interrupt Enable */
#define CANARD_MCAN_IE_RF0LE_Pos                   3                                              /* (CANARD_MCAN_IE) Receive FIFO 0 Message Lost Interrupt Enable Position */
#define CANARD_MCAN_IE_RF0LE_Msk                   (_U_(0x1) << CANARD_MCAN_IE_RF0LE_Pos)                /* (CANARD_MCAN_IE) Receive FIFO 0 Message Lost Interrupt Enable Mask */
#define CANARD_MCAN_IE_RF0LE                       CANARD_MCAN_IE_RF0LE_Msk                              /* (CANARD_MCAN_IE) Receive FIFO 0 Message Lost Interrupt Enable */
#define CANARD_MCAN_IE_RF1NE_Pos                   4                                              /* (CANARD_MCAN_IE) Receive FIFO 1 New Message Interrupt Enable Position */
#define CANARD_MCAN_IE_RF1NE_Msk                   (_U_(0x1) << CANARD_MCAN_IE_RF1NE_Pos)                /* (CANARD_MCAN_IE) Receive FIFO 1 New Message Interrupt Enable Mask */
#define CANARD_MCAN_IE_RF1NE                       CANARD_MCAN_IE_RF1NE_Msk                              /* (CANARD_MCAN_IE) Receive FIFO 1 New Message Interrupt Enable */
#define CANARD_MCAN_IE_RF1WE_Pos                   5                                              /* (CANARD_MCAN_IE) Receive FIFO 1 Watermark Reached Interrupt Enable Position */
#define CANARD_MCAN_IE_RF1WE_Msk                   (_U_(0x1) << CANARD_MCAN_IE_RF1WE_Pos)                /* (CANARD_MCAN_IE) Receive FIFO 1 Watermark Reached Interrupt Enable Mask */
#define CANARD_MCAN_IE_RF1WE                       CANARD_MCAN_IE_RF1WE_Msk                              /* (CANARD_MCAN_IE) Receive FIFO 1 Watermark Reached Interrupt Enable */
#define CANARD_MCAN_IE_RF1FE_Pos                   6                                              /* (CANARD_MCAN_IE) Receive FIFO 1 Full Interrupt Enable Position */
#define CANARD_MCAN_IE_RF1FE_Msk                   (_U_(0x1) << CANARD_MCAN_IE_RF1FE_Pos)                /* (CANARD_MCAN_IE) Receive FIFO 1 Full Interrupt Enable Mask */
#define CANARD_MCAN_IE_RF1FE                       CANARD_MCAN_IE_RF1FE_Msk                              /* (CANARD_MCAN_IE) Receive FIFO 1 Full Interrupt Enable */
#define CANARD_MCAN_IE_RF1LE_Pos                   7                                              /* (CANARD_MCAN_IE) Receive FIFO 1 Message Lost Interrupt Enable Position */
#define CANARD_MCAN_IE_RF1LE_Msk                   (_U_(0x1) << CANARD_MCAN_IE_RF1LE_Pos)                /* (CANARD_MCAN_IE) Receive FIFO 1 Message Lost Interrupt Enable Mask */
#define CANARD_MCAN_IE_RF1LE                       CANARD_MCAN_IE_RF1LE_Msk                              /* (CANARD_MCAN_IE) Receive FIFO 1 Message Lost Interrupt Enable */
#define CANARD_MCAN_IE_HPME_Pos                    8                                              /* (CANARD_MCAN_IE) High Priority Message Interrupt Enable Position */
#define CANARD_MCAN_IE_HPME_Msk                    (_U_(0x1) << CANARD_MCAN_IE_HPME_Pos)                 /* (CANARD_MCAN_IE) High Priority Message Interrupt Enable Mask */
#define CANARD_MCAN_IE_HPME                        CANARD_MCAN_IE_HPME_Msk                               /* (CANARD_MCAN_IE) High Priority Message Interrupt Enable */
#define CANARD_MCAN_IE_TCE_Pos                     9                                              /* (CANARD_MCAN_IE) Transmission Completed Interrupt Enable Position */
#define CANARD_MCAN_IE_TCE_Msk                     (_U_(0x1) << CANARD_MCAN_IE_TCE_Pos)                  /* (CANARD_MCAN_IE) Transmission Completed Interrupt Enable Mask */
#define CANARD_MCAN_IE_TCE                         CANARD_MCAN_IE_TCE_Msk                                /* (CANARD_MCAN_IE) Transmission Completed Interrupt Enable */
#define CANARD_MCAN_IE_TCFE_Pos                    10                                             /* (CANARD_MCAN_IE) Transmission Cancellation Finished Interrupt Enable Position */
#define CANARD_MCAN_IE_TCFE_Msk                    (_U_(0x1) << CANARD_MCAN_IE_TCFE_Pos)                 /* (CANARD_MCAN_IE) Transmission Cancellation Finished Interrupt Enable Mask */
#define CANARD_MCAN_IE_TCFE                        CANARD_MCAN_IE_TCFE_Msk                               /* (CANARD_MCAN_IE) Transmission Cancellation Finished Interrupt Enable */
#define CANARD_MCAN_IE_TFEE_Pos                    11                                             /* (CANARD_MCAN_IE) Tx FIFO Empty Interrupt Enable Position */
#define CANARD_MCAN_IE_TFEE_Msk                    (_U_(0x1) << CANARD_MCAN_IE_TFEE_Pos)                 /* (CANARD_MCAN_IE) Tx FIFO Empty Interrupt Enable Mask */
#define CANARD_MCAN_IE_TFEE                        CANARD_MCAN_IE_TFEE_Msk                               /* (CANARD_MCAN_IE) Tx FIFO Empty Interrupt Enable */
#define CANARD_MCAN_IE_TEFNE_Pos                   12                                             /* (CANARD_MCAN_IE) Tx Event FIFO New Entry Interrupt Enable Position */
#define CANARD_MCAN_IE_TEFNE_Msk                   (_U_(0x1) << CANARD_MCAN_IE_TEFNE_Pos)                /* (CANARD_MCAN_IE) Tx Event FIFO New Entry Interrupt Enable Mask */
#define CANARD_MCAN_IE_TEFNE                       CANARD_MCAN_IE_TEFNE_Msk                              /* (CANARD_MCAN_IE) Tx Event FIFO New Entry Interrupt Enable */
#define CANARD_MCAN_IE_TEFWE_Pos                   13                                             /* (CANARD_MCAN_IE) Tx Event FIFO Watermark Reached Interrupt Enable Position */
#define CANARD_MCAN_IE_TEFWE_Msk                   (_U_(0x1) << CANARD_MCAN_IE_TEFWE_Pos)                /* (CANARD_MCAN_IE) Tx Event FIFO Watermark Reached Interrupt Enable Mask */
#define CANARD_MCAN_IE_TEFWE                       CANARD_MCAN_IE_TEFWE_Msk                              /* (CANARD_MCAN_IE) Tx Event FIFO Watermark Reached Interrupt Enable */
#define CANARD_MCAN_IE_TEFFE_Pos                   14                                             /* (CANARD_MCAN_IE) Tx Event FIFO Full Interrupt Enable Position */
#define CANARD_MCAN_IE_TEFFE_Msk                   (_U_(0x1) << CANARD_MCAN_IE_TEFFE_Pos)                /* (CANARD_MCAN_IE) Tx Event FIFO Full Interrupt Enable Mask */
#define CANARD_MCAN_IE_TEFFE                       CANARD_MCAN_IE_TEFFE_Msk                              /* (CANARD_MCAN_IE) Tx Event FIFO Full Interrupt Enable */
#define CANARD_MCAN_IE_TEFLE_Pos                   15                                             /* (CANARD_MCAN_IE) Tx Event FIFO Event Lost Interrupt Enable Position */
#define CANARD_MCAN_IE_TEFLE_Msk                   (_U_(0x1) << CANARD_MCAN_IE_TEFLE_Pos)                /* (CANARD_MCAN_IE) Tx Event FIFO Event Lost Interrupt Enable Mask */
#define CANARD_MCAN_IE_TEFLE                       CANARD_MCAN_IE_TEFLE_Msk                              /* (CANARD_MCAN_IE) Tx Event FIFO Event Lost Interrupt Enable */
#define CANARD_MCAN_IE_TSWE_Pos                    16                                             /* (CANARD_MCAN_IE) Timestamp Wraparound Interrupt Enable Position */
#define CANARD_MCAN_IE_TSWE_Msk                    (_U_(0x1) << CANARD_MCAN_IE_TSWE_Pos)                 /* (CANARD_MCAN_IE) Timestamp Wraparound Interrupt Enable Mask */
#define CANARD_MCAN_IE_TSWE                        CANARD_MCAN_IE_TSWE_Msk                               /* (CANARD_MCAN_IE) Timestamp Wraparound Interrupt Enable */
#define CANARD_MCAN_IE_MRAFE_Pos                   17                                             /* (CANARD_MCAN_IE) Message RAM Access Failure Interrupt Enable Position */
#define CANARD_MCAN_IE_MRAFE_Msk                   (_U_(0x1) << CANARD_MCAN_IE_MRAFE_Pos)                /* (CANARD_MCAN_IE) Message RAM Access Failure Interrupt Enable Mask */
#define CANARD_MCAN_IE_MRAFE                       CANARD_MCAN_IE_MRAFE_Msk                              /* (CANARD_MCAN_IE) Message RAM Access Failure Interrupt Enable */
#define CANARD_MCAN_IE_TOOE_Pos                    18                                             /* (CANARD_MCAN_IE) Timeout Occurred Interrupt Enable Position */
#define CANARD_MCAN_IE_TOOE_Msk                    (_U_(0x1) << CANARD_MCAN_IE_TOOE_Pos)                 /* (CANARD_MCAN_IE) Timeout Occurred Interrupt Enable Mask */
#define CANARD_MCAN_IE_TOOE                        CANARD_MCAN_IE_TOOE_Msk                               /* (CANARD_MCAN_IE) Timeout Occurred Interrupt Enable */
#define CANARD_MCAN_IE_DRXE_Pos                    19                                             /* (CANARD_MCAN_IE) Message stored to Dedicated Receive Buffer Interrupt Enable Position */
#define CANARD_MCAN_IE_DRXE_Msk                    (_U_(0x1) << CANARD_MCAN_IE_DRXE_Pos)                 /* (CANARD_MCAN_IE) Message stored to Dedicated Receive Buffer Interrupt Enable Mask */
#define CANARD_MCAN_IE_DRXE                        CANARD_MCAN_IE_DRXE_Msk                               /* (CANARD_MCAN_IE) Message stored to Dedicated Receive Buffer Interrupt Enable */
#define CANARD_MCAN_IE_BECE_Pos                    20                                             /* (CANARD_MCAN_IE) Bit Error Corrected Interrupt Enable Position */
#define CANARD_MCAN_IE_BECE_Msk                    (_U_(0x1) << CANARD_MCAN_IE_BECE_Pos)                 /* (CANARD_MCAN_IE) Bit Error Corrected Interrupt Enable Mask */
#define CANARD_MCAN_IE_BECE                        CANARD_MCAN_IE_BECE_Msk                               /* (CANARD_MCAN_IE) Bit Error Corrected Interrupt Enable */
#define CANARD_MCAN_IE_BEUE_Pos                    21                                             /* (CANARD_MCAN_IE) Bit Error Uncorrected Interrupt Enable Position */
#define CANARD_MCAN_IE_BEUE_Msk                    (_U_(0x1) << CANARD_MCAN_IE_BEUE_Pos)                 /* (CANARD_MCAN_IE) Bit Error Uncorrected Interrupt Enable Mask */
#define CANARD_MCAN_IE_BEUE                        CANARD_MCAN_IE_BEUE_Msk                               /* (CANARD_MCAN_IE) Bit Error Uncorrected Interrupt Enable */
#define CANARD_MCAN_IE_ELOE_Pos                    22                                             /* (CANARD_MCAN_IE) Error Logging Overflow Interrupt Enable Position */
#define CANARD_MCAN_IE_ELOE_Msk                    (_U_(0x1) << CANARD_MCAN_IE_ELOE_Pos)                 /* (CANARD_MCAN_IE) Error Logging Overflow Interrupt Enable Mask */
#define CANARD_MCAN_IE_ELOE                        CANARD_MCAN_IE_ELOE_Msk                               /* (CANARD_MCAN_IE) Error Logging Overflow Interrupt Enable */
#define CANARD_MCAN_IE_EPE_Pos                     23                                             /* (CANARD_MCAN_IE) Error Passive Interrupt Enable Position */
#define CANARD_MCAN_IE_EPE_Msk                     (_U_(0x1) << CANARD_MCAN_IE_EPE_Pos)                  /* (CANARD_MCAN_IE) Error Passive Interrupt Enable Mask */
#define CANARD_MCAN_IE_EPE                         CANARD_MCAN_IE_EPE_Msk                                /* (CANARD_MCAN_IE) Error Passive Interrupt Enable */
#define CANARD_MCAN_IE_EWE_Pos                     24                                             /* (CANARD_MCAN_IE) Warning Status Interrupt Enable Position */
#define CANARD_MCAN_IE_EWE_Msk                     (_U_(0x1) << CANARD_MCAN_IE_EWE_Pos)                  /* (CANARD_MCAN_IE) Warning Status Interrupt Enable Mask */
#define CANARD_MCAN_IE_EWE                         CANARD_MCAN_IE_EWE_Msk                                /* (CANARD_MCAN_IE) Warning Status Interrupt Enable */
#define CANARD_MCAN_IE_BOE_Pos                     25                                             /* (CANARD_MCAN_IE) Bus_Off Status Interrupt Enable Position */
#define CANARD_MCAN_IE_BOE_Msk                     (_U_(0x1) << CANARD_MCAN_IE_BOE_Pos)                  /* (CANARD_MCAN_IE) Bus_Off Status Interrupt Enable Mask */
#define CANARD_MCAN_IE_BOE                         CANARD_MCAN_IE_BOE_Msk                                /* (CANARD_MCAN_IE) Bus_Off Status Interrupt Enable */
#define CANARD_MCAN_IE_WDIE_Pos                    26                                             /* (CANARD_MCAN_IE) Watchdog Interrupt Enable Position */
#define CANARD_MCAN_IE_WDIE_Msk                    (_U_(0x1) << CANARD_MCAN_IE_WDIE_Pos)                 /* (CANARD_MCAN_IE) Watchdog Interrupt Enable Mask */
#define CANARD_MCAN_IE_WDIE                        CANARD_MCAN_IE_WDIE_Msk                               /* (CANARD_MCAN_IE) Watchdog Interrupt Enable */
#define CANARD_MCAN_IE_CRCEE_Pos                   27                                             /* (CANARD_MCAN_IE) CRC Error Interrupt Enable Position */
#define CANARD_MCAN_IE_CRCEE_Msk                   (_U_(0x1) << CANARD_MCAN_IE_CRCEE_Pos)                /* (CANARD_MCAN_IE) CRC Error Interrupt Enable Mask */
#define CANARD_MCAN_IE_CRCEE                       CANARD_MCAN_IE_CRCEE_Msk                              /* (CANARD_MCAN_IE) CRC Error Interrupt Enable */
#define CANARD_MCAN_IE_PEDE_Pos                    28                                             /* (CANARD_MCAN_IE) Protocol Error in Data Phase Enable Position */
#define CANARD_MCAN_IE_PEDE_Msk                    (_U_(0x1) << CANARD_MCAN_IE_PEDE_Pos)                 /* (CANARD_MCAN_IE) Protocol Error in Data Phase Enable Mask */
#define CANARD_MCAN_IE_PEDE                        CANARD_MCAN_IE_PEDE_Msk                               /* (CANARD_MCAN_IE) Protocol Error in Data Phase Enable */
#define CANARD_MCAN_IE_ARAE_Pos                    29                                             /* (CANARD_MCAN_IE) Access to Reserved Address Enable Position */
#define CANARD_MCAN_IE_ARAE_Msk                    (_U_(0x1) << CANARD_MCAN_IE_ARAE_Pos)                 /* (CANARD_MCAN_IE) Access to Reserved Address Enable Mask */
#define CANARD_MCAN_IE_ARAE                        CANARD_MCAN_IE_ARAE_Msk                               /* (CANARD_MCAN_IE) Access to Reserved Address Enable */

/* CANARD_MCAN_ILS - Interrupt Line Select Register - 0x58 */
#define CANARD_MCAN_ILS_RF0NL_Pos                  0                                              /* (CANARD_MCAN_ILS) Receive FIFO 0 New Message Interrupt Line Position */
#define CANARD_MCAN_ILS_RF0NL_Msk                  (_U_(0x1) << CANARD_MCAN_ILS_RF0NL_Pos)               /* (CANARD_MCAN_ILS) Receive FIFO 0 New Message Interrupt Line Mask */
#define CANARD_MCAN_ILS_RF0NL                      CANARD_MCAN_ILS_RF0NL_Msk                             /* (CANARD_MCAN_ILS) Receive FIFO 0 New Message Interrupt Line */
#define CANARD_MCAN_ILS_RF0WL_Pos                  1                                              /* (CANARD_MCAN_ILS) Receive FIFO 0 Watermark Reached Interrupt Line Position */
#define CANARD_MCAN_ILS_RF0WL_Msk                  (_U_(0x1) << CANARD_MCAN_ILS_RF0WL_Pos)               /* (CANARD_MCAN_ILS) Receive FIFO 0 Watermark Reached Interrupt Line Mask */
#define CANARD_MCAN_ILS_RF0WL                      CANARD_MCAN_ILS_RF0WL_Msk                             /* (CANARD_MCAN_ILS) Receive FIFO 0 Watermark Reached Interrupt Line */
#define CANARD_MCAN_ILS_RF0FL_Pos                  2                                              /* (CANARD_MCAN_ILS) Receive FIFO 0 Full Interrupt Line Position */
#define CANARD_MCAN_ILS_RF0FL_Msk                  (_U_(0x1) << CANARD_MCAN_ILS_RF0FL_Pos)               /* (CANARD_MCAN_ILS) Receive FIFO 0 Full Interrupt Line Mask */
#define CANARD_MCAN_ILS_RF0FL                      CANARD_MCAN_ILS_RF0FL_Msk                             /* (CANARD_MCAN_ILS) Receive FIFO 0 Full Interrupt Line */
#define CANARD_MCAN_ILS_RF0LL_Pos                  3                                              /* (CANARD_MCAN_ILS) Receive FIFO 0 Message Lost Interrupt Line Position */
#define CANARD_MCAN_ILS_RF0LL_Msk                  (_U_(0x1) << CANARD_MCAN_ILS_RF0LL_Pos)               /* (CANARD_MCAN_ILS) Receive FIFO 0 Message Lost Interrupt Line Mask */
#define CANARD_MCAN_ILS_RF0LL                      CANARD_MCAN_ILS_RF0LL_Msk                             /* (CANARD_MCAN_ILS) Receive FIFO 0 Message Lost Interrupt Line */
#define CANARD_MCAN_ILS_RF1NL_Pos                  4                                              /* (CANARD_MCAN_ILS) Receive FIFO 1 New Message Interrupt Line Position */
#define CANARD_MCAN_ILS_RF1NL_Msk                  (_U_(0x1) << CANARD_MCAN_ILS_RF1NL_Pos)               /* (CANARD_MCAN_ILS) Receive FIFO 1 New Message Interrupt Line Mask */
#define CANARD_MCAN_ILS_RF1NL                      CANARD_MCAN_ILS_RF1NL_Msk                             /* (CANARD_MCAN_ILS) Receive FIFO 1 New Message Interrupt Line */
#define CANARD_MCAN_ILS_RF1WL_Pos                  5                                              /* (CANARD_MCAN_ILS) Receive FIFO 1 Watermark Reached Interrupt Line Position */
#define CANARD_MCAN_ILS_RF1WL_Msk                  (_U_(0x1) << CANARD_MCAN_ILS_RF1WL_Pos)               /* (CANARD_MCAN_ILS) Receive FIFO 1 Watermark Reached Interrupt Line Mask */
#define CANARD_MCAN_ILS_RF1WL                      CANARD_MCAN_ILS_RF1WL_Msk                             /* (CANARD_MCAN_ILS) Receive FIFO 1 Watermark Reached Interrupt Line */
#define CANARD_MCAN_ILS_RF1FL_Pos                  6                                              /* (CANARD_MCAN_ILS) Receive FIFO 1 Full Interrupt Line Position */
#define CANARD_MCAN_ILS_RF1FL_Msk                  (_U_(0x1) << CANARD_MCAN_ILS_RF1FL_Pos)               /* (CANARD_MCAN_ILS) Receive FIFO 1 Full Interrupt Line Mask */
#define CANARD_MCAN_ILS_RF1FL                      CANARD_MCAN_ILS_RF1FL_Msk                             /* (CANARD_MCAN_ILS) Receive FIFO 1 Full Interrupt Line */
#define CANARD_MCAN_ILS_RF1LL_Pos                  7                                              /* (CANARD_MCAN_ILS) Receive FIFO 1 Message Lost Interrupt Line Position */
#define CANARD_MCAN_ILS_RF1LL_Msk                  (_U_(0x1) << CANARD_MCAN_ILS_RF1LL_Pos)               /* (CANARD_MCAN_ILS) Receive FIFO 1 Message Lost Interrupt Line Mask */
#define CANARD_MCAN_ILS_RF1LL                      CANARD_MCAN_ILS_RF1LL_Msk                             /* (CANARD_MCAN_ILS) Receive FIFO 1 Message Lost Interrupt Line */
#define CANARD_MCAN_ILS_HPML_Pos                   8                                              /* (CANARD_MCAN_ILS) High Priority Message Interrupt Line Position */
#define CANARD_MCAN_ILS_HPML_Msk                   (_U_(0x1) << CANARD_MCAN_ILS_HPML_Pos)                /* (CANARD_MCAN_ILS) High Priority Message Interrupt Line Mask */
#define CANARD_MCAN_ILS_HPML                       CANARD_MCAN_ILS_HPML_Msk                              /* (CANARD_MCAN_ILS) High Priority Message Interrupt Line */
#define CANARD_MCAN_ILS_TCL_Pos                    9                                              /* (CANARD_MCAN_ILS) Transmission Completed Interrupt Line Position */
#define CANARD_MCAN_ILS_TCL_Msk                    (_U_(0x1) << CANARD_MCAN_ILS_TCL_Pos)                 /* (CANARD_MCAN_ILS) Transmission Completed Interrupt Line Mask */
#define CANARD_MCAN_ILS_TCL                        CANARD_MCAN_ILS_TCL_Msk                               /* (CANARD_MCAN_ILS) Transmission Completed Interrupt Line */
#define CANARD_MCAN_ILS_TCFL_Pos                   10                                             /* (CANARD_MCAN_ILS) Transmission Cancellation Finished Interrupt Line Position */
#define CANARD_MCAN_ILS_TCFL_Msk                   (_U_(0x1) << CANARD_MCAN_ILS_TCFL_Pos)                /* (CANARD_MCAN_ILS) Transmission Cancellation Finished Interrupt Line Mask */
#define CANARD_MCAN_ILS_TCFL                       CANARD_MCAN_ILS_TCFL_Msk                              /* (CANARD_MCAN_ILS) Transmission Cancellation Finished Interrupt Line */
#define CANARD_MCAN_ILS_TFEL_Pos                   11                                             /* (CANARD_MCAN_ILS) Tx FIFO Empty Interrupt Line Position */
#define CANARD_MCAN_ILS_TFEL_Msk                   (_U_(0x1) << CANARD_MCAN_ILS_TFEL_Pos)                /* (CANARD_MCAN_ILS) Tx FIFO Empty Interrupt Line Mask */
#define CANARD_MCAN_ILS_TFEL                       CANARD_MCAN_ILS_TFEL_Msk                              /* (CANARD_MCAN_ILS) Tx FIFO Empty Interrupt Line */
#define CANARD_MCAN_ILS_TEFNL_Pos                  12                                             /* (CANARD_MCAN_ILS) Tx Event FIFO New Entry Interrupt Line Position */
#define CANARD_MCAN_ILS_TEFNL_Msk                  (_U_(0x1) << CANARD_MCAN_ILS_TEFNL_Pos)               /* (CANARD_MCAN_ILS) Tx Event FIFO New Entry Interrupt Line Mask */
#define CANARD_MCAN_ILS_TEFNL                      CANARD_MCAN_ILS_TEFNL_Msk                             /* (CANARD_MCAN_ILS) Tx Event FIFO New Entry Interrupt Line */
#define CANARD_MCAN_ILS_TEFWL_Pos                  13                                             /* (CANARD_MCAN_ILS) Tx Event FIFO Watermark Reached Interrupt Line Position */
#define CANARD_MCAN_ILS_TEFWL_Msk                  (_U_(0x1) << CANARD_MCAN_ILS_TEFWL_Pos)               /* (CANARD_MCAN_ILS) Tx Event FIFO Watermark Reached Interrupt Line Mask */
#define CANARD_MCAN_ILS_TEFWL                      CANARD_MCAN_ILS_TEFWL_Msk                             /* (CANARD_MCAN_ILS) Tx Event FIFO Watermark Reached Interrupt Line */
#define CANARD_MCAN_ILS_TEFFL_Pos                  14                                             /* (CANARD_MCAN_ILS) Tx Event FIFO Full Interrupt Line Position */
#define CANARD_MCAN_ILS_TEFFL_Msk                  (_U_(0x1) << CANARD_MCAN_ILS_TEFFL_Pos)               /* (CANARD_MCAN_ILS) Tx Event FIFO Full Interrupt Line Mask */
#define CANARD_MCAN_ILS_TEFFL                      CANARD_MCAN_ILS_TEFFL_Msk                             /* (CANARD_MCAN_ILS) Tx Event FIFO Full Interrupt Line */
#define CANARD_MCAN_ILS_TEFLL_Pos                  15                                             /* (CANARD_MCAN_ILS) Tx Event FIFO Event Lost Interrupt Line Position */
#define CANARD_MCAN_ILS_TEFLL_Msk                  (_U_(0x1) << CANARD_MCAN_ILS_TEFLL_Pos)               /* (CANARD_MCAN_ILS) Tx Event FIFO Event Lost Interrupt Line Mask */
#define CANARD_MCAN_ILS_TEFLL                      CANARD_MCAN_ILS_TEFLL_Msk                             /* (CANARD_MCAN_ILS) Tx Event FIFO Event Lost Interrupt Line */
#define CANARD_MCAN_ILS_TSWL_Pos                   16                                             /* (CANARD_MCAN_ILS) Timestamp Wraparound Interrupt Line Position */
#define CANARD_MCAN_ILS_TSWL_Msk                   (_U_(0x1) << CANARD_MCAN_ILS_TSWL_Pos)                /* (CANARD_MCAN_ILS) Timestamp Wraparound Interrupt Line Mask */
#define CANARD_MCAN_ILS_TSWL                       CANARD_MCAN_ILS_TSWL_Msk                              /* (CANARD_MCAN_ILS) Timestamp Wraparound Interrupt Line */
#define CANARD_MCAN_ILS_MRAFL_Pos                  17                                             /* (CANARD_MCAN_ILS) Message RAM Access Failure Interrupt Line Position */
#define CANARD_MCAN_ILS_MRAFL_Msk                  (_U_(0x1) << CANARD_MCAN_ILS_MRAFL_Pos)               /* (CANARD_MCAN_ILS) Message RAM Access Failure Interrupt Line Mask */
#define CANARD_MCAN_ILS_MRAFL                      CANARD_MCAN_ILS_MRAFL_Msk                             /* (CANARD_MCAN_ILS) Message RAM Access Failure Interrupt Line */
#define CANARD_MCAN_ILS_TOOL_Pos                   18                                             /* (CANARD_MCAN_ILS) Timeout Occurred Interrupt Line Position */
#define CANARD_MCAN_ILS_TOOL_Msk                   (_U_(0x1) << CANARD_MCAN_ILS_TOOL_Pos)                /* (CANARD_MCAN_ILS) Timeout Occurred Interrupt Line Mask */
#define CANARD_MCAN_ILS_TOOL                       CANARD_MCAN_ILS_TOOL_Msk                              /* (CANARD_MCAN_ILS) Timeout Occurred Interrupt Line */
#define CANARD_MCAN_ILS_DRXL_Pos                   19                                             /* (CANARD_MCAN_ILS) Message stored to Dedicated Receive Buffer Interrupt Line Position */
#define CANARD_MCAN_ILS_DRXL_Msk                   (_U_(0x1) << CANARD_MCAN_ILS_DRXL_Pos)                /* (CANARD_MCAN_ILS) Message stored to Dedicated Receive Buffer Interrupt Line Mask */
#define CANARD_MCAN_ILS_DRXL                       CANARD_MCAN_ILS_DRXL_Msk                              /* (CANARD_MCAN_ILS) Message stored to Dedicated Receive Buffer Interrupt Line */
#define CANARD_MCAN_ILS_BECL_Pos                   20                                             /* (CANARD_MCAN_ILS) Bit Error Corrected Interrupt Line Position */
#define CANARD_MCAN_ILS_BECL_Msk                   (_U_(0x1) << CANARD_MCAN_ILS_BECL_Pos)                /* (CANARD_MCAN_ILS) Bit Error Corrected Interrupt Line Mask */
#define CANARD_MCAN_ILS_BECL                       CANARD_MCAN_ILS_BECL_Msk                              /* (CANARD_MCAN_ILS) Bit Error Corrected Interrupt Line */
#define CANARD_MCAN_ILS_BEUL_Pos                   21                                             /* (CANARD_MCAN_ILS) Bit Error Uncorrected Interrupt Line Position */
#define CANARD_MCAN_ILS_BEUL_Msk                   (_U_(0x1) << CANARD_MCAN_ILS_BEUL_Pos)                /* (CANARD_MCAN_ILS) Bit Error Uncorrected Interrupt Line Mask */
#define CANARD_MCAN_ILS_BEUL                       CANARD_MCAN_ILS_BEUL_Msk                              /* (CANARD_MCAN_ILS) Bit Error Uncorrected Interrupt Line */
#define CANARD_MCAN_ILS_ELOL_Pos                   22                                             /* (CANARD_MCAN_ILS) Error Logging Overflow Interrupt Line Position */
#define CANARD_MCAN_ILS_ELOL_Msk                   (_U_(0x1) << CANARD_MCAN_ILS_ELOL_Pos)                /* (CANARD_MCAN_ILS) Error Logging Overflow Interrupt Line Mask */
#define CANARD_MCAN_ILS_ELOL                       CANARD_MCAN_ILS_ELOL_Msk                              /* (CANARD_MCAN_ILS) Error Logging Overflow Interrupt Line */
#define CANARD_MCAN_ILS_EPL_Pos                    23                                             /* (CANARD_MCAN_ILS) Error Passive Interrupt Line Position */
#define CANARD_MCAN_ILS_EPL_Msk                    (_U_(0x1) << CANARD_MCAN_ILS_EPL_Pos)                 /* (CANARD_MCAN_ILS) Error Passive Interrupt Line Mask */
#define CANARD_MCAN_ILS_EPL                        CANARD_MCAN_ILS_EPL_Msk                               /* (CANARD_MCAN_ILS) Error Passive Interrupt Line */
#define CANARD_MCAN_ILS_EWL_Pos                    24                                             /* (CANARD_MCAN_ILS) Warning Status Interrupt Line Position */
#define CANARD_MCAN_ILS_EWL_Msk                    (_U_(0x1) << CANARD_MCAN_ILS_EWL_Pos)                 /* (CANARD_MCAN_ILS) Warning Status Interrupt Line Mask */
#define CANARD_MCAN_ILS_EWL                        CANARD_MCAN_ILS_EWL_Msk                               /* (CANARD_MCAN_ILS) Warning Status Interrupt Line */
#define CANARD_MCAN_ILS_BOL_Pos                    25                                             /* (CANARD_MCAN_ILS) Bus_Off Status Interrupt Line Position */
#define CANARD_MCAN_ILS_BOL_Msk                    (_U_(0x1) << CANARD_MCAN_ILS_BOL_Pos)                 /* (CANARD_MCAN_ILS) Bus_Off Status Interrupt Line Mask */
#define CANARD_MCAN_ILS_BOL                        CANARD_MCAN_ILS_BOL_Msk                               /* (CANARD_MCAN_ILS) Bus_Off Status Interrupt Line */
#define CANARD_MCAN_ILS_WDIL_Pos                   26                                             /* (CANARD_MCAN_ILS) Watchdog Interrupt Line Position */
#define CANARD_MCAN_ILS_WDIL_Msk                   (_U_(0x1) << CANARD_MCAN_ILS_WDIL_Pos)                /* (CANARD_MCAN_ILS) Watchdog Interrupt Line Mask */
#define CANARD_MCAN_ILS_WDIL                       CANARD_MCAN_ILS_WDIL_Msk                              /* (CANARD_MCAN_ILS) Watchdog Interrupt Line */
#define CANARD_MCAN_ILS_CRCEL_Pos                  27                                             /* (CANARD_MCAN_ILS) CRC Error Interrupt Line Position */
#define CANARD_MCAN_ILS_CRCEL_Msk                  (_U_(0x1) << CANARD_MCAN_ILS_CRCEL_Pos)               /* (CANARD_MCAN_ILS) CRC Error Interrupt Line Mask */
#define CANARD_MCAN_ILS_CRCEL                      CANARD_MCAN_ILS_CRCEL_Msk                             /* (CANARD_MCAN_ILS) CRC Error Interrupt Line */
#define CANARD_MCAN_ILS_PEDL_Pos                   28                                             /* (CANARD_MCAN_ILS) Protocol Error in Data Phase Line Position */
#define CANARD_MCAN_ILS_PEDL_Msk                   (_U_(0x1) << CANARD_MCAN_ILS_PEDL_Pos)                /* (CANARD_MCAN_ILS) Protocol Error in Data Phase Line Mask */
#define CANARD_MCAN_ILS_PEDL                       CANARD_MCAN_ILS_PEDL_Msk                              /* (CANARD_MCAN_ILS) Protocol Error in Data Phase Line */
#define CANARD_MCAN_ILS_ARAL_Pos                   29                                             /* (CANARD_MCAN_ILS) Access to Reserved Address Line Position */
#define CANARD_MCAN_ILS_ARAL_Msk                   (_U_(0x1) << CANARD_MCAN_ILS_ARAL_Pos)                /* (CANARD_MCAN_ILS) Access to Reserved Address Line Mask */
#define CANARD_MCAN_ILS_ARAL                       CANARD_MCAN_ILS_ARAL_Msk                              /* (CANARD_MCAN_ILS) Access to Reserved Address Line */

/* CANARD_MCAN_ILE - Interrupt Line Enable Register - 0x5C */
#define CANARD_MCAN_ILE_EINT0_Pos                   0                                              /* (CANARD_MCAN_ILE) Enable Interrupt Line 0 Position */
#define CANARD_MCAN_ILE_EINT0_Msk                   (_U_(0x3) << CANARD_MCAN_ILE_EINT0_Pos)               /* (CANARD_MCAN_ILE) Enable Interrupt Line 0 Mask */
#define CANARD_MCAN_ILE_EINT0                       CANARD_MCAN_ILE_EINT0_Msk                             /* (CANARD_MCAN_ILE) Enable Interrupt Line 0 */
#define CANARD_MCAN_ILE_EINT1_Pos                   1                                              /* (CANARD_MCAN_ILE) Enable Interrupt Line 1 Position */
#define CANARD_MCAN_ILE_EINT1_Msk                   (_U_(0x3) << CANARD_MCAN_ILE_EINT1_Pos)               /* (CANARD_MCAN_ILE) Enable Interrupt Line 1 Mask */
#define CANARD_MCAN_ILE_EINT1                       CANARD_MCAN_ILE_EINT1_Msk                             /* (CANARD_MCAN_ILE) Enable Interrupt Line 1 */

/* CANARD_MCAN_GFC - Global Filter Configuration Register - 0x80 */
#define CANARD_MCAN_GFC_RRFE_Pos                   0                                                       /* (CANARD_MCAN_GFC) Reject Remote Frames Extended Position */
#define CANARD_MCAN_GFC_RRFE_Msk                   (_U_(0x1) << CANARD_MCAN_GFC_RRFE_Pos)                         /* (CANARD_MCAN_GFC) Reject Remote Frames Extended Mask */
#define CANARD_MCAN_GFC_RRFE                       CANARD_MCAN_GFC_RRFE_Msk                                       /* (CANARD_MCAN_GFC) Reject Remote Frames Extended */
#define CANARD_MCAN_GFC_RRFS_Pos                   1                                                       /* (CANARD_MCAN_GFC) Reject Remote Frames Standard Position */
#define CANARD_MCAN_GFC_RRFS_Msk                   (_U_(0x1) << CANARD_MCAN_GFC_RRFS_Pos)                         /* (CANARD_MCAN_GFC) Reject Remote Frames Standard Mask */
#define CANARD_MCAN_GFC_RRFS                       CANARD_MCAN_GFC_RRFS_Msk                                       /* (CANARD_MCAN_GFC) Reject Remote Frames Standard */
#define CANARD_MCAN_GFC_ANFE_Pos                   2                                                       /* (CANARD_MCAN_GFC) Accept Non-matching Frames Extended Position */
#define CANARD_MCAN_GFC_ANFE_Msk                   (_U_(0x3) << CANARD_MCAN_GFC_ANFE_Pos)                         /* (CANARD_MCAN_GFC) Accept Non-matching Frames Extended Mask */
#define CANARD_MCAN_GFC_ANFE(value)                (CANARD_MCAN_GFC_ANFE_Msk & ((value) << CANARD_MCAN_GFC_ANFE_Pos))    /* (CANARD_MCAN_GFC) Accept Non-matching Frames Extended */
#define CANARD_MCAN_GFC_ANFS_Pos                   4                                                       /* (CANARD_MCAN_GFC) Accept Non-matching Frames Standard Position */
#define CANARD_MCAN_GFC_ANFS_Msk                   (_U_(0x3) << CANARD_MCAN_GFC_ANFS_Pos)                         /* (CANARD_MCAN_GFC) Accept Non-matching Frames Standard Mask */
#define CANARD_MCAN_GFC_ANFS(value)                (CANARD_MCAN_GFC_ANFS_Msk & ((value) << CANARD_MCAN_GFC_ANFS_Pos))    /* (CANARD_MCAN_GFC) Accept Non-matching Frames Standard */

/* CANARD_MCAN_SIDFC - Standard ID Filter Configuration Register - 0x84 */
#define CANARD_MCAN_SIDFC_FLSSA_Pos                2                                                           /* (CANARD_MCAN_SIDFC) Filter List Standard Start Address Position */
#define CANARD_MCAN_SIDFC_FLSSA_Msk                (_U_(0x3FFF) << CANARD_MCAN_SIDFC_FLSSA_Pos)                       /* (CANARD_MCAN_SIDFC) Filter List Standard Start Address Mask */
#define CANARD_MCAN_SIDFC_FLSSA(value)             (CANARD_MCAN_SIDFC_FLSSA_Msk & ((value) << CANARD_MCAN_SIDFC_FLSSA_Pos))  /* (CANARD_MCAN_SIDFC) Filter List Standard Start Address */
#define CANARD_MCAN_SIDFC_LSS_Pos                  16                                                          /* (CANARD_MCAN_SIDFC) List Size Standard Position */
#define CANARD_MCAN_SIDFC_LSS_Msk                  (_U_(0xFF) << CANARD_MCAN_SIDFC_LSS_Pos)                           /* (CANARD_MCAN_SIDFC) List Size Standard Mask */
#define CANARD_MCAN_SIDFC_LSS(value)               (CANARD_MCAN_SIDFC_LSS_Msk & ((value) << CANARD_MCAN_SIDFC_LSS_Pos))      /* (CANARD_MCAN_SIDFC) List Size Standard */

/* CANARD_MCAN_XIDFC - Extended ID Filter Configuration Register - 0x88 */
#define CANARD_MCAN_XIDFC_FLESA_Pos                2                                                           /* (CANARD_MCAN_XIDFC) Filter List Extended Start Address Position */
#define CANARD_MCAN_XIDFC_FLESA_Msk                (_U_(0x3FFF) << CANARD_MCAN_XIDFC_FLESA_Pos)                       /* (CANARD_MCAN_XIDFC) Filter List Extended Start Address Mask */
#define CANARD_MCAN_XIDFC_FLESA(value)             (CANARD_MCAN_XIDFC_FLESA_Msk & ((value) << CANARD_MCAN_XIDFC_FLESA_Pos))  /* (CANARD_MCAN_XIDFC) Filter List Extended Start Address */
#define CANARD_MCAN_XIDFC_LSE_Pos                  16                                                          /* (CANARD_MCAN_XIDFC) List Size Extended Position */
#define CANARD_MCAN_XIDFC_LSE_Msk                  (_U_(0x7F) << CANARD_MCAN_XIDFC_LSE_Pos)                           /* (CANARD_MCAN_XIDFC) List Size Extended Mask */
#define CANARD_MCAN_XIDFC_LSE(value)               (CANARD_MCAN_XIDFC_LSE_Msk & ((value) << CANARD_MCAN_XIDFC_LSE_Pos))      /* (CANARD_MCAN_XIDFC) List Size Extended */

/* CANARD_MCAN_XIDAM - Extended ID AND Mask Register - 0x90 */
#define CANARD_MCAN_XIDAM_EIDM_Pos                 0                                                           /* (CANARD_MCAN_XIDAM) Extended ID Mask Position */
#define CANARD_MCAN_XIDAM_EIDM_Msk                 (_U_(0x1FFFFFFF) << CANARD_MCAN_XIDAM_EIDM_Pos)                    /* (CANARD_MCAN_XIDAM) Extended ID Mask Mask */
#define CANARD_MCAN_XIDAM_EIDM(value)              (CANARD_MCAN_XIDAM_EIDM_Msk & ((value) << CANARD_MCAN_XIDAM_EIDM_Pos))    /* (CANARD_MCAN_XIDAM) Extended ID Mask */

/* CANARD_MCAN_RXF0C - Receive FIFO 0 Configuration Register - 0xA0 */
#define CANARD_MCAN_RXF0C_F0SA_Pos                 2                                                           /* (CANARD_MCAN_RXF0C) Receive FIFO 0 Start Address Position */
#define CANARD_MCAN_RXF0C_F0SA_Msk                 (_U_(0x3FFF) << CANARD_MCAN_RXF0C_F0SA_Pos)                        /* (CANARD_MCAN_RXF0C) Receive FIFO 0 Start Address Mask */
#define CANARD_MCAN_RXF0C_F0SA(value)              (CANARD_MCAN_RXF0C_F0SA_Msk & ((value) << CANARD_MCAN_RXF0C_F0SA_Pos))    /* (CANARD_MCAN_RXF0C) Receive FIFO 0 Start Address */
#define CANARD_MCAN_RXF0C_F0S_Pos                  16                                                          /* (CANARD_MCAN_RXF0C) Receive FIFO 0 Start Address Position */
#define CANARD_MCAN_RXF0C_F0S_Msk                  (_U_(0x7F) << CANARD_MCAN_RXF0C_F0S_Pos)                           /* (CANARD_MCAN_RXF0C) Receive FIFO 0 Start Address Mask */
#define CANARD_MCAN_RXF0C_F0S(value)               (CANARD_MCAN_RXF0C_F0S_Msk & ((value) << CANARD_MCAN_RXF0C_F0S_Pos))      /* (CANARD_MCAN_RXF0C) Receive FIFO 0 Start Address */
#define CANARD_MCAN_RXF0C_F0WM_Pos                 24                                                          /* (CANARD_MCAN_RXF0C) Receive FIFO 0 Watermark Position */
#define CANARD_MCAN_RXF0C_F0WM_Msk                 (_U_(0x7F) << CANARD_MCAN_RXF0C_F0WM_Pos)                          /* (CANARD_MCAN_RXF0C) Receive FIFO 0 Watermark Mask */
#define CANARD_MCAN_RXF0C_F0WM(value)              (CANARD_MCAN_RXF0C_F0WM_Msk & ((value) << CANARD_MCAN_RXF0C_F0WM_Pos))    /* (CANARD_MCAN_RXF0C) Receive FIFO 0 Watermark Mask */
#define CANARD_MCAN_RXF0C_F0OM_Pos                 31                                                          /* (CANARD_MCAN_RXF0C) FIFO 0 Operation Mode Position */
#define CANARD_MCAN_RXF0C_F0OM_Msk                 (_U_(0x1) << CANARD_MCAN_RXF0C_F0OM_Pos)                           /* (CANARD_MCAN_RXF0C) FIFO 0 Operation Mode Mask */
#define CANARD_MCAN_RXF0C_F0OM                     CANARD_MCAN_RXF0C_F0OM_Msk                                         /* (CANARD_MCAN_RXF0C) FIFO 0 Operation Mode */

/* CANARD_MCAN_RXF0S - Receive FIFO 0 Status Register - 0xA4 */
#define CANARD_MCAN_RXF0S_F0FL_Pos                 0                                                           /* (CANARD_MCAN_RXF0S) Receive FIFO 0 Fill Level Position */
#define CANARD_MCAN_RXF0S_F0FL_Msk                 (_U_(0x7F) << CANARD_MCAN_RXF0S_F0FL_Pos)                          /* (CANARD_MCAN_RXF0S) Receive FIFO 0 Fill Level Mask */
#define CANARD_MCAN_RXF0S_F0FL(value)              (CANARD_MCAN_RXF0S_F0FL_Msk & ((value) << CANARD_MCAN_RXF0S_F0FL_Pos))    /* (CANARD_MCAN_RXF0S) Receive FIFO 0 Fill Level */
#define CANARD_MCAN_RXF0S_F0GI_Pos                 8                                                           /* (CANARD_MCAN_RXF0S) Receive FIFO 0 Get Index Position */
#define CANARD_MCAN_RXF0S_F0GI_Msk                 (_U_(0x3F) << CANARD_MCAN_RXF0S_F0GI_Pos)                          /* (CANARD_MCAN_RXF0S) Receive FIFO 0 Get Index Mask */
#define CANARD_MCAN_RXF0S_F0GI(value)              (CANARD_MCAN_RXF0S_F0GI_Msk & ((value) << CANARD_MCAN_RXF0S_F0GI_Pos))    /* (CANARD_MCAN_RXF0S) Receive FIFO 0 Get Index */
#define CANARD_MCAN_RXF0S_F0PI_Pos                 16                                                          /* (CANARD_MCAN_RXF0S) Receive FIFO 0 Put Index Position */
#define CANARD_MCAN_RXF0S_F0PI_Msk                 (_U_(0x3F) << CANARD_MCAN_RXF0S_F0PI_Pos)                          /* (CANARD_MCAN_RXF0S) Receive FIFO 0 Put Index Mask */
#define CANARD_MCAN_RXF0S_F0PI(value)              (CANARD_MCAN_RXF0S_F0PI_Msk & ((value) << CANARD_MCAN_RXF0S_F0PI_Pos))    /* (CANARD_MCAN_RXF0S) Receive FIFO 0 Put Index */
#define CANARD_MCAN_RXF0S_F0F_Pos                  24                                                          /* (CANARD_MCAN_RXF0S) Receive FIFO 0 Fill Level Position */
#define CANARD_MCAN_RXF0S_F0F_Msk                  (_U_(0x1) << CANARD_MCAN_RXF0S_F0F_Pos)                            /* (CANARD_MCAN_RXF0S) Receive FIFO 0 Fill Level Mask */
#define CANARD_MCAN_RXF0S_F0F                      CANARD_MCAN_RXF0S_F0F_Msk                                          /* (CANARD_MCAN_RXF0S) Receive FIFO 0 Fill Level */
#define CANARD_MCAN_RXF0S_RF0L_Pos                 25                                                          /* (CANARD_MCAN_RXF0S) Receive FIFO 0 Message Lost Position */
#define CANARD_MCAN_RXF0S_RF0L_Msk                 (_U_(0x1) << CANARD_MCAN_RXF0S_RF0L_Pos)                           /* (CANARD_MCAN_RXF0S) Receive FIFO 0 Message Lost Mask */
#define CANARD_MCAN_RXF0S_RF0L                     CANARD_MCAN_RXF0S_RF0L_Msk                                         /* (CANARD_MCAN_RXF0S) Receive FIFO 0 Message Lost */

/* CANARD_MCAN_RXF0A - Receive FIFO 0 Acknowledge Register - 0xA8 */
#define CANARD_MCAN_RXF0A_F0AI_Pos                 0                                                           /* (CANARD_MCAN_RXF0A) Receive FIFO 0 Acknowledge Index Position */
#define CANARD_MCAN_RXF0A_F0AI_Msk                 (_U_(0x3F) << CANARD_MCAN_RXF0A_F0AI_Pos)                          /* (CANARD_MCAN_RXF0A) Receive FIFO 0 Acknowledge Index Mask */
#define CANARD_MCAN_RXF0A_F0AI(value)              (CANARD_MCAN_RXF0A_F0AI_Msk & ((value) << CANARD_MCAN_RXF0A_F0AI_Pos))    /* (CANARD_MCAN_RXF0A) Receive FIFO 0 Acknowledge Index */

/* CANARD_MCAN_RXBC - Receive Rx Buffer Configuration Register - 0xAC */
#define CANARD_MCAN_RXBC_RBSA_Pos                  2                                                           /* (CANARD_MCAN_RXBC) Receive Buffer Start Address Position */
#define CANARD_MCAN_RXBC_RBSA_Msk                  (_U_(0x3FFF) << CANARD_MCAN_RXBC_RBSA_Pos)                         /* (CANARD_MCAN_RXBC) Receive Buffer Start Address Mask */
#define CANARD_MCAN_RXBC_RBSA(value)               (CANARD_MCAN_RXBC_RBSA_Msk & ((value) << CANARD_MCAN_RXBC_RBSA_Pos))      /* (CANARD_MCAN_RXBC) Receive Buffer Start Address */

/* CANARD_MCAN_RXF1C - Receive FIFO 1 Configuration Register - 0xB0 */
#define CANARD_MCAN_RXF1C_F1SA_Pos                 2                                                           /* (CANARD_MCAN_RXF1C) Receive FIFO 1 Start Address Position */
#define CANARD_MCAN_RXF1C_F1SA_Msk                 (_U_(0x3FFF) << CANARD_MCAN_RXF1C_F1SA_Pos)                        /* (CANARD_MCAN_RXF1C) Receive FIFO 1 Start Address Mask */
#define CANARD_MCAN_RXF1C_F1SA(value)              (CANARD_MCAN_RXF1C_F1SA_Msk & ((value) << CANARD_MCAN_RXF1C_F1SA_Pos))    /* (CANARD_MCAN_RXF1C) Receive FIFO 1 Start Address */
#define CANARD_MCAN_RXF1C_F1S_Pos                  16                                                          /* (CANARD_MCAN_RXF1C) Receive FIFO 1 Start Address Position */
#define CANARD_MCAN_RXF1C_F1S_Msk                  (_U_(0x7F) << CANARD_MCAN_RXF1C_F1S_Pos)                           /* (CANARD_MCAN_RXF1C) Receive FIFO 1 Start Address Mask */
#define CANARD_MCAN_RXF1C_F1S(value)               (CANARD_MCAN_RXF1C_F1S_Msk & ((value) << CANARD_MCAN_RXF1C_F1S_Pos))      /* (CANARD_MCAN_RXF1C) Receive FIFO 1 Start Address */
#define CANARD_MCAN_RXF1C_F1WM_Pos                 24                                                          /* (CANARD_MCAN_RXF1C) Receive FIFO 1 Watermark Position */
#define CANARD_MCAN_RXF1C_F1WM_Msk                 (_U_(0x7F) << CANARD_MCAN_RXF1C_F1WM_Pos)                          /* (CANARD_MCAN_RXF1C) Receive FIFO 1 Watermark Mask */
#define CANARD_MCAN_RXF1C_F1WM(value)              (CANARD_MCAN_RXF1C_F1WM_Msk & ((value) << CANARD_MCAN_RXF1C_F1WM_Pos))    /* (CANARD_MCAN_RXF1C) Receive FIFO 1 Watermark */
#define CANARD_MCAN_RXF1C_F1OM_Pos                 31                                                          /* (CANARD_MCAN_RXF1C) FIFO 1 Operation Mode Position */

/* CANARD_MCAN_RXF1S - Receive FIFO 1 Status Register - 0xB4 */
#define CANARD_MCAN_RXF1S_F1FL_Pos                 0                                                           /* (CANARD_MCAN_RXF1S) Receive FIFO 1 Fill Level Position */
#define CANARD_MCAN_RXF1S_F1FL_Msk                 (_U_(0x7F) << CANARD_MCAN_RXF1S_F1FL_Pos)                          /* (CANARD_MCAN_RXF1S) Receive FIFO 1 Fill Level Mask */
#define CANARD_MCAN_RXF1S_F1FL(value)              (CANARD_MCAN_RXF1S_F1FL_Msk & ((value) << CANARD_MCAN_RXF1S_F1FL_Pos))    /* (CANARD_MCAN_RXF1S) Receive FIFO 1 Fill Level */
#define CANARD_MCAN_RXF1S_F1GI_Pos                 8                                                           /* (CANARD_MCAN_RXF1S) Receive FIFO 1 Get Index Position */
#define CANARD_MCAN_RXF1S_F1GI_Msk                 (_U_(0x3F) << CANARD_MCAN_RXF1S_F1GI_Pos)                          /* (CANARD_MCAN_RXF1S) Receive FIFO 1 Get Index Mask */
#define CANARD_MCAN_RXF1S_F1GI(value)              (CANARD_MCAN_RXF1S_F1GI_Msk & ((value) << CANARD_MCAN_RXF1S_F1GI_Pos))    /* (CANARD_MCAN_RXF1S) Receive FIFO 1 Get Index */
#define CANARD_MCAN_RXF1S_F1PI_Pos                 16                                                          /* (CANARD_MCAN_RXF1S) Receive FIFO 1 Put Index Position */
#define CANARD_MCAN_RXF1S_F1PI_Msk                 (_U_(0x3F) << CANARD_MCAN_RXF1S_F1PI_Pos)                          /* (CANARD_MCAN_RXF1S) Receive FIFO 1 Put Index Mask */
#define CANARD_MCAN_RXF1S_F1PI(value)              (CANARD_MCAN_RXF1S_F1PI_Msk & ((value) << CANARD_MCAN_RXF1S_F1PI_Pos))    /* (CANARD_MCAN_RXF1S) Receive FIFO 1 Put Index */
#define CANARD_MCAN_RXF1S_F1F_Pos                  24                                                          /* (CANARD_MCAN_RXF1S) Receive FIFO 1 Fill Level Position */
#define CANARD_MCAN_RXF1S_F1F_Msk                  (_U_(0x1) << CANARD_MCAN_RXF1S_F1F_Pos)                            /* (CANARD_MCAN_RXF1S) Receive FIFO 1 Fill Level Mask */
#define CANARD_MCAN_RXF1S_F1F                      CANARD_MCAN_RXF1S_F1F_Msk                                          /* (CANARD_MCAN_RXF1S) Receive FIFO 1 Fill Level */
#define CANARD_MCAN_RXF1S_RF1L_Pos                 25                                                          /* (CANARD_MCAN_RXF1S) Receive FIFO 1 Message Lost Position */
#define CANARD_MCAN_RXF1S_RF1L_Msk                 (_U_(0x1) << CANARD_MCAN_RXF1S_RF1L_Pos)                           /* (CANARD_MCAN_RXF1S) Receive FIFO 1 Message Lost Mask */
#define CANARD_MCAN_RXF1S_RF1L                     CANARD_MCAN_RXF1S_RF1L_Msk                                         /* (CANARD_MCAN_RXF1S) Receive FIFO 1 Message Lost */
#define CANARD_MCAN_RXF1S_DMS_Pos                  30                                                          /* (CANARD_MCAN_RXF1S) Debug Message Status Position */
#define CANARD_MCAN_RXF1S_DMS_Msk                  (_U_(0x3) << CANARD_MCAN_RXF1S_DMS_Pos)                            /* (CANARD_MCAN_RXF1S) Debug Message Status Mask */
#define CANARD_MCAN_RXF1S_DMS(value)               (CANARD_MCAN_RXF1S_DMS_Msk & ((value) << CANARD_MCAN_RXF1S_DMS_Pos))      /* (CANARD_MCAN_RXF1S) Debug Message Status */

/* CANARD_MCAN_RXF1A - Receive FIFO 1 Acknowledge Register - 0xB8 */
#define CANARD_MCAN_RXF1A_F1AI_Pos                 0                                                           /* (CANARD_MCAN_RXF1A) Receive FIFO 1 Acknowledge Index Position */
#define CANARD_MCAN_RXF1A_F1AI_Msk                 (_U_(0x3F) << CANARD_MCAN_RXF1A_F1AI_Pos)                          /* (CANARD_MCAN_RXF1A) Receive FIFO 1 Acknowledge Index Mask */
#define CANARD_MCAN_RXF1A_F1AI(value)              (CANARD_MCAN_RXF1A_F1AI_Msk & ((value) << CANARD_MCAN_RXF1A_F1AI_Pos))    /* (CANARD_MCAN_RXF1A) Receive FIFO 1 Acknowledge Index */

/* CANARD_MCAN_RXESC - Receive Buffer / FIFO Element Size Configuration Register - 0xBC */
#define CANARD_MCAN_RXESC_F0DS_Pos                 0                                                           /* (CANARD_MCAN_RXESC) Receive FIFO 0 Data Field Size Position */
#define CANARD_MCAN_RXESC_F0DS_Msk                 (_U_(0x7) << CANARD_MCAN_RXESC_F0DS_Pos)                           /* (CANARD_MCAN_RXESC) Receive FIFO 0 Data Field Size Mask */
#define CANARD_MCAN_RXESC_F0DS(value)              (CANARD_MCAN_RXESC_F0DS_Msk & ((value) << CANARD_MCAN_RXESC_F0DS_Pos))    /* (CANARD_MCAN_RXESC) Receive FIFO 0 Data Field Size */
#define CANARD_MCAN_RXESC_F1DS_Pos                 4                                                           /* (CANARD_MCAN_RXESC) Receive FIFO 1 Data Field Size Position */
#define CANARD_MCAN_RXESC_F1DS_Msk                 (_U_(0x7) << CANARD_MCAN_RXESC_F1DS_Pos)                           /* (CANARD_MCAN_RXESC) Receive FIFO 1 Data Field Size Mask */
#define CANARD_MCAN_RXESC_F1DS(value)              (CANARD_MCAN_RXESC_F1DS_Msk & ((value) << CANARD_MCAN_RXESC_F1DS_Pos))    /* (CANARD_MCAN_RXESC) Receive FIFO 1 Data Field Size */
#define CANARD_MCAN_RXESC_RBDS_Pos                 8                                                           /* (CANARD_MCAN_RXESC) Receive Buffer Data Field Size Position */
#define CANARD_MCAN_RXESC_RBDS_Msk                 (_U_(0x7) << CANARD_MCAN_RXESC_RBDS_Pos)                           /* (CANARD_MCAN_RXESC) Receive Buffer Data Field Size Mask */
#define CANARD_MCAN_RXESC_RBDS(value)              (CANARD_MCAN_RXESC_RBDS_Msk & ((value) << CANARD_MCAN_RXESC_RBDS_Pos))    /* (CANARD_MCAN_RXESC) Receive Buffer Data Field Size */

/* CANARD_MCAN_TXBC - Transmit Buffer Configuration Register - 0xC0 */
#define CANARD_MCAN_TXBC_TBSA_Pos                  2                                                           /* (CANARD_MCAN_TXBC) Tx Buffers Start Address Position */
#define CANARD_MCAN_TXBC_TBSA_Msk                  (_U_(0x3FFF) << CANARD_MCAN_TXBC_TBSA_Pos)                         /* (CANARD_MCAN_TXBC) Tx Buffers Start Address Mask */
#define CANARD_MCAN_TXBC_TBSA(value)               (CANARD_MCAN_TXBC_TBSA_Msk & ((value) << CANARD_MCAN_TXBC_TBSA_Pos))      /* (CANARD_MCAN_TXBC) Tx Buffers Start Address */
#define CANARD_MCAN_TXBC_NDTB_Pos                  16                                                          /* (CANARD_MCAN_TXBC) Number of Dedicated Transmit Buffers Position */
#define CANARD_MCAN_TXBC_NDTB_Msk                  (_U_(0x3F) << CANARD_MCAN_TXBC_NDTB_Pos)                           /* (CANARD_MCAN_TXBC) Number of Dedicated Transmit Buffers Mask */
#define CANARD_MCAN_TXBC_NDTB(value)               (CANARD_MCAN_TXBC_NDTB_Msk & ((value) << CANARD_MCAN_TXBC_NDTB_Pos))      /* (CANARD_MCAN_TXBC) Number of Dedicated Transmit Buffers */
#define CANARD_MCAN_TXBC_TFQS_Pos                  24                                                          /* (CANARD_MCAN_TXBC) Transmit FIFO/Queue Size Position */
#define CANARD_MCAN_TXBC_TFQS_Msk                  (_U_(0x3F) << CANARD_MCAN_TXBC_TFQS_Pos)                           /* (CANARD_MCAN_TXBC) Transmit FIFO/Queue Size Mask */
#define CANARD_MCAN_TXBC_TFQS(value)               (CANARD_MCAN_TXBC_TFQS_Msk & ((value) << CANARD_MCAN_TXBC_TFQS_Pos))      /* (CANARD_MCAN_TXBC) Transmit FIFO/Queue Size */
#define CANARD_MCAN_TXBC_TFQM_Pos                  30                                                          /* (CANARD_MCAN_TXBC) Tx FIFO/Queue Mode Position */
#define CANARD_MCAN_TXBC_TFQM_Msk                  (_U_(0x1) << CANARD_MCAN_TXBC_TFQM_Pos)                            /* (CANARD_MCAN_TXBC) Tx FIFO/Queue Mode Mask */
#define CANARD_MCAN_TXBC_TFQM                      CANARD_MCAN_TXBC_TFQM_Msk                                          /* (CANARD_MCAN_TXBC) Tx FIFO/Queue Mode */

/* CANARD_MCAN_TXFQS - Transmit FIFO/Queue Status Register - 0xC4 */
#define CANARD_MCAN_TXFQS_TFFL_Pos                 0                                                           /* (CANARD_MCAN_TXFQS) Tx FIFO Free Level Position */
#define CANARD_MCAN_TXFQS_TFFL_Msk                 (_U_(0x3F) << CANARD_MCAN_TXFQS_TFFL_Pos)                          /* (CANARD_MCAN_TXFQS) Tx FIFO Free Level Mask */
#define CANARD_MCAN_TXFQS_TFFL(value)              (CANARD_MCAN_TXFQS_TFFL_Msk & ((value) << CANARD_MCAN_TXFQS_TFFL_Pos))    /* (CANARD_MCAN_TXFQS) Tx FIFO Free Level */
#define CANARD_MCAN_TXFQS_TFGI_Pos                 8                                                           /* (CANARD_MCAN_TXFQS) Tx FIFO Get Index Position */
#define CANARD_MCAN_TXFQS_TFGI_Msk                 (_U_(0x1F) << CANARD_MCAN_TXFQS_TFGI_Pos)                          /* (CANARD_MCAN_TXFQS) Tx FIFO Get Index Mask */
#define CANARD_MCAN_TXFQS_TFGI(value)              (CANARD_MCAN_TXFQS_TFGI_Msk & ((value) << CANARD_MCAN_TXFQS_TFGI_Pos))    /* (CANARD_MCAN_TXFQS) Tx FIFO Get Index */
#define CANARD_MCAN_TXFQS_TFQPI_Pos                16                                                          /* (CANARD_MCAN_TXFQS) Tx FIFO/Queue Put Index Position */
#define CANARD_MCAN_TXFQS_TFQPI_Msk                (_U_(0x1F) << CANARD_MCAN_TXFQS_TFQPI_Pos)                         /* (CANARD_MCAN_TXFQS) Tx FIFO/Queue Put Index Mask */
#define CANARD_MCAN_TXFQS_TFQPI(value)             (CANARD_MCAN_TXFQS_TFQPI_Msk & ((value) << CANARD_MCAN_TXFQS_TFQPI_Pos))  /* (CANARD_MCAN_TXFQS) Tx FIFO/Queue Put Index */
#define CANARD_MCAN_TXFQS_TFQF_Pos                 21                                                          /* (CANARD_MCAN_TXFQS) Tx FIFO/Queue Full Position */
#define CANARD_MCAN_TXFQS_TFQF_Msk                 (_U_(0x1) << CANARD_MCAN_TXFQS_TFQF_Pos)                           /* (CANARD_MCAN_TXFQS) Tx FIFO/Queue Full Mask */
#define CANARD_MCAN_TXFQS_TFQF                     CANARD_MCAN_TXFQS_TFQF_Msk                                         /* (CANARD_MCAN_TXFQS) Tx FIFO/Queue Full */

/* CANARD_MCAN_TXESC - Transmit Buffer Element Size Configuration Register - 0xC8 */
#define CANARD_MCAN_TXESC_TBDS_Pos                 0                                                           /* (CANARD_MCAN_TXESC) Tx Buffer Data Field Size Position */
#define CANARD_MCAN_TXESC_TBDS_Msk                 (_U_(0x7) << CANARD_MCAN_TXESC_TBDS_Pos)                           /* (CANARD_MCAN_TXESC) Tx Buffer Data Field Size Mask */
#define CANARD_MCAN_TXESC_TBDS(value)              (CANARD_MCAN_TXESC_TBDS_Msk & ((value) << CANARD_MCAN_TXESC_TBDS_Pos))    /* (CANARD_MCAN_TXESC) Tx Buffer Data Field Size */

/* CANARD_MCAN_TXBRP - Transmit Buffer Request Pending Register - 0xCC */
#define CANARD_MCAN_TXBRP_TRP_Pos                  0                                                           /* (CANARD_MCAN_TXBRP) Transmission Request Pending Position */
#define CANARD_MCAN_TXBRP_TRP_Msk                  (_U_(0xFFFFFFFF) << CANARD_MCAN_TXBRP_TRP_Pos)                     /* (CANARD_MCAN_TXBRP) Transmission Request Pending Mask */
#define CANARD_MCAN_TXBRP_TRP(value)               (CANARD_MCAN_TXBRP_TRP_Msk & ((value) << CANARD_MCAN_TXBRP_TRP_Pos))      /* (CANARD_MCAN_TXBRP) Transmission Request Pending */

/* CANARD_MCAN_TXBAR - Transmit Buffer Add Request Register - 0xD0 */
#define CANARD_MCAN_TXBAR_AR_Pos                   0                                                           /* (CANARD_MCAN_TXBAR) Add Request Position */
#define CANARD_MCAN_TXBAR_AR_Msk                   (_U_(0xFFFFFFFF) << CANARD_MCAN_TXBAR_AR_Pos)                      /* (CANARD_MCAN_TXBAR) Add Request Mask */
#define CANARD_MCAN_TXBAR_AR(value)                (CANARD_MCAN_TXBAR_AR_Msk & ((value) << CANARD_MCAN_TXBAR_AR_Pos))        /* (CANARD_MCAN_TXBAR) Add Request */

/* CANARD_MCAN_TXBTIE - Transmit Buffer Transmission Interrupt Enable Register - 0xE0 */
#define CANARD_MCAN_TXBTIE_TIE_Pos                 0                                                           /* (CANARD_MCAN_TXBTIE) Transmission Interrupt Enable Position */
#define CANARD_MCAN_TXBTIE_TIE_Msk                 (_U_(0xFFFFFFFF) << CANARD_MCAN_TXBTIE_TIE_Pos)                    /* (CANARD_MCAN_TXBTIE) Transmission Interrupt Enable Mask */
#define CANARD_MCAN_TXBTIE_TIE(value)              (CANARD_MCAN_TXBTIE_TIE_Msk & ((value) << CANARD_MCAN_TXBTIE_TIE_Pos))    /* (CANARD_MCAN_TXBTIE) Transmission Interrupt Enable */

/* CANARD_MCAN_TXBCIE - Transmit Buffer Cancellation Finished Interrupt Enable Register - 0xE4 */
#define CANARD_MCAN_TXBCIE_CFIE_Pos                0                                                           /* (CANARD_MCAN_TXBCIE) Cancellation Finished Interrupt Enable Position */
#define CANARD_MCAN_TXBCIE_CFIE_Msk                (_U_(0xFFFFFFFF) << CANARD_MCAN_TXBCIE_CFIE_Pos)                   /* (CANARD_MCAN_TXBCIE) Cancellation Finished Interrupt Enable Mask */
#define CANARD_MCAN_TXBCIE_CFIE(value)             (CANARD_MCAN_TXBCIE_CFIE_Msk & ((value) << CANARD_MCAN_TXBCIE_CFIE_Pos))  /* (CANARD_MCAN_TXBCIE) Cancellation Finished Interrupt Enable */

#endif /* _REG_MAP_MCAN_H_ */