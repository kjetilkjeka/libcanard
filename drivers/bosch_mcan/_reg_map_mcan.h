/* Register definitions can be added when needed from: http://www.bosch-semiconductors.com/media/ip_modules/pdf_2/m_can/mcan_users_manual_v3212.pdf 
 *
 * Map created for version 3.2.12
 */


#ifndef _REG_MAP_MCAN_H_
#define _REG_MAP_MCAN_H_



#define _U_(x) x ## U    /**< C code: Unsigned integer literal constant value */
#define _L_(x) x ## L    /**< C code: Long integer literal constant value */
#define _UL_(x) x ## UL  /**< C code: Unsigned Long integer literal constant value */

/* MCAN_CREL - Core Release Register - 0x00 */
#define MCAN_CREL_DAY_Pos                   0                                               /* (MCAN_CREL) Timestamp Day Position */                                         
#define MCAN_CREL_DAY_Msk                   (_U_(0xFF) << MCAN_CREL_DAY_Pos)               /* (MCAN_CREL) Timestamp Day Mask */
#define MCAN_CREL_DAY(value)                (MCAN_CREL_DAY_Msk & ((value) << MCAN_CREL_DAY_Pos))
#define MCAN_CREL_MON_Pos                   8                                              /* (MCAN_CREL) Timestamp Month Position */
#define MCAN_CREL_MON_Msk                   (_U_(0xFF) << MCAN_CREL_MON_Pos)               /* (MCAN_CREL) Timestamp Month Mask */
#define MCAN_CREL_MON(value)                (MCAN_CREL_MON_Msk & ((value) << MCAN_CREL_MON_Pos))
#define MCAN_CREL_YEAR_Pos                  16                                             /* (MCAN_CREL) Timestamp Year Position */
#define MCAN_CREL_YEAR_Msk                  (_U_(0xF) << MCAN_CREL_YEAR_Pos)               /* (MCAN_CREL) Timestamp Year Mask */
#define MCAN_CREL_YEAR(value)               (MCAN_CREL_YEAR_Msk & ((value) << MCAN_CREL_YEAR_Pos))
#define MCAN_CREL_SUBSTEP_Pos               20                                             /* (MCAN_CREL) Sub-step of Core Release Position */
#define MCAN_CREL_SUBSTEP_Msk               (_U_(0xF) << MCAN_CREL_SUBSTEP_Pos)            /* (MCAN_CREL) Sub-step of Core Release Mask */
#define MCAN_CREL_SUBSTEP(value)            (MCAN_CREL_SUBSTEP_Msk & ((value) << MCAN_CREL_SUBSTEP_Pos))
#define MCAN_CREL_STEP_Pos                  24                                             /* (MCAN_CREL) Step of Core Release Position */
#define MCAN_CREL_STEP_Msk                  (_U_(0xF) << MCAN_CREL_STEP_Pos)               /* (MCAN_CREL) Step of Core Release Mask */
#define MCAN_CREL_STEP(value)               (MCAN_CREL_STEP_Msk & ((value) << MCAN_CREL_STEP_Pos))
#define MCAN_CREL_REL_Pos                   28                                             /* (MCAN_CREL) Core Release Position */
#define MCAN_CREL_REL_Msk                   (_U_(0xF) << MCAN_CREL_REL_Pos)                /* (MCAN_CREL) Core Release Mask */
#define MCAN_CREL_REL(value)                (MCAN_CREL_REL_Msk & ((value) << MCAN_CREL_REL_Pos))

/* MCAN_DBTP - Data Bit Timing and Prescaler Register - 0x0C */
#define MCAN_DBTP_DSJW_Pos                  (0)																/* Data (Re) Synchronization Jump Width Position */
#define MCAN_DBTP_DSJW_Msk                  (_U_(0x7) << MCAN_DBTP_DSJW_Pos)								/* Data (Re) Synchronization Jump Width Mask */
#define MCAN_DBTP_DSJW(value)               (MCAN_DBTP_DSJW_Msk & ((value) << MCAN_DBTP_DSJW_Pos))          /* Data (Re) Synchronization Jump Width */
#define MCAN_DBTP_DTSEG2_Pos                (4)																/* Data Time Segment After Sample Point Position */
#define MCAN_DBTP_DTSEG2_Msk                (_U_(0xF) << MCAN_DBTP_DTSEG2_Pos)								/* Data Time Segment After Sample Point Mask */
#define MCAN_DBTP_DTSEG2(value)             (MCAN_DBTP_DTSEG2_Msk & ((value) << MCAN_DBTP_DTSEG2_Pos))      /* Data Time Segment After Sample Point */
#define MCAN_DBTP_DTSEG1_Pos                (8)																/* Data Time Segment Before Sample Point Position */
#define MCAN_DBTP_DTSEG1_Msk                (_U_(0x1F) << MCAN_DBTP_DTSEG1_Pos)								/* Data Time Segment Before Sample Point Mask */
#define MCAN_DBTP_DTSEG1(value)             (MCAN_DBTP_DTSEG1_Msk & ((value) << MCAN_DBTP_DTSEG1_Pos))      /* Data Time Segment Before Sample Point */
#define MCAN_DBTP_DBRP_Pos                  (16)															/* Fast Baud Rate Prescaler Position */
#define MCAN_DBTP_DBRP_Msk                  (_U_(0x1F) << MCAN_DBTP_DBRP_Pos)								/* Fast Baud Rate Prescaler Mask */
#define MCAN_DBTP_DBRP(value)               (MCAN_DBTP_DBRP_Msk & ((value) << MCAN_DBTP_DBRP_Pos))          /* Fast Baud Rate Prescaler */
#define MCAN_DBTP_TDC_Pos                   (23)															/* Transceiver Delay Compensation Position */
#define MCAN_DBTP_TDC_Msk                   (_U_(0x1) << MCAN_DBTP_TDC_Pos)									/* Transceiver Delay Compensation Mask */
#define MCAN_DBTP_TDC                       MCAN_DBTP_TDC_Msk       										/* Transceiver Delay Compensation */

/* MCAN_CCCR - CC Control Register - 0x18 */
#define MCAN_CCCR_INIT_Pos                  0                                              /* (MCAN_CCCR) Initialization Position */
#define MCAN_CCCR_INIT_Msk                  (_U_(0x1) << MCAN_CCCR_INIT_Pos)               /* (MCAN_CCCR) Initialization Mask */
#define MCAN_CCCR_INIT                      MCAN_CCCR_INIT_Msk                             /* (MCAN_CCCR) Initialization */
#define MCAN_CCCR_CCE_Pos                   1                                              /* (MCAN_CCCR) Configuration Change Enable Position */
#define MCAN_CCCR_CCE_Msk                   (_U_(0x1) << MCAN_CCCR_CCE_Pos)                /* (MCAN_CCCR) Configuration Change Enable Mask */
#define MCAN_CCCR_CCE                       MCAN_CCCR_CCE_Msk                              /* (MCAN_CCCR) Configuration Change Enable */
#define MCAN_CCCR_ASM_Pos                   2                                              /* (MCAN_CCCR) Restricted Operation Mode Position */
#define MCAN_CCCR_ASM_Msk                   (_U_(0x1) << MCAN_CCCR_ASM_Pos)                /* (MCAN_CCCR) Restricted Operation Mode Mask */
#define MCAN_CCCR_ASM                       MCAN_CCCR_ASM_Msk                              /* (MCAN_CCCR) Restricted Operation Mode */
#define MCAN_CCCR_CSA_Pos                   3                                              /* (MCAN_CCCR) Clock Stop Acknowledge Position */
#define MCAN_CCCR_CSA_Msk                   (_U_(0x1) << MCAN_CCCR_CSA_Pos)                /* (MCAN_CCCR) Clock Stop Acknowledge Mask */
#define MCAN_CCCR_CSA                       MCAN_CCCR_CSA_Msk                              /* (MCAN_CCCR) Clock Stop Acknowledge */
#define MCAN_CCCR_CSR_Pos                   4                                              /* (MCAN_CCCR) Clock Stop Request Position */
#define MCAN_CCCR_CSR_Msk                   (_U_(0x1) << MCAN_CCCR_CSR_Pos)                /* (MCAN_CCCR) Clock Stop Request Mask */
#define MCAN_CCCR_CSR                       MCAN_CCCR_CSR_Msk                              /* (MCAN_CCCR) Clock Stop Request */
#define MCAN_CCCR_MON_Pos                   5                                              /* (MCAN_CCCR) Bus Monitoring Mode Position */
#define MCAN_CCCR_MON_Msk                   (_U_(0x1) << MCAN_CCCR_MON_Pos)                /* (MCAN_CCCR) Bus Monitoring Mode Mask */
#define MCAN_CCCR_MON                       MCAN_CCCR_MON_Msk                              /* (MCAN_CCCR) Bus Monitoring Mode */
#define MCAN_CCCR_DAR_Pos                   6                                              /* (MCAN_CCCR) Disable Automatic Retransmission Position */
#define MCAN_CCCR_DAR_Msk                   (_U_(0x1) << MCAN_CCCR_DAR_Pos)                /* (MCAN_CCCR) Disable Automatic Retransmission Mask */
#define MCAN_CCCR_DAR                       MCAN_CCCR_DAR_Msk                              /* (MCAN_CCCR) Disable Automatic Retransmission */
#define MCAN_CCCR_TEST_Pos                  7                                              /* (MCAN_CCCR) Test Mode Enable Position */
#define MCAN_CCCR_TEST_Msk                  (_U_(0x1) << MCAN_CCCR_TEST_Pos)               /* (MCAN_CCCR) Test Mode Enable Mask */
#define MCAN_CCCR_TEST                      MCAN_CCCR_TEST_Msk                             /* (MCAN_CCCR) Test Mode Enable */
#define MCAN_CCCR_FDOE_Pos                   8                                              /* (MCAN_CCCR) FD Operation Enable Position */
#define MCAN_CCCR_FDOE_Msk                   (_U_(0x3) << MCAN_CCCR_FDOE_Pos)                /* (MCAN_CCCR) FD Operation Enable Mask */
#define MCAN_CCCR_FDOE                      (MCAN_CCCR_FDOE_Msk)                            /* (MCAN_CCCR) FD Operation Enable */
#define MCAN_CCCR_BRSE_Pos                   9                                              /* (MCAN_CCCR) Bit Rate Switch Enable Position */
#define MCAN_CCCR_BRSE_Msk                   (_U_(0x3) << MCAN_CCCR_BRSE_Pos)                /* (MCAN_CCCR) Bit Rate Switch Enable Mask */
#define MCAN_CCCR_BRSE                      (MCAN_CCCR_BRSE_Msk)                            /* (MCAN_CCCR) Bit Rate Switch Enable */
#define MCAN_CCCR_PXHD_Pos                   12                                             /* (MCAN_CCCR) Protocol Exception Handling Disable Position */
#define MCAN_CCCR_PXHD_Msk                   (_U_(0x1) << MCAN_CCCR_FDO_Pos)                /* (MCAN_CCCR) Protocol Exception Handling Disable Mask */
#define MCAN_CCCR_PXHD                       MCAN_CCCR_FDO_Msk                              /* (MCAN_CCCR) Protocol Exception Handling Disable */
#define MCAN_CCCR_EFBI_Pos                  13                                             /* (MCAN_CCCR) Edge Filtering during Bus Integration Position */
#define MCAN_CCCR_EFBI_Msk                  (_U_(0x1) << MCAN_CCCR_FDBS_Pos)               /* (MCAN_CCCR) Edge Filtering during Bus Integration Mask */
#define MCAN_CCCR_EFBI                      MCAN_CCCR_FDBS_Msk                             /* (MCAN_CCCR) Edge Filtering during Bus Integration */
#define MCAN_CCCR_TXP_Pos                   14                                             /* (MCAN_CCCR) Transmit Pause Position */
#define MCAN_CCCR_TXP_Msk                   (_U_(0x1) << MCAN_CCCR_TXP_Pos)                /* (MCAN_CCCR) Transmit Pause Mask */
#define MCAN_CCCR_TXP                       MCAN_CCCR_TXP_Msk                              /* (MCAN_CCCR) Transmit Pause */
#define MCAN_CCCR_NISO_Pos                  15                                             /* (MCAN_CCCR) Non-ISO Operation Position */
#define MCAN_CCCR_NISO_Msk                  (_U_(0x1) << MCAN_CCCR_NISO_Pos)               /* (MCAN_CCCR) Non-ISO Operation Mask */
#define MCAN_CCCR_NISO                      MCAN_CCCR_NISO_Msk                             /* (MCAN_CCCR) Non-ISO Operation */

/* MCAN_NBTP - Nominal Bit Timing and Prescaler Register - 0x1C */
#define MCAN_NBTP_NTSEG2_Pos                  (0)															/* Time Segment After Sample Point Position */
#define MCAN_NBTP_NTSEG2_Msk                  (_U_(0x7F) << MCAN_NBTP_NTSEG2_Pos)							/* Time Segment After Sample Point Mask */
#define MCAN_NBTP_NTSEG2(value)               (MCAN_NBTP_NTSEG2_Msk & ((value) << MCAN_NBTP_NTSEG2_Pos))    /* Time Segment After Sample Point */
#define MCAN_NBTP_NTSEG1_Pos                  (8)															/* Time Segment Before Sample Point Position */
#define MCAN_NBTP_NTSEG1_Msk                  (_U_(0xFF) << MCAN_NBTP_NTSEG1_Pos)							/* Time Segment Before Sample Point Mask */
#define MCAN_NBTP_NTSEG1(value)               (MCAN_NBTP_NTSEG1_Msk & ((value) << MCAN_NBTP_NTSEG1_Pos))    /* Time Segment Before Sample Point */
#define MCAN_NBTP_NBRP_Pos                    (16)															/* Baud Rate Prescaler Position */
#define MCAN_NBTP_NBRP_Msk                    (_U_(0x1FF) << MCAN_NBTP_NBRP_Pos)							/* Baud Rate Prescaler Mask */
#define MCAN_NBTP_NBRP(value)                 (MCAN_NBTP_NBRP_Msk & ((value) << MCAN_NBTP_NBRP_Pos))        /* Baud Rate Prescaler */
#define MCAN_NBTP_NSJW_Pos                    (25)															/* (Re) Synchronization Jump Width Position */
#define MCAN_NBTP_NSJW_Msk                    (_U_(0x7F) << MCAN_NBTP_NSJW_Pos)								/* (Re) Synchronization Jump Width Mask */
#define MCAN_NBTP_NSJW(value)                 (MCAN_NBTP_NSJW_Msk & ((value) << MCAN_NBTP_NSJW_Pos))        /* (Re) Synchronization Jump Width */

/* MCAN_TDCR - Transmitter Delay Compensation Register - 0x48 */
#define MCAN_TDCR_TDCF_Pos                  0                                                               /* (MCAN_TDCR) Transmitter Delay Compensation Filter Position */
#define MCAN_TDCR_TDCF_Msk                  (_U_(0x7F) << MCAN_TDCR_TDCF_Pos)                               /* (MCAN_TDCR) Transmitter Delay Compensation Filter Mask */
#define MCAN_TDCR_TDCF(value)               (MCAN_TDCR_TDCF_Msk & ((value) << MCAN_TDCR_TDCF_Pos))          /* (MCAN_TDCR) Transmitter Delay Compensation Filter */
#define MCAN_TDCR_TDCO_Pos                  8                                                               /* (MCAN_TDCR) Transmitter Delay Compensation Offset Position */
#define MCAN_TDCR_TDCO_Msk                  (_U_(0x7F) << MCAN_TDCR_TDCO_Pos)                               /* (MCAN_TDCR) Transmitter Delay Compensation Offset Mask */
#define MCAN_TDCR_TDCO(value)               (MCAN_TDCR_TDCO_Msk & ((value) << MCAN_TDCR_TDCO_Pos))          /* (MCAN_TDCR) Transmitter Delay Compensation Offset */ 

/* MCAN_IR - Interrupt Register - 0x50 */
#define MCAN_IR_RF0N_Pos                    0                                              /* (MCAN_IR) Receive FIFO 0 New Message Position */
#define MCAN_IR_RF0N_Msk                    (_U_(0x1) << MCAN_IR_RF0N_Pos)                 /* (MCAN_IR) Receive FIFO 0 New Message Mask */
#define MCAN_IR_RF0N                        MCAN_IR_RF0N_Msk                               /* (MCAN_IR) Receive FIFO 0 New Message */
#define MCAN_IR_RF0W_Pos                    1                                              /* (MCAN_IR) Receive FIFO 0 Watermark Reached Position */
#define MCAN_IR_RF0W_Msk                    (_U_(0x1) << MCAN_IR_RF0W_Pos)                 /* (MCAN_IR) Receive FIFO 0 Watermark Reached Mask */
#define MCAN_IR_RF0W                        MCAN_IR_RF0W_Msk                               /* (MCAN_IR) Receive FIFO 0 Watermark Reached */
#define MCAN_IR_RF0F_Pos                    2                                              /* (MCAN_IR) Receive FIFO 0 Full Position */
#define MCAN_IR_RF0F_Msk                    (_U_(0x1) << MCAN_IR_RF0F_Pos)                 /* (MCAN_IR) Receive FIFO 0 Full Mask */
#define MCAN_IR_RF0F                        MCAN_IR_RF0F_Msk                               /* (MCAN_IR) Receive FIFO 0 Full */
#define MCAN_IR_RF0L_Pos                    3                                              /* (MCAN_IR) Receive FIFO 0 Message Lost Position */
#define MCAN_IR_RF0L_Msk                    (_U_(0x1) << MCAN_IR_RF0L_Pos)                 /* (MCAN_IR) Receive FIFO 0 Message Lost Mask */
#define MCAN_IR_RF0L                        MCAN_IR_RF0L_Msk                               /* (MCAN_IR) Receive FIFO 0 Message Lost */
#define MCAN_IR_RF1N_Pos                    4                                              /* (MCAN_IR) Receive FIFO 1 New Message Position */
#define MCAN_IR_RF1N_Msk                    (_U_(0x1) << MCAN_IR_RF1N_Pos)                 /* (MCAN_IR) Receive FIFO 1 New Message Mask */
#define MCAN_IR_RF1N                        MCAN_IR_RF1N_Msk                               /* (MCAN_IR) Receive FIFO 1 New Message */
#define MCAN_IR_RF1W_Pos                    5                                              /* (MCAN_IR) Receive FIFO 1 Watermark Reached Position */
#define MCAN_IR_RF1W_Msk                    (_U_(0x1) << MCAN_IR_RF1W_Pos)                 /* (MCAN_IR) Receive FIFO 1 Watermark Reached Mask */
#define MCAN_IR_RF1W                        MCAN_IR_RF1W_Msk                               /* (MCAN_IR) Receive FIFO 1 Watermark Reached */
#define MCAN_IR_RF1F_Pos                    6                                              /* (MCAN_IR) Receive FIFO 1 Full Position */
#define MCAN_IR_RF1F_Msk                    (_U_(0x1) << MCAN_IR_RF1F_Pos)                 /* (MCAN_IR) Receive FIFO 1 Full Mask */
#define MCAN_IR_RF1F                        MCAN_IR_RF1F_Msk                               /* (MCAN_IR) Receive FIFO 1 Full */
#define MCAN_IR_RF1L_Pos                    7                                              /* (MCAN_IR) Receive FIFO 1 Message Lost Position */
#define MCAN_IR_RF1L_Msk                    (_U_(0x1) << MCAN_IR_RF1L_Pos)                 /* (MCAN_IR) Receive FIFO 1 Message Lost Mask */
#define MCAN_IR_RF1L                        MCAN_IR_RF1L_Msk                               /* (MCAN_IR) Receive FIFO 1 Message Lost */
#define MCAN_IR_HPM_Pos                     8                                              /* (MCAN_IR) High Priority Message Position */
#define MCAN_IR_HPM_Msk                     (_U_(0x1) << MCAN_IR_HPM_Pos)                  /* (MCAN_IR) High Priority Message Mask */
#define MCAN_IR_HPM                         MCAN_IR_HPM_Msk                                /* (MCAN_IR) High Priority Message Mask */
#define MCAN_IR_TC_Pos                      9                                              /* (MCAN_IR) Transmission Completed Position */
#define MCAN_IR_TC_Msk                      (_U_(0x1) << MCAN_IR_TC_Pos)                   /* (MCAN_IR) Transmission Completed Mask */
#define MCAN_IR_TC                          MCAN_IR_TC_Msk                                 /* (MCAN_IR) Transmission Completed */
#define MCAN_IR_TCF_Pos                     10                                             /* (MCAN_IR) Transmission Cancellation Finished Position */
#define MCAN_IR_TCF_Msk                     (_U_(0x1) << MCAN_IR_TCF_Pos)                  /* (MCAN_IR) Transmission Cancellation Finished Mask */
#define MCAN_IR_TCF                         MCAN_IR_TCF_Msk                                /* (MCAN_IR) Transmission Cancellation Finished */
#define MCAN_IR_TFE_Pos                     11                                             /* (MCAN_IR) Tx FIFO Empty Position */
#define MCAN_IR_TFE_Msk                     (_U_(0x1) << MCAN_IR_TFE_Pos)                  /* (MCAN_IR) Tx FIFO Empty Mask */
#define MCAN_IR_TFE                         MCAN_IR_TFE_Msk                                /* (MCAN_IR) Tx FIFO Empty */
#define MCAN_IR_TEFN_Pos                    12                                             /* (MCAN_IR) Tx Event FIFO New Entry Position */
#define MCAN_IR_TEFN_Msk                    (_U_(0x1) << MCAN_IR_TEFN_Pos)                 /* (MCAN_IR) Tx Event FIFO New Entry Mask */
#define MCAN_IR_TEFN                        MCAN_IR_TEFN_Msk                               /* (MCAN_IR) Tx Event FIFO New Entry */
#define MCAN_IR_TEFW_Pos                    13                                             /* (MCAN_IR) Tx Event FIFO Watermark Reached Position */
#define MCAN_IR_TEFW_Msk                    (_U_(0x1) << MCAN_IR_TEFW_Pos)                 /* (MCAN_IR) Tx Event FIFO Watermark Reached Mask */
#define MCAN_IR_TEFW                        MCAN_IR_TEFW_Msk                               /* (MCAN_IR) Tx Event FIFO Watermark Reached */
#define MCAN_IR_TEFF_Pos                    14                                             /* (MCAN_IR) Tx Event FIFO Full Position */
#define MCAN_IR_TEFF_Msk                    (_U_(0x1) << MCAN_IR_TEFF_Pos)                 /* (MCAN_IR) Tx Event FIFO Full Mask */
#define MCAN_IR_TEFF                        MCAN_IR_TEFF_Msk                               /* (MCAN_IR) Tx Event FIFO Full */
#define MCAN_IR_TEFL_Pos                    15                                             /* (MCAN_IR) Tx Event FIFO Element Lost Position */
#define MCAN_IR_TEFL_Msk                    (_U_(0x1) << MCAN_IR_TEFL_Pos)                 /* (MCAN_IR) Tx Event FIFO Element Lost Mask */
#define MCAN_IR_TEFL                        MCAN_IR_TEFL_Msk                               /* (MCAN_IR) Tx Event FIFO Element Lost */
#define MCAN_IR_TSW_Pos                     16                                             /* (MCAN_IR) Timestamp Wraparound Position */
#define MCAN_IR_TSW_Msk                     (_U_(0x1) << MCAN_IR_TSW_Pos)                  /* (MCAN_IR) Timestamp Wraparound Mask */
#define MCAN_IR_TSW                         MCAN_IR_TSW_Msk                                /* (MCAN_IR) Timestamp Wraparound */
#define MCAN_IR_MRAF_Pos                    17                                             /* (MCAN_IR) Message RAM Access Failure Position */
#define MCAN_IR_MRAF_Msk                    (_U_(0x1) << MCAN_IR_MRAF_Pos)                 /* (MCAN_IR) Message RAM Access Failure Mask */
#define MCAN_IR_MRAF                        MCAN_IR_MRAF_Msk                               /* (MCAN_IR) Message RAM Access Failure */
#define MCAN_IR_TOO_Pos                     18                                             /* (MCAN_IR) Timeout Occurred Position */
#define MCAN_IR_TOO_Msk                     (_U_(0x1) << MCAN_IR_TOO_Pos)                  /* (MCAN_IR) Timeout Occurred Mask */
#define MCAN_IR_TOO                         MCAN_IR_TOO_Msk                                /* (MCAN_IR) Timeout Occurred */
#define MCAN_IR_DRX_Pos                     19                                             /* (MCAN_IR) Message stored to Dedicated Receive Buffer Position */
#define MCAN_IR_DRX_Msk                     (_U_(0x1) << MCAN_IR_DRX_Pos)                  /* (MCAN_IR) Message stored to Dedicated Receive Buffer Mask */
#define MCAN_IR_DRX                         MCAN_IR_DRX_Msk                                /* (MCAN_IR) Message stored to Dedicated Receive Buffer */
#define MCAN_IR_BEC_Pos                     20                                             /* (MCAN_IR) Bit Error Corrected Position */
#define MCAN_IR_BEC_Msk                     (_U_(0x1) << MCAN_IR_BEC_Pos)                  /* (MCAN_IR) Bit Error Corrected Mask */
#define MCAN_IR_BEC                         MCAN_IR_BEC_Msk                                /* (MCAN_IR) Bit Error Corrected */
#define MCAN_IR_BEU_Pos                     21                                             /* (MCAN_IR) Bit Error Uncorrected Position */
#define MCAN_IR_BEU_Msk                     (_U_(0x1) << MCAN_IR_BEU_Pos)                  /* (MCAN_IR) Bit Error Uncorrected Mask */
#define MCAN_IR_BEU                         MCAN_IR_BEU_Msk                                /* (MCAN_IR) Bit Error Uncorrected */
#define MCAN_IR_ELO_Pos                     22                                             /* (MCAN_IR) Error Logging Overflow Position */
#define MCAN_IR_ELO_Msk                     (_U_(0x1) << MCAN_IR_ELO_Pos)                  /* (MCAN_IR) Error Logging Overflow Mask */
#define MCAN_IR_ELO                         MCAN_IR_ELO_Msk                                /* (MCAN_IR) Error Logging Overflow */
#define MCAN_IR_EP_Pos                      23                                             /* (MCAN_IR) Error Passive Position */
#define MCAN_IR_EP_Msk                      (_U_(0x1) << MCAN_IR_EP_Pos)                   /* (MCAN_IR) Error Passive Mask */
#define MCAN_IR_EP                          MCAN_IR_EP_Msk                                 /* (MCAN_IR) Error Passive */
#define MCAN_IR_EW_Pos                      24                                             /* (MCAN_IR) Warning Status Position */
#define MCAN_IR_EW_Msk                      (_U_(0x1) << MCAN_IR_EW_Pos)                   /* (MCAN_IR) Warning Status Mask */
#define MCAN_IR_EW                          MCAN_IR_EW_Msk                                 /* (MCAN_IR) Warning Status */
#define MCAN_IR_BO_Pos                      25                                             /* (MCAN_IR) Bus_Off Status Position */
#define MCAN_IR_BO_Msk                      (_U_(0x1) << MCAN_IR_BO_Pos)                   /* (MCAN_IR) Bus_Off Status Mask */
#define MCAN_IR_BO                          MCAN_IR_BO_Msk                                 /* (MCAN_IR) Bus_Off Status instead */
#define MCAN_IR_WDI_Pos                     26                                             /* (MCAN_IR) Watchdog Interrupt Position */
#define MCAN_IR_WDI_Msk                     (_U_(0x1) << MCAN_IR_WDI_Pos)                  /* (MCAN_IR) Watchdog Interrupt Mask */
#define MCAN_IR_WDI                         MCAN_IR_WDI_Msk                                /* (MCAN_IR) Watchdog Interrupt */
#define MCAN_IR_PEA_Pos                     27                                             /* (MCAN_IR) Protocol Error in Arbitration Phase Position */
#define MCAN_IR_PEA_Msk                     (_U_(0x1) << MCAN_IR_PEA_Pos)                  /* (MCAN_IR) Protocol Error in Arbitration Phase Mask */
#define MCAN_IR_PEA                         MCAN_IR_PEA_Msk                                /* (MCAN_IR) Protocol Error in Arbitration Phase */
#define MCAN_IR_PED_Pos                     28                                             /* (MCAN_IR) Protocol Error in Data Phase Position */
#define MCAN_IR_PED_Msk                     (_U_(0x1) << MCAN_IR_PED_Pos)                  /* (MCAN_IR) Protocol Error in Data Phase Mask */
#define MCAN_IR_PED                         MCAN_IR_PED_Msk                                /* (MCAN_IR) Protocol Error in Data Phase */
#define MCAN_IR_ARA_Pos                     29                                             /* (MCAN_IR) Access to Reserved Address Position */
#define MCAN_IR_ARA_Msk                     (_U_(0x1) << MCAN_IR_ARA_Pos)                  /* (MCAN_IR) Access to Reserved Address Mask */
#define MCAN_IR_ARA                         MCAN_IR_ARA_Msk                                /* (MCAN_IR) Access to Reserved Address */

/* MCAN_IE - Interrupt Enable Register - 0x54 */
#define MCAN_IE_RF0NE_Pos                   0                                              /* (MCAN_IE) Receive FIFO 0 New Message Interrupt Enable Position */
#define MCAN_IE_RF0NE_Msk                   (_U_(0x1) << MCAN_IE_RF0NE_Pos)                /* (MCAN_IE) Receive FIFO 0 New Message Interrupt Enable Mask */
#define MCAN_IE_RF0NE                       MCAN_IE_RF0NE_Msk                              /* (MCAN_IE) Receive FIFO 0 New Message Interrupt Enable */
#define MCAN_IE_RF0WE_Pos                   1                                              /* (MCAN_IE) Receive FIFO 0 Watermark Reached Interrupt Enable Position */
#define MCAN_IE_RF0WE_Msk                   (_U_(0x1) << MCAN_IE_RF0WE_Pos)                /* (MCAN_IE) Receive FIFO 0 Watermark Reached Interrupt Enable Mask */
#define MCAN_IE_RF0WE                       MCAN_IE_RF0WE_Msk                              /* (MCAN_IE) Receive FIFO 0 Watermark Reached Interrupt Enable */
#define MCAN_IE_RF0FE_Pos                   2                                              /* (MCAN_IE) Receive FIFO 0 Full Interrupt Enable Position */
#define MCAN_IE_RF0FE_Msk                   (_U_(0x1) << MCAN_IE_RF0FE_Pos)                /* (MCAN_IE) Receive FIFO 0 Full Interrupt Enable Mask */
#define MCAN_IE_RF0FE                       MCAN_IE_RF0FE_Msk                              /* (MCAN_IE) Receive FIFO 0 Full Interrupt Enable */
#define MCAN_IE_RF0LE_Pos                   3                                              /* (MCAN_IE) Receive FIFO 0 Message Lost Interrupt Enable Position */
#define MCAN_IE_RF0LE_Msk                   (_U_(0x1) << MCAN_IE_RF0LE_Pos)                /* (MCAN_IE) Receive FIFO 0 Message Lost Interrupt Enable Mask */
#define MCAN_IE_RF0LE                       MCAN_IE_RF0LE_Msk                              /* (MCAN_IE) Receive FIFO 0 Message Lost Interrupt Enable */
#define MCAN_IE_RF1NE_Pos                   4                                              /* (MCAN_IE) Receive FIFO 1 New Message Interrupt Enable Position */
#define MCAN_IE_RF1NE_Msk                   (_U_(0x1) << MCAN_IE_RF1NE_Pos)                /* (MCAN_IE) Receive FIFO 1 New Message Interrupt Enable Mask */
#define MCAN_IE_RF1NE                       MCAN_IE_RF1NE_Msk                              /* (MCAN_IE) Receive FIFO 1 New Message Interrupt Enable */
#define MCAN_IE_RF1WE_Pos                   5                                              /* (MCAN_IE) Receive FIFO 1 Watermark Reached Interrupt Enable Position */
#define MCAN_IE_RF1WE_Msk                   (_U_(0x1) << MCAN_IE_RF1WE_Pos)                /* (MCAN_IE) Receive FIFO 1 Watermark Reached Interrupt Enable Mask */
#define MCAN_IE_RF1WE                       MCAN_IE_RF1WE_Msk                              /* (MCAN_IE) Receive FIFO 1 Watermark Reached Interrupt Enable */
#define MCAN_IE_RF1FE_Pos                   6                                              /* (MCAN_IE) Receive FIFO 1 Full Interrupt Enable Position */
#define MCAN_IE_RF1FE_Msk                   (_U_(0x1) << MCAN_IE_RF1FE_Pos)                /* (MCAN_IE) Receive FIFO 1 Full Interrupt Enable Mask */
#define MCAN_IE_RF1FE                       MCAN_IE_RF1FE_Msk                              /* (MCAN_IE) Receive FIFO 1 Full Interrupt Enable */
#define MCAN_IE_RF1LE_Pos                   7                                              /* (MCAN_IE) Receive FIFO 1 Message Lost Interrupt Enable Position */
#define MCAN_IE_RF1LE_Msk                   (_U_(0x1) << MCAN_IE_RF1LE_Pos)                /* (MCAN_IE) Receive FIFO 1 Message Lost Interrupt Enable Mask */
#define MCAN_IE_RF1LE                       MCAN_IE_RF1LE_Msk                              /* (MCAN_IE) Receive FIFO 1 Message Lost Interrupt Enable */
#define MCAN_IE_HPME_Pos                    8                                              /* (MCAN_IE) High Priority Message Interrupt Enable Position */
#define MCAN_IE_HPME_Msk                    (_U_(0x1) << MCAN_IE_HPME_Pos)                 /* (MCAN_IE) High Priority Message Interrupt Enable Mask */
#define MCAN_IE_HPME                        MCAN_IE_HPME_Msk                               /* (MCAN_IE) High Priority Message Interrupt Enable */
#define MCAN_IE_TCE_Pos                     9                                              /* (MCAN_IE) Transmission Completed Interrupt Enable Position */
#define MCAN_IE_TCE_Msk                     (_U_(0x1) << MCAN_IE_TCE_Pos)                  /* (MCAN_IE) Transmission Completed Interrupt Enable Mask */
#define MCAN_IE_TCE                         MCAN_IE_TCE_Msk                                /* (MCAN_IE) Transmission Completed Interrupt Enable */
#define MCAN_IE_TCFE_Pos                    10                                             /* (MCAN_IE) Transmission Cancellation Finished Interrupt Enable Position */
#define MCAN_IE_TCFE_Msk                    (_U_(0x1) << MCAN_IE_TCFE_Pos)                 /* (MCAN_IE) Transmission Cancellation Finished Interrupt Enable Mask */
#define MCAN_IE_TCFE                        MCAN_IE_TCFE_Msk                               /* (MCAN_IE) Transmission Cancellation Finished Interrupt Enable */
#define MCAN_IE_TFEE_Pos                    11                                             /* (MCAN_IE) Tx FIFO Empty Interrupt Enable Position */
#define MCAN_IE_TFEE_Msk                    (_U_(0x1) << MCAN_IE_TFEE_Pos)                 /* (MCAN_IE) Tx FIFO Empty Interrupt Enable Mask */
#define MCAN_IE_TFEE                        MCAN_IE_TFEE_Msk                               /* (MCAN_IE) Tx FIFO Empty Interrupt Enable */
#define MCAN_IE_TEFNE_Pos                   12                                             /* (MCAN_IE) Tx Event FIFO New Entry Interrupt Enable Position */
#define MCAN_IE_TEFNE_Msk                   (_U_(0x1) << MCAN_IE_TEFNE_Pos)                /* (MCAN_IE) Tx Event FIFO New Entry Interrupt Enable Mask */
#define MCAN_IE_TEFNE                       MCAN_IE_TEFNE_Msk                              /* (MCAN_IE) Tx Event FIFO New Entry Interrupt Enable */
#define MCAN_IE_TEFWE_Pos                   13                                             /* (MCAN_IE) Tx Event FIFO Watermark Reached Interrupt Enable Position */
#define MCAN_IE_TEFWE_Msk                   (_U_(0x1) << MCAN_IE_TEFWE_Pos)                /* (MCAN_IE) Tx Event FIFO Watermark Reached Interrupt Enable Mask */
#define MCAN_IE_TEFWE                       MCAN_IE_TEFWE_Msk                              /* (MCAN_IE) Tx Event FIFO Watermark Reached Interrupt Enable */
#define MCAN_IE_TEFFE_Pos                   14                                             /* (MCAN_IE) Tx Event FIFO Full Interrupt Enable Position */
#define MCAN_IE_TEFFE_Msk                   (_U_(0x1) << MCAN_IE_TEFFE_Pos)                /* (MCAN_IE) Tx Event FIFO Full Interrupt Enable Mask */
#define MCAN_IE_TEFFE                       MCAN_IE_TEFFE_Msk                              /* (MCAN_IE) Tx Event FIFO Full Interrupt Enable */
#define MCAN_IE_TEFLE_Pos                   15                                             /* (MCAN_IE) Tx Event FIFO Event Lost Interrupt Enable Position */
#define MCAN_IE_TEFLE_Msk                   (_U_(0x1) << MCAN_IE_TEFLE_Pos)                /* (MCAN_IE) Tx Event FIFO Event Lost Interrupt Enable Mask */
#define MCAN_IE_TEFLE                       MCAN_IE_TEFLE_Msk                              /* (MCAN_IE) Tx Event FIFO Event Lost Interrupt Enable */
#define MCAN_IE_TSWE_Pos                    16                                             /* (MCAN_IE) Timestamp Wraparound Interrupt Enable Position */
#define MCAN_IE_TSWE_Msk                    (_U_(0x1) << MCAN_IE_TSWE_Pos)                 /* (MCAN_IE) Timestamp Wraparound Interrupt Enable Mask */
#define MCAN_IE_TSWE                        MCAN_IE_TSWE_Msk                               /* (MCAN_IE) Timestamp Wraparound Interrupt Enable */
#define MCAN_IE_MRAFE_Pos                   17                                             /* (MCAN_IE) Message RAM Access Failure Interrupt Enable Position */
#define MCAN_IE_MRAFE_Msk                   (_U_(0x1) << MCAN_IE_MRAFE_Pos)                /* (MCAN_IE) Message RAM Access Failure Interrupt Enable Mask */
#define MCAN_IE_MRAFE                       MCAN_IE_MRAFE_Msk                              /* (MCAN_IE) Message RAM Access Failure Interrupt Enable */
#define MCAN_IE_TOOE_Pos                    18                                             /* (MCAN_IE) Timeout Occurred Interrupt Enable Position */
#define MCAN_IE_TOOE_Msk                    (_U_(0x1) << MCAN_IE_TOOE_Pos)                 /* (MCAN_IE) Timeout Occurred Interrupt Enable Mask */
#define MCAN_IE_TOOE                        MCAN_IE_TOOE_Msk                               /* (MCAN_IE) Timeout Occurred Interrupt Enable */
#define MCAN_IE_DRXE_Pos                    19                                             /* (MCAN_IE) Message stored to Dedicated Receive Buffer Interrupt Enable Position */
#define MCAN_IE_DRXE_Msk                    (_U_(0x1) << MCAN_IE_DRXE_Pos)                 /* (MCAN_IE) Message stored to Dedicated Receive Buffer Interrupt Enable Mask */
#define MCAN_IE_DRXE                        MCAN_IE_DRXE_Msk                               /* (MCAN_IE) Message stored to Dedicated Receive Buffer Interrupt Enable */
#define MCAN_IE_BECE_Pos                    20                                             /* (MCAN_IE) Bit Error Corrected Interrupt Enable Position */
#define MCAN_IE_BECE_Msk                    (_U_(0x1) << MCAN_IE_BECE_Pos)                 /* (MCAN_IE) Bit Error Corrected Interrupt Enable Mask */
#define MCAN_IE_BECE                        MCAN_IE_BECE_Msk                               /* (MCAN_IE) Bit Error Corrected Interrupt Enable */
#define MCAN_IE_BEUE_Pos                    21                                             /* (MCAN_IE) Bit Error Uncorrected Interrupt Enable Position */
#define MCAN_IE_BEUE_Msk                    (_U_(0x1) << MCAN_IE_BEUE_Pos)                 /* (MCAN_IE) Bit Error Uncorrected Interrupt Enable Mask */
#define MCAN_IE_BEUE                        MCAN_IE_BEUE_Msk                               /* (MCAN_IE) Bit Error Uncorrected Interrupt Enable */
#define MCAN_IE_ELOE_Pos                    22                                             /* (MCAN_IE) Error Logging Overflow Interrupt Enable Position */
#define MCAN_IE_ELOE_Msk                    (_U_(0x1) << MCAN_IE_ELOE_Pos)                 /* (MCAN_IE) Error Logging Overflow Interrupt Enable Mask */
#define MCAN_IE_ELOE                        MCAN_IE_ELOE_Msk                               /* (MCAN_IE) Error Logging Overflow Interrupt Enable */
#define MCAN_IE_EPE_Pos                     23                                             /* (MCAN_IE) Error Passive Interrupt Enable Position */
#define MCAN_IE_EPE_Msk                     (_U_(0x1) << MCAN_IE_EPE_Pos)                  /* (MCAN_IE) Error Passive Interrupt Enable Mask */
#define MCAN_IE_EPE                         MCAN_IE_EPE_Msk                                /* (MCAN_IE) Error Passive Interrupt Enable */
#define MCAN_IE_EWE_Pos                     24                                             /* (MCAN_IE) Warning Status Interrupt Enable Position */
#define MCAN_IE_EWE_Msk                     (_U_(0x1) << MCAN_IE_EWE_Pos)                  /* (MCAN_IE) Warning Status Interrupt Enable Mask */
#define MCAN_IE_EWE                         MCAN_IE_EWE_Msk                                /* (MCAN_IE) Warning Status Interrupt Enable */
#define MCAN_IE_BOE_Pos                     25                                             /* (MCAN_IE) Bus_Off Status Interrupt Enable Position */
#define MCAN_IE_BOE_Msk                     (_U_(0x1) << MCAN_IE_BOE_Pos)                  /* (MCAN_IE) Bus_Off Status Interrupt Enable Mask */
#define MCAN_IE_BOE                         MCAN_IE_BOE_Msk                                /* (MCAN_IE) Bus_Off Status Interrupt Enable */
#define MCAN_IE_WDIE_Pos                    26                                             /* (MCAN_IE) Watchdog Interrupt Enable Position */
#define MCAN_IE_WDIE_Msk                    (_U_(0x1) << MCAN_IE_WDIE_Pos)                 /* (MCAN_IE) Watchdog Interrupt Enable Mask */
#define MCAN_IE_WDIE                        MCAN_IE_WDIE_Msk                               /* (MCAN_IE) Watchdog Interrupt Enable */
#define MCAN_IE_CRCEE_Pos                   27                                             /* (MCAN_IE) CRC Error Interrupt Enable Position */
#define MCAN_IE_CRCEE_Msk                   (_U_(0x1) << MCAN_IE_CRCEE_Pos)                /* (MCAN_IE) CRC Error Interrupt Enable Mask */
#define MCAN_IE_CRCEE                       MCAN_IE_CRCEE_Msk                              /* (MCAN_IE) CRC Error Interrupt Enable */
#define MCAN_IE_PEDE_Pos                    28                                             /* (MCAN_IE) Protocol Error in Data Phase Enable Position */
#define MCAN_IE_PEDE_Msk                    (_U_(0x1) << MCAN_IE_PEDE_Pos)                 /* (MCAN_IE) Protocol Error in Data Phase Enable Mask */
#define MCAN_IE_PEDE                        MCAN_IE_PEDE_Msk                               /* (MCAN_IE) Protocol Error in Data Phase Enable */
#define MCAN_IE_ARAE_Pos                    29                                             /* (MCAN_IE) Access to Reserved Address Enable Position */
#define MCAN_IE_ARAE_Msk                    (_U_(0x1) << MCAN_IE_ARAE_Pos)                 /* (MCAN_IE) Access to Reserved Address Enable Mask */
#define MCAN_IE_ARAE                        MCAN_IE_ARAE_Msk                               /* (MCAN_IE) Access to Reserved Address Enable */

/* MCAN_ILS - Interrupt Line Select Register - 0x58 */
#define MCAN_ILS_RF0NL_Pos                  0                                              /* (MCAN_ILS) Receive FIFO 0 New Message Interrupt Line Position */
#define MCAN_ILS_RF0NL_Msk                  (_U_(0x1) << MCAN_ILS_RF0NL_Pos)               /* (MCAN_ILS) Receive FIFO 0 New Message Interrupt Line Mask */
#define MCAN_ILS_RF0NL                      MCAN_ILS_RF0NL_Msk                             /* (MCAN_ILS) Receive FIFO 0 New Message Interrupt Line */
#define MCAN_ILS_RF0WL_Pos                  1                                              /* (MCAN_ILS) Receive FIFO 0 Watermark Reached Interrupt Line Position */
#define MCAN_ILS_RF0WL_Msk                  (_U_(0x1) << MCAN_ILS_RF0WL_Pos)               /* (MCAN_ILS) Receive FIFO 0 Watermark Reached Interrupt Line Mask */
#define MCAN_ILS_RF0WL                      MCAN_ILS_RF0WL_Msk                             /* (MCAN_ILS) Receive FIFO 0 Watermark Reached Interrupt Line */
#define MCAN_ILS_RF0FL_Pos                  2                                              /* (MCAN_ILS) Receive FIFO 0 Full Interrupt Line Position */
#define MCAN_ILS_RF0FL_Msk                  (_U_(0x1) << MCAN_ILS_RF0FL_Pos)               /* (MCAN_ILS) Receive FIFO 0 Full Interrupt Line Mask */
#define MCAN_ILS_RF0FL                      MCAN_ILS_RF0FL_Msk                             /* (MCAN_ILS) Receive FIFO 0 Full Interrupt Line */
#define MCAN_ILS_RF0LL_Pos                  3                                              /* (MCAN_ILS) Receive FIFO 0 Message Lost Interrupt Line Position */
#define MCAN_ILS_RF0LL_Msk                  (_U_(0x1) << MCAN_ILS_RF0LL_Pos)               /* (MCAN_ILS) Receive FIFO 0 Message Lost Interrupt Line Mask */
#define MCAN_ILS_RF0LL                      MCAN_ILS_RF0LL_Msk                             /* (MCAN_ILS) Receive FIFO 0 Message Lost Interrupt Line */
#define MCAN_ILS_RF1NL_Pos                  4                                              /* (MCAN_ILS) Receive FIFO 1 New Message Interrupt Line Position */
#define MCAN_ILS_RF1NL_Msk                  (_U_(0x1) << MCAN_ILS_RF1NL_Pos)               /* (MCAN_ILS) Receive FIFO 1 New Message Interrupt Line Mask */
#define MCAN_ILS_RF1NL                      MCAN_ILS_RF1NL_Msk                             /* (MCAN_ILS) Receive FIFO 1 New Message Interrupt Line */
#define MCAN_ILS_RF1WL_Pos                  5                                              /* (MCAN_ILS) Receive FIFO 1 Watermark Reached Interrupt Line Position */
#define MCAN_ILS_RF1WL_Msk                  (_U_(0x1) << MCAN_ILS_RF1WL_Pos)               /* (MCAN_ILS) Receive FIFO 1 Watermark Reached Interrupt Line Mask */
#define MCAN_ILS_RF1WL                      MCAN_ILS_RF1WL_Msk                             /* (MCAN_ILS) Receive FIFO 1 Watermark Reached Interrupt Line */
#define MCAN_ILS_RF1FL_Pos                  6                                              /* (MCAN_ILS) Receive FIFO 1 Full Interrupt Line Position */
#define MCAN_ILS_RF1FL_Msk                  (_U_(0x1) << MCAN_ILS_RF1FL_Pos)               /* (MCAN_ILS) Receive FIFO 1 Full Interrupt Line Mask */
#define MCAN_ILS_RF1FL                      MCAN_ILS_RF1FL_Msk                             /* (MCAN_ILS) Receive FIFO 1 Full Interrupt Line */
#define MCAN_ILS_RF1LL_Pos                  7                                              /* (MCAN_ILS) Receive FIFO 1 Message Lost Interrupt Line Position */
#define MCAN_ILS_RF1LL_Msk                  (_U_(0x1) << MCAN_ILS_RF1LL_Pos)               /* (MCAN_ILS) Receive FIFO 1 Message Lost Interrupt Line Mask */
#define MCAN_ILS_RF1LL                      MCAN_ILS_RF1LL_Msk                             /* (MCAN_ILS) Receive FIFO 1 Message Lost Interrupt Line */
#define MCAN_ILS_HPML_Pos                   8                                              /* (MCAN_ILS) High Priority Message Interrupt Line Position */
#define MCAN_ILS_HPML_Msk                   (_U_(0x1) << MCAN_ILS_HPML_Pos)                /* (MCAN_ILS) High Priority Message Interrupt Line Mask */
#define MCAN_ILS_HPML                       MCAN_ILS_HPML_Msk                              /* (MCAN_ILS) High Priority Message Interrupt Line */
#define MCAN_ILS_TCL_Pos                    9                                              /* (MCAN_ILS) Transmission Completed Interrupt Line Position */
#define MCAN_ILS_TCL_Msk                    (_U_(0x1) << MCAN_ILS_TCL_Pos)                 /* (MCAN_ILS) Transmission Completed Interrupt Line Mask */
#define MCAN_ILS_TCL                        MCAN_ILS_TCL_Msk                               /* (MCAN_ILS) Transmission Completed Interrupt Line */
#define MCAN_ILS_TCFL_Pos                   10                                             /* (MCAN_ILS) Transmission Cancellation Finished Interrupt Line Position */
#define MCAN_ILS_TCFL_Msk                   (_U_(0x1) << MCAN_ILS_TCFL_Pos)                /* (MCAN_ILS) Transmission Cancellation Finished Interrupt Line Mask */
#define MCAN_ILS_TCFL                       MCAN_ILS_TCFL_Msk                              /* (MCAN_ILS) Transmission Cancellation Finished Interrupt Line */
#define MCAN_ILS_TFEL_Pos                   11                                             /* (MCAN_ILS) Tx FIFO Empty Interrupt Line Position */
#define MCAN_ILS_TFEL_Msk                   (_U_(0x1) << MCAN_ILS_TFEL_Pos)                /* (MCAN_ILS) Tx FIFO Empty Interrupt Line Mask */
#define MCAN_ILS_TFEL                       MCAN_ILS_TFEL_Msk                              /* (MCAN_ILS) Tx FIFO Empty Interrupt Line */
#define MCAN_ILS_TEFNL_Pos                  12                                             /* (MCAN_ILS) Tx Event FIFO New Entry Interrupt Line Position */
#define MCAN_ILS_TEFNL_Msk                  (_U_(0x1) << MCAN_ILS_TEFNL_Pos)               /* (MCAN_ILS) Tx Event FIFO New Entry Interrupt Line Mask */
#define MCAN_ILS_TEFNL                      MCAN_ILS_TEFNL_Msk                             /* (MCAN_ILS) Tx Event FIFO New Entry Interrupt Line */
#define MCAN_ILS_TEFWL_Pos                  13                                             /* (MCAN_ILS) Tx Event FIFO Watermark Reached Interrupt Line Position */
#define MCAN_ILS_TEFWL_Msk                  (_U_(0x1) << MCAN_ILS_TEFWL_Pos)               /* (MCAN_ILS) Tx Event FIFO Watermark Reached Interrupt Line Mask */
#define MCAN_ILS_TEFWL                      MCAN_ILS_TEFWL_Msk                             /* (MCAN_ILS) Tx Event FIFO Watermark Reached Interrupt Line */
#define MCAN_ILS_TEFFL_Pos                  14                                             /* (MCAN_ILS) Tx Event FIFO Full Interrupt Line Position */
#define MCAN_ILS_TEFFL_Msk                  (_U_(0x1) << MCAN_ILS_TEFFL_Pos)               /* (MCAN_ILS) Tx Event FIFO Full Interrupt Line Mask */
#define MCAN_ILS_TEFFL                      MCAN_ILS_TEFFL_Msk                             /* (MCAN_ILS) Tx Event FIFO Full Interrupt Line */
#define MCAN_ILS_TEFLL_Pos                  15                                             /* (MCAN_ILS) Tx Event FIFO Event Lost Interrupt Line Position */
#define MCAN_ILS_TEFLL_Msk                  (_U_(0x1) << MCAN_ILS_TEFLL_Pos)               /* (MCAN_ILS) Tx Event FIFO Event Lost Interrupt Line Mask */
#define MCAN_ILS_TEFLL                      MCAN_ILS_TEFLL_Msk                             /* (MCAN_ILS) Tx Event FIFO Event Lost Interrupt Line */
#define MCAN_ILS_TSWL_Pos                   16                                             /* (MCAN_ILS) Timestamp Wraparound Interrupt Line Position */
#define MCAN_ILS_TSWL_Msk                   (_U_(0x1) << MCAN_ILS_TSWL_Pos)                /* (MCAN_ILS) Timestamp Wraparound Interrupt Line Mask */
#define MCAN_ILS_TSWL                       MCAN_ILS_TSWL_Msk                              /* (MCAN_ILS) Timestamp Wraparound Interrupt Line */
#define MCAN_ILS_MRAFL_Pos                  17                                             /* (MCAN_ILS) Message RAM Access Failure Interrupt Line Position */
#define MCAN_ILS_MRAFL_Msk                  (_U_(0x1) << MCAN_ILS_MRAFL_Pos)               /* (MCAN_ILS) Message RAM Access Failure Interrupt Line Mask */
#define MCAN_ILS_MRAFL                      MCAN_ILS_MRAFL_Msk                             /* (MCAN_ILS) Message RAM Access Failure Interrupt Line */
#define MCAN_ILS_TOOL_Pos                   18                                             /* (MCAN_ILS) Timeout Occurred Interrupt Line Position */
#define MCAN_ILS_TOOL_Msk                   (_U_(0x1) << MCAN_ILS_TOOL_Pos)                /* (MCAN_ILS) Timeout Occurred Interrupt Line Mask */
#define MCAN_ILS_TOOL                       MCAN_ILS_TOOL_Msk                              /* (MCAN_ILS) Timeout Occurred Interrupt Line */
#define MCAN_ILS_DRXL_Pos                   19                                             /* (MCAN_ILS) Message stored to Dedicated Receive Buffer Interrupt Line Position */
#define MCAN_ILS_DRXL_Msk                   (_U_(0x1) << MCAN_ILS_DRXL_Pos)                /* (MCAN_ILS) Message stored to Dedicated Receive Buffer Interrupt Line Mask */
#define MCAN_ILS_DRXL                       MCAN_ILS_DRXL_Msk                              /* (MCAN_ILS) Message stored to Dedicated Receive Buffer Interrupt Line */
#define MCAN_ILS_BECL_Pos                   20                                             /* (MCAN_ILS) Bit Error Corrected Interrupt Line Position */
#define MCAN_ILS_BECL_Msk                   (_U_(0x1) << MCAN_ILS_BECL_Pos)                /* (MCAN_ILS) Bit Error Corrected Interrupt Line Mask */
#define MCAN_ILS_BECL                       MCAN_ILS_BECL_Msk                              /* (MCAN_ILS) Bit Error Corrected Interrupt Line */
#define MCAN_ILS_BEUL_Pos                   21                                             /* (MCAN_ILS) Bit Error Uncorrected Interrupt Line Position */
#define MCAN_ILS_BEUL_Msk                   (_U_(0x1) << MCAN_ILS_BEUL_Pos)                /* (MCAN_ILS) Bit Error Uncorrected Interrupt Line Mask */
#define MCAN_ILS_BEUL                       MCAN_ILS_BEUL_Msk                              /* (MCAN_ILS) Bit Error Uncorrected Interrupt Line */
#define MCAN_ILS_ELOL_Pos                   22                                             /* (MCAN_ILS) Error Logging Overflow Interrupt Line Position */
#define MCAN_ILS_ELOL_Msk                   (_U_(0x1) << MCAN_ILS_ELOL_Pos)                /* (MCAN_ILS) Error Logging Overflow Interrupt Line Mask */
#define MCAN_ILS_ELOL                       MCAN_ILS_ELOL_Msk                              /* (MCAN_ILS) Error Logging Overflow Interrupt Line */
#define MCAN_ILS_EPL_Pos                    23                                             /* (MCAN_ILS) Error Passive Interrupt Line Position */
#define MCAN_ILS_EPL_Msk                    (_U_(0x1) << MCAN_ILS_EPL_Pos)                 /* (MCAN_ILS) Error Passive Interrupt Line Mask */
#define MCAN_ILS_EPL                        MCAN_ILS_EPL_Msk                               /* (MCAN_ILS) Error Passive Interrupt Line */
#define MCAN_ILS_EWL_Pos                    24                                             /* (MCAN_ILS) Warning Status Interrupt Line Position */
#define MCAN_ILS_EWL_Msk                    (_U_(0x1) << MCAN_ILS_EWL_Pos)                 /* (MCAN_ILS) Warning Status Interrupt Line Mask */
#define MCAN_ILS_EWL                        MCAN_ILS_EWL_Msk                               /* (MCAN_ILS) Warning Status Interrupt Line */
#define MCAN_ILS_BOL_Pos                    25                                             /* (MCAN_ILS) Bus_Off Status Interrupt Line Position */
#define MCAN_ILS_BOL_Msk                    (_U_(0x1) << MCAN_ILS_BOL_Pos)                 /* (MCAN_ILS) Bus_Off Status Interrupt Line Mask */
#define MCAN_ILS_BOL                        MCAN_ILS_BOL_Msk                               /* (MCAN_ILS) Bus_Off Status Interrupt Line */
#define MCAN_ILS_WDIL_Pos                   26                                             /* (MCAN_ILS) Watchdog Interrupt Line Position */
#define MCAN_ILS_WDIL_Msk                   (_U_(0x1) << MCAN_ILS_WDIL_Pos)                /* (MCAN_ILS) Watchdog Interrupt Line Mask */
#define MCAN_ILS_WDIL                       MCAN_ILS_WDIL_Msk                              /* (MCAN_ILS) Watchdog Interrupt Line */
#define MCAN_ILS_CRCEL_Pos                  27                                             /* (MCAN_ILS) CRC Error Interrupt Line Position */
#define MCAN_ILS_CRCEL_Msk                  (_U_(0x1) << MCAN_ILS_CRCEL_Pos)               /* (MCAN_ILS) CRC Error Interrupt Line Mask */
#define MCAN_ILS_CRCEL                      MCAN_ILS_CRCEL_Msk                             /* (MCAN_ILS) CRC Error Interrupt Line */
#define MCAN_ILS_PEDL_Pos                   28                                             /* (MCAN_ILS) Protocol Error in Data Phase Line Position */
#define MCAN_ILS_PEDL_Msk                   (_U_(0x1) << MCAN_ILS_PEDL_Pos)                /* (MCAN_ILS) Protocol Error in Data Phase Line Mask */
#define MCAN_ILS_PEDL                       MCAN_ILS_PEDL_Msk                              /* (MCAN_ILS) Protocol Error in Data Phase Line */
#define MCAN_ILS_ARAL_Pos                   29                                             /* (MCAN_ILS) Access to Reserved Address Line Position */
#define MCAN_ILS_ARAL_Msk                   (_U_(0x1) << MCAN_ILS_ARAL_Pos)                /* (MCAN_ILS) Access to Reserved Address Line Mask */
#define MCAN_ILS_ARAL                       MCAN_ILS_ARAL_Msk                              /* (MCAN_ILS) Access to Reserved Address Line */

/* MCAN_ILE - Interrupt Line Enable Register - 0x5C */
#define MCAN_ILE_EINT0_Pos                   0                                              /* (MCAN_ILE) Enable Interrupt Line 0 Position */
#define MCAN_ILE_EINT0_Msk                   (_U_(0x3) << MCAN_ILE_EINT0_Pos)               /* (MCAN_ILE) Enable Interrupt Line 0 Mask */
#define MCAN_ILE_EINT0                       MCAN_ILE_EINT0_Msk                             /* (MCAN_ILE) Enable Interrupt Line 0 */
#define MCAN_ILE_EINT1_Pos                   1                                              /* (MCAN_ILE) Enable Interrupt Line 1 Position */
#define MCAN_ILE_EINT1_Msk                   (_U_(0x3) << MCAN_ILE_EINT1_Pos)               /* (MCAN_ILE) Enable Interrupt Line 1 Mask */
#define MCAN_ILE_EINT1                       MCAN_ILE_EINT1_Msk                             /* (MCAN_ILE) Enable Interrupt Line 1 */

/* MCAN_GFC - Global Filter Configuration Register - 0x80 */
#define MCAN_GFC_RRFE_Pos                   0                                                       /* (MCAN_GFC) Reject Remote Frames Extended Position */
#define MCAN_GFC_RRFE_Msk                   (_U_(0x1) << MCAN_GFC_RRFE_Pos)                         /* (MCAN_GFC) Reject Remote Frames Extended Mask */
#define MCAN_GFC_RRFE                       MCAN_GFC_RRFE_Msk                                       /* (MCAN_GFC) Reject Remote Frames Extended */
#define MCAN_GFC_RRFS_Pos                   1                                                       /* (MCAN_GFC) Reject Remote Frames Standard Position */
#define MCAN_GFC_RRFS_Msk                   (_U_(0x1) << MCAN_GFC_RRFS_Pos)                         /* (MCAN_GFC) Reject Remote Frames Standard Mask */
#define MCAN_GFC_RRFS                       MCAN_GFC_RRFS_Msk                                       /* (MCAN_GFC) Reject Remote Frames Standard */
#define MCAN_GFC_ANFE_Pos                   2                                                       /* (MCAN_GFC) Accept Non-matching Frames Extended Position */
#define MCAN_GFC_ANFE_Msk                   (_U_(0x3) << MCAN_GFC_ANFE_Pos)                         /* (MCAN_GFC) Accept Non-matching Frames Extended Mask */
#define MCAN_GFC_ANFE(value)                (MCAN_GFC_ANFE_Msk & ((value) << MCAN_GFC_ANFE_Pos))    /* (MCAN_GFC) Accept Non-matching Frames Extended */
#define MCAN_GFC_ANFS_Pos                   4                                                       /* (MCAN_GFC) Accept Non-matching Frames Standard Position */
#define MCAN_GFC_ANFS_Msk                   (_U_(0x3) << MCAN_GFC_ANFS_Pos)                         /* (MCAN_GFC) Accept Non-matching Frames Standard Mask */
#define MCAN_GFC_ANFS(value)                (MCAN_GFC_ANFS_Msk & ((value) << MCAN_GFC_ANFS_Pos))    /* (MCAN_GFC) Accept Non-matching Frames Standard */

/* MCAN_SIDFC - Standard ID Filter Configuration Register - 0x84 */
#define MCAN_SIDFC_FLSSA_Pos                2                                                           /* (MCAN_SIDFC) Filter List Standard Start Address Position */
#define MCAN_SIDFC_FLSSA_Msk                (_U_(0x3FFF) << MCAN_SIDFC_FLSSA_Pos)                       /* (MCAN_SIDFC) Filter List Standard Start Address Mask */
#define MCAN_SIDFC_FLSSA(value)             (MCAN_SIDFC_FLSSA_Msk & ((value) << MCAN_SIDFC_FLSSA_Pos))  /* (MCAN_SIDFC) Filter List Standard Start Address */
#define MCAN_SIDFC_LSS_Pos                  16                                                          /* (MCAN_SIDFC) List Size Standard Position */
#define MCAN_SIDFC_LSS_Msk                  (_U_(0xFF) << MCAN_SIDFC_LSS_Pos)                           /* (MCAN_SIDFC) List Size Standard Mask */
#define MCAN_SIDFC_LSS(value)               (MCAN_SIDFC_LSS_Msk & ((value) << MCAN_SIDFC_LSS_Pos))      /* (MCAN_SIDFC) List Size Standard */

/* MCAN_XIDFC - Extended ID Filter Configuration Register - 0x88 */
#define MCAN_XIDFC_FLESA_Pos                2                                                           /* (MCAN_XIDFC) Filter List Extended Start Address Position */
#define MCAN_XIDFC_FLESA_Msk                (_U_(0x3FFF) << MCAN_XIDFC_FLESA_Pos)                       /* (MCAN_XIDFC) Filter List Extended Start Address Mask */
#define MCAN_XIDFC_FLESA(value)             (MCAN_XIDFC_FLESA_Msk & ((value) << MCAN_XIDFC_FLESA_Pos))  /* (MCAN_XIDFC) Filter List Extended Start Address */
#define MCAN_XIDFC_LSE_Pos                  16                                                          /* (MCAN_XIDFC) List Size Extended Position */
#define MCAN_XIDFC_LSE_Msk                  (_U_(0x7F) << MCAN_XIDFC_LSE_Pos)                           /* (MCAN_XIDFC) List Size Extended Mask */
#define MCAN_XIDFC_LSE(value)               (MCAN_XIDFC_LSE_Msk & ((value) << MCAN_XIDFC_LSE_Pos))      /* (MCAN_XIDFC) List Size Extended */

/* MCAN_XIDAM - Extended ID AND Mask Register - 0x90 */
#define MCAN_XIDAM_EIDM_Pos                 0                                                           /* (MCAN_XIDAM) Extended ID Mask Position */
#define MCAN_XIDAM_EIDM_Msk                 (_U_(0x1FFFFFFF) << MCAN_XIDAM_EIDM_Pos)                    /* (MCAN_XIDAM) Extended ID Mask Mask */
#define MCAN_XIDAM_EIDM(value)              (MCAN_XIDAM_EIDM_Msk & ((value) << MCAN_XIDAM_EIDM_Pos))    /* (MCAN_XIDAM) Extended ID Mask */

/* MCAN_RXF0C - Receive FIFO 0 Configuration Register - 0xA0 */
#define MCAN_RXF0C_F0SA_Pos                 2                                                           /* (MCAN_RXF0C) Receive FIFO 0 Start Address Position */
#define MCAN_RXF0C_F0SA_Msk                 (_U_(0x3FFF) << MCAN_RXF0C_F0SA_Pos)                        /* (MCAN_RXF0C) Receive FIFO 0 Start Address Mask */
#define MCAN_RXF0C_F0SA(value)              (MCAN_RXF0C_F0SA_Msk & ((value) << MCAN_RXF0C_F0SA_Pos))    /* (MCAN_RXF0C) Receive FIFO 0 Start Address */
#define MCAN_RXF0C_F0S_Pos                  16                                                          /* (MCAN_RXF0C) Receive FIFO 0 Start Address Position */
#define MCAN_RXF0C_F0S_Msk                  (_U_(0x7F) << MCAN_RXF0C_F0S_Pos)                           /* (MCAN_RXF0C) Receive FIFO 0 Start Address Mask */
#define MCAN_RXF0C_F0S(value)               (MCAN_RXF0C_F0S_Msk & ((value) << MCAN_RXF0C_F0S_Pos))      /* (MCAN_RXF0C) Receive FIFO 0 Start Address */
#define MCAN_RXF0C_F0WM_Pos                 24                                                          /* (MCAN_RXF0C) Receive FIFO 0 Watermark Position */
#define MCAN_RXF0C_F0WM_Msk                 (_U_(0x7F) << MCAN_RXF0C_F0WM_Pos)                          /* (MCAN_RXF0C) Receive FIFO 0 Watermark Mask */
#define MCAN_RXF0C_F0WM(value)              (MCAN_RXF0C_F0WM_Msk & ((value) << MCAN_RXF0C_F0WM_Pos))    /* (MCAN_RXF0C) Receive FIFO 0 Watermark Mask */
#define MCAN_RXF0C_F0OM_Pos                 31                                                          /* (MCAN_RXF0C) FIFO 0 Operation Mode Position */
#define MCAN_RXF0C_F0OM_Msk                 (_U_(0x1) << MCAN_RXF0C_F0OM_Pos)                           /* (MCAN_RXF0C) FIFO 0 Operation Mode Mask */
#define MCAN_RXF0C_F0OM                     MCAN_RXF0C_F0OM_Msk                                         /* (MCAN_RXF0C) FIFO 0 Operation Mode */

/* MCAN_RXF0S - Receive FIFO 0 Status Register - 0xA4 */
#define MCAN_RXF0S_F0FL_Pos                 0                                                           /* (MCAN_RXF0S) Receive FIFO 0 Fill Level Position */
#define MCAN_RXF0S_F0FL_Msk                 (_U_(0x7F) << MCAN_RXF0S_F0FL_Pos)                          /* (MCAN_RXF0S) Receive FIFO 0 Fill Level Mask */
#define MCAN_RXF0S_F0FL(value)              (MCAN_RXF0S_F0FL_Msk & ((value) << MCAN_RXF0S_F0FL_Pos))    /* (MCAN_RXF0S) Receive FIFO 0 Fill Level */
#define MCAN_RXF0S_F0GI_Pos                 8                                                           /* (MCAN_RXF0S) Receive FIFO 0 Get Index Position */
#define MCAN_RXF0S_F0GI_Msk                 (_U_(0x3F) << MCAN_RXF0S_F0GI_Pos)                          /* (MCAN_RXF0S) Receive FIFO 0 Get Index Mask */
#define MCAN_RXF0S_F0GI(value)              (MCAN_RXF0S_F0GI_Msk & ((value) << MCAN_RXF0S_F0GI_Pos))    /* (MCAN_RXF0S) Receive FIFO 0 Get Index */
#define MCAN_RXF0S_F0PI_Pos                 16                                                          /* (MCAN_RXF0S) Receive FIFO 0 Put Index Position */
#define MCAN_RXF0S_F0PI_Msk                 (_U_(0x3F) << MCAN_RXF0S_F0PI_Pos)                          /* (MCAN_RXF0S) Receive FIFO 0 Put Index Mask */
#define MCAN_RXF0S_F0PI(value)              (MCAN_RXF0S_F0PI_Msk & ((value) << MCAN_RXF0S_F0PI_Pos))    /* (MCAN_RXF0S) Receive FIFO 0 Put Index */
#define MCAN_RXF0S_F0F_Pos                  24                                                          /* (MCAN_RXF0S) Receive FIFO 0 Fill Level Position */
#define MCAN_RXF0S_F0F_Msk                  (_U_(0x1) << MCAN_RXF0S_F0F_Pos)                            /* (MCAN_RXF0S) Receive FIFO 0 Fill Level Mask */
#define MCAN_RXF0S_F0F                      MCAN_RXF0S_F0F_Msk                                          /* (MCAN_RXF0S) Receive FIFO 0 Fill Level */
#define MCAN_RXF0S_RF0L_Pos                 25                                                          /* (MCAN_RXF0S) Receive FIFO 0 Message Lost Position */
#define MCAN_RXF0S_RF0L_Msk                 (_U_(0x1) << MCAN_RXF0S_RF0L_Pos)                           /* (MCAN_RXF0S) Receive FIFO 0 Message Lost Mask */
#define MCAN_RXF0S_RF0L                     MCAN_RXF0S_RF0L_Msk                                         /* (MCAN_RXF0S) Receive FIFO 0 Message Lost */

/* MCAN_RXF0A - Receive FIFO 0 Acknowledge Register - 0xA8 */
#define MCAN_RXF0A_F0AI_Pos                 0                                                           /* (MCAN_RXF0A) Receive FIFO 0 Acknowledge Index Position */
#define MCAN_RXF0A_F0AI_Msk                 (_U_(0x3F) << MCAN_RXF0A_F0AI_Pos)                          /* (MCAN_RXF0A) Receive FIFO 0 Acknowledge Index Mask */
#define MCAN_RXF0A_F0AI(value)              (MCAN_RXF0A_F0AI_Msk & ((value) << MCAN_RXF0A_F0AI_Pos))    /* (MCAN_RXF0A) Receive FIFO 0 Acknowledge Index */

/* MCAN_RXBC - Receive Rx Buffer Configuration Register - 0xAC */
#define MCAN_RXBC_RBSA_Pos                  2                                                           /* (MCAN_RXBC) Receive Buffer Start Address Position */
#define MCAN_RXBC_RBSA_Msk                  (_U_(0x3FFF) << MCAN_RXBC_RBSA_Pos)                         /* (MCAN_RXBC) Receive Buffer Start Address Mask */
#define MCAN_RXBC_RBSA(value)               (MCAN_RXBC_RBSA_Msk & ((value) << MCAN_RXBC_RBSA_Pos))      /* (MCAN_RXBC) Receive Buffer Start Address */

/* MCAN_RXF1C - Receive FIFO 1 Configuration Register - 0xB0 */
#define MCAN_RXF1C_F1SA_Pos                 2                                                           /* (MCAN_RXF1C) Receive FIFO 1 Start Address Position */
#define MCAN_RXF1C_F1SA_Msk                 (_U_(0x3FFF) << MCAN_RXF1C_F1SA_Pos)                        /* (MCAN_RXF1C) Receive FIFO 1 Start Address Mask */
#define MCAN_RXF1C_F1SA(value)              (MCAN_RXF1C_F1SA_Msk & ((value) << MCAN_RXF1C_F1SA_Pos))    /* (MCAN_RXF1C) Receive FIFO 1 Start Address */
#define MCAN_RXF1C_F1S_Pos                  16                                                          /* (MCAN_RXF1C) Receive FIFO 1 Start Address Position */
#define MCAN_RXF1C_F1S_Msk                  (_U_(0x7F) << MCAN_RXF1C_F1S_Pos)                           /* (MCAN_RXF1C) Receive FIFO 1 Start Address Mask */
#define MCAN_RXF1C_F1S(value)               (MCAN_RXF1C_F1S_Msk & ((value) << MCAN_RXF1C_F1S_Pos))      /* (MCAN_RXF1C) Receive FIFO 1 Start Address */
#define MCAN_RXF1C_F1WM_Pos                 24                                                          /* (MCAN_RXF1C) Receive FIFO 1 Watermark Position */
#define MCAN_RXF1C_F1WM_Msk                 (_U_(0x7F) << MCAN_RXF1C_F1WM_Pos)                          /* (MCAN_RXF1C) Receive FIFO 1 Watermark Mask */
#define MCAN_RXF1C_F1WM(value)              (MCAN_RXF1C_F1WM_Msk & ((value) << MCAN_RXF1C_F1WM_Pos))    /* (MCAN_RXF1C) Receive FIFO 1 Watermark */
#define MCAN_RXF1C_F1OM_Pos                 31                                                          /* (MCAN_RXF1C) FIFO 1 Operation Mode Position */

/* MCAN_RXF1S - Receive FIFO 1 Status Register - 0xB4 */
#define MCAN_RXF1S_F1FL_Pos                 0                                                           /* (MCAN_RXF1S) Receive FIFO 1 Fill Level Position */
#define MCAN_RXF1S_F1FL_Msk                 (_U_(0x7F) << MCAN_RXF1S_F1FL_Pos)                          /* (MCAN_RXF1S) Receive FIFO 1 Fill Level Mask */
#define MCAN_RXF1S_F1FL(value)              (MCAN_RXF1S_F1FL_Msk & ((value) << MCAN_RXF1S_F1FL_Pos))    /* (MCAN_RXF1S) Receive FIFO 1 Fill Level */
#define MCAN_RXF1S_F1GI_Pos                 8                                                           /* (MCAN_RXF1S) Receive FIFO 1 Get Index Position */
#define MCAN_RXF1S_F1GI_Msk                 (_U_(0x3F) << MCAN_RXF1S_F1GI_Pos)                          /* (MCAN_RXF1S) Receive FIFO 1 Get Index Mask */
#define MCAN_RXF1S_F1GI(value)              (MCAN_RXF1S_F1GI_Msk & ((value) << MCAN_RXF1S_F1GI_Pos))    /* (MCAN_RXF1S) Receive FIFO 1 Get Index */
#define MCAN_RXF1S_F1PI_Pos                 16                                                          /* (MCAN_RXF1S) Receive FIFO 1 Put Index Position */
#define MCAN_RXF1S_F1PI_Msk                 (_U_(0x3F) << MCAN_RXF1S_F1PI_Pos)                          /* (MCAN_RXF1S) Receive FIFO 1 Put Index Mask */
#define MCAN_RXF1S_F1PI(value)              (MCAN_RXF1S_F1PI_Msk & ((value) << MCAN_RXF1S_F1PI_Pos))    /* (MCAN_RXF1S) Receive FIFO 1 Put Index */
#define MCAN_RXF1S_F1F_Pos                  24                                                          /* (MCAN_RXF1S) Receive FIFO 1 Fill Level Position */
#define MCAN_RXF1S_F1F_Msk                  (_U_(0x1) << MCAN_RXF1S_F1F_Pos)                            /* (MCAN_RXF1S) Receive FIFO 1 Fill Level Mask */
#define MCAN_RXF1S_F1F                      MCAN_RXF1S_F1F_Msk                                          /* (MCAN_RXF1S) Receive FIFO 1 Fill Level */
#define MCAN_RXF1S_RF1L_Pos                 25                                                          /* (MCAN_RXF1S) Receive FIFO 1 Message Lost Position */
#define MCAN_RXF1S_RF1L_Msk                 (_U_(0x1) << MCAN_RXF1S_RF1L_Pos)                           /* (MCAN_RXF1S) Receive FIFO 1 Message Lost Mask */
#define MCAN_RXF1S_RF1L                     MCAN_RXF1S_RF1L_Msk                                         /* (MCAN_RXF1S) Receive FIFO 1 Message Lost */
#define MCAN_RXF1S_DMS_Pos                  30                                                          /* (MCAN_RXF1S) Debug Message Status Position */
#define MCAN_RXF1S_DMS_Msk                  (_U_(0x3) << MCAN_RXF1S_DMS_Pos)                            /* (MCAN_RXF1S) Debug Message Status Mask */
#define MCAN_RXF1S_DMS(value)               (MCAN_RXF1S_DMS_Msk & ((value) << MCAN_RXF1S_DMS_Pos))      /* (MCAN_RXF1S) Debug Message Status */

/* MCAN_RXF1A - Receive FIFO 1 Acknowledge Register - 0xB8 */
#define MCAN_RXF1A_F1AI_Pos                 0                                                           /* (MCAN_RXF1A) Receive FIFO 1 Acknowledge Index Position */
#define MCAN_RXF1A_F1AI_Msk                 (_U_(0x3F) << MCAN_RXF1A_F1AI_Pos)                          /* (MCAN_RXF1A) Receive FIFO 1 Acknowledge Index Mask */
#define MCAN_RXF1A_F1AI(value)              (MCAN_RXF1A_F1AI_Msk & ((value) << MCAN_RXF1A_F1AI_Pos))    /* (MCAN_RXF1A) Receive FIFO 1 Acknowledge Index */

/* MCAN_RXESC - Receive Buffer / FIFO Element Size Configuration Register - 0xBC */
#define MCAN_RXESC_F0DS_Pos                 0                                                           /* (MCAN_RXESC) Receive FIFO 0 Data Field Size Position */
#define MCAN_RXESC_F0DS_Msk                 (_U_(0x7) << MCAN_RXESC_F0DS_Pos)                           /* (MCAN_RXESC) Receive FIFO 0 Data Field Size Mask */
#define MCAN_RXESC_F0DS(value)              (MCAN_RXESC_F0DS_Msk & ((value) << MCAN_RXESC_F0DS_Pos))    /* (MCAN_RXESC) Receive FIFO 0 Data Field Size */
#define MCAN_RXESC_F1DS_Pos                 4                                                           /* (MCAN_RXESC) Receive FIFO 1 Data Field Size Position */
#define MCAN_RXESC_F1DS_Msk                 (_U_(0x7) << MCAN_RXESC_F1DS_Pos)                           /* (MCAN_RXESC) Receive FIFO 1 Data Field Size Mask */
#define MCAN_RXESC_F1DS(value)              (MCAN_RXESC_F1DS_Msk & ((value) << MCAN_RXESC_F1DS_Pos))    /* (MCAN_RXESC) Receive FIFO 1 Data Field Size */
#define MCAN_RXESC_RBDS_Pos                 8                                                           /* (MCAN_RXESC) Receive Buffer Data Field Size Position */
#define MCAN_RXESC_RBDS_Msk                 (_U_(0x7) << MCAN_RXESC_RBDS_Pos)                           /* (MCAN_RXESC) Receive Buffer Data Field Size Mask */
#define MCAN_RXESC_RBDS(value)              (MCAN_RXESC_RBDS_Msk & ((value) << MCAN_RXESC_RBDS_Pos))    /* (MCAN_RXESC) Receive Buffer Data Field Size */

/* MCAN_TXBC - Transmit Buffer Configuration Register - 0xC0 */
#define MCAN_TXBC_TBSA_Pos                  2                                                           /* (MCAN_TXBC) Tx Buffers Start Address Position */
#define MCAN_TXBC_TBSA_Msk                  (_U_(0x3FFF) << MCAN_TXBC_TBSA_Pos)                         /* (MCAN_TXBC) Tx Buffers Start Address Mask */
#define MCAN_TXBC_TBSA(value)               (MCAN_TXBC_TBSA_Msk & ((value) << MCAN_TXBC_TBSA_Pos))      /* (MCAN_TXBC) Tx Buffers Start Address */
#define MCAN_TXBC_NDTB_Pos                  16                                                          /* (MCAN_TXBC) Number of Dedicated Transmit Buffers Position */
#define MCAN_TXBC_NDTB_Msk                  (_U_(0x3F) << MCAN_TXBC_NDTB_Pos)                           /* (MCAN_TXBC) Number of Dedicated Transmit Buffers Mask */
#define MCAN_TXBC_NDTB(value)               (MCAN_TXBC_NDTB_Msk & ((value) << MCAN_TXBC_NDTB_Pos))      /* (MCAN_TXBC) Number of Dedicated Transmit Buffers */
#define MCAN_TXBC_TFQS_Pos                  24                                                          /* (MCAN_TXBC) Transmit FIFO/Queue Size Position */
#define MCAN_TXBC_TFQS_Msk                  (_U_(0x3F) << MCAN_TXBC_TFQS_Pos)                           /* (MCAN_TXBC) Transmit FIFO/Queue Size Mask */
#define MCAN_TXBC_TFQS(value)               (MCAN_TXBC_TFQS_Msk & ((value) << MCAN_TXBC_TFQS_Pos))      /* (MCAN_TXBC) Transmit FIFO/Queue Size */
#define MCAN_TXBC_TFQM_Pos                  30                                                          /* (MCAN_TXBC) Tx FIFO/Queue Mode Position */
#define MCAN_TXBC_TFQM_Msk                  (_U_(0x1) << MCAN_TXBC_TFQM_Pos)                            /* (MCAN_TXBC) Tx FIFO/Queue Mode Mask */
#define MCAN_TXBC_TFQM                      MCAN_TXBC_TFQM_Msk                                          /* (MCAN_TXBC) Tx FIFO/Queue Mode */

/* MCAN_TXFQS - Transmit FIFO/Queue Status Register - 0xC4 */
#define MCAN_TXFQS_TFFL_Pos                 0                                                           /* (MCAN_TXFQS) Tx FIFO Free Level Position */
#define MCAN_TXFQS_TFFL_Msk                 (_U_(0x3F) << MCAN_TXFQS_TFFL_Pos)                          /* (MCAN_TXFQS) Tx FIFO Free Level Mask */
#define MCAN_TXFQS_TFFL(value)              (MCAN_TXFQS_TFFL_Msk & ((value) << MCAN_TXFQS_TFFL_Pos))    /* (MCAN_TXFQS) Tx FIFO Free Level */
#define MCAN_TXFQS_TFGI_Pos                 8                                                           /* (MCAN_TXFQS) Tx FIFO Get Index Position */
#define MCAN_TXFQS_TFGI_Msk                 (_U_(0x1F) << MCAN_TXFQS_TFGI_Pos)                          /* (MCAN_TXFQS) Tx FIFO Get Index Mask */
#define MCAN_TXFQS_TFGI(value)              (MCAN_TXFQS_TFGI_Msk & ((value) << MCAN_TXFQS_TFGI_Pos))    /* (MCAN_TXFQS) Tx FIFO Get Index */
#define MCAN_TXFQS_TFQPI_Pos                16                                                          /* (MCAN_TXFQS) Tx FIFO/Queue Put Index Position */
#define MCAN_TXFQS_TFQPI_Msk                (_U_(0x1F) << MCAN_TXFQS_TFQPI_Pos)                         /* (MCAN_TXFQS) Tx FIFO/Queue Put Index Mask */
#define MCAN_TXFQS_TFQPI(value)             (MCAN_TXFQS_TFQPI_Msk & ((value) << MCAN_TXFQS_TFQPI_Pos))  /* (MCAN_TXFQS) Tx FIFO/Queue Put Index */
#define MCAN_TXFQS_TFQF_Pos                 21                                                          /* (MCAN_TXFQS) Tx FIFO/Queue Full Position */
#define MCAN_TXFQS_TFQF_Msk                 (_U_(0x1) << MCAN_TXFQS_TFQF_Pos)                           /* (MCAN_TXFQS) Tx FIFO/Queue Full Mask */
#define MCAN_TXFQS_TFQF                     MCAN_TXFQS_TFQF_Msk                                         /* (MCAN_TXFQS) Tx FIFO/Queue Full */

/* MCAN_TXESC - Transmit Buffer Element Size Configuration Register - 0xC8 */
#define MCAN_TXESC_TBDS_Pos                 0                                                           /* (MCAN_TXESC) Tx Buffer Data Field Size Position */
#define MCAN_TXESC_TBDS_Msk                 (_U_(0x7) << MCAN_TXESC_TBDS_Pos)                           /* (MCAN_TXESC) Tx Buffer Data Field Size Mask */
#define MCAN_TXESC_TBDS(value)              (MCAN_TXESC_TBDS_Msk & ((value) << MCAN_TXESC_TBDS_Pos))    /* (MCAN_TXESC) Tx Buffer Data Field Size */

/* MCAN_TXBRP - Transmit Buffer Request Pending Register - 0xCC */
#define MCAN_TXBRP_TRP_Pos                  0                                                           /* (MCAN_TXBRP) Transmission Request Pending Position */
#define MCAN_TXBRP_TRP_Msk                  (_U_(0xFFFFFFFF) << MCAN_TXBRP_TRP_Pos)                     /* (MCAN_TXBRP) Transmission Request Pending Mask */
#define MCAN_TXBRP_TRP(value)               (MCAN_TXBRP_TRP_Msk & ((value) << MCAN_TXBRP_TRP_Pos))      /* (MCAN_TXBRP) Transmission Request Pending */

/* MCAN_TXBAR - Transmit Buffer Add Request Register - 0xD0 */
#define MCAN_TXBAR_AR_Pos                   0                                                           /* (MCAN_TXBAR) Add Request Position */
#define MCAN_TXBAR_AR_Msk                   (_U_(0xFFFFFFFF) << MCAN_TXBAR_AR_Pos)                      /* (MCAN_TXBAR) Add Request Mask */
#define MCAN_TXBAR_AR(value)                (MCAN_TXBAR_AR_Msk & ((value) << MCAN_TXBAR_AR_Pos))        /* (MCAN_TXBAR) Add Request */

/* MCAN_TXBTIE - Transmit Buffer Transmission Interrupt Enable Register - 0xE0 */
#define MCAN_TXBTIE_TIE_Pos                 0                                                           /* (MCAN_TXBTIE) Transmission Interrupt Enable Position */
#define MCAN_TXBTIE_TIE_Msk                 (_U_(0xFFFFFFFF) << MCAN_TXBTIE_TIE_Pos)                    /* (MCAN_TXBTIE) Transmission Interrupt Enable Mask */
#define MCAN_TXBTIE_TIE(value)              (MCAN_TXBTIE_TIE_Msk & ((value) << MCAN_TXBTIE_TIE_Pos))    /* (MCAN_TXBTIE) Transmission Interrupt Enable */

/* MCAN_TXBCIE - Transmit Buffer Cancellation Finished Interrupt Enable Register - 0xE4 */
#define MCAN_TXBCIE_CFIE_Pos                0                                                           /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable Position */
#define MCAN_TXBCIE_CFIE_Msk                (_U_(0xFFFFFFFF) << MCAN_TXBCIE_CFIE_Pos)                   /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable Mask */
#define MCAN_TXBCIE_CFIE(value)             (MCAN_TXBCIE_CFIE_Msk & ((value) << MCAN_TXBCIE_CFIE_Pos))  /* (MCAN_TXBCIE) Cancellation Finished Interrupt Enable */

#endif /* _REG_MAP_MCAN_H_ */