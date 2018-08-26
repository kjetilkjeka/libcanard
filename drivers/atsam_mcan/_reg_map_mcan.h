
/* -------- MCAN_DBTP : (MCAN Offset: 0x0c) (R/W 32) Data Bit Timing and Prescaler Register -------- */
#define MCAN_DBTP_DSJW_Pos                  (0)																///< Data (Re) Synchronization Jump Width Position
#define MCAN_DBTP_DSJW_Msk                  (_U_(0x3) << MCAN_DBTP_DSJW_Pos)								///< Data (Re) Synchronization Jump Width Mask
#define MCAN_DBTP_DSJW(value)               (MCAN_DBTP_DSJW_Msk & ((value) << MCAN_DBTP_DSJW_Pos))

#define MCAN_DBTP_DTSEG2_Pos                (4)																///< Data Time Segment After Sample Point Position
#define MCAN_DBTP_DTSEG2_Msk                (_U_(0x7) << MCAN_DBTP_DTSEG2_Pos)								///< Data Time Segment After Sample Point Mask
#define MCAN_DBTP_DTSEG2(value)             (MCAN_DBTP_DTSEG2_Msk & ((value) << MCAN_DBTP_DTSEG2_Pos))

#define MCAN_DBTP_DTSEG1_Pos                (8)																///< Data Time Segment Before Sample Point Position
#define MCAN_DBTP_DTSEG1_Msk                (_U_(0xF) << MCAN_DBTP_DTSEG1_Pos)								///< Data Time Segment Before Sample Point Mask
#define MCAN_DBTP_DTSEG1(value)             (MCAN_DBTP_DTSEG1_Msk & ((value) << MCAN_DBTP_DTSEG1_Pos))

#define MCAN_DBTP_DBRP_Pos                  (16)															///< Fast Baud Rate Prescaler Position
#define MCAN_DBTP_DBRP_Msk                  (_U_(0x1F) << MCAN_FBTP_FBRP_Pos)								///< Fast Baud Rate Prescaler Mask
#define MCAN_DBTP_DBRP(value)               (MCAN_DBTP_DBRP_Msk & ((value) << MCAN_DBTP_DBRP_Pos))

#define MCAN_DBTP_TDC_Pos                   (23)															///< Transceiver Delay Compensation Position
#define MCAN_DBTP_TDC_Msk                   (_U_(0x1) << MCAN_DBTP_TDC_Pos)									///< Transceiver Delay Compensation Mask
#define MCAN_DBTP_TDC                       (1 << MCAN_DBTP_TDC_Msk)										


/* -------- MCAN_NBTP : (MCAN Offset: 0x1c) (R/W 32) Nominal Bit Timing and Prescaler Register -------- */
#define MCAN_NBTP_NTSEG2_Pos                  (0)															///< Time Segment After Sample Point Position
#define MCAN_NBTP_NTSEG2_Msk                  (_U_(0x7F) << MCAN_NBTP_NTSEG2_Pos)							///< Time Segment After Sample Point Mask
#define MCAN_NBTP_NTSEG2(value)               (MCAN_NBTP_NTSEG2_Msk & ((value) << MCAN_NBTP_NTSEG2_Pos))

#define MCAN_NBTP_NTSEG1_Pos                  (8)															///< Time Segment Before Sample Point Position
#define MCAN_NBTP_NTSEG1_Msk                  (_U_(0xFF) << MCAN_NBTP_NTSEG1_Pos)							///< Time Segment Before Sample Point Mask
#define MCAN_NBTP_NTSEG1(value)               (MCAN_NBTP_NTSEG1_Msk & ((value) << MCAN_NBTP_NTSEG1_Pos))

#define MCAN_NBTP_NBRP_Pos                    (16)															///< Baud Rate Prescaler Position
#define MCAN_NBTP_NBRP_Msk                    (_U_(0x1FF) << MCAN_NBTP_NBRP_Pos)							///< Baud Rate Prescaler Mask
#define MCAN_NBTP_NBRP(value)                 (MCAN_NBTP_NBRP_Msk & ((value) << MCAN_NBTP_NBRP_Pos))

#define MCAN_NBTP_NSJW_Pos                    (25)															///< (Re) Synchronization Jump Width Position
#define MCAN_NBTP_NSJW_Msk                    (_U_(0x7F) << MCAN_NBTP_NSJW_Pos)								///< (Re) Synchronization Jump Width Mask
#define MCAN_NBTP_NSJW(value)                 (MCAN_NBTP_NSJW_Msk & ((value) << MCAN_NBTP_NSJW_Pos))


/* 
 * All code and most comment below this statement is based on Microchips (Atmels) "Advanced Software Framework".
 *
 * Following the Apache 2.0 license every line in this file (below this statement) is a direct copy from ASF unless otherwise stated.
 * Following the Apache 2.0 license all modifications will be explicitly mentioned in comments.
 * Following the Apache 2.0 license a copy of the copyright notice follows directly after this notice.
 * Following the Apache 2.0 license a copy of the Apache 2.0 license can be found in the same directory as this file.
 *
 * Even though Libcanard is licensed under an MIT license, a copy of this particular file will have an Apache 2.0 License.
 * You are, of course, able to obtain a copy of any other MIT licensed part of libcanard without adhering to the Apache 2.0 License.
 */

/*
 * Copyright (c) 2018 Atmel Corporation, a wholly owned subsidiary of Microchip Technology Inc.
 *
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _REG_MAP_MCAN_H_
#define _REG_MAP_MCAN_H_

#define _U_(x) x ## U    /**< C code: Unsigned integer literal constant value */
#define _L_(x) x ## L    /**< C code: Long integer literal constant value */
#define _UL_(x) x ## UL  /**< C code: Unsigned Long integer literal constant value */

/* -------- MCAN_CREL : (MCAN Offset: 0x00) (R/ 32) Core Release Register -------- */
#define MCAN_CREL_DAY_Pos                   0                                              /**< (MCAN_CREL) Timestamp Day Position */
#define MCAN_CREL_DAY_Msk                   (_U_(0xFF) << MCAN_CREL_DAY_Pos)               /**< (MCAN_CREL) Timestamp Day Mask */
#define MCAN_CREL_DAY(value)                (MCAN_CREL_DAY_Msk & ((value) << MCAN_CREL_DAY_Pos))
#define MCAN_CREL_MON_Pos                   8                                              /**< (MCAN_CREL) Timestamp Month Position */
#define MCAN_CREL_MON_Msk                   (_U_(0xFF) << MCAN_CREL_MON_Pos)               /**< (MCAN_CREL) Timestamp Month Mask */
#define MCAN_CREL_MON(value)                (MCAN_CREL_MON_Msk & ((value) << MCAN_CREL_MON_Pos))
#define MCAN_CREL_YEAR_Pos                  16                                             /**< (MCAN_CREL) Timestamp Year Position */
#define MCAN_CREL_YEAR_Msk                  (_U_(0xF) << MCAN_CREL_YEAR_Pos)               /**< (MCAN_CREL) Timestamp Year Mask */
#define MCAN_CREL_YEAR(value)               (MCAN_CREL_YEAR_Msk & ((value) << MCAN_CREL_YEAR_Pos))
#define MCAN_CREL_SUBSTEP_Pos               20                                             /**< (MCAN_CREL) Sub-step of Core Release Position */
#define MCAN_CREL_SUBSTEP_Msk               (_U_(0xF) << MCAN_CREL_SUBSTEP_Pos)            /**< (MCAN_CREL) Sub-step of Core Release Mask */
#define MCAN_CREL_SUBSTEP(value)            (MCAN_CREL_SUBSTEP_Msk & ((value) << MCAN_CREL_SUBSTEP_Pos))
#define MCAN_CREL_STEP_Pos                  24                                             /**< (MCAN_CREL) Step of Core Release Position */
#define MCAN_CREL_STEP_Msk                  (_U_(0xF) << MCAN_CREL_STEP_Pos)               /**< (MCAN_CREL) Step of Core Release Mask */
#define MCAN_CREL_STEP(value)               (MCAN_CREL_STEP_Msk & ((value) << MCAN_CREL_STEP_Pos))
#define MCAN_CREL_REL_Pos                   28                                             /**< (MCAN_CREL) Core Release Position */
#define MCAN_CREL_REL_Msk                   (_U_(0xF) << MCAN_CREL_REL_Pos)                /**< (MCAN_CREL) Core Release Mask */
#define MCAN_CREL_REL(value)                (MCAN_CREL_REL_Msk & ((value) << MCAN_CREL_REL_Pos))
#define MCAN_CREL_MASK                      _U_(0xFFFFFFFF)                                /**< \deprecated (MCAN_CREL) Register MASK  (Use MCAN_CREL_Msk instead)  */
#define MCAN_CREL_Msk                       _U_(0xFFFFFFFF)                                /**< (MCAN_CREL) Register Mask  */

/* -------- MCAN_ENDN : (MCAN Offset: 0x04) (R/ 32) Endian Register -------- */
#define MCAN_ENDN_ETV_Pos                   0                                              /**< (MCAN_ENDN) Endianness Test Value Position */
#define MCAN_ENDN_ETV_Msk                   (_U_(0xFFFFFFFF) << MCAN_ENDN_ETV_Pos)         /**< (MCAN_ENDN) Endianness Test Value Mask */
#define MCAN_ENDN_ETV(value)                (MCAN_ENDN_ETV_Msk & ((value) << MCAN_ENDN_ETV_Pos))
#define MCAN_ENDN_MASK                      _U_(0xFFFFFFFF)                                /**< \deprecated (MCAN_ENDN) Register MASK  (Use MCAN_ENDN_Msk instead)  */
#define MCAN_ENDN_Msk                       _U_(0xFFFFFFFF)                                /**< (MCAN_ENDN) Register Mask  */

/* -------- MCAN_CUST : (MCAN Offset: 0x08) (R/W 32) Customer Register -------- */
#define MCAN_CUST_CSV_Pos                   0                                              /**< (MCAN_CUST) Customer-specific Value Position */
#define MCAN_CUST_CSV_Msk                   (_U_(0xFFFFFFFF) << MCAN_CUST_CSV_Pos)         /**< (MCAN_CUST) Customer-specific Value Mask */
#define MCAN_CUST_CSV(value)                (MCAN_CUST_CSV_Msk & ((value) << MCAN_CUST_CSV_Pos))
#define MCAN_CUST_MASK                      _U_(0xFFFFFFFF)                                /**< \deprecated (MCAN_CUST) Register MASK  (Use MCAN_CUST_Msk instead)  */
#define MCAN_CUST_Msk                       _U_(0xFFFFFFFF)                                /**< (MCAN_CUST) Register Mask  */

/* Modification note: 0x0c register has been removed */

/* -------- MCAN_TEST : (MCAN Offset: 0x10) (R/W 32) Test Register -------- */
#define MCAN_TEST_LBCK_Pos                  4                                              /**< (MCAN_TEST) Loop Back Mode (read/write) Position */
#define MCAN_TEST_LBCK_Msk                  (_U_(0x1) << MCAN_TEST_LBCK_Pos)               /**< (MCAN_TEST) Loop Back Mode (read/write) Mask */
#define MCAN_TEST_LBCK                      MCAN_TEST_LBCK_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_TEST_LBCK_Msk instead */
#define   MCAN_TEST_LBCK_DISABLED_Val       _U_(0x0)                                       /**< (MCAN_TEST) Reset value. Loop Back mode is disabled.  */
#define   MCAN_TEST_LBCK_ENABLED_Val        _U_(0x1)                                       /**< (MCAN_TEST) Loop Back mode is enabled (see Section 6.1.9).  */
#define MCAN_TEST_LBCK_DISABLED             (MCAN_TEST_LBCK_DISABLED_Val << MCAN_TEST_LBCK_Pos)  /**< (MCAN_TEST) Reset value. Loop Back mode is disabled. Position  */
#define MCAN_TEST_LBCK_ENABLED              (MCAN_TEST_LBCK_ENABLED_Val << MCAN_TEST_LBCK_Pos)  /**< (MCAN_TEST) Loop Back mode is enabled (see Section 6.1.9). Position  */
#define MCAN_TEST_TX_Pos                    5                                              /**< (MCAN_TEST) Control of Transmit Pin (read/write) Position */
#define MCAN_TEST_TX_Msk                    (_U_(0x3) << MCAN_TEST_TX_Pos)                 /**< (MCAN_TEST) Control of Transmit Pin (read/write) Mask */
#define MCAN_TEST_TX(value)                 (MCAN_TEST_TX_Msk & ((value) << MCAN_TEST_TX_Pos))
#define   MCAN_TEST_TX_RESET_Val            _U_(0x0)                                       /**< (MCAN_TEST) Reset value, CANTX controlled by the CAN Core, updated at the end of the CAN bit time.  */
#define   MCAN_TEST_TX_SAMPLE_POINT_MONITORING_Val _U_(0x1)                                       /**< (MCAN_TEST) Sample Point can be monitored at pin CANTX.  */
#define   MCAN_TEST_TX_DOMINANT_Val         _U_(0x2)                                       /**< (MCAN_TEST) Dominant ('0') level at pin CANTX.  */
#define   MCAN_TEST_TX_RECESSIVE_Val        _U_(0x3)                                       /**< (MCAN_TEST) Recessive ('1') at pin CANTX.  */
#define MCAN_TEST_TX_RESET                  (MCAN_TEST_TX_RESET_Val << MCAN_TEST_TX_Pos)   /**< (MCAN_TEST) Reset value, CANTX controlled by the CAN Core, updated at the end of the CAN bit time. Position  */
#define MCAN_TEST_TX_SAMPLE_POINT_MONITORING (MCAN_TEST_TX_SAMPLE_POINT_MONITORING_Val << MCAN_TEST_TX_Pos)  /**< (MCAN_TEST) Sample Point can be monitored at pin CANTX. Position  */
#define MCAN_TEST_TX_DOMINANT               (MCAN_TEST_TX_DOMINANT_Val << MCAN_TEST_TX_Pos)  /**< (MCAN_TEST) Dominant ('0') level at pin CANTX. Position  */
#define MCAN_TEST_TX_RECESSIVE              (MCAN_TEST_TX_RECESSIVE_Val << MCAN_TEST_TX_Pos)  /**< (MCAN_TEST) Recessive ('1') at pin CANTX. Position  */
#define MCAN_TEST_RX_Pos                    7                                              /**< (MCAN_TEST) Receive Pin (read-only) Position */
#define MCAN_TEST_RX_Msk                    (_U_(0x1) << MCAN_TEST_RX_Pos)                 /**< (MCAN_TEST) Receive Pin (read-only) Mask */
#define MCAN_TEST_RX                        MCAN_TEST_RX_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_TEST_RX_Msk instead */
#define MCAN_TEST_TDCV_Pos                  8                                              /**< (MCAN_TEST) Transceiver Delay Compensation Value (read-only) Position */
#define MCAN_TEST_TDCV_Msk                  (_U_(0x3F) << MCAN_TEST_TDCV_Pos)              /**< (MCAN_TEST) Transceiver Delay Compensation Value (read-only) Mask */
#define MCAN_TEST_TDCV(value)               (MCAN_TEST_TDCV_Msk & ((value) << MCAN_TEST_TDCV_Pos))
#define MCAN_TEST_MASK                      _U_(0x3FF0)                                    /**< \deprecated (MCAN_TEST) Register MASK  (Use MCAN_TEST_Msk instead)  */
#define MCAN_TEST_Msk                       _U_(0x3FF0)                                    /**< (MCAN_TEST) Register Mask  */

/* -------- MCAN_RWD : (MCAN Offset: 0x14) (R/W 32) RAM Watchdog Register -------- */
#define MCAN_RWD_WDC_Pos                    0                                              /**< (MCAN_RWD) Watchdog Configuration (read/write) Position */
#define MCAN_RWD_WDC_Msk                    (_U_(0xFF) << MCAN_RWD_WDC_Pos)                /**< (MCAN_RWD) Watchdog Configuration (read/write) Mask */
#define MCAN_RWD_WDC(value)                 (MCAN_RWD_WDC_Msk & ((value) << MCAN_RWD_WDC_Pos))
#define MCAN_RWD_WDV_Pos                    8                                              /**< (MCAN_RWD) Watchdog Value (read-only) Position */
#define MCAN_RWD_WDV_Msk                    (_U_(0xFF) << MCAN_RWD_WDV_Pos)                /**< (MCAN_RWD) Watchdog Value (read-only) Mask */
#define MCAN_RWD_WDV(value)                 (MCAN_RWD_WDV_Msk & ((value) << MCAN_RWD_WDV_Pos))
#define MCAN_RWD_MASK                       _U_(0xFFFF)                                    /**< \deprecated (MCAN_RWD) Register MASK  (Use MCAN_RWD_Msk instead)  */
#define MCAN_RWD_Msk                        _U_(0xFFFF)                                    /**< (MCAN_RWD) Register Mask  */

/* -------- MCAN_CCCR : (MCAN Offset: 0x18) (R/W 32) CC Control Register -------- */
#define MCAN_CCCR_INIT_Pos                  0                                              /**< (MCAN_CCCR) Initialization (read/write) Position */
#define MCAN_CCCR_INIT_Msk                  (_U_(0x1) << MCAN_CCCR_INIT_Pos)               /**< (MCAN_CCCR) Initialization (read/write) Mask */
#define MCAN_CCCR_INIT                      MCAN_CCCR_INIT_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_CCCR_INIT_Msk instead */
#define   MCAN_CCCR_INIT_DISABLED_Val       _U_(0x0)                                       /**< (MCAN_CCCR) Normal operation.  */
#define   MCAN_CCCR_INIT_ENABLED_Val        _U_(0x1)                                       /**< (MCAN_CCCR) Initialization is started.  */
#define MCAN_CCCR_INIT_DISABLED             (MCAN_CCCR_INIT_DISABLED_Val << MCAN_CCCR_INIT_Pos)  /**< (MCAN_CCCR) Normal operation. Position  */
#define MCAN_CCCR_INIT_ENABLED              (MCAN_CCCR_INIT_ENABLED_Val << MCAN_CCCR_INIT_Pos)  /**< (MCAN_CCCR) Initialization is started. Position  */
#define MCAN_CCCR_CCE_Pos                   1                                              /**< (MCAN_CCCR) Configuration Change Enable (read/write, write protection) Position */
#define MCAN_CCCR_CCE_Msk                   (_U_(0x1) << MCAN_CCCR_CCE_Pos)                /**< (MCAN_CCCR) Configuration Change Enable (read/write, write protection) Mask */
#define MCAN_CCCR_CCE                       MCAN_CCCR_CCE_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_CCCR_CCE_Msk instead */
#define   MCAN_CCCR_CCE_PROTECTED_Val       _U_(0x0)                                       /**< (MCAN_CCCR) The processor has no write access to the protected configuration registers.  */
#define   MCAN_CCCR_CCE_CONFIGURABLE_Val    _U_(0x1)                                       /**< (MCAN_CCCR) The processor has write access to the protected configuration registers (while MCAN_CCCR.INIT = '1').  */
#define MCAN_CCCR_CCE_PROTECTED             (MCAN_CCCR_CCE_PROTECTED_Val << MCAN_CCCR_CCE_Pos)  /**< (MCAN_CCCR) The processor has no write access to the protected configuration registers. Position  */
#define MCAN_CCCR_CCE_CONFIGURABLE          (MCAN_CCCR_CCE_CONFIGURABLE_Val << MCAN_CCCR_CCE_Pos)  /**< (MCAN_CCCR) The processor has write access to the protected configuration registers (while MCAN_CCCR.INIT = '1'). Position  */
#define MCAN_CCCR_ASM_Pos                   2                                              /**< (MCAN_CCCR) Restricted Operation Mode (read/write, write protection against '1') Position */
#define MCAN_CCCR_ASM_Msk                   (_U_(0x1) << MCAN_CCCR_ASM_Pos)                /**< (MCAN_CCCR) Restricted Operation Mode (read/write, write protection against '1') Mask */
#define MCAN_CCCR_ASM                       MCAN_CCCR_ASM_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_CCCR_ASM_Msk instead */
#define   MCAN_CCCR_ASM_NORMAL_Val          _U_(0x0)                                       /**< (MCAN_CCCR) Normal CAN operation.  */
#define   MCAN_CCCR_ASM_RESTRICTED_Val      _U_(0x1)                                       /**< (MCAN_CCCR) Restricted operation mode active.  */
#define MCAN_CCCR_ASM_NORMAL                (MCAN_CCCR_ASM_NORMAL_Val << MCAN_CCCR_ASM_Pos)  /**< (MCAN_CCCR) Normal CAN operation. Position  */
#define MCAN_CCCR_ASM_RESTRICTED            (MCAN_CCCR_ASM_RESTRICTED_Val << MCAN_CCCR_ASM_Pos)  /**< (MCAN_CCCR) Restricted operation mode active. Position  */
#define MCAN_CCCR_CSA_Pos                   3                                              /**< (MCAN_CCCR) Clock Stop Acknowledge (read-only) Position */
#define MCAN_CCCR_CSA_Msk                   (_U_(0x1) << MCAN_CCCR_CSA_Pos)                /**< (MCAN_CCCR) Clock Stop Acknowledge (read-only) Mask */
#define MCAN_CCCR_CSA                       MCAN_CCCR_CSA_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_CCCR_CSA_Msk instead */
#define MCAN_CCCR_CSR_Pos                   4                                              /**< (MCAN_CCCR) Clock Stop Request (read/write) Position */
#define MCAN_CCCR_CSR_Msk                   (_U_(0x1) << MCAN_CCCR_CSR_Pos)                /**< (MCAN_CCCR) Clock Stop Request (read/write) Mask */
#define MCAN_CCCR_CSR                       MCAN_CCCR_CSR_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_CCCR_CSR_Msk instead */
#define   MCAN_CCCR_CSR_NO_CLOCK_STOP_Val   _U_(0x0)                                       /**< (MCAN_CCCR) No clock stop is requested.  */
#define   MCAN_CCCR_CSR_CLOCK_STOP_Val      _U_(0x1)                                       /**< (MCAN_CCCR) Clock stop requested. When clock stop is requested, first INIT and then CSA will be set after all pend-ing transfer requests have been completed and the CAN bus reached idle.  */
#define MCAN_CCCR_CSR_NO_CLOCK_STOP         (MCAN_CCCR_CSR_NO_CLOCK_STOP_Val << MCAN_CCCR_CSR_Pos)  /**< (MCAN_CCCR) No clock stop is requested. Position  */
#define MCAN_CCCR_CSR_CLOCK_STOP            (MCAN_CCCR_CSR_CLOCK_STOP_Val << MCAN_CCCR_CSR_Pos)  /**< (MCAN_CCCR) Clock stop requested. When clock stop is requested, first INIT and then CSA will be set after all pend-ing transfer requests have been completed and the CAN bus reached idle. Position  */
#define MCAN_CCCR_MON_Pos                   5                                              /**< (MCAN_CCCR) Bus Monitoring Mode (read/write, write protection against '1') Position */
#define MCAN_CCCR_MON_Msk                   (_U_(0x1) << MCAN_CCCR_MON_Pos)                /**< (MCAN_CCCR) Bus Monitoring Mode (read/write, write protection against '1') Mask */
#define MCAN_CCCR_MON                       MCAN_CCCR_MON_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_CCCR_MON_Msk instead */
#define   MCAN_CCCR_MON_DISABLED_Val        _U_(0x0)                                       /**< (MCAN_CCCR) Bus Monitoring mode is disabled.  */
#define   MCAN_CCCR_MON_ENABLED_Val         _U_(0x1)                                       /**< (MCAN_CCCR) Bus Monitoring mode is enabled.  */
#define MCAN_CCCR_MON_DISABLED              (MCAN_CCCR_MON_DISABLED_Val << MCAN_CCCR_MON_Pos)  /**< (MCAN_CCCR) Bus Monitoring mode is disabled. Position  */
#define MCAN_CCCR_MON_ENABLED               (MCAN_CCCR_MON_ENABLED_Val << MCAN_CCCR_MON_Pos)  /**< (MCAN_CCCR) Bus Monitoring mode is enabled. Position  */
#define MCAN_CCCR_DAR_Pos                   6                                              /**< (MCAN_CCCR) Disable Automatic Retransmission (read/write, write protection) Position */
#define MCAN_CCCR_DAR_Msk                   (_U_(0x1) << MCAN_CCCR_DAR_Pos)                /**< (MCAN_CCCR) Disable Automatic Retransmission (read/write, write protection) Mask */
#define MCAN_CCCR_DAR                       MCAN_CCCR_DAR_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_CCCR_DAR_Msk instead */
#define   MCAN_CCCR_DAR_AUTO_RETX_Val       _U_(0x0)                                       /**< (MCAN_CCCR) Automatic retransmission of messages not transmitted successfully enabled.  */
#define   MCAN_CCCR_DAR_NO_AUTO_RETX_Val    _U_(0x1)                                       /**< (MCAN_CCCR) Automatic retransmission disabled.  */
#define MCAN_CCCR_DAR_AUTO_RETX             (MCAN_CCCR_DAR_AUTO_RETX_Val << MCAN_CCCR_DAR_Pos)  /**< (MCAN_CCCR) Automatic retransmission of messages not transmitted successfully enabled. Position  */
#define MCAN_CCCR_DAR_NO_AUTO_RETX          (MCAN_CCCR_DAR_NO_AUTO_RETX_Val << MCAN_CCCR_DAR_Pos)  /**< (MCAN_CCCR) Automatic retransmission disabled. Position  */
#define MCAN_CCCR_TEST_Pos                  7                                              /**< (MCAN_CCCR) Test Mode Enable (read/write, write protection against '1') Position */
#define MCAN_CCCR_TEST_Msk                  (_U_(0x1) << MCAN_CCCR_TEST_Pos)               /**< (MCAN_CCCR) Test Mode Enable (read/write, write protection against '1') Mask */
#define MCAN_CCCR_TEST                      MCAN_CCCR_TEST_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_CCCR_TEST_Msk instead */
#define   MCAN_CCCR_TEST_DISABLED_Val       _U_(0x0)                                       /**< (MCAN_CCCR) Normal operation, MCAN_TEST register holds reset values.  */
#define   MCAN_CCCR_TEST_ENABLED_Val        _U_(0x1)                                       /**< (MCAN_CCCR) Test mode, write access to MCAN_TEST register enabled.  */
#define MCAN_CCCR_TEST_DISABLED             (MCAN_CCCR_TEST_DISABLED_Val << MCAN_CCCR_TEST_Pos)  /**< (MCAN_CCCR) Normal operation, MCAN_TEST register holds reset values. Position  */
#define MCAN_CCCR_TEST_ENABLED              (MCAN_CCCR_TEST_ENABLED_Val << MCAN_CCCR_TEST_Pos)  /**< (MCAN_CCCR) Test mode, write access to MCAN_TEST register enabled. Position  */
#define MCAN_CCCR_CME_Pos                   8                                              /**< (MCAN_CCCR) CAN Mode Enable (read/write, write protection) Position */
#define MCAN_CCCR_CME_Msk                   (_U_(0x3) << MCAN_CCCR_CME_Pos)                /**< (MCAN_CCCR) CAN Mode Enable (read/write, write protection) Mask */
#define MCAN_CCCR_CME(value)                (MCAN_CCCR_CME_Msk & ((value) << MCAN_CCCR_CME_Pos))
#define   MCAN_CCCR_CME_ISO11898_1_Val      _U_(0x0)                                       /**< (MCAN_CCCR) CAN operation according to ISO11898-1 enabled  */
#define   MCAN_CCCR_CME_FD_Val              _U_(0x1)                                       /**< (MCAN_CCCR) CAN FD operation enabled  */
#define MCAN_CCCR_CME_ISO11898_1            (MCAN_CCCR_CME_ISO11898_1_Val << MCAN_CCCR_CME_Pos)  /**< (MCAN_CCCR) CAN operation according to ISO11898-1 enabled Position  */
#define MCAN_CCCR_CME_FD                    (MCAN_CCCR_CME_FD_Val << MCAN_CCCR_CME_Pos)    /**< (MCAN_CCCR) CAN FD operation enabled Position  */
#define MCAN_CCCR_CMR_Pos                   10                                             /**< (MCAN_CCCR) CAN Mode Request (read/write) Position */
#define MCAN_CCCR_CMR_Msk                   (_U_(0x3) << MCAN_CCCR_CMR_Pos)                /**< (MCAN_CCCR) CAN Mode Request (read/write) Mask */
#define MCAN_CCCR_CMR(value)                (MCAN_CCCR_CMR_Msk & ((value) << MCAN_CCCR_CMR_Pos))
#define   MCAN_CCCR_CMR_NO_CHANGE_Val       _U_(0x0)                                       /**< (MCAN_CCCR) No mode change  */
#define   MCAN_CCCR_CMR_FD_Val              _U_(0x1)                                       /**< (MCAN_CCCR) Request CAN FD operation  */
#define   MCAN_CCCR_CMR_FD_BITRATE_SWITCH_Val _U_(0x2)                                       /**< (MCAN_CCCR) Request CAN FD operation with bit rate switching  */
#define   MCAN_CCCR_CMR_ISO11898_1_Val      _U_(0x3)                                       /**< (MCAN_CCCR) Request CAN operation according ISO11898-1  */
#define MCAN_CCCR_CMR_NO_CHANGE             (MCAN_CCCR_CMR_NO_CHANGE_Val << MCAN_CCCR_CMR_Pos)  /**< (MCAN_CCCR) No mode change Position  */
#define MCAN_CCCR_CMR_FD                    (MCAN_CCCR_CMR_FD_Val << MCAN_CCCR_CMR_Pos)    /**< (MCAN_CCCR) Request CAN FD operation Position  */
#define MCAN_CCCR_CMR_FD_BITRATE_SWITCH     (MCAN_CCCR_CMR_FD_BITRATE_SWITCH_Val << MCAN_CCCR_CMR_Pos)  /**< (MCAN_CCCR) Request CAN FD operation with bit rate switching Position  */
#define MCAN_CCCR_CMR_ISO11898_1            (MCAN_CCCR_CMR_ISO11898_1_Val << MCAN_CCCR_CMR_Pos)  /**< (MCAN_CCCR) Request CAN operation according ISO11898-1 Position  */
#define MCAN_CCCR_FDO_Pos                   12                                             /**< (MCAN_CCCR) CAN FD Operation (read-only) Position */
#define MCAN_CCCR_FDO_Msk                   (_U_(0x1) << MCAN_CCCR_FDO_Pos)                /**< (MCAN_CCCR) CAN FD Operation (read-only) Mask */
#define MCAN_CCCR_FDO                       MCAN_CCCR_FDO_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_CCCR_FDO_Msk instead */
#define MCAN_CCCR_FDBS_Pos                  13                                             /**< (MCAN_CCCR) CAN FD Bit Rate Switching (read-only) Position */
#define MCAN_CCCR_FDBS_Msk                  (_U_(0x1) << MCAN_CCCR_FDBS_Pos)               /**< (MCAN_CCCR) CAN FD Bit Rate Switching (read-only) Mask */
#define MCAN_CCCR_FDBS                      MCAN_CCCR_FDBS_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_CCCR_FDBS_Msk instead */
#define MCAN_CCCR_TXP_Pos                   14                                             /**< (MCAN_CCCR) Transmit Pause (read/write, write protection) Position */
#define MCAN_CCCR_TXP_Msk                   (_U_(0x1) << MCAN_CCCR_TXP_Pos)                /**< (MCAN_CCCR) Transmit Pause (read/write, write protection) Mask */
#define MCAN_CCCR_TXP                       MCAN_CCCR_TXP_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_CCCR_TXP_Msk instead */
#define MCAN_CCCR_MASK                      _U_(0x7FFF)                                    /**< \deprecated (MCAN_CCCR) Register MASK  (Use MCAN_CCCR_Msk instead)  */
#define MCAN_CCCR_Msk                       _U_(0x7FFF)                                    /**< (MCAN_CCCR) Register Mask  */

/* Modification note: 0x1c register has been removed */

/* -------- MCAN_TSCC : (MCAN Offset: 0x20) (R/W 32) Timestamp Counter Configuration Register -------- */
#define MCAN_TSCC_TSS_Pos                   0                                              /**< (MCAN_TSCC) Timestamp Select Position */
#define MCAN_TSCC_TSS_Msk                   (_U_(0x3) << MCAN_TSCC_TSS_Pos)                /**< (MCAN_TSCC) Timestamp Select Mask */
#define MCAN_TSCC_TSS(value)                (MCAN_TSCC_TSS_Msk & ((value) << MCAN_TSCC_TSS_Pos))
#define   MCAN_TSCC_TSS_ALWAYS_0_Val        _U_(0x0)                                       /**< (MCAN_TSCC) Timestamp counter value always 0x0000  */
#define   MCAN_TSCC_TSS_TCP_INC_Val         _U_(0x1)                                       /**< (MCAN_TSCC) Timestamp counter value incremented according to TCP  */
#define   MCAN_TSCC_TSS_EXT_TIMESTAMP_Val   _U_(0x2)                                       /**< (MCAN_TSCC) External timestamp counter value used  */
#define MCAN_TSCC_TSS_ALWAYS_0              (MCAN_TSCC_TSS_ALWAYS_0_Val << MCAN_TSCC_TSS_Pos)  /**< (MCAN_TSCC) Timestamp counter value always 0x0000 Position  */
#define MCAN_TSCC_TSS_TCP_INC               (MCAN_TSCC_TSS_TCP_INC_Val << MCAN_TSCC_TSS_Pos)  /**< (MCAN_TSCC) Timestamp counter value incremented according to TCP Position  */
#define MCAN_TSCC_TSS_EXT_TIMESTAMP         (MCAN_TSCC_TSS_EXT_TIMESTAMP_Val << MCAN_TSCC_TSS_Pos)  /**< (MCAN_TSCC) External timestamp counter value used Position  */
#define MCAN_TSCC_TCP_Pos                   16                                             /**< (MCAN_TSCC) Timestamp Counter Prescaler Position */
#define MCAN_TSCC_TCP_Msk                   (_U_(0xF) << MCAN_TSCC_TCP_Pos)                /**< (MCAN_TSCC) Timestamp Counter Prescaler Mask */
#define MCAN_TSCC_TCP(value)                (MCAN_TSCC_TCP_Msk & ((value) << MCAN_TSCC_TCP_Pos))
#define MCAN_TSCC_MASK                      _U_(0xF0003)                                   /**< \deprecated (MCAN_TSCC) Register MASK  (Use MCAN_TSCC_Msk instead)  */
#define MCAN_TSCC_Msk                       _U_(0xF0003)                                   /**< (MCAN_TSCC) Register Mask  */

/* -------- MCAN_TSCV : (MCAN Offset: 0x24) (R/W 32) Timestamp Counter Value Register -------- */
#define MCAN_TSCV_TSC_Pos                   0                                              /**< (MCAN_TSCV) Timestamp Counter (cleared on write) Position */
#define MCAN_TSCV_TSC_Msk                   (_U_(0xFFFF) << MCAN_TSCV_TSC_Pos)             /**< (MCAN_TSCV) Timestamp Counter (cleared on write) Mask */
#define MCAN_TSCV_TSC(value)                (MCAN_TSCV_TSC_Msk & ((value) << MCAN_TSCV_TSC_Pos))
#define MCAN_TSCV_MASK                      _U_(0xFFFF)                                    /**< \deprecated (MCAN_TSCV) Register MASK  (Use MCAN_TSCV_Msk instead)  */
#define MCAN_TSCV_Msk                       _U_(0xFFFF)                                    /**< (MCAN_TSCV) Register Mask  */

/* -------- MCAN_TOCC : (MCAN Offset: 0x28) (R/W 32) Timeout Counter Configuration Register -------- */
#define MCAN_TOCC_ETOC_Pos                  0                                              /**< (MCAN_TOCC) Enable Timeout Counter Position */
#define MCAN_TOCC_ETOC_Msk                  (_U_(0x1) << MCAN_TOCC_ETOC_Pos)               /**< (MCAN_TOCC) Enable Timeout Counter Mask */
#define MCAN_TOCC_ETOC                      MCAN_TOCC_ETOC_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_TOCC_ETOC_Msk instead */
#define   MCAN_TOCC_ETOC_NO_TIMEOUT_Val     _U_(0x0)                                       /**< (MCAN_TOCC) Timeout Counter disabled.  */
#define   MCAN_TOCC_ETOC_TOS_CONTROLLED_Val _U_(0x1)                                       /**< (MCAN_TOCC) Timeout Counter enabled.  */
#define MCAN_TOCC_ETOC_NO_TIMEOUT           (MCAN_TOCC_ETOC_NO_TIMEOUT_Val << MCAN_TOCC_ETOC_Pos)  /**< (MCAN_TOCC) Timeout Counter disabled. Position  */
#define MCAN_TOCC_ETOC_TOS_CONTROLLED       (MCAN_TOCC_ETOC_TOS_CONTROLLED_Val << MCAN_TOCC_ETOC_Pos)  /**< (MCAN_TOCC) Timeout Counter enabled. Position  */
#define MCAN_TOCC_TOS_Pos                   1                                              /**< (MCAN_TOCC) Timeout Select Position */
#define MCAN_TOCC_TOS_Msk                   (_U_(0x3) << MCAN_TOCC_TOS_Pos)                /**< (MCAN_TOCC) Timeout Select Mask */
#define MCAN_TOCC_TOS(value)                (MCAN_TOCC_TOS_Msk & ((value) << MCAN_TOCC_TOS_Pos))
#define   MCAN_TOCC_TOS_CONTINUOUS_Val      _U_(0x0)                                       /**< (MCAN_TOCC) Continuous operation  */
#define   MCAN_TOCC_TOS_TX_EV_TIMEOUT_Val   _U_(0x1)                                       /**< (MCAN_TOCC) Timeout controlled by Tx Event FIFO  */
#define   MCAN_TOCC_TOS_RX0_EV_TIMEOUT_Val  _U_(0x2)                                       /**< (MCAN_TOCC) Timeout controlled by Receive FIFO 0  */
#define   MCAN_TOCC_TOS_RX1_EV_TIMEOUT_Val  _U_(0x3)                                       /**< (MCAN_TOCC) Timeout controlled by Receive FIFO 1  */
#define MCAN_TOCC_TOS_CONTINUOUS            (MCAN_TOCC_TOS_CONTINUOUS_Val << MCAN_TOCC_TOS_Pos)  /**< (MCAN_TOCC) Continuous operation Position  */
#define MCAN_TOCC_TOS_TX_EV_TIMEOUT         (MCAN_TOCC_TOS_TX_EV_TIMEOUT_Val << MCAN_TOCC_TOS_Pos)  /**< (MCAN_TOCC) Timeout controlled by Tx Event FIFO Position  */
#define MCAN_TOCC_TOS_RX0_EV_TIMEOUT        (MCAN_TOCC_TOS_RX0_EV_TIMEOUT_Val << MCAN_TOCC_TOS_Pos)  /**< (MCAN_TOCC) Timeout controlled by Receive FIFO 0 Position  */
#define MCAN_TOCC_TOS_RX1_EV_TIMEOUT        (MCAN_TOCC_TOS_RX1_EV_TIMEOUT_Val << MCAN_TOCC_TOS_Pos)  /**< (MCAN_TOCC) Timeout controlled by Receive FIFO 1 Position  */
#define MCAN_TOCC_TOP_Pos                   16                                             /**< (MCAN_TOCC) Timeout Period Position */
#define MCAN_TOCC_TOP_Msk                   (_U_(0xFFFF) << MCAN_TOCC_TOP_Pos)             /**< (MCAN_TOCC) Timeout Period Mask */
#define MCAN_TOCC_TOP(value)                (MCAN_TOCC_TOP_Msk & ((value) << MCAN_TOCC_TOP_Pos))
#define MCAN_TOCC_MASK                      _U_(0xFFFF0007)                                /**< \deprecated (MCAN_TOCC) Register MASK  (Use MCAN_TOCC_Msk instead)  */
#define MCAN_TOCC_Msk                       _U_(0xFFFF0007)                                /**< (MCAN_TOCC) Register Mask  */

/* -------- MCAN_TOCV : (MCAN Offset: 0x2c) (R/W 32) Timeout Counter Value Register -------- */
#define MCAN_TOCV_TOC_Pos                   0                                              /**< (MCAN_TOCV) Timeout Counter (cleared on write) Position */
#define MCAN_TOCV_TOC_Msk                   (_U_(0xFFFF) << MCAN_TOCV_TOC_Pos)             /**< (MCAN_TOCV) Timeout Counter (cleared on write) Mask */
#define MCAN_TOCV_TOC(value)                (MCAN_TOCV_TOC_Msk & ((value) << MCAN_TOCV_TOC_Pos))
#define MCAN_TOCV_MASK                      _U_(0xFFFF)                                    /**< \deprecated (MCAN_TOCV) Register MASK  (Use MCAN_TOCV_Msk instead)  */
#define MCAN_TOCV_Msk                       _U_(0xFFFF)                                    /**< (MCAN_TOCV) Register Mask  */

/* -------- MCAN_ECR : (MCAN Offset: 0x40) (R/ 32) Error Counter Register -------- */
#define MCAN_ECR_TEC_Pos                    0                                              /**< (MCAN_ECR) Transmit Error Counter Position */
#define MCAN_ECR_TEC_Msk                    (_U_(0xFF) << MCAN_ECR_TEC_Pos)                /**< (MCAN_ECR) Transmit Error Counter Mask */
#define MCAN_ECR_TEC(value)                 (MCAN_ECR_TEC_Msk & ((value) << MCAN_ECR_TEC_Pos))
#define MCAN_ECR_REC_Pos                    8                                              /**< (MCAN_ECR) Receive Error Counter Position */
#define MCAN_ECR_REC_Msk                    (_U_(0x7F) << MCAN_ECR_REC_Pos)                /**< (MCAN_ECR) Receive Error Counter Mask */
#define MCAN_ECR_REC(value)                 (MCAN_ECR_REC_Msk & ((value) << MCAN_ECR_REC_Pos))
#define MCAN_ECR_RP_Pos                     15                                             /**< (MCAN_ECR) Receive Error Passive Position */
#define MCAN_ECR_RP_Msk                     (_U_(0x1) << MCAN_ECR_RP_Pos)                  /**< (MCAN_ECR) Receive Error Passive Mask */
#define MCAN_ECR_RP                         MCAN_ECR_RP_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_ECR_RP_Msk instead */
#define MCAN_ECR_CEL_Pos                    16                                             /**< (MCAN_ECR) CAN Error Logging (cleared on read) Position */
#define MCAN_ECR_CEL_Msk                    (_U_(0xFF) << MCAN_ECR_CEL_Pos)                /**< (MCAN_ECR) CAN Error Logging (cleared on read) Mask */
#define MCAN_ECR_CEL(value)                 (MCAN_ECR_CEL_Msk & ((value) << MCAN_ECR_CEL_Pos))
#define MCAN_ECR_MASK                       _U_(0xFFFFFF)                                  /**< \deprecated (MCAN_ECR) Register MASK  (Use MCAN_ECR_Msk instead)  */
#define MCAN_ECR_Msk                        _U_(0xFFFFFF)                                  /**< (MCAN_ECR) Register Mask  */

/* -------- MCAN_PSR : (MCAN Offset: 0x44) (R/ 32) Protocol Status Register -------- */
#define MCAN_PSR_LEC_Pos                    0                                              /**< (MCAN_PSR) Last Error Code (set to 111 on read) Position */
#define MCAN_PSR_LEC_Msk                    (_U_(0x7) << MCAN_PSR_LEC_Pos)                 /**< (MCAN_PSR) Last Error Code (set to 111 on read) Mask */
#define MCAN_PSR_LEC(value)                 (MCAN_PSR_LEC_Msk & ((value) << MCAN_PSR_LEC_Pos))
#define   MCAN_PSR_LEC_NO_ERROR_Val         _U_(0x0)                                       /**< (MCAN_PSR) No error occurred since LEC has been reset by successful reception or transmission.  */
#define   MCAN_PSR_LEC_STUFF_ERROR_Val      _U_(0x1)                                       /**< (MCAN_PSR) More than 5 equal bits in a sequence have occurred in a part of a received message where this is not allowed.  */
#define   MCAN_PSR_LEC_FORM_ERROR_Val       _U_(0x2)                                       /**< (MCAN_PSR) A fixed format part of a received frame has the wrong format.  */
#define   MCAN_PSR_LEC_ACK_ERROR_Val        _U_(0x3)                                       /**< (MCAN_PSR) The message transmitted by the MCAN was not acknowledged by another node.  */
#define   MCAN_PSR_LEC_BIT1_ERROR_Val       _U_(0x4)                                       /**< (MCAN_PSR) During the transmission of a message (with the exception of the arbitration field), the device wanted to send a recessive level (bit of logical value '1'), but the monitored bus value was dominant.  */
#define   MCAN_PSR_LEC_BIT0_ERROR_Val       _U_(0x5)                                       /**< (MCAN_PSR) During the transmission of a message (or acknowledge bit, or active error flag, or overload flag), the device wanted to send a dominant level (data or identifier bit logical value '0'), but the monitored bus value was recessive. During Bus_Off recovery this status is set each time a sequence of 11 recessive bits has been monitored. This enables the processor to monitor the proceeding of the Bus_Off recovery sequence (indicating the bus is not stuck at dominant or continuously disturbed).  */
#define   MCAN_PSR_LEC_CRC_ERROR_Val        _U_(0x6)                                       /**< (MCAN_PSR) The CRC check sum of a received message was incorrect. The CRC of an incoming message does not match with the CRC calculated from the received data.  */
#define   MCAN_PSR_LEC_NO_CHANGE_Val        _U_(0x7)                                       /**< (MCAN_PSR) Any read access to the Protocol Status Register re-initializes the LEC to '7'. When the LEC shows the value '7', no CAN bus event was detected since the last processor read access to the Protocol Status Register.  */
#define MCAN_PSR_LEC_NO_ERROR               (MCAN_PSR_LEC_NO_ERROR_Val << MCAN_PSR_LEC_Pos)  /**< (MCAN_PSR) No error occurred since LEC has been reset by successful reception or transmission. Position  */
#define MCAN_PSR_LEC_STUFF_ERROR            (MCAN_PSR_LEC_STUFF_ERROR_Val << MCAN_PSR_LEC_Pos)  /**< (MCAN_PSR) More than 5 equal bits in a sequence have occurred in a part of a received message where this is not allowed. Position  */
#define MCAN_PSR_LEC_FORM_ERROR             (MCAN_PSR_LEC_FORM_ERROR_Val << MCAN_PSR_LEC_Pos)  /**< (MCAN_PSR) A fixed format part of a received frame has the wrong format. Position  */
#define MCAN_PSR_LEC_ACK_ERROR              (MCAN_PSR_LEC_ACK_ERROR_Val << MCAN_PSR_LEC_Pos)  /**< (MCAN_PSR) The message transmitted by the MCAN was not acknowledged by another node. Position  */
#define MCAN_PSR_LEC_BIT1_ERROR             (MCAN_PSR_LEC_BIT1_ERROR_Val << MCAN_PSR_LEC_Pos)  /**< (MCAN_PSR) During the transmission of a message (with the exception of the arbitration field), the device wanted to send a recessive level (bit of logical value '1'), but the monitored bus value was dominant. Position  */
#define MCAN_PSR_LEC_BIT0_ERROR             (MCAN_PSR_LEC_BIT0_ERROR_Val << MCAN_PSR_LEC_Pos)  /**< (MCAN_PSR) During the transmission of a message (or acknowledge bit, or active error flag, or overload flag), the device wanted to send a dominant level (data or identifier bit logical value '0'), but the monitored bus value was recessive. During Bus_Off recovery this status is set each time a sequence of 11 recessive bits has been monitored. This enables the processor to monitor the proceeding of the Bus_Off recovery sequence (indicating the bus is not stuck at dominant or continuously disturbed). Position  */
#define MCAN_PSR_LEC_CRC_ERROR              (MCAN_PSR_LEC_CRC_ERROR_Val << MCAN_PSR_LEC_Pos)  /**< (MCAN_PSR) The CRC check sum of a received message was incorrect. The CRC of an incoming message does not match with the CRC calculated from the received data. Position  */
#define MCAN_PSR_LEC_NO_CHANGE              (MCAN_PSR_LEC_NO_CHANGE_Val << MCAN_PSR_LEC_Pos)  /**< (MCAN_PSR) Any read access to the Protocol Status Register re-initializes the LEC to '7'. When the LEC shows the value '7', no CAN bus event was detected since the last processor read access to the Protocol Status Register. Position  */
#define MCAN_PSR_ACT_Pos                    3                                              /**< (MCAN_PSR) Activity Position */
#define MCAN_PSR_ACT_Msk                    (_U_(0x3) << MCAN_PSR_ACT_Pos)                 /**< (MCAN_PSR) Activity Mask */
#define MCAN_PSR_ACT(value)                 (MCAN_PSR_ACT_Msk & ((value) << MCAN_PSR_ACT_Pos))
#define   MCAN_PSR_ACT_SYNCHRONIZING_Val    _U_(0x0)                                       /**< (MCAN_PSR) Node is synchronizing on CAN communication  */
#define   MCAN_PSR_ACT_IDLE_Val             _U_(0x1)                                       /**< (MCAN_PSR) Node is neither receiver nor transmitter  */
#define   MCAN_PSR_ACT_RECEIVER_Val         _U_(0x2)                                       /**< (MCAN_PSR) Node is operating as receiver  */
#define   MCAN_PSR_ACT_TRANSMITTER_Val      _U_(0x3)                                       /**< (MCAN_PSR) Node is operating as transmitter  */
#define MCAN_PSR_ACT_SYNCHRONIZING          (MCAN_PSR_ACT_SYNCHRONIZING_Val << MCAN_PSR_ACT_Pos)  /**< (MCAN_PSR) Node is synchronizing on CAN communication Position  */
#define MCAN_PSR_ACT_IDLE                   (MCAN_PSR_ACT_IDLE_Val << MCAN_PSR_ACT_Pos)    /**< (MCAN_PSR) Node is neither receiver nor transmitter Position  */
#define MCAN_PSR_ACT_RECEIVER               (MCAN_PSR_ACT_RECEIVER_Val << MCAN_PSR_ACT_Pos)  /**< (MCAN_PSR) Node is operating as receiver Position  */
#define MCAN_PSR_ACT_TRANSMITTER            (MCAN_PSR_ACT_TRANSMITTER_Val << MCAN_PSR_ACT_Pos)  /**< (MCAN_PSR) Node is operating as transmitter Position  */
#define MCAN_PSR_EP_Pos                     5                                              /**< (MCAN_PSR) Error Passive Position */
#define MCAN_PSR_EP_Msk                     (_U_(0x1) << MCAN_PSR_EP_Pos)                  /**< (MCAN_PSR) Error Passive Mask */
#define MCAN_PSR_EP                         MCAN_PSR_EP_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_PSR_EP_Msk instead */
#define MCAN_PSR_EW_Pos                     6                                              /**< (MCAN_PSR) Warning Status Position */
#define MCAN_PSR_EW_Msk                     (_U_(0x1) << MCAN_PSR_EW_Pos)                  /**< (MCAN_PSR) Warning Status Mask */
#define MCAN_PSR_EW                         MCAN_PSR_EW_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_PSR_EW_Msk instead */
#define MCAN_PSR_BO_Pos                     7                                              /**< (MCAN_PSR) Bus_Off Status Position */
#define MCAN_PSR_BO_Msk                     (_U_(0x1) << MCAN_PSR_BO_Pos)                  /**< (MCAN_PSR) Bus_Off Status Mask */
#define MCAN_PSR_BO                         MCAN_PSR_BO_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_PSR_BO_Msk instead */
#define MCAN_PSR_FLEC_Pos                   8                                              /**< (MCAN_PSR) Fast Last Error Code (set to 111 on read) Position */
#define MCAN_PSR_FLEC_Msk                   (_U_(0x7) << MCAN_PSR_FLEC_Pos)                /**< (MCAN_PSR) Fast Last Error Code (set to 111 on read) Mask */
#define MCAN_PSR_FLEC(value)                (MCAN_PSR_FLEC_Msk & ((value) << MCAN_PSR_FLEC_Pos))
#define MCAN_PSR_RESI_Pos                   11                                             /**< (MCAN_PSR) ESI Flag of Last Received CAN FD Message (cleared on read) Position */
#define MCAN_PSR_RESI_Msk                   (_U_(0x1) << MCAN_PSR_RESI_Pos)                /**< (MCAN_PSR) ESI Flag of Last Received CAN FD Message (cleared on read) Mask */
#define MCAN_PSR_RESI                       MCAN_PSR_RESI_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_PSR_RESI_Msk instead */
#define MCAN_PSR_RBRS_Pos                   12                                             /**< (MCAN_PSR) BRS Flag of Last Received CAN FD Message (cleared on read) Position */
#define MCAN_PSR_RBRS_Msk                   (_U_(0x1) << MCAN_PSR_RBRS_Pos)                /**< (MCAN_PSR) BRS Flag of Last Received CAN FD Message (cleared on read) Mask */
#define MCAN_PSR_RBRS                       MCAN_PSR_RBRS_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_PSR_RBRS_Msk instead */
#define MCAN_PSR_REDL_Pos                   13                                             /**< (MCAN_PSR) Received a CAN FD Message (cleared on read) Position */
#define MCAN_PSR_REDL_Msk                   (_U_(0x1) << MCAN_PSR_REDL_Pos)                /**< (MCAN_PSR) Received a CAN FD Message (cleared on read) Mask */
#define MCAN_PSR_REDL                       MCAN_PSR_REDL_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_PSR_REDL_Msk instead */
#define MCAN_PSR_MASK                       _U_(0x3FFF)                                    /**< \deprecated (MCAN_PSR) Register MASK  (Use MCAN_PSR_Msk instead)  */
#define MCAN_PSR_Msk                        _U_(0x3FFF)                                    /**< (MCAN_PSR) Register Mask  */

/* -------- MCAN_IR : (MCAN Offset: 0x50) (R/W 32) Interrupt Register -------- */
#define MCAN_IR_RF0N_Pos                    0                                              /**< (MCAN_IR) Receive FIFO 0 New Message Position */
#define MCAN_IR_RF0N_Msk                    (_U_(0x1) << MCAN_IR_RF0N_Pos)                 /**< (MCAN_IR) Receive FIFO 0 New Message Mask */
#define MCAN_IR_RF0N                        MCAN_IR_RF0N_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IR_RF0N_Msk instead */
#define MCAN_IR_RF0W_Pos                    1                                              /**< (MCAN_IR) Receive FIFO 0 Watermark Reached Position */
#define MCAN_IR_RF0W_Msk                    (_U_(0x1) << MCAN_IR_RF0W_Pos)                 /**< (MCAN_IR) Receive FIFO 0 Watermark Reached Mask */
#define MCAN_IR_RF0W                        MCAN_IR_RF0W_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IR_RF0W_Msk instead */
#define MCAN_IR_RF0F_Pos                    2                                              /**< (MCAN_IR) Receive FIFO 0 Full Position */
#define MCAN_IR_RF0F_Msk                    (_U_(0x1) << MCAN_IR_RF0F_Pos)                 /**< (MCAN_IR) Receive FIFO 0 Full Mask */
#define MCAN_IR_RF0F                        MCAN_IR_RF0F_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IR_RF0F_Msk instead */
#define MCAN_IR_RF0L_Pos                    3                                              /**< (MCAN_IR) Receive FIFO 0 Message Lost Position */
#define MCAN_IR_RF0L_Msk                    (_U_(0x1) << MCAN_IR_RF0L_Pos)                 /**< (MCAN_IR) Receive FIFO 0 Message Lost Mask */
#define MCAN_IR_RF0L                        MCAN_IR_RF0L_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IR_RF0L_Msk instead */
#define MCAN_IR_RF1N_Pos                    4                                              /**< (MCAN_IR) Receive FIFO 1 New Message Position */
#define MCAN_IR_RF1N_Msk                    (_U_(0x1) << MCAN_IR_RF1N_Pos)                 /**< (MCAN_IR) Receive FIFO 1 New Message Mask */
#define MCAN_IR_RF1N                        MCAN_IR_RF1N_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IR_RF1N_Msk instead */
#define MCAN_IR_RF1W_Pos                    5                                              /**< (MCAN_IR) Receive FIFO 1 Watermark Reached Position */
#define MCAN_IR_RF1W_Msk                    (_U_(0x1) << MCAN_IR_RF1W_Pos)                 /**< (MCAN_IR) Receive FIFO 1 Watermark Reached Mask */
#define MCAN_IR_RF1W                        MCAN_IR_RF1W_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IR_RF1W_Msk instead */
#define MCAN_IR_RF1F_Pos                    6                                              /**< (MCAN_IR) Receive FIFO 1 Full Position */
#define MCAN_IR_RF1F_Msk                    (_U_(0x1) << MCAN_IR_RF1F_Pos)                 /**< (MCAN_IR) Receive FIFO 1 Full Mask */
#define MCAN_IR_RF1F                        MCAN_IR_RF1F_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IR_RF1F_Msk instead */
#define MCAN_IR_RF1L_Pos                    7                                              /**< (MCAN_IR) Receive FIFO 1 Message Lost Position */
#define MCAN_IR_RF1L_Msk                    (_U_(0x1) << MCAN_IR_RF1L_Pos)                 /**< (MCAN_IR) Receive FIFO 1 Message Lost Mask */
#define MCAN_IR_RF1L                        MCAN_IR_RF1L_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IR_RF1L_Msk instead */
#define MCAN_IR_HPM_Pos                     8                                              /**< (MCAN_IR) High Priority Message Position */
#define MCAN_IR_HPM_Msk                     (_U_(0x1) << MCAN_IR_HPM_Pos)                  /**< (MCAN_IR) High Priority Message Mask */
#define MCAN_IR_HPM                         MCAN_IR_HPM_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IR_HPM_Msk instead */
#define MCAN_IR_TC_Pos                      9                                              /**< (MCAN_IR) Transmission Completed Position */
#define MCAN_IR_TC_Msk                      (_U_(0x1) << MCAN_IR_TC_Pos)                   /**< (MCAN_IR) Transmission Completed Mask */
#define MCAN_IR_TC                          MCAN_IR_TC_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IR_TC_Msk instead */
#define MCAN_IR_TCF_Pos                     10                                             /**< (MCAN_IR) Transmission Cancellation Finished Position */
#define MCAN_IR_TCF_Msk                     (_U_(0x1) << MCAN_IR_TCF_Pos)                  /**< (MCAN_IR) Transmission Cancellation Finished Mask */
#define MCAN_IR_TCF                         MCAN_IR_TCF_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IR_TCF_Msk instead */
#define MCAN_IR_TFE_Pos                     11                                             /**< (MCAN_IR) Tx FIFO Empty Position */
#define MCAN_IR_TFE_Msk                     (_U_(0x1) << MCAN_IR_TFE_Pos)                  /**< (MCAN_IR) Tx FIFO Empty Mask */
#define MCAN_IR_TFE                         MCAN_IR_TFE_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IR_TFE_Msk instead */
#define MCAN_IR_TEFN_Pos                    12                                             /**< (MCAN_IR) Tx Event FIFO New Entry Position */
#define MCAN_IR_TEFN_Msk                    (_U_(0x1) << MCAN_IR_TEFN_Pos)                 /**< (MCAN_IR) Tx Event FIFO New Entry Mask */
#define MCAN_IR_TEFN                        MCAN_IR_TEFN_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IR_TEFN_Msk instead */
#define MCAN_IR_TEFW_Pos                    13                                             /**< (MCAN_IR) Tx Event FIFO Watermark Reached Position */
#define MCAN_IR_TEFW_Msk                    (_U_(0x1) << MCAN_IR_TEFW_Pos)                 /**< (MCAN_IR) Tx Event FIFO Watermark Reached Mask */
#define MCAN_IR_TEFW                        MCAN_IR_TEFW_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IR_TEFW_Msk instead */
#define MCAN_IR_TEFF_Pos                    14                                             /**< (MCAN_IR) Tx Event FIFO Full Position */
#define MCAN_IR_TEFF_Msk                    (_U_(0x1) << MCAN_IR_TEFF_Pos)                 /**< (MCAN_IR) Tx Event FIFO Full Mask */
#define MCAN_IR_TEFF                        MCAN_IR_TEFF_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IR_TEFF_Msk instead */
#define MCAN_IR_TEFL_Pos                    15                                             /**< (MCAN_IR) Tx Event FIFO Element Lost Position */
#define MCAN_IR_TEFL_Msk                    (_U_(0x1) << MCAN_IR_TEFL_Pos)                 /**< (MCAN_IR) Tx Event FIFO Element Lost Mask */
#define MCAN_IR_TEFL                        MCAN_IR_TEFL_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IR_TEFL_Msk instead */
#define MCAN_IR_TSW_Pos                     16                                             /**< (MCAN_IR) Timestamp Wraparound Position */
#define MCAN_IR_TSW_Msk                     (_U_(0x1) << MCAN_IR_TSW_Pos)                  /**< (MCAN_IR) Timestamp Wraparound Mask */
#define MCAN_IR_TSW                         MCAN_IR_TSW_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IR_TSW_Msk instead */
#define MCAN_IR_MRAF_Pos                    17                                             /**< (MCAN_IR) Message RAM Access Failure Position */
#define MCAN_IR_MRAF_Msk                    (_U_(0x1) << MCAN_IR_MRAF_Pos)                 /**< (MCAN_IR) Message RAM Access Failure Mask */
#define MCAN_IR_MRAF                        MCAN_IR_MRAF_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IR_MRAF_Msk instead */
#define MCAN_IR_TOO_Pos                     18                                             /**< (MCAN_IR) Timeout Occurred Position */
#define MCAN_IR_TOO_Msk                     (_U_(0x1) << MCAN_IR_TOO_Pos)                  /**< (MCAN_IR) Timeout Occurred Mask */
#define MCAN_IR_TOO                         MCAN_IR_TOO_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IR_TOO_Msk instead */
#define MCAN_IR_DRX_Pos                     19                                             /**< (MCAN_IR) Message stored to Dedicated Receive Buffer Position */
#define MCAN_IR_DRX_Msk                     (_U_(0x1) << MCAN_IR_DRX_Pos)                  /**< (MCAN_IR) Message stored to Dedicated Receive Buffer Mask */
#define MCAN_IR_DRX                         MCAN_IR_DRX_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IR_DRX_Msk instead */
#define MCAN_IR_BEC_Pos                     20                                             /**< (MCAN_IR) Bit Error Corrected Position */
#define MCAN_IR_BEC_Msk                     (_U_(0x1) << MCAN_IR_BEC_Pos)                  /**< (MCAN_IR) Bit Error Corrected Mask */
#define MCAN_IR_BEC                         MCAN_IR_BEC_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IR_BEC_Msk instead */
#define MCAN_IR_BEU_Pos                     21                                             /**< (MCAN_IR) Bit Error Uncorrected Position */
#define MCAN_IR_BEU_Msk                     (_U_(0x1) << MCAN_IR_BEU_Pos)                  /**< (MCAN_IR) Bit Error Uncorrected Mask */
#define MCAN_IR_BEU                         MCAN_IR_BEU_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IR_BEU_Msk instead */
#define MCAN_IR_ELO_Pos                     22                                             /**< (MCAN_IR) Error Logging Overflow Position */
#define MCAN_IR_ELO_Msk                     (_U_(0x1) << MCAN_IR_ELO_Pos)                  /**< (MCAN_IR) Error Logging Overflow Mask */
#define MCAN_IR_ELO                         MCAN_IR_ELO_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IR_ELO_Msk instead */
#define MCAN_IR_EP_Pos                      23                                             /**< (MCAN_IR) Error Passive Position */
#define MCAN_IR_EP_Msk                      (_U_(0x1) << MCAN_IR_EP_Pos)                   /**< (MCAN_IR) Error Passive Mask */
#define MCAN_IR_EP                          MCAN_IR_EP_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IR_EP_Msk instead */
#define MCAN_IR_EW_Pos                      24                                             /**< (MCAN_IR) Warning Status Position */
#define MCAN_IR_EW_Msk                      (_U_(0x1) << MCAN_IR_EW_Pos)                   /**< (MCAN_IR) Warning Status Mask */
#define MCAN_IR_EW                          MCAN_IR_EW_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IR_EW_Msk instead */
#define MCAN_IR_BO_Pos                      25                                             /**< (MCAN_IR) Bus_Off Status Position */
#define MCAN_IR_BO_Msk                      (_U_(0x1) << MCAN_IR_BO_Pos)                   /**< (MCAN_IR) Bus_Off Status Mask */
#define MCAN_IR_BO                          MCAN_IR_BO_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IR_BO_Msk instead */
#define MCAN_IR_WDI_Pos                     26                                             /**< (MCAN_IR) Watchdog Interrupt Position */
#define MCAN_IR_WDI_Msk                     (_U_(0x1) << MCAN_IR_WDI_Pos)                  /**< (MCAN_IR) Watchdog Interrupt Mask */
#define MCAN_IR_WDI                         MCAN_IR_WDI_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IR_WDI_Msk instead */
#define MCAN_IR_CRCE_Pos                    27                                             /**< (MCAN_IR) CRC Error Position */
#define MCAN_IR_CRCE_Msk                    (_U_(0x1) << MCAN_IR_CRCE_Pos)                 /**< (MCAN_IR) CRC Error Mask */
#define MCAN_IR_CRCE                        MCAN_IR_CRCE_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IR_CRCE_Msk instead */
#define MCAN_IR_BE_Pos                      28                                             /**< (MCAN_IR) Bit Error Position */
#define MCAN_IR_BE_Msk                      (_U_(0x1) << MCAN_IR_BE_Pos)                   /**< (MCAN_IR) Bit Error Mask */
#define MCAN_IR_BE                          MCAN_IR_BE_Msk                                 /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IR_BE_Msk instead */
#define MCAN_IR_ACKE_Pos                    29                                             /**< (MCAN_IR) Acknowledge Error Position */
#define MCAN_IR_ACKE_Msk                    (_U_(0x1) << MCAN_IR_ACKE_Pos)                 /**< (MCAN_IR) Acknowledge Error Mask */
#define MCAN_IR_ACKE                        MCAN_IR_ACKE_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IR_ACKE_Msk instead */
#define MCAN_IR_FOE_Pos                     30                                             /**< (MCAN_IR) Format Error Position */
#define MCAN_IR_FOE_Msk                     (_U_(0x1) << MCAN_IR_FOE_Pos)                  /**< (MCAN_IR) Format Error Mask */
#define MCAN_IR_FOE                         MCAN_IR_FOE_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IR_FOE_Msk instead */
#define MCAN_IR_STE_Pos                     31                                             /**< (MCAN_IR) Stuff Error Position */
#define MCAN_IR_STE_Msk                     (_U_(0x1) << MCAN_IR_STE_Pos)                  /**< (MCAN_IR) Stuff Error Mask */
#define MCAN_IR_STE                         MCAN_IR_STE_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IR_STE_Msk instead */
#define MCAN_IR_MASK                        _U_(0xFFFFFFFF)                                /**< \deprecated (MCAN_IR) Register MASK  (Use MCAN_IR_Msk instead)  */
#define MCAN_IR_Msk                         _U_(0xFFFFFFFF)                                /**< (MCAN_IR) Register Mask  */

/* -------- MCAN_IE : (MCAN Offset: 0x54) (R/W 32) Interrupt Enable Register -------- */
#define MCAN_IE_RF0NE_Pos                   0                                              /**< (MCAN_IE) Receive FIFO 0 New Message Interrupt Enable Position */
#define MCAN_IE_RF0NE_Msk                   (_U_(0x1) << MCAN_IE_RF0NE_Pos)                /**< (MCAN_IE) Receive FIFO 0 New Message Interrupt Enable Mask */
#define MCAN_IE_RF0NE                       MCAN_IE_RF0NE_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IE_RF0NE_Msk instead */
#define MCAN_IE_RF0WE_Pos                   1                                              /**< (MCAN_IE) Receive FIFO 0 Watermark Reached Interrupt Enable Position */
#define MCAN_IE_RF0WE_Msk                   (_U_(0x1) << MCAN_IE_RF0WE_Pos)                /**< (MCAN_IE) Receive FIFO 0 Watermark Reached Interrupt Enable Mask */
#define MCAN_IE_RF0WE                       MCAN_IE_RF0WE_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IE_RF0WE_Msk instead */
#define MCAN_IE_RF0FE_Pos                   2                                              /**< (MCAN_IE) Receive FIFO 0 Full Interrupt Enable Position */
#define MCAN_IE_RF0FE_Msk                   (_U_(0x1) << MCAN_IE_RF0FE_Pos)                /**< (MCAN_IE) Receive FIFO 0 Full Interrupt Enable Mask */
#define MCAN_IE_RF0FE                       MCAN_IE_RF0FE_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IE_RF0FE_Msk instead */
#define MCAN_IE_RF0LE_Pos                   3                                              /**< (MCAN_IE) Receive FIFO 0 Message Lost Interrupt Enable Position */
#define MCAN_IE_RF0LE_Msk                   (_U_(0x1) << MCAN_IE_RF0LE_Pos)                /**< (MCAN_IE) Receive FIFO 0 Message Lost Interrupt Enable Mask */
#define MCAN_IE_RF0LE                       MCAN_IE_RF0LE_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IE_RF0LE_Msk instead */
#define MCAN_IE_RF1NE_Pos                   4                                              /**< (MCAN_IE) Receive FIFO 1 New Message Interrupt Enable Position */
#define MCAN_IE_RF1NE_Msk                   (_U_(0x1) << MCAN_IE_RF1NE_Pos)                /**< (MCAN_IE) Receive FIFO 1 New Message Interrupt Enable Mask */
#define MCAN_IE_RF1NE                       MCAN_IE_RF1NE_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IE_RF1NE_Msk instead */
#define MCAN_IE_RF1WE_Pos                   5                                              /**< (MCAN_IE) Receive FIFO 1 Watermark Reached Interrupt Enable Position */
#define MCAN_IE_RF1WE_Msk                   (_U_(0x1) << MCAN_IE_RF1WE_Pos)                /**< (MCAN_IE) Receive FIFO 1 Watermark Reached Interrupt Enable Mask */
#define MCAN_IE_RF1WE                       MCAN_IE_RF1WE_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IE_RF1WE_Msk instead */
#define MCAN_IE_RF1FE_Pos                   6                                              /**< (MCAN_IE) Receive FIFO 1 Full Interrupt Enable Position */
#define MCAN_IE_RF1FE_Msk                   (_U_(0x1) << MCAN_IE_RF1FE_Pos)                /**< (MCAN_IE) Receive FIFO 1 Full Interrupt Enable Mask */
#define MCAN_IE_RF1FE                       MCAN_IE_RF1FE_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IE_RF1FE_Msk instead */
#define MCAN_IE_RF1LE_Pos                   7                                              /**< (MCAN_IE) Receive FIFO 1 Message Lost Interrupt Enable Position */
#define MCAN_IE_RF1LE_Msk                   (_U_(0x1) << MCAN_IE_RF1LE_Pos)                /**< (MCAN_IE) Receive FIFO 1 Message Lost Interrupt Enable Mask */
#define MCAN_IE_RF1LE                       MCAN_IE_RF1LE_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IE_RF1LE_Msk instead */
#define MCAN_IE_HPME_Pos                    8                                              /**< (MCAN_IE) High Priority Message Interrupt Enable Position */
#define MCAN_IE_HPME_Msk                    (_U_(0x1) << MCAN_IE_HPME_Pos)                 /**< (MCAN_IE) High Priority Message Interrupt Enable Mask */
#define MCAN_IE_HPME                        MCAN_IE_HPME_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IE_HPME_Msk instead */
#define MCAN_IE_TCE_Pos                     9                                              /**< (MCAN_IE) Transmission Completed Interrupt Enable Position */
#define MCAN_IE_TCE_Msk                     (_U_(0x1) << MCAN_IE_TCE_Pos)                  /**< (MCAN_IE) Transmission Completed Interrupt Enable Mask */
#define MCAN_IE_TCE                         MCAN_IE_TCE_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IE_TCE_Msk instead */
#define MCAN_IE_TCFE_Pos                    10                                             /**< (MCAN_IE) Transmission Cancellation Finished Interrupt Enable Position */
#define MCAN_IE_TCFE_Msk                    (_U_(0x1) << MCAN_IE_TCFE_Pos)                 /**< (MCAN_IE) Transmission Cancellation Finished Interrupt Enable Mask */
#define MCAN_IE_TCFE                        MCAN_IE_TCFE_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IE_TCFE_Msk instead */
#define MCAN_IE_TFEE_Pos                    11                                             /**< (MCAN_IE) Tx FIFO Empty Interrupt Enable Position */
#define MCAN_IE_TFEE_Msk                    (_U_(0x1) << MCAN_IE_TFEE_Pos)                 /**< (MCAN_IE) Tx FIFO Empty Interrupt Enable Mask */
#define MCAN_IE_TFEE                        MCAN_IE_TFEE_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IE_TFEE_Msk instead */
#define MCAN_IE_TEFNE_Pos                   12                                             /**< (MCAN_IE) Tx Event FIFO New Entry Interrupt Enable Position */
#define MCAN_IE_TEFNE_Msk                   (_U_(0x1) << MCAN_IE_TEFNE_Pos)                /**< (MCAN_IE) Tx Event FIFO New Entry Interrupt Enable Mask */
#define MCAN_IE_TEFNE                       MCAN_IE_TEFNE_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IE_TEFNE_Msk instead */
#define MCAN_IE_TEFWE_Pos                   13                                             /**< (MCAN_IE) Tx Event FIFO Watermark Reached Interrupt Enable Position */
#define MCAN_IE_TEFWE_Msk                   (_U_(0x1) << MCAN_IE_TEFWE_Pos)                /**< (MCAN_IE) Tx Event FIFO Watermark Reached Interrupt Enable Mask */
#define MCAN_IE_TEFWE                       MCAN_IE_TEFWE_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IE_TEFWE_Msk instead */
#define MCAN_IE_TEFFE_Pos                   14                                             /**< (MCAN_IE) Tx Event FIFO Full Interrupt Enable Position */
#define MCAN_IE_TEFFE_Msk                   (_U_(0x1) << MCAN_IE_TEFFE_Pos)                /**< (MCAN_IE) Tx Event FIFO Full Interrupt Enable Mask */
#define MCAN_IE_TEFFE                       MCAN_IE_TEFFE_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IE_TEFFE_Msk instead */
#define MCAN_IE_TEFLE_Pos                   15                                             /**< (MCAN_IE) Tx Event FIFO Event Lost Interrupt Enable Position */
#define MCAN_IE_TEFLE_Msk                   (_U_(0x1) << MCAN_IE_TEFLE_Pos)                /**< (MCAN_IE) Tx Event FIFO Event Lost Interrupt Enable Mask */
#define MCAN_IE_TEFLE                       MCAN_IE_TEFLE_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IE_TEFLE_Msk instead */
#define MCAN_IE_TSWE_Pos                    16                                             /**< (MCAN_IE) Timestamp Wraparound Interrupt Enable Position */
#define MCAN_IE_TSWE_Msk                    (_U_(0x1) << MCAN_IE_TSWE_Pos)                 /**< (MCAN_IE) Timestamp Wraparound Interrupt Enable Mask */
#define MCAN_IE_TSWE                        MCAN_IE_TSWE_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IE_TSWE_Msk instead */
#define MCAN_IE_MRAFE_Pos                   17                                             /**< (MCAN_IE) Message RAM Access Failure Interrupt Enable Position */
#define MCAN_IE_MRAFE_Msk                   (_U_(0x1) << MCAN_IE_MRAFE_Pos)                /**< (MCAN_IE) Message RAM Access Failure Interrupt Enable Mask */
#define MCAN_IE_MRAFE                       MCAN_IE_MRAFE_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IE_MRAFE_Msk instead */
#define MCAN_IE_TOOE_Pos                    18                                             /**< (MCAN_IE) Timeout Occurred Interrupt Enable Position */
#define MCAN_IE_TOOE_Msk                    (_U_(0x1) << MCAN_IE_TOOE_Pos)                 /**< (MCAN_IE) Timeout Occurred Interrupt Enable Mask */
#define MCAN_IE_TOOE                        MCAN_IE_TOOE_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IE_TOOE_Msk instead */
#define MCAN_IE_DRXE_Pos                    19                                             /**< (MCAN_IE) Message stored to Dedicated Receive Buffer Interrupt Enable Position */
#define MCAN_IE_DRXE_Msk                    (_U_(0x1) << MCAN_IE_DRXE_Pos)                 /**< (MCAN_IE) Message stored to Dedicated Receive Buffer Interrupt Enable Mask */
#define MCAN_IE_DRXE                        MCAN_IE_DRXE_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IE_DRXE_Msk instead */
#define MCAN_IE_BECE_Pos                    20                                             /**< (MCAN_IE) Bit Error Corrected Interrupt Enable Position */
#define MCAN_IE_BECE_Msk                    (_U_(0x1) << MCAN_IE_BECE_Pos)                 /**< (MCAN_IE) Bit Error Corrected Interrupt Enable Mask */
#define MCAN_IE_BECE                        MCAN_IE_BECE_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IE_BECE_Msk instead */
#define MCAN_IE_BEUE_Pos                    21                                             /**< (MCAN_IE) Bit Error Uncorrected Interrupt Enable Position */
#define MCAN_IE_BEUE_Msk                    (_U_(0x1) << MCAN_IE_BEUE_Pos)                 /**< (MCAN_IE) Bit Error Uncorrected Interrupt Enable Mask */
#define MCAN_IE_BEUE                        MCAN_IE_BEUE_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IE_BEUE_Msk instead */
#define MCAN_IE_ELOE_Pos                    22                                             /**< (MCAN_IE) Error Logging Overflow Interrupt Enable Position */
#define MCAN_IE_ELOE_Msk                    (_U_(0x1) << MCAN_IE_ELOE_Pos)                 /**< (MCAN_IE) Error Logging Overflow Interrupt Enable Mask */
#define MCAN_IE_ELOE                        MCAN_IE_ELOE_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IE_ELOE_Msk instead */
#define MCAN_IE_EPE_Pos                     23                                             /**< (MCAN_IE) Error Passive Interrupt Enable Position */
#define MCAN_IE_EPE_Msk                     (_U_(0x1) << MCAN_IE_EPE_Pos)                  /**< (MCAN_IE) Error Passive Interrupt Enable Mask */
#define MCAN_IE_EPE                         MCAN_IE_EPE_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IE_EPE_Msk instead */
#define MCAN_IE_EWE_Pos                     24                                             /**< (MCAN_IE) Warning Status Interrupt Enable Position */
#define MCAN_IE_EWE_Msk                     (_U_(0x1) << MCAN_IE_EWE_Pos)                  /**< (MCAN_IE) Warning Status Interrupt Enable Mask */
#define MCAN_IE_EWE                         MCAN_IE_EWE_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IE_EWE_Msk instead */
#define MCAN_IE_BOE_Pos                     25                                             /**< (MCAN_IE) Bus_Off Status Interrupt Enable Position */
#define MCAN_IE_BOE_Msk                     (_U_(0x1) << MCAN_IE_BOE_Pos)                  /**< (MCAN_IE) Bus_Off Status Interrupt Enable Mask */
#define MCAN_IE_BOE                         MCAN_IE_BOE_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IE_BOE_Msk instead */
#define MCAN_IE_WDIE_Pos                    26                                             /**< (MCAN_IE) Watchdog Interrupt Enable Position */
#define MCAN_IE_WDIE_Msk                    (_U_(0x1) << MCAN_IE_WDIE_Pos)                 /**< (MCAN_IE) Watchdog Interrupt Enable Mask */
#define MCAN_IE_WDIE                        MCAN_IE_WDIE_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IE_WDIE_Msk instead */
#define MCAN_IE_CRCEE_Pos                   27                                             /**< (MCAN_IE) CRC Error Interrupt Enable Position */
#define MCAN_IE_CRCEE_Msk                   (_U_(0x1) << MCAN_IE_CRCEE_Pos)                /**< (MCAN_IE) CRC Error Interrupt Enable Mask */
#define MCAN_IE_CRCEE                       MCAN_IE_CRCEE_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IE_CRCEE_Msk instead */
#define MCAN_IE_BEE_Pos                     28                                             /**< (MCAN_IE) Bit Error Interrupt Enable Position */
#define MCAN_IE_BEE_Msk                     (_U_(0x1) << MCAN_IE_BEE_Pos)                  /**< (MCAN_IE) Bit Error Interrupt Enable Mask */
#define MCAN_IE_BEE                         MCAN_IE_BEE_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IE_BEE_Msk instead */
#define MCAN_IE_ACKEE_Pos                   29                                             /**< (MCAN_IE) Acknowledge Error Interrupt Enable Position */
#define MCAN_IE_ACKEE_Msk                   (_U_(0x1) << MCAN_IE_ACKEE_Pos)                /**< (MCAN_IE) Acknowledge Error Interrupt Enable Mask */
#define MCAN_IE_ACKEE                       MCAN_IE_ACKEE_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IE_ACKEE_Msk instead */
#define MCAN_IE_FOEE_Pos                    30                                             /**< (MCAN_IE) Format Error Interrupt Enable Position */
#define MCAN_IE_FOEE_Msk                    (_U_(0x1) << MCAN_IE_FOEE_Pos)                 /**< (MCAN_IE) Format Error Interrupt Enable Mask */
#define MCAN_IE_FOEE                        MCAN_IE_FOEE_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IE_FOEE_Msk instead */
#define MCAN_IE_STEE_Pos                    31                                             /**< (MCAN_IE) Stuff Error Interrupt Enable Position */
#define MCAN_IE_STEE_Msk                    (_U_(0x1) << MCAN_IE_STEE_Pos)                 /**< (MCAN_IE) Stuff Error Interrupt Enable Mask */
#define MCAN_IE_STEE                        MCAN_IE_STEE_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_IE_STEE_Msk instead */
#define MCAN_IE_MASK                        _U_(0xFFFFFFFF)                                /**< \deprecated (MCAN_IE) Register MASK  (Use MCAN_IE_Msk instead)  */
#define MCAN_IE_Msk                         _U_(0xFFFFFFFF)                                /**< (MCAN_IE) Register Mask  */

/* -------- MCAN_ILS : (MCAN Offset: 0x58) (R/W 32) Interrupt Line Select Register -------- */
#define MCAN_ILS_RF0NL_Pos                  0                                              /**< (MCAN_ILS) Receive FIFO 0 New Message Interrupt Line Position */
#define MCAN_ILS_RF0NL_Msk                  (_U_(0x1) << MCAN_ILS_RF0NL_Pos)               /**< (MCAN_ILS) Receive FIFO 0 New Message Interrupt Line Mask */
#define MCAN_ILS_RF0NL                      MCAN_ILS_RF0NL_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_ILS_RF0NL_Msk instead */
#define MCAN_ILS_RF0WL_Pos                  1                                              /**< (MCAN_ILS) Receive FIFO 0 Watermark Reached Interrupt Line Position */
#define MCAN_ILS_RF0WL_Msk                  (_U_(0x1) << MCAN_ILS_RF0WL_Pos)               /**< (MCAN_ILS) Receive FIFO 0 Watermark Reached Interrupt Line Mask */
#define MCAN_ILS_RF0WL                      MCAN_ILS_RF0WL_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_ILS_RF0WL_Msk instead */
#define MCAN_ILS_RF0FL_Pos                  2                                              /**< (MCAN_ILS) Receive FIFO 0 Full Interrupt Line Position */
#define MCAN_ILS_RF0FL_Msk                  (_U_(0x1) << MCAN_ILS_RF0FL_Pos)               /**< (MCAN_ILS) Receive FIFO 0 Full Interrupt Line Mask */
#define MCAN_ILS_RF0FL                      MCAN_ILS_RF0FL_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_ILS_RF0FL_Msk instead */
#define MCAN_ILS_RF0LL_Pos                  3                                              /**< (MCAN_ILS) Receive FIFO 0 Message Lost Interrupt Line Position */
#define MCAN_ILS_RF0LL_Msk                  (_U_(0x1) << MCAN_ILS_RF0LL_Pos)               /**< (MCAN_ILS) Receive FIFO 0 Message Lost Interrupt Line Mask */
#define MCAN_ILS_RF0LL                      MCAN_ILS_RF0LL_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_ILS_RF0LL_Msk instead */
#define MCAN_ILS_RF1NL_Pos                  4                                              /**< (MCAN_ILS) Receive FIFO 1 New Message Interrupt Line Position */
#define MCAN_ILS_RF1NL_Msk                  (_U_(0x1) << MCAN_ILS_RF1NL_Pos)               /**< (MCAN_ILS) Receive FIFO 1 New Message Interrupt Line Mask */
#define MCAN_ILS_RF1NL                      MCAN_ILS_RF1NL_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_ILS_RF1NL_Msk instead */
#define MCAN_ILS_RF1WL_Pos                  5                                              /**< (MCAN_ILS) Receive FIFO 1 Watermark Reached Interrupt Line Position */
#define MCAN_ILS_RF1WL_Msk                  (_U_(0x1) << MCAN_ILS_RF1WL_Pos)               /**< (MCAN_ILS) Receive FIFO 1 Watermark Reached Interrupt Line Mask */
#define MCAN_ILS_RF1WL                      MCAN_ILS_RF1WL_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_ILS_RF1WL_Msk instead */
#define MCAN_ILS_RF1FL_Pos                  6                                              /**< (MCAN_ILS) Receive FIFO 1 Full Interrupt Line Position */
#define MCAN_ILS_RF1FL_Msk                  (_U_(0x1) << MCAN_ILS_RF1FL_Pos)               /**< (MCAN_ILS) Receive FIFO 1 Full Interrupt Line Mask */
#define MCAN_ILS_RF1FL                      MCAN_ILS_RF1FL_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_ILS_RF1FL_Msk instead */
#define MCAN_ILS_RF1LL_Pos                  7                                              /**< (MCAN_ILS) Receive FIFO 1 Message Lost Interrupt Line Position */
#define MCAN_ILS_RF1LL_Msk                  (_U_(0x1) << MCAN_ILS_RF1LL_Pos)               /**< (MCAN_ILS) Receive FIFO 1 Message Lost Interrupt Line Mask */
#define MCAN_ILS_RF1LL                      MCAN_ILS_RF1LL_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_ILS_RF1LL_Msk instead */
#define MCAN_ILS_HPML_Pos                   8                                              /**< (MCAN_ILS) High Priority Message Interrupt Line Position */
#define MCAN_ILS_HPML_Msk                   (_U_(0x1) << MCAN_ILS_HPML_Pos)                /**< (MCAN_ILS) High Priority Message Interrupt Line Mask */
#define MCAN_ILS_HPML                       MCAN_ILS_HPML_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_ILS_HPML_Msk instead */
#define MCAN_ILS_TCL_Pos                    9                                              /**< (MCAN_ILS) Transmission Completed Interrupt Line Position */
#define MCAN_ILS_TCL_Msk                    (_U_(0x1) << MCAN_ILS_TCL_Pos)                 /**< (MCAN_ILS) Transmission Completed Interrupt Line Mask */
#define MCAN_ILS_TCL                        MCAN_ILS_TCL_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_ILS_TCL_Msk instead */
#define MCAN_ILS_TCFL_Pos                   10                                             /**< (MCAN_ILS) Transmission Cancellation Finished Interrupt Line Position */
#define MCAN_ILS_TCFL_Msk                   (_U_(0x1) << MCAN_ILS_TCFL_Pos)                /**< (MCAN_ILS) Transmission Cancellation Finished Interrupt Line Mask */
#define MCAN_ILS_TCFL                       MCAN_ILS_TCFL_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_ILS_TCFL_Msk instead */
#define MCAN_ILS_TFEL_Pos                   11                                             /**< (MCAN_ILS) Tx FIFO Empty Interrupt Line Position */
#define MCAN_ILS_TFEL_Msk                   (_U_(0x1) << MCAN_ILS_TFEL_Pos)                /**< (MCAN_ILS) Tx FIFO Empty Interrupt Line Mask */
#define MCAN_ILS_TFEL                       MCAN_ILS_TFEL_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_ILS_TFEL_Msk instead */
#define MCAN_ILS_TEFNL_Pos                  12                                             /**< (MCAN_ILS) Tx Event FIFO New Entry Interrupt Line Position */
#define MCAN_ILS_TEFNL_Msk                  (_U_(0x1) << MCAN_ILS_TEFNL_Pos)               /**< (MCAN_ILS) Tx Event FIFO New Entry Interrupt Line Mask */
#define MCAN_ILS_TEFNL                      MCAN_ILS_TEFNL_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_ILS_TEFNL_Msk instead */
#define MCAN_ILS_TEFWL_Pos                  13                                             /**< (MCAN_ILS) Tx Event FIFO Watermark Reached Interrupt Line Position */
#define MCAN_ILS_TEFWL_Msk                  (_U_(0x1) << MCAN_ILS_TEFWL_Pos)               /**< (MCAN_ILS) Tx Event FIFO Watermark Reached Interrupt Line Mask */
#define MCAN_ILS_TEFWL                      MCAN_ILS_TEFWL_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_ILS_TEFWL_Msk instead */
#define MCAN_ILS_TEFFL_Pos                  14                                             /**< (MCAN_ILS) Tx Event FIFO Full Interrupt Line Position */
#define MCAN_ILS_TEFFL_Msk                  (_U_(0x1) << MCAN_ILS_TEFFL_Pos)               /**< (MCAN_ILS) Tx Event FIFO Full Interrupt Line Mask */
#define MCAN_ILS_TEFFL                      MCAN_ILS_TEFFL_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_ILS_TEFFL_Msk instead */
#define MCAN_ILS_TEFLL_Pos                  15                                             /**< (MCAN_ILS) Tx Event FIFO Event Lost Interrupt Line Position */
#define MCAN_ILS_TEFLL_Msk                  (_U_(0x1) << MCAN_ILS_TEFLL_Pos)               /**< (MCAN_ILS) Tx Event FIFO Event Lost Interrupt Line Mask */
#define MCAN_ILS_TEFLL                      MCAN_ILS_TEFLL_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_ILS_TEFLL_Msk instead */
#define MCAN_ILS_TSWL_Pos                   16                                             /**< (MCAN_ILS) Timestamp Wraparound Interrupt Line Position */
#define MCAN_ILS_TSWL_Msk                   (_U_(0x1) << MCAN_ILS_TSWL_Pos)                /**< (MCAN_ILS) Timestamp Wraparound Interrupt Line Mask */
#define MCAN_ILS_TSWL                       MCAN_ILS_TSWL_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_ILS_TSWL_Msk instead */
#define MCAN_ILS_MRAFL_Pos                  17                                             /**< (MCAN_ILS) Message RAM Access Failure Interrupt Line Position */
#define MCAN_ILS_MRAFL_Msk                  (_U_(0x1) << MCAN_ILS_MRAFL_Pos)               /**< (MCAN_ILS) Message RAM Access Failure Interrupt Line Mask */
#define MCAN_ILS_MRAFL                      MCAN_ILS_MRAFL_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_ILS_MRAFL_Msk instead */
#define MCAN_ILS_TOOL_Pos                   18                                             /**< (MCAN_ILS) Timeout Occurred Interrupt Line Position */
#define MCAN_ILS_TOOL_Msk                   (_U_(0x1) << MCAN_ILS_TOOL_Pos)                /**< (MCAN_ILS) Timeout Occurred Interrupt Line Mask */
#define MCAN_ILS_TOOL                       MCAN_ILS_TOOL_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_ILS_TOOL_Msk instead */
#define MCAN_ILS_DRXL_Pos                   19                                             /**< (MCAN_ILS) Message stored to Dedicated Receive Buffer Interrupt Line Position */
#define MCAN_ILS_DRXL_Msk                   (_U_(0x1) << MCAN_ILS_DRXL_Pos)                /**< (MCAN_ILS) Message stored to Dedicated Receive Buffer Interrupt Line Mask */
#define MCAN_ILS_DRXL                       MCAN_ILS_DRXL_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_ILS_DRXL_Msk instead */
#define MCAN_ILS_BECL_Pos                   20                                             /**< (MCAN_ILS) Bit Error Corrected Interrupt Line Position */
#define MCAN_ILS_BECL_Msk                   (_U_(0x1) << MCAN_ILS_BECL_Pos)                /**< (MCAN_ILS) Bit Error Corrected Interrupt Line Mask */
#define MCAN_ILS_BECL                       MCAN_ILS_BECL_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_ILS_BECL_Msk instead */
#define MCAN_ILS_BEUL_Pos                   21                                             /**< (MCAN_ILS) Bit Error Uncorrected Interrupt Line Position */
#define MCAN_ILS_BEUL_Msk                   (_U_(0x1) << MCAN_ILS_BEUL_Pos)                /**< (MCAN_ILS) Bit Error Uncorrected Interrupt Line Mask */
#define MCAN_ILS_BEUL                       MCAN_ILS_BEUL_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_ILS_BEUL_Msk instead */
#define MCAN_ILS_ELOL_Pos                   22                                             /**< (MCAN_ILS) Error Logging Overflow Interrupt Line Position */
#define MCAN_ILS_ELOL_Msk                   (_U_(0x1) << MCAN_ILS_ELOL_Pos)                /**< (MCAN_ILS) Error Logging Overflow Interrupt Line Mask */
#define MCAN_ILS_ELOL                       MCAN_ILS_ELOL_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_ILS_ELOL_Msk instead */
#define MCAN_ILS_EPL_Pos                    23                                             /**< (MCAN_ILS) Error Passive Interrupt Line Position */
#define MCAN_ILS_EPL_Msk                    (_U_(0x1) << MCAN_ILS_EPL_Pos)                 /**< (MCAN_ILS) Error Passive Interrupt Line Mask */
#define MCAN_ILS_EPL                        MCAN_ILS_EPL_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_ILS_EPL_Msk instead */
#define MCAN_ILS_EWL_Pos                    24                                             /**< (MCAN_ILS) Warning Status Interrupt Line Position */
#define MCAN_ILS_EWL_Msk                    (_U_(0x1) << MCAN_ILS_EWL_Pos)                 /**< (MCAN_ILS) Warning Status Interrupt Line Mask */
#define MCAN_ILS_EWL                        MCAN_ILS_EWL_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_ILS_EWL_Msk instead */
#define MCAN_ILS_BOL_Pos                    25                                             /**< (MCAN_ILS) Bus_Off Status Interrupt Line Position */
#define MCAN_ILS_BOL_Msk                    (_U_(0x1) << MCAN_ILS_BOL_Pos)                 /**< (MCAN_ILS) Bus_Off Status Interrupt Line Mask */
#define MCAN_ILS_BOL                        MCAN_ILS_BOL_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_ILS_BOL_Msk instead */
#define MCAN_ILS_WDIL_Pos                   26                                             /**< (MCAN_ILS) Watchdog Interrupt Line Position */
#define MCAN_ILS_WDIL_Msk                   (_U_(0x1) << MCAN_ILS_WDIL_Pos)                /**< (MCAN_ILS) Watchdog Interrupt Line Mask */
#define MCAN_ILS_WDIL                       MCAN_ILS_WDIL_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_ILS_WDIL_Msk instead */
#define MCAN_ILS_CRCEL_Pos                  27                                             /**< (MCAN_ILS) CRC Error Interrupt Line Position */
#define MCAN_ILS_CRCEL_Msk                  (_U_(0x1) << MCAN_ILS_CRCEL_Pos)               /**< (MCAN_ILS) CRC Error Interrupt Line Mask */
#define MCAN_ILS_CRCEL                      MCAN_ILS_CRCEL_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_ILS_CRCEL_Msk instead */
#define MCAN_ILS_BEL_Pos                    28                                             /**< (MCAN_ILS) Bit Error Interrupt Line Position */
#define MCAN_ILS_BEL_Msk                    (_U_(0x1) << MCAN_ILS_BEL_Pos)                 /**< (MCAN_ILS) Bit Error Interrupt Line Mask */
#define MCAN_ILS_BEL                        MCAN_ILS_BEL_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_ILS_BEL_Msk instead */
#define MCAN_ILS_ACKEL_Pos                  29                                             /**< (MCAN_ILS) Acknowledge Error Interrupt Line Position */
#define MCAN_ILS_ACKEL_Msk                  (_U_(0x1) << MCAN_ILS_ACKEL_Pos)               /**< (MCAN_ILS) Acknowledge Error Interrupt Line Mask */
#define MCAN_ILS_ACKEL                      MCAN_ILS_ACKEL_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_ILS_ACKEL_Msk instead */
#define MCAN_ILS_FOEL_Pos                   30                                             /**< (MCAN_ILS) Format Error Interrupt Line Position */
#define MCAN_ILS_FOEL_Msk                   (_U_(0x1) << MCAN_ILS_FOEL_Pos)                /**< (MCAN_ILS) Format Error Interrupt Line Mask */
#define MCAN_ILS_FOEL                       MCAN_ILS_FOEL_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_ILS_FOEL_Msk instead */
#define MCAN_ILS_STEL_Pos                   31                                             /**< (MCAN_ILS) Stuff Error Interrupt Line Position */
#define MCAN_ILS_STEL_Msk                   (_U_(0x1) << MCAN_ILS_STEL_Pos)                /**< (MCAN_ILS) Stuff Error Interrupt Line Mask */
#define MCAN_ILS_STEL                       MCAN_ILS_STEL_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_ILS_STEL_Msk instead */
#define MCAN_ILS_MASK                       _U_(0xFFFFFFFF)                                /**< \deprecated (MCAN_ILS) Register MASK  (Use MCAN_ILS_Msk instead)  */
#define MCAN_ILS_Msk                        _U_(0xFFFFFFFF)                                /**< (MCAN_ILS) Register Mask  */

/* -------- MCAN_ILE : (MCAN Offset: 0x5c) (R/W 32) Interrupt Line Enable Register -------- */
#define MCAN_ILE_EINT_Pos                   0                                              /**< (MCAN_ILE Position) Enable Interrupt Line x */
#define MCAN_ILE_EINT_Msk                   (_U_(0x3) << MCAN_ILE_EINT_Pos)                /**< (MCAN_ILE Mask) EINT */
#define MCAN_ILE_EINT(value)                (MCAN_ILE_EINT_Msk & ((value) << MCAN_ILE_EINT_Pos))

/* -------- MCAN_GFC : (MCAN Offset: 0x80) (R/W 32) Global Filter Configuration Register -------- */
#define MCAN_GFC_RRFE_Pos                   0                                              /**< (MCAN_GFC) Reject Remote Frames Extended Position */
#define MCAN_GFC_RRFE_Msk                   (_U_(0x1) << MCAN_GFC_RRFE_Pos)                /**< (MCAN_GFC) Reject Remote Frames Extended Mask */
#define MCAN_GFC_RRFE                       MCAN_GFC_RRFE_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_GFC_RRFE_Msk instead */
#define   MCAN_GFC_RRFE_FILTER_Val          _U_(0x0)                                       /**< (MCAN_GFC) Filter remote frames with 29-bit extended IDs.  */
#define   MCAN_GFC_RRFE_REJECT_Val          _U_(0x1)                                       /**< (MCAN_GFC) Reject all remote frames with 29-bit extended IDs.  */
#define MCAN_GFC_RRFE_FILTER                (MCAN_GFC_RRFE_FILTER_Val << MCAN_GFC_RRFE_Pos)  /**< (MCAN_GFC) Filter remote frames with 29-bit extended IDs. Position  */
#define MCAN_GFC_RRFE_REJECT                (MCAN_GFC_RRFE_REJECT_Val << MCAN_GFC_RRFE_Pos)  /**< (MCAN_GFC) Reject all remote frames with 29-bit extended IDs. Position  */
#define MCAN_GFC_RRFS_Pos                   1                                              /**< (MCAN_GFC) Reject Remote Frames Standard Position */
#define MCAN_GFC_RRFS_Msk                   (_U_(0x1) << MCAN_GFC_RRFS_Pos)                /**< (MCAN_GFC) Reject Remote Frames Standard Mask */
#define MCAN_GFC_RRFS                       MCAN_GFC_RRFS_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_GFC_RRFS_Msk instead */
#define   MCAN_GFC_RRFS_FILTER_Val          _U_(0x0)                                       /**< (MCAN_GFC) Filter remote frames with 11-bit standard IDs.  */
#define   MCAN_GFC_RRFS_REJECT_Val          _U_(0x1)                                       /**< (MCAN_GFC) Reject all remote frames with 11-bit standard IDs.  */
#define MCAN_GFC_RRFS_FILTER                (MCAN_GFC_RRFS_FILTER_Val << MCAN_GFC_RRFS_Pos)  /**< (MCAN_GFC) Filter remote frames with 11-bit standard IDs. Position  */
#define MCAN_GFC_RRFS_REJECT                (MCAN_GFC_RRFS_REJECT_Val << MCAN_GFC_RRFS_Pos)  /**< (MCAN_GFC) Reject all remote frames with 11-bit standard IDs. Position  */
#define MCAN_GFC_ANFE_Pos                   2                                              /**< (MCAN_GFC) Accept Non-matching Frames Extended Position */
#define MCAN_GFC_ANFE_Msk                   (_U_(0x3) << MCAN_GFC_ANFE_Pos)                /**< (MCAN_GFC) Accept Non-matching Frames Extended Mask */
#define MCAN_GFC_ANFE(value)                (MCAN_GFC_ANFE_Msk & ((value) << MCAN_GFC_ANFE_Pos))
#define   MCAN_GFC_ANFE_RX_FIFO_0_Val       _U_(0x0)                                       /**< (MCAN_GFC) Message stored in Receive FIFO 0  */
#define   MCAN_GFC_ANFE_RX_FIFO_1_Val       _U_(0x1)                                       /**< (MCAN_GFC) Message stored in Receive FIFO 1  */
#define MCAN_GFC_ANFE_RX_FIFO_0             (MCAN_GFC_ANFE_RX_FIFO_0_Val << MCAN_GFC_ANFE_Pos)  /**< (MCAN_GFC) Message stored in Receive FIFO 0 Position  */
#define MCAN_GFC_ANFE_RX_FIFO_1             (MCAN_GFC_ANFE_RX_FIFO_1_Val << MCAN_GFC_ANFE_Pos)  /**< (MCAN_GFC) Message stored in Receive FIFO 1 Position  */
#define MCAN_GFC_ANFS_Pos                   4                                              /**< (MCAN_GFC) Accept Non-matching Frames Standard Position */
#define MCAN_GFC_ANFS_Msk                   (_U_(0x3) << MCAN_GFC_ANFS_Pos)                /**< (MCAN_GFC) Accept Non-matching Frames Standard Mask */
#define MCAN_GFC_ANFS(value)                (MCAN_GFC_ANFS_Msk & ((value) << MCAN_GFC_ANFS_Pos))
#define   MCAN_GFC_ANFS_RX_FIFO_0_Val       _U_(0x0)                                       /**< (MCAN_GFC) Message stored in Receive FIFO 0  */
#define   MCAN_GFC_ANFS_RX_FIFO_1_Val       _U_(0x1)                                       /**< (MCAN_GFC) Message stored in Receive FIFO 1  */
#define MCAN_GFC_ANFS_RX_FIFO_0             (MCAN_GFC_ANFS_RX_FIFO_0_Val << MCAN_GFC_ANFS_Pos)  /**< (MCAN_GFC) Message stored in Receive FIFO 0 Position  */
#define MCAN_GFC_ANFS_RX_FIFO_1             (MCAN_GFC_ANFS_RX_FIFO_1_Val << MCAN_GFC_ANFS_Pos)  /**< (MCAN_GFC) Message stored in Receive FIFO 1 Position  */
#define MCAN_GFC_MASK                       _U_(0x3F)                                      /**< \deprecated (MCAN_GFC) Register MASK  (Use MCAN_GFC_Msk instead)  */
#define MCAN_GFC_Msk                        _U_(0x3F)                                      /**< (MCAN_GFC) Register Mask  */

/* -------- MCAN_SIDFC : (MCAN Offset: 0x84) (R/W 32) Standard ID Filter Configuration Register -------- */
#define MCAN_SIDFC_FLSSA_Pos                2                                              /**< (MCAN_SIDFC) Filter List Standard Start Address Position */
#define MCAN_SIDFC_FLSSA_Msk                (_U_(0x3FFF) << MCAN_SIDFC_FLSSA_Pos)          /**< (MCAN_SIDFC) Filter List Standard Start Address Mask */
#define MCAN_SIDFC_FLSSA(value)             (MCAN_SIDFC_FLSSA_Msk & ((value) << MCAN_SIDFC_FLSSA_Pos))
#define MCAN_SIDFC_LSS_Pos                  16                                             /**< (MCAN_SIDFC) List Size Standard Position */
#define MCAN_SIDFC_LSS_Msk                  (_U_(0xFF) << MCAN_SIDFC_LSS_Pos)              /**< (MCAN_SIDFC) List Size Standard Mask */
#define MCAN_SIDFC_LSS(value)               (MCAN_SIDFC_LSS_Msk & ((value) << MCAN_SIDFC_LSS_Pos))
#define MCAN_SIDFC_MASK                     _U_(0xFFFFFC)                                  /**< \deprecated (MCAN_SIDFC) Register MASK  (Use MCAN_SIDFC_Msk instead)  */
#define MCAN_SIDFC_Msk                      _U_(0xFFFFFC)                                  /**< (MCAN_SIDFC) Register Mask  */

/* -------- MCAN_XIDFC : (MCAN Offset: 0x88) (R/W 32) Extended ID Filter Configuration Register -------- */
#define MCAN_XIDFC_FLESA_Pos                2                                              /**< (MCAN_XIDFC) Filter List Extended Start Address Position */
#define MCAN_XIDFC_FLESA_Msk                (_U_(0x3FFF) << MCAN_XIDFC_FLESA_Pos)          /**< (MCAN_XIDFC) Filter List Extended Start Address Mask */
#define MCAN_XIDFC_FLESA(value)             (MCAN_XIDFC_FLESA_Msk & ((value) << MCAN_XIDFC_FLESA_Pos))
#define MCAN_XIDFC_LSE_Pos                  16                                             /**< (MCAN_XIDFC) List Size Extended Position */
#define MCAN_XIDFC_LSE_Msk                  (_U_(0x7F) << MCAN_XIDFC_LSE_Pos)              /**< (MCAN_XIDFC) List Size Extended Mask */
#define MCAN_XIDFC_LSE(value)               (MCAN_XIDFC_LSE_Msk & ((value) << MCAN_XIDFC_LSE_Pos))
#define MCAN_XIDFC_MASK                     _U_(0x7FFFFC)                                  /**< \deprecated (MCAN_XIDFC) Register MASK  (Use MCAN_XIDFC_Msk instead)  */
#define MCAN_XIDFC_Msk                      _U_(0x7FFFFC)                                  /**< (MCAN_XIDFC) Register Mask  */

/* -------- MCAN_XIDAM : (MCAN Offset: 0x90) (R/W 32) Extended ID AND Mask Register -------- */
#define MCAN_XIDAM_EIDM_Pos                 0                                              /**< (MCAN_XIDAM) Extended ID Mask Position */
#define MCAN_XIDAM_EIDM_Msk                 (_U_(0x1FFFFFFF) << MCAN_XIDAM_EIDM_Pos)       /**< (MCAN_XIDAM) Extended ID Mask Mask */
#define MCAN_XIDAM_EIDM(value)              (MCAN_XIDAM_EIDM_Msk & ((value) << MCAN_XIDAM_EIDM_Pos))
#define MCAN_XIDAM_MASK                     _U_(0x1FFFFFFF)                                /**< \deprecated (MCAN_XIDAM) Register MASK  (Use MCAN_XIDAM_Msk instead)  */
#define MCAN_XIDAM_Msk                      _U_(0x1FFFFFFF)                                /**< (MCAN_XIDAM) Register Mask  */

/* -------- MCAN_HPMS : (MCAN Offset: 0x94) (R/ 32) High Priority Message Status Register -------- */
#define MCAN_HPMS_BIDX_Pos                  0                                              /**< (MCAN_HPMS) Buffer Index Position */
#define MCAN_HPMS_BIDX_Msk                  (_U_(0x3F) << MCAN_HPMS_BIDX_Pos)              /**< (MCAN_HPMS) Buffer Index Mask */
#define MCAN_HPMS_BIDX(value)               (MCAN_HPMS_BIDX_Msk & ((value) << MCAN_HPMS_BIDX_Pos))
#define MCAN_HPMS_MSI_Pos                   6                                              /**< (MCAN_HPMS) Message Storage Indicator Position */
#define MCAN_HPMS_MSI_Msk                   (_U_(0x3) << MCAN_HPMS_MSI_Pos)                /**< (MCAN_HPMS) Message Storage Indicator Mask */
#define MCAN_HPMS_MSI(value)                (MCAN_HPMS_MSI_Msk & ((value) << MCAN_HPMS_MSI_Pos))
#define   MCAN_HPMS_MSI_NO_FIFO_SEL_Val     _U_(0x0)                                       /**< (MCAN_HPMS) No FIFO selected.  */
#define   MCAN_HPMS_MSI_LOST_Val            _U_(0x1)                                       /**< (MCAN_HPMS) FIFO message.  */
#define   MCAN_HPMS_MSI_FIFO_0_Val          _U_(0x2)                                       /**< (MCAN_HPMS) Message stored in FIFO 0.  */
#define   MCAN_HPMS_MSI_FIFO_1_Val          _U_(0x3)                                       /**< (MCAN_HPMS) Message stored in FIFO 1.  */
#define MCAN_HPMS_MSI_NO_FIFO_SEL           (MCAN_HPMS_MSI_NO_FIFO_SEL_Val << MCAN_HPMS_MSI_Pos)  /**< (MCAN_HPMS) No FIFO selected. Position  */
#define MCAN_HPMS_MSI_LOST                  (MCAN_HPMS_MSI_LOST_Val << MCAN_HPMS_MSI_Pos)  /**< (MCAN_HPMS) FIFO message. Position  */
#define MCAN_HPMS_MSI_FIFO_0                (MCAN_HPMS_MSI_FIFO_0_Val << MCAN_HPMS_MSI_Pos)  /**< (MCAN_HPMS) Message stored in FIFO 0. Position  */
#define MCAN_HPMS_MSI_FIFO_1                (MCAN_HPMS_MSI_FIFO_1_Val << MCAN_HPMS_MSI_Pos)  /**< (MCAN_HPMS) Message stored in FIFO 1. Position  */
#define MCAN_HPMS_FIDX_Pos                  8                                              /**< (MCAN_HPMS) Filter Index Position */
#define MCAN_HPMS_FIDX_Msk                  (_U_(0x7F) << MCAN_HPMS_FIDX_Pos)              /**< (MCAN_HPMS) Filter Index Mask */
#define MCAN_HPMS_FIDX(value)               (MCAN_HPMS_FIDX_Msk & ((value) << MCAN_HPMS_FIDX_Pos))
#define MCAN_HPMS_FLST_Pos                  15                                             /**< (MCAN_HPMS) Filter List Position */
#define MCAN_HPMS_FLST_Msk                  (_U_(0x1) << MCAN_HPMS_FLST_Pos)               /**< (MCAN_HPMS) Filter List Mask */
#define MCAN_HPMS_FLST                      MCAN_HPMS_FLST_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_HPMS_FLST_Msk instead */
#define MCAN_HPMS_MASK                      _U_(0xFFFF)                                    /**< \deprecated (MCAN_HPMS) Register MASK  (Use MCAN_HPMS_Msk instead)  */
#define MCAN_HPMS_Msk                       _U_(0xFFFF)                                    /**< (MCAN_HPMS) Register Mask  */

/* -------- MCAN_NDAT1 : (MCAN Offset: 0x98) (R/W 32) New Data 1 Register -------- */
#define MCAN_NDAT1_ND_Pos                   0                                              /**< (MCAN_NDAT1 Position) New Data */
#define MCAN_NDAT1_ND_Msk                   (_U_(0xFFFFFFFF) << MCAN_NDAT1_ND_Pos)         /**< (MCAN_NDAT1 Mask) ND */
#define MCAN_NDAT1_ND(value)                (MCAN_NDAT1_ND_Msk & ((value) << MCAN_NDAT1_ND_Pos))

/* -------- MCAN_NDAT2 : (MCAN Offset: 0x9c) (R/W 32) New Data 2 Register -------- */
#define MCAN_NDAT2_ND_Pos                   0                                              /**< (MCAN_NDAT2 Position) New Data */
#define MCAN_NDAT2_ND_Msk                   (_U_(0xFFFFFFFF) << MCAN_NDAT2_ND_Pos)         /**< (MCAN_NDAT2 Mask) ND */
#define MCAN_NDAT2_ND(value)                (MCAN_NDAT2_ND_Msk & ((value) << MCAN_NDAT2_ND_Pos))

/* -------- MCAN_RXF0C : (MCAN Offset: 0xa0) (R/W 32) Receive FIFO 0 Configuration Register -------- */
#define MCAN_RXF0C_F0SA_Pos                 2                                              /**< (MCAN_RXF0C) Receive FIFO 0 Start Address Position */
#define MCAN_RXF0C_F0SA_Msk                 (_U_(0x3FFF) << MCAN_RXF0C_F0SA_Pos)           /**< (MCAN_RXF0C) Receive FIFO 0 Start Address Mask */
#define MCAN_RXF0C_F0SA(value)              (MCAN_RXF0C_F0SA_Msk & ((value) << MCAN_RXF0C_F0SA_Pos))
#define MCAN_RXF0C_F0S_Pos                  16                                             /**< (MCAN_RXF0C) Receive FIFO 0 Start Address Position */
#define MCAN_RXF0C_F0S_Msk                  (_U_(0x7F) << MCAN_RXF0C_F0S_Pos)              /**< (MCAN_RXF0C) Receive FIFO 0 Start Address Mask */
#define MCAN_RXF0C_F0S(value)               (MCAN_RXF0C_F0S_Msk & ((value) << MCAN_RXF0C_F0S_Pos))
#define MCAN_RXF0C_F0WM_Pos                 24                                             /**< (MCAN_RXF0C) Receive FIFO 0 Watermark Position */
#define MCAN_RXF0C_F0WM_Msk                 (_U_(0x7F) << MCAN_RXF0C_F0WM_Pos)             /**< (MCAN_RXF0C) Receive FIFO 0 Watermark Mask */
#define MCAN_RXF0C_F0WM(value)              (MCAN_RXF0C_F0WM_Msk & ((value) << MCAN_RXF0C_F0WM_Pos))
#define MCAN_RXF0C_F0OM_Pos                 31                                             /**< (MCAN_RXF0C) FIFO 0 Operation Mode Position */
#define MCAN_RXF0C_F0OM_Msk                 (_U_(0x1) << MCAN_RXF0C_F0OM_Pos)              /**< (MCAN_RXF0C) FIFO 0 Operation Mode Mask */
#define MCAN_RXF0C_F0OM                     MCAN_RXF0C_F0OM_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_RXF0C_F0OM_Msk instead */
#define MCAN_RXF0C_MASK                     _U_(0xFF7FFFFC)                                /**< \deprecated (MCAN_RXF0C) Register MASK  (Use MCAN_RXF0C_Msk instead)  */
#define MCAN_RXF0C_Msk                      _U_(0xFF7FFFFC)                                /**< (MCAN_RXF0C) Register Mask  */

/* -------- MCAN_RXF0S : (MCAN Offset: 0xa4) (R/ 32) Receive FIFO 0 Status Register -------- */
#define MCAN_RXF0S_F0FL_Pos                 0                                              /**< (MCAN_RXF0S) Receive FIFO 0 Fill Level Position */
#define MCAN_RXF0S_F0FL_Msk                 (_U_(0x7F) << MCAN_RXF0S_F0FL_Pos)             /**< (MCAN_RXF0S) Receive FIFO 0 Fill Level Mask */
#define MCAN_RXF0S_F0FL(value)              (MCAN_RXF0S_F0FL_Msk & ((value) << MCAN_RXF0S_F0FL_Pos))
#define MCAN_RXF0S_F0GI_Pos                 8                                              /**< (MCAN_RXF0S) Receive FIFO 0 Get Index Position */
#define MCAN_RXF0S_F0GI_Msk                 (_U_(0x3F) << MCAN_RXF0S_F0GI_Pos)             /**< (MCAN_RXF0S) Receive FIFO 0 Get Index Mask */
#define MCAN_RXF0S_F0GI(value)              (MCAN_RXF0S_F0GI_Msk & ((value) << MCAN_RXF0S_F0GI_Pos))
#define MCAN_RXF0S_F0PI_Pos                 16                                             /**< (MCAN_RXF0S) Receive FIFO 0 Put Index Position */
#define MCAN_RXF0S_F0PI_Msk                 (_U_(0x3F) << MCAN_RXF0S_F0PI_Pos)             /**< (MCAN_RXF0S) Receive FIFO 0 Put Index Mask */
#define MCAN_RXF0S_F0PI(value)              (MCAN_RXF0S_F0PI_Msk & ((value) << MCAN_RXF0S_F0PI_Pos))
#define MCAN_RXF0S_F0F_Pos                  24                                             /**< (MCAN_RXF0S) Receive FIFO 0 Fill Level Position */
#define MCAN_RXF0S_F0F_Msk                  (_U_(0x1) << MCAN_RXF0S_F0F_Pos)               /**< (MCAN_RXF0S) Receive FIFO 0 Fill Level Mask */
#define MCAN_RXF0S_F0F                      MCAN_RXF0S_F0F_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_RXF0S_F0F_Msk instead */
#define MCAN_RXF0S_RF0L_Pos                 25                                             /**< (MCAN_RXF0S) Receive FIFO 0 Message Lost Position */
#define MCAN_RXF0S_RF0L_Msk                 (_U_(0x1) << MCAN_RXF0S_RF0L_Pos)              /**< (MCAN_RXF0S) Receive FIFO 0 Message Lost Mask */
#define MCAN_RXF0S_RF0L                     MCAN_RXF0S_RF0L_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_RXF0S_RF0L_Msk instead */
#define MCAN_RXF0S_MASK                     _U_(0x33F3F7F)                                 /**< \deprecated (MCAN_RXF0S) Register MASK  (Use MCAN_RXF0S_Msk instead)  */
#define MCAN_RXF0S_Msk                      _U_(0x33F3F7F)                                 /**< (MCAN_RXF0S) Register Mask  */

/* -------- MCAN_RXF0A : (MCAN Offset: 0xa8) (R/W 32) Receive FIFO 0 Acknowledge Register -------- */
#define MCAN_RXF0A_F0AI_Pos                 0                                              /**< (MCAN_RXF0A) Receive FIFO 0 Acknowledge Index Position */
#define MCAN_RXF0A_F0AI_Msk                 (_U_(0x3F) << MCAN_RXF0A_F0AI_Pos)             /**< (MCAN_RXF0A) Receive FIFO 0 Acknowledge Index Mask */
#define MCAN_RXF0A_F0AI(value)              (MCAN_RXF0A_F0AI_Msk & ((value) << MCAN_RXF0A_F0AI_Pos))
#define MCAN_RXF0A_MASK                     _U_(0x3F)                                      /**< \deprecated (MCAN_RXF0A) Register MASK  (Use MCAN_RXF0A_Msk instead)  */
#define MCAN_RXF0A_Msk                      _U_(0x3F)                                      /**< (MCAN_RXF0A) Register Mask  */

/* -------- MCAN_RXBC : (MCAN Offset: 0xac) (R/W 32) Receive Rx Buffer Configuration Register -------- */
#define MCAN_RXBC_RBSA_Pos                  2                                              /**< (MCAN_RXBC) Receive Buffer Start Address Position */
#define MCAN_RXBC_RBSA_Msk                  (_U_(0x3FFF) << MCAN_RXBC_RBSA_Pos)            /**< (MCAN_RXBC) Receive Buffer Start Address Mask */
#define MCAN_RXBC_RBSA(value)               (MCAN_RXBC_RBSA_Msk & ((value) << MCAN_RXBC_RBSA_Pos))
#define MCAN_RXBC_MASK                      _U_(0xFFFC)                                    /**< \deprecated (MCAN_RXBC) Register MASK  (Use MCAN_RXBC_Msk instead)  */
#define MCAN_RXBC_Msk                       _U_(0xFFFC)                                    /**< (MCAN_RXBC) Register Mask  */

/* -------- MCAN_RXF1C : (MCAN Offset: 0xb0) (R/W 32) Receive FIFO 1 Configuration Register -------- */
#define MCAN_RXF1C_F1SA_Pos                 2                                              /**< (MCAN_RXF1C) Receive FIFO 1 Start Address Position */
#define MCAN_RXF1C_F1SA_Msk                 (_U_(0x3FFF) << MCAN_RXF1C_F1SA_Pos)           /**< (MCAN_RXF1C) Receive FIFO 1 Start Address Mask */
#define MCAN_RXF1C_F1SA(value)              (MCAN_RXF1C_F1SA_Msk & ((value) << MCAN_RXF1C_F1SA_Pos))
#define MCAN_RXF1C_F1S_Pos                  16                                             /**< (MCAN_RXF1C) Receive FIFO 1 Start Address Position */
#define MCAN_RXF1C_F1S_Msk                  (_U_(0x7F) << MCAN_RXF1C_F1S_Pos)              /**< (MCAN_RXF1C) Receive FIFO 1 Start Address Mask */
#define MCAN_RXF1C_F1S(value)               (MCAN_RXF1C_F1S_Msk & ((value) << MCAN_RXF1C_F1S_Pos))
#define MCAN_RXF1C_F1WM_Pos                 24                                             /**< (MCAN_RXF1C) Receive FIFO 1 Watermark Position */
#define MCAN_RXF1C_F1WM_Msk                 (_U_(0x7F) << MCAN_RXF1C_F1WM_Pos)             /**< (MCAN_RXF1C) Receive FIFO 1 Watermark Mask */
#define MCAN_RXF1C_F1WM(value)              (MCAN_RXF1C_F1WM_Msk & ((value) << MCAN_RXF1C_F1WM_Pos))
#define MCAN_RXF1C_F1OM_Pos                 31                                             /**< (MCAN_RXF1C) FIFO 1 Operation Mode Position */
#define MCAN_RXF1C_F1OM_Msk                 (_U_(0x1) << MCAN_RXF1C_F1OM_Pos)              /**< (MCAN_RXF1C) FIFO 1 Operation Mode Mask */
#define MCAN_RXF1C_F1OM                     MCAN_RXF1C_F1OM_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_RXF1C_F1OM_Msk instead */
#define MCAN_RXF1C_MASK                     _U_(0xFF7FFFFC)                                /**< \deprecated (MCAN_RXF1C) Register MASK  (Use MCAN_RXF1C_Msk instead)  */
#define MCAN_RXF1C_Msk                      _U_(0xFF7FFFFC)                                /**< (MCAN_RXF1C) Register Mask  */

/* -------- MCAN_RXF1S : (MCAN Offset: 0xb4) (R/ 32) Receive FIFO 1 Status Register -------- */
#define MCAN_RXF1S_F1FL_Pos                 0                                              /**< (MCAN_RXF1S) Receive FIFO 1 Fill Level Position */
#define MCAN_RXF1S_F1FL_Msk                 (_U_(0x7F) << MCAN_RXF1S_F1FL_Pos)             /**< (MCAN_RXF1S) Receive FIFO 1 Fill Level Mask */
#define MCAN_RXF1S_F1FL(value)              (MCAN_RXF1S_F1FL_Msk & ((value) << MCAN_RXF1S_F1FL_Pos))
#define MCAN_RXF1S_F1GI_Pos                 8                                              /**< (MCAN_RXF1S) Receive FIFO 1 Get Index Position */
#define MCAN_RXF1S_F1GI_Msk                 (_U_(0x3F) << MCAN_RXF1S_F1GI_Pos)             /**< (MCAN_RXF1S) Receive FIFO 1 Get Index Mask */
#define MCAN_RXF1S_F1GI(value)              (MCAN_RXF1S_F1GI_Msk & ((value) << MCAN_RXF1S_F1GI_Pos))
#define MCAN_RXF1S_F1PI_Pos                 16                                             /**< (MCAN_RXF1S) Receive FIFO 1 Put Index Position */
#define MCAN_RXF1S_F1PI_Msk                 (_U_(0x3F) << MCAN_RXF1S_F1PI_Pos)             /**< (MCAN_RXF1S) Receive FIFO 1 Put Index Mask */
#define MCAN_RXF1S_F1PI(value)              (MCAN_RXF1S_F1PI_Msk & ((value) << MCAN_RXF1S_F1PI_Pos))
#define MCAN_RXF1S_F1F_Pos                  24                                             /**< (MCAN_RXF1S) Receive FIFO 1 Fill Level Position */
#define MCAN_RXF1S_F1F_Msk                  (_U_(0x1) << MCAN_RXF1S_F1F_Pos)               /**< (MCAN_RXF1S) Receive FIFO 1 Fill Level Mask */
#define MCAN_RXF1S_F1F                      MCAN_RXF1S_F1F_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_RXF1S_F1F_Msk instead */
#define MCAN_RXF1S_RF1L_Pos                 25                                             /**< (MCAN_RXF1S) Receive FIFO 1 Message Lost Position */
#define MCAN_RXF1S_RF1L_Msk                 (_U_(0x1) << MCAN_RXF1S_RF1L_Pos)              /**< (MCAN_RXF1S) Receive FIFO 1 Message Lost Mask */
#define MCAN_RXF1S_RF1L                     MCAN_RXF1S_RF1L_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_RXF1S_RF1L_Msk instead */
#define MCAN_RXF1S_DMS_Pos                  30                                             /**< (MCAN_RXF1S) Debug Message Status Position */
#define MCAN_RXF1S_DMS_Msk                  (_U_(0x3) << MCAN_RXF1S_DMS_Pos)               /**< (MCAN_RXF1S) Debug Message Status Mask */
#define MCAN_RXF1S_DMS(value)               (MCAN_RXF1S_DMS_Msk & ((value) << MCAN_RXF1S_DMS_Pos))
#define   MCAN_RXF1S_DMS_IDLE_Val           _U_(0x0)                                       /**< (MCAN_RXF1S) Idle state, wait for reception of debug messages, DMA request is cleared.  */
#define   MCAN_RXF1S_DMS_MSG_A_Val          _U_(0x1)                                       /**< (MCAN_RXF1S) Debug message A received.  */
#define   MCAN_RXF1S_DMS_MSG_AB_Val         _U_(0x2)                                       /**< (MCAN_RXF1S) Debug messages A, B received.  */
#define   MCAN_RXF1S_DMS_MSG_ABC_Val        _U_(0x3)                                       /**< (MCAN_RXF1S) Debug messages A, B, C received, DMA request is set.  */
#define MCAN_RXF1S_DMS_IDLE                 (MCAN_RXF1S_DMS_IDLE_Val << MCAN_RXF1S_DMS_Pos)  /**< (MCAN_RXF1S) Idle state, wait for reception of debug messages, DMA request is cleared. Position  */
#define MCAN_RXF1S_DMS_MSG_A                (MCAN_RXF1S_DMS_MSG_A_Val << MCAN_RXF1S_DMS_Pos)  /**< (MCAN_RXF1S) Debug message A received. Position  */
#define MCAN_RXF1S_DMS_MSG_AB               (MCAN_RXF1S_DMS_MSG_AB_Val << MCAN_RXF1S_DMS_Pos)  /**< (MCAN_RXF1S) Debug messages A, B received. Position  */
#define MCAN_RXF1S_DMS_MSG_ABC              (MCAN_RXF1S_DMS_MSG_ABC_Val << MCAN_RXF1S_DMS_Pos)  /**< (MCAN_RXF1S) Debug messages A, B, C received, DMA request is set. Position  */
#define MCAN_RXF1S_MASK                     _U_(0xC33F3F7F)                                /**< \deprecated (MCAN_RXF1S) Register MASK  (Use MCAN_RXF1S_Msk instead)  */
#define MCAN_RXF1S_Msk                      _U_(0xC33F3F7F)                                /**< (MCAN_RXF1S) Register Mask  */

/* -------- MCAN_RXF1A : (MCAN Offset: 0xb8) (R/W 32) Receive FIFO 1 Acknowledge Register -------- */
#define MCAN_RXF1A_F1AI_Pos                 0                                              /**< (MCAN_RXF1A) Receive FIFO 1 Acknowledge Index Position */
#define MCAN_RXF1A_F1AI_Msk                 (_U_(0x3F) << MCAN_RXF1A_F1AI_Pos)             /**< (MCAN_RXF1A) Receive FIFO 1 Acknowledge Index Mask */
#define MCAN_RXF1A_F1AI(value)              (MCAN_RXF1A_F1AI_Msk & ((value) << MCAN_RXF1A_F1AI_Pos))
#define MCAN_RXF1A_MASK                     _U_(0x3F)                                      /**< \deprecated (MCAN_RXF1A) Register MASK  (Use MCAN_RXF1A_Msk instead)  */
#define MCAN_RXF1A_Msk                      _U_(0x3F)                                      /**< (MCAN_RXF1A) Register Mask  */

/* -------- MCAN_RXESC : (MCAN Offset: 0xbc) (R/W 32) Receive Buffer / FIFO Element Size Configuration Register -------- */
#define MCAN_RXESC_F0DS_Pos                 0                                              /**< (MCAN_RXESC) Receive FIFO 0 Data Field Size Position */
#define MCAN_RXESC_F0DS_Msk                 (_U_(0x7) << MCAN_RXESC_F0DS_Pos)              /**< (MCAN_RXESC) Receive FIFO 0 Data Field Size Mask */
#define MCAN_RXESC_F0DS(value)              (MCAN_RXESC_F0DS_Msk & ((value) << MCAN_RXESC_F0DS_Pos))
#define   MCAN_RXESC_F0DS_8_BYTE_Val        _U_(0x0)                                       /**< (MCAN_RXESC) 8-byte data field  */
#define   MCAN_RXESC_F0DS_12_BYTE_Val       _U_(0x1)                                       /**< (MCAN_RXESC) 12-byte data field  */
#define   MCAN_RXESC_F0DS_16_BYTE_Val       _U_(0x2)                                       /**< (MCAN_RXESC) 16-byte data field  */
#define   MCAN_RXESC_F0DS_20_BYTE_Val       _U_(0x3)                                       /**< (MCAN_RXESC) 20-byte data field  */
#define   MCAN_RXESC_F0DS_24_BYTE_Val       _U_(0x4)                                       /**< (MCAN_RXESC) 24-byte data field  */
#define   MCAN_RXESC_F0DS_32_BYTE_Val       _U_(0x5)                                       /**< (MCAN_RXESC) 32-byte data field  */
#define   MCAN_RXESC_F0DS_48_BYTE_Val       _U_(0x6)                                       /**< (MCAN_RXESC) 48-byte data field  */
#define   MCAN_RXESC_F0DS_64_BYTE_Val       _U_(0x7)                                       /**< (MCAN_RXESC) 64-byte data field  */
#define MCAN_RXESC_F0DS_8_BYTE              (MCAN_RXESC_F0DS_8_BYTE_Val << MCAN_RXESC_F0DS_Pos)  /**< (MCAN_RXESC) 8-byte data field Position  */
#define MCAN_RXESC_F0DS_12_BYTE             (MCAN_RXESC_F0DS_12_BYTE_Val << MCAN_RXESC_F0DS_Pos)  /**< (MCAN_RXESC) 12-byte data field Position  */
#define MCAN_RXESC_F0DS_16_BYTE             (MCAN_RXESC_F0DS_16_BYTE_Val << MCAN_RXESC_F0DS_Pos)  /**< (MCAN_RXESC) 16-byte data field Position  */
#define MCAN_RXESC_F0DS_20_BYTE             (MCAN_RXESC_F0DS_20_BYTE_Val << MCAN_RXESC_F0DS_Pos)  /**< (MCAN_RXESC) 20-byte data field Position  */
#define MCAN_RXESC_F0DS_24_BYTE             (MCAN_RXESC_F0DS_24_BYTE_Val << MCAN_RXESC_F0DS_Pos)  /**< (MCAN_RXESC) 24-byte data field Position  */
#define MCAN_RXESC_F0DS_32_BYTE             (MCAN_RXESC_F0DS_32_BYTE_Val << MCAN_RXESC_F0DS_Pos)  /**< (MCAN_RXESC) 32-byte data field Position  */
#define MCAN_RXESC_F0DS_48_BYTE             (MCAN_RXESC_F0DS_48_BYTE_Val << MCAN_RXESC_F0DS_Pos)  /**< (MCAN_RXESC) 48-byte data field Position  */
#define MCAN_RXESC_F0DS_64_BYTE             (MCAN_RXESC_F0DS_64_BYTE_Val << MCAN_RXESC_F0DS_Pos)  /**< (MCAN_RXESC) 64-byte data field Position  */
#define MCAN_RXESC_F1DS_Pos                 4                                              /**< (MCAN_RXESC) Receive FIFO 1 Data Field Size Position */
#define MCAN_RXESC_F1DS_Msk                 (_U_(0x7) << MCAN_RXESC_F1DS_Pos)              /**< (MCAN_RXESC) Receive FIFO 1 Data Field Size Mask */
#define MCAN_RXESC_F1DS(value)              (MCAN_RXESC_F1DS_Msk & ((value) << MCAN_RXESC_F1DS_Pos))
#define   MCAN_RXESC_F1DS_8_BYTE_Val        _U_(0x0)                                       /**< (MCAN_RXESC) 8-byte data field  */
#define   MCAN_RXESC_F1DS_12_BYTE_Val       _U_(0x1)                                       /**< (MCAN_RXESC) 12-byte data field  */
#define   MCAN_RXESC_F1DS_16_BYTE_Val       _U_(0x2)                                       /**< (MCAN_RXESC) 16-byte data field  */
#define   MCAN_RXESC_F1DS_20_BYTE_Val       _U_(0x3)                                       /**< (MCAN_RXESC) 20-byte data field  */
#define   MCAN_RXESC_F1DS_24_BYTE_Val       _U_(0x4)                                       /**< (MCAN_RXESC) 24-byte data field  */
#define   MCAN_RXESC_F1DS_32_BYTE_Val       _U_(0x5)                                       /**< (MCAN_RXESC) 32-byte data field  */
#define   MCAN_RXESC_F1DS_48_BYTE_Val       _U_(0x6)                                       /**< (MCAN_RXESC) 48-byte data field  */
#define   MCAN_RXESC_F1DS_64_BYTE_Val       _U_(0x7)                                       /**< (MCAN_RXESC) 64-byte data field  */
#define MCAN_RXESC_F1DS_8_BYTE              (MCAN_RXESC_F1DS_8_BYTE_Val << MCAN_RXESC_F1DS_Pos)  /**< (MCAN_RXESC) 8-byte data field Position  */
#define MCAN_RXESC_F1DS_12_BYTE             (MCAN_RXESC_F1DS_12_BYTE_Val << MCAN_RXESC_F1DS_Pos)  /**< (MCAN_RXESC) 12-byte data field Position  */
#define MCAN_RXESC_F1DS_16_BYTE             (MCAN_RXESC_F1DS_16_BYTE_Val << MCAN_RXESC_F1DS_Pos)  /**< (MCAN_RXESC) 16-byte data field Position  */
#define MCAN_RXESC_F1DS_20_BYTE             (MCAN_RXESC_F1DS_20_BYTE_Val << MCAN_RXESC_F1DS_Pos)  /**< (MCAN_RXESC) 20-byte data field Position  */
#define MCAN_RXESC_F1DS_24_BYTE             (MCAN_RXESC_F1DS_24_BYTE_Val << MCAN_RXESC_F1DS_Pos)  /**< (MCAN_RXESC) 24-byte data field Position  */
#define MCAN_RXESC_F1DS_32_BYTE             (MCAN_RXESC_F1DS_32_BYTE_Val << MCAN_RXESC_F1DS_Pos)  /**< (MCAN_RXESC) 32-byte data field Position  */
#define MCAN_RXESC_F1DS_48_BYTE             (MCAN_RXESC_F1DS_48_BYTE_Val << MCAN_RXESC_F1DS_Pos)  /**< (MCAN_RXESC) 48-byte data field Position  */
#define MCAN_RXESC_F1DS_64_BYTE             (MCAN_RXESC_F1DS_64_BYTE_Val << MCAN_RXESC_F1DS_Pos)  /**< (MCAN_RXESC) 64-byte data field Position  */
#define MCAN_RXESC_RBDS_Pos                 8                                              /**< (MCAN_RXESC) Receive Buffer Data Field Size Position */
#define MCAN_RXESC_RBDS_Msk                 (_U_(0x7) << MCAN_RXESC_RBDS_Pos)              /**< (MCAN_RXESC) Receive Buffer Data Field Size Mask */
#define MCAN_RXESC_RBDS(value)              (MCAN_RXESC_RBDS_Msk & ((value) << MCAN_RXESC_RBDS_Pos))
#define   MCAN_RXESC_RBDS_8_BYTE_Val        _U_(0x0)                                       /**< (MCAN_RXESC) 8-byte data field  */
#define   MCAN_RXESC_RBDS_12_BYTE_Val       _U_(0x1)                                       /**< (MCAN_RXESC) 12-byte data field  */
#define   MCAN_RXESC_RBDS_16_BYTE_Val       _U_(0x2)                                       /**< (MCAN_RXESC) 16-byte data field  */
#define   MCAN_RXESC_RBDS_20_BYTE_Val       _U_(0x3)                                       /**< (MCAN_RXESC) 20-byte data field  */
#define   MCAN_RXESC_RBDS_24_BYTE_Val       _U_(0x4)                                       /**< (MCAN_RXESC) 24-byte data field  */
#define   MCAN_RXESC_RBDS_32_BYTE_Val       _U_(0x5)                                       /**< (MCAN_RXESC) 32-byte data field  */
#define   MCAN_RXESC_RBDS_48_BYTE_Val       _U_(0x6)                                       /**< (MCAN_RXESC) 48-byte data field  */
#define   MCAN_RXESC_RBDS_64_BYTE_Val       _U_(0x7)                                       /**< (MCAN_RXESC) 64-byte data field  */
#define MCAN_RXESC_RBDS_8_BYTE              (MCAN_RXESC_RBDS_8_BYTE_Val << MCAN_RXESC_RBDS_Pos)  /**< (MCAN_RXESC) 8-byte data field Position  */
#define MCAN_RXESC_RBDS_12_BYTE             (MCAN_RXESC_RBDS_12_BYTE_Val << MCAN_RXESC_RBDS_Pos)  /**< (MCAN_RXESC) 12-byte data field Position  */
#define MCAN_RXESC_RBDS_16_BYTE             (MCAN_RXESC_RBDS_16_BYTE_Val << MCAN_RXESC_RBDS_Pos)  /**< (MCAN_RXESC) 16-byte data field Position  */
#define MCAN_RXESC_RBDS_20_BYTE             (MCAN_RXESC_RBDS_20_BYTE_Val << MCAN_RXESC_RBDS_Pos)  /**< (MCAN_RXESC) 20-byte data field Position  */
#define MCAN_RXESC_RBDS_24_BYTE             (MCAN_RXESC_RBDS_24_BYTE_Val << MCAN_RXESC_RBDS_Pos)  /**< (MCAN_RXESC) 24-byte data field Position  */
#define MCAN_RXESC_RBDS_32_BYTE             (MCAN_RXESC_RBDS_32_BYTE_Val << MCAN_RXESC_RBDS_Pos)  /**< (MCAN_RXESC) 32-byte data field Position  */
#define MCAN_RXESC_RBDS_48_BYTE             (MCAN_RXESC_RBDS_48_BYTE_Val << MCAN_RXESC_RBDS_Pos)  /**< (MCAN_RXESC) 48-byte data field Position  */
#define MCAN_RXESC_RBDS_64_BYTE             (MCAN_RXESC_RBDS_64_BYTE_Val << MCAN_RXESC_RBDS_Pos)  /**< (MCAN_RXESC) 64-byte data field Position  */
#define MCAN_RXESC_MASK                     _U_(0x777)                                     /**< \deprecated (MCAN_RXESC) Register MASK  (Use MCAN_RXESC_Msk instead)  */
#define MCAN_RXESC_Msk                      _U_(0x777)                                     /**< (MCAN_RXESC) Register Mask  */

/* -------- MCAN_TXBC : (MCAN Offset: 0xc0) (R/W 32) Transmit Buffer Configuration Register -------- */
#define MCAN_TXBC_TBSA_Pos                  2                                              /**< (MCAN_TXBC) Tx Buffers Start Address Position */
#define MCAN_TXBC_TBSA_Msk                  (_U_(0x3FFF) << MCAN_TXBC_TBSA_Pos)            /**< (MCAN_TXBC) Tx Buffers Start Address Mask */
#define MCAN_TXBC_TBSA(value)               (MCAN_TXBC_TBSA_Msk & ((value) << MCAN_TXBC_TBSA_Pos))
#define MCAN_TXBC_NDTB_Pos                  16                                             /**< (MCAN_TXBC) Number of Dedicated Transmit Buffers Position */
#define MCAN_TXBC_NDTB_Msk                  (_U_(0x3F) << MCAN_TXBC_NDTB_Pos)              /**< (MCAN_TXBC) Number of Dedicated Transmit Buffers Mask */
#define MCAN_TXBC_NDTB(value)               (MCAN_TXBC_NDTB_Msk & ((value) << MCAN_TXBC_NDTB_Pos))
#define MCAN_TXBC_TFQS_Pos                  24                                             /**< (MCAN_TXBC) Transmit FIFO/Queue Size Position */
#define MCAN_TXBC_TFQS_Msk                  (_U_(0x3F) << MCAN_TXBC_TFQS_Pos)              /**< (MCAN_TXBC) Transmit FIFO/Queue Size Mask */
#define MCAN_TXBC_TFQS(value)               (MCAN_TXBC_TFQS_Msk & ((value) << MCAN_TXBC_TFQS_Pos))
#define MCAN_TXBC_TFQM_Pos                  30                                             /**< (MCAN_TXBC) Tx FIFO/Queue Mode Position */
#define MCAN_TXBC_TFQM_Msk                  (_U_(0x1) << MCAN_TXBC_TFQM_Pos)               /**< (MCAN_TXBC) Tx FIFO/Queue Mode Mask */
#define MCAN_TXBC_TFQM                      MCAN_TXBC_TFQM_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_TXBC_TFQM_Msk instead */
#define MCAN_TXBC_MASK                      _U_(0x7F3FFFFC)                                /**< \deprecated (MCAN_TXBC) Register MASK  (Use MCAN_TXBC_Msk instead)  */
#define MCAN_TXBC_Msk                       _U_(0x7F3FFFFC)                                /**< (MCAN_TXBC) Register Mask  */

/* -------- MCAN_TXFQS : (MCAN Offset: 0xc4) (R/ 32) Transmit FIFO/Queue Status Register -------- */
#define MCAN_TXFQS_TFFL_Pos                 0                                              /**< (MCAN_TXFQS) Tx FIFO Free Level Position */
#define MCAN_TXFQS_TFFL_Msk                 (_U_(0x3F) << MCAN_TXFQS_TFFL_Pos)             /**< (MCAN_TXFQS) Tx FIFO Free Level Mask */
#define MCAN_TXFQS_TFFL(value)              (MCAN_TXFQS_TFFL_Msk & ((value) << MCAN_TXFQS_TFFL_Pos))
#define MCAN_TXFQS_TFGI_Pos                 8                                              /**< (MCAN_TXFQS) Tx FIFO Get Index Position */
#define MCAN_TXFQS_TFGI_Msk                 (_U_(0x1F) << MCAN_TXFQS_TFGI_Pos)             /**< (MCAN_TXFQS) Tx FIFO Get Index Mask */
#define MCAN_TXFQS_TFGI(value)              (MCAN_TXFQS_TFGI_Msk & ((value) << MCAN_TXFQS_TFGI_Pos))
#define MCAN_TXFQS_TFQPI_Pos                16                                             /**< (MCAN_TXFQS) Tx FIFO/Queue Put Index Position */
#define MCAN_TXFQS_TFQPI_Msk                (_U_(0x1F) << MCAN_TXFQS_TFQPI_Pos)            /**< (MCAN_TXFQS) Tx FIFO/Queue Put Index Mask */
#define MCAN_TXFQS_TFQPI(value)             (MCAN_TXFQS_TFQPI_Msk & ((value) << MCAN_TXFQS_TFQPI_Pos))
#define MCAN_TXFQS_TFQF_Pos                 21                                             /**< (MCAN_TXFQS) Tx FIFO/Queue Full Position */
#define MCAN_TXFQS_TFQF_Msk                 (_U_(0x1) << MCAN_TXFQS_TFQF_Pos)              /**< (MCAN_TXFQS) Tx FIFO/Queue Full Mask */
#define MCAN_TXFQS_TFQF                     MCAN_TXFQS_TFQF_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_TXFQS_TFQF_Msk instead */
#define MCAN_TXFQS_MASK                     _U_(0x3F1F3F)                                  /**< \deprecated (MCAN_TXFQS) Register MASK  (Use MCAN_TXFQS_Msk instead)  */
#define MCAN_TXFQS_Msk                      _U_(0x3F1F3F)                                  /**< (MCAN_TXFQS) Register Mask  */

/* -------- MCAN_TXESC : (MCAN Offset: 0xc8) (R/W 32) Transmit Buffer Element Size Configuration Register -------- */
#define MCAN_TXESC_TBDS_Pos                 0                                              /**< (MCAN_TXESC) Tx Buffer Data Field Size Position */
#define MCAN_TXESC_TBDS_Msk                 (_U_(0x7) << MCAN_TXESC_TBDS_Pos)              /**< (MCAN_TXESC) Tx Buffer Data Field Size Mask */
#define MCAN_TXESC_TBDS(value)              (MCAN_TXESC_TBDS_Msk & ((value) << MCAN_TXESC_TBDS_Pos))
#define   MCAN_TXESC_TBDS_8_BYTE_Val        _U_(0x0)                                       /**< (MCAN_TXESC) 8-byte data field  */
#define   MCAN_TXESC_TBDS_12_BYTE_Val       _U_(0x1)                                       /**< (MCAN_TXESC) 12-byte data field  */
#define   MCAN_TXESC_TBDS_16_BYTE_Val       _U_(0x2)                                       /**< (MCAN_TXESC) 16-byte data field  */
#define   MCAN_TXESC_TBDS_20_BYTE_Val       _U_(0x3)                                       /**< (MCAN_TXESC) 20-byte data field  */
#define   MCAN_TXESC_TBDS_24_BYTE_Val       _U_(0x4)                                       /**< (MCAN_TXESC) 24-byte data field  */
#define   MCAN_TXESC_TBDS_32_BYTE_Val       _U_(0x5)                                       /**< (MCAN_TXESC) 32-byte data field  */
#define   MCAN_TXESC_TBDS_48_BYTE_Val       _U_(0x6)                                       /**< (MCAN_TXESC) 48- byte data field  */
#define   MCAN_TXESC_TBDS_64_BYTE_Val       _U_(0x7)                                       /**< (MCAN_TXESC) 64-byte data field  */
#define MCAN_TXESC_TBDS_8_BYTE              (MCAN_TXESC_TBDS_8_BYTE_Val << MCAN_TXESC_TBDS_Pos)  /**< (MCAN_TXESC) 8-byte data field Position  */
#define MCAN_TXESC_TBDS_12_BYTE             (MCAN_TXESC_TBDS_12_BYTE_Val << MCAN_TXESC_TBDS_Pos)  /**< (MCAN_TXESC) 12-byte data field Position  */
#define MCAN_TXESC_TBDS_16_BYTE             (MCAN_TXESC_TBDS_16_BYTE_Val << MCAN_TXESC_TBDS_Pos)  /**< (MCAN_TXESC) 16-byte data field Position  */
#define MCAN_TXESC_TBDS_20_BYTE             (MCAN_TXESC_TBDS_20_BYTE_Val << MCAN_TXESC_TBDS_Pos)  /**< (MCAN_TXESC) 20-byte data field Position  */
#define MCAN_TXESC_TBDS_24_BYTE             (MCAN_TXESC_TBDS_24_BYTE_Val << MCAN_TXESC_TBDS_Pos)  /**< (MCAN_TXESC) 24-byte data field Position  */
#define MCAN_TXESC_TBDS_32_BYTE             (MCAN_TXESC_TBDS_32_BYTE_Val << MCAN_TXESC_TBDS_Pos)  /**< (MCAN_TXESC) 32-byte data field Position  */
#define MCAN_TXESC_TBDS_48_BYTE             (MCAN_TXESC_TBDS_48_BYTE_Val << MCAN_TXESC_TBDS_Pos)  /**< (MCAN_TXESC) 48- byte data field Position  */
#define MCAN_TXESC_TBDS_64_BYTE             (MCAN_TXESC_TBDS_64_BYTE_Val << MCAN_TXESC_TBDS_Pos)  /**< (MCAN_TXESC) 64-byte data field Position  */
#define MCAN_TXESC_MASK                     _U_(0x07)                                      /**< \deprecated (MCAN_TXESC) Register MASK  (Use MCAN_TXESC_Msk instead)  */
#define MCAN_TXESC_Msk                      _U_(0x07)                                      /**< (MCAN_TXESC) Register Mask  */

/* -------- MCAN_TXBRP : (MCAN Offset: 0xcc) (R/ 32) Transmit Buffer Request Pending Register -------- */
#define MCAN_TXBRP_TRP_Pos                  0                                              /**< (MCAN_TXBRP Position) Transmission Request Pending for Buffer 3x */
#define MCAN_TXBRP_TRP_Msk                  (_U_(0xFFFFFFFF) << MCAN_TXBRP_TRP_Pos)        /**< (MCAN_TXBRP Mask) TRP */
#define MCAN_TXBRP_TRP(value)               (MCAN_TXBRP_TRP_Msk & ((value) << MCAN_TXBRP_TRP_Pos))

/* -------- MCAN_TXBAR : (MCAN Offset: 0xd0) (R/W 32) Transmit Buffer Add Request Register -------- */
#define MCAN_TXBAR_AR_Pos                   0                                              /**< (MCAN_TXBAR Position) Add Request for Transmit Buffer 3x */
#define MCAN_TXBAR_AR_Msk                   (_U_(0xFFFFFFFF) << MCAN_TXBAR_AR_Pos)         /**< (MCAN_TXBAR Mask) AR */
#define MCAN_TXBAR_AR(value)                (MCAN_TXBAR_AR_Msk & ((value) << MCAN_TXBAR_AR_Pos))

/* -------- MCAN_TXBCR : (MCAN Offset: 0xd4) (R/W 32) Transmit Buffer Cancellation Request Register -------- */
#define MCAN_TXBCR_CR_Pos                   0                                              /**< (MCAN_TXBCR Position) Cancellation Request for Transmit Buffer 3x */
#define MCAN_TXBCR_CR_Msk                   (_U_(0xFFFFFFFF) << MCAN_TXBCR_CR_Pos)         /**< (MCAN_TXBCR Mask) CR */
#define MCAN_TXBCR_CR(value)                (MCAN_TXBCR_CR_Msk & ((value) << MCAN_TXBCR_CR_Pos))

/* -------- MCAN_TXBTO : (MCAN Offset: 0xd8) (R/ 32) Transmit Buffer Transmission Occurred Register -------- */
#define MCAN_TXBTO_TO_Pos                   0                                              /**< (MCAN_TXBTO Position) Transmission Occurred for Buffer 3x */
#define MCAN_TXBTO_TO_Msk                   (_U_(0xFFFFFFFF) << MCAN_TXBTO_TO_Pos)         /**< (MCAN_TXBTO Mask) TO */
#define MCAN_TXBTO_TO(value)                (MCAN_TXBTO_TO_Msk & ((value) << MCAN_TXBTO_TO_Pos))

/* -------- MCAN_TXBCF : (MCAN Offset: 0xdc) (R/ 32) Transmit Buffer Cancellation Finished Register -------- */
#define MCAN_TXBCF_CF_Pos                   0                                              /**< (MCAN_TXBCF Position) Cancellation Finished for Transmit Buffer 3x */
#define MCAN_TXBCF_CF_Msk                   (_U_(0xFFFFFFFF) << MCAN_TXBCF_CF_Pos)         /**< (MCAN_TXBCF Mask) CF */
#define MCAN_TXBCF_CF(value)                (MCAN_TXBCF_CF_Msk & ((value) << MCAN_TXBCF_CF_Pos))

/* -------- MCAN_TXBTIE : (MCAN Offset: 0xe0) (R/W 32) Transmit Buffer Transmission Interrupt Enable Register -------- */
#define MCAN_TXBTIE_TIE_Pos                 0                                              /**< (MCAN_TXBTIE Position) Transmission Interrupt Enable for Buffer 3x */
#define MCAN_TXBTIE_TIE_Msk                 (_U_(0xFFFFFFFF) << MCAN_TXBTIE_TIE_Pos)       /**< (MCAN_TXBTIE Mask) TIE */
#define MCAN_TXBTIE_TIE(value)              (MCAN_TXBTIE_TIE_Msk & ((value) << MCAN_TXBTIE_TIE_Pos))

/* -------- MCAN_TXBCIE : (MCAN Offset: 0xe4) (R/W 32) Transmit Buffer Cancellation Finished Interrupt Enable Register -------- */
#define MCAN_TXBCIE_CFIE_Pos                0                                              /**< (MCAN_TXBCIE Position) Cancellation Finished Interrupt Enable for Transmit Buffer 3x */
#define MCAN_TXBCIE_CFIE_Msk                (_U_(0xFFFFFFFF) << MCAN_TXBCIE_CFIE_Pos)      /**< (MCAN_TXBCIE Mask) CFIE */
#define MCAN_TXBCIE_CFIE(value)             (MCAN_TXBCIE_CFIE_Msk & ((value) << MCAN_TXBCIE_CFIE_Pos))

/* -------- MCAN_TXEFC : (MCAN Offset: 0xf0) (R/W 32) Transmit Event FIFO Configuration Register -------- */
#define MCAN_TXEFC_EFSA_Pos                 2                                              /**< (MCAN_TXEFC) Event FIFO Start Address Position */
#define MCAN_TXEFC_EFSA_Msk                 (_U_(0x3FFF) << MCAN_TXEFC_EFSA_Pos)           /**< (MCAN_TXEFC) Event FIFO Start Address Mask */
#define MCAN_TXEFC_EFSA(value)              (MCAN_TXEFC_EFSA_Msk & ((value) << MCAN_TXEFC_EFSA_Pos))
#define MCAN_TXEFC_EFS_Pos                  16                                             /**< (MCAN_TXEFC) Event FIFO Size Position */
#define MCAN_TXEFC_EFS_Msk                  (_U_(0x3F) << MCAN_TXEFC_EFS_Pos)              /**< (MCAN_TXEFC) Event FIFO Size Mask */
#define MCAN_TXEFC_EFS(value)               (MCAN_TXEFC_EFS_Msk & ((value) << MCAN_TXEFC_EFS_Pos))
#define MCAN_TXEFC_EFWM_Pos                 24                                             /**< (MCAN_TXEFC) Event FIFO Watermark Position */
#define MCAN_TXEFC_EFWM_Msk                 (_U_(0x3F) << MCAN_TXEFC_EFWM_Pos)             /**< (MCAN_TXEFC) Event FIFO Watermark Mask */
#define MCAN_TXEFC_EFWM(value)              (MCAN_TXEFC_EFWM_Msk & ((value) << MCAN_TXEFC_EFWM_Pos))
#define MCAN_TXEFC_MASK                     _U_(0x3F3FFFFC)                                /**< \deprecated (MCAN_TXEFC) Register MASK  (Use MCAN_TXEFC_Msk instead)  */
#define MCAN_TXEFC_Msk                      _U_(0x3F3FFFFC)                                /**< (MCAN_TXEFC) Register Mask  */

/* -------- MCAN_TXEFS : (MCAN Offset: 0xf4) (R/ 32) Transmit Event FIFO Status Register -------- */
#define MCAN_TXEFS_EFFL_Pos                 0                                              /**< (MCAN_TXEFS) Event FIFO Fill Level Position */
#define MCAN_TXEFS_EFFL_Msk                 (_U_(0x3F) << MCAN_TXEFS_EFFL_Pos)             /**< (MCAN_TXEFS) Event FIFO Fill Level Mask */
#define MCAN_TXEFS_EFFL(value)              (MCAN_TXEFS_EFFL_Msk & ((value) << MCAN_TXEFS_EFFL_Pos))
#define MCAN_TXEFS_EFGI_Pos                 8                                              /**< (MCAN_TXEFS) Event FIFO Get Index Position */
#define MCAN_TXEFS_EFGI_Msk                 (_U_(0x1F) << MCAN_TXEFS_EFGI_Pos)             /**< (MCAN_TXEFS) Event FIFO Get Index Mask */
#define MCAN_TXEFS_EFGI(value)              (MCAN_TXEFS_EFGI_Msk & ((value) << MCAN_TXEFS_EFGI_Pos))
#define MCAN_TXEFS_EFPI_Pos                 16                                             /**< (MCAN_TXEFS) Event FIFO Put Index Position */
#define MCAN_TXEFS_EFPI_Msk                 (_U_(0x1F) << MCAN_TXEFS_EFPI_Pos)             /**< (MCAN_TXEFS) Event FIFO Put Index Mask */
#define MCAN_TXEFS_EFPI(value)              (MCAN_TXEFS_EFPI_Msk & ((value) << MCAN_TXEFS_EFPI_Pos))
#define MCAN_TXEFS_EFF_Pos                  24                                             /**< (MCAN_TXEFS) Event FIFO Full Position */
#define MCAN_TXEFS_EFF_Msk                  (_U_(0x1) << MCAN_TXEFS_EFF_Pos)               /**< (MCAN_TXEFS) Event FIFO Full Mask */
#define MCAN_TXEFS_EFF                      MCAN_TXEFS_EFF_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_TXEFS_EFF_Msk instead */
#define MCAN_TXEFS_TEFL_Pos                 25                                             /**< (MCAN_TXEFS) Tx Event FIFO Element Lost Position */
#define MCAN_TXEFS_TEFL_Msk                 (_U_(0x1) << MCAN_TXEFS_TEFL_Pos)              /**< (MCAN_TXEFS) Tx Event FIFO Element Lost Mask */
#define MCAN_TXEFS_TEFL                     MCAN_TXEFS_TEFL_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use MCAN_TXEFS_TEFL_Msk instead */
#define MCAN_TXEFS_MASK                     _U_(0x31F1F3F)                                 /**< \deprecated (MCAN_TXEFS) Register MASK  (Use MCAN_TXEFS_Msk instead)  */
#define MCAN_TXEFS_Msk                      _U_(0x31F1F3F)                                 /**< (MCAN_TXEFS) Register Mask  */

/* -------- MCAN_TXEFA : (MCAN Offset: 0xf8) (R/W 32) Transmit Event FIFO Acknowledge Register -------- */
#define MCAN_TXEFA_EFAI_Pos                 0                                              /**< (MCAN_TXEFA) Event FIFO Acknowledge Index Position */
#define MCAN_TXEFA_EFAI_Msk                 (_U_(0x1F) << MCAN_TXEFA_EFAI_Pos)             /**< (MCAN_TXEFA) Event FIFO Acknowledge Index Mask */
#define MCAN_TXEFA_EFAI(value)              (MCAN_TXEFA_EFAI_Msk & ((value) << MCAN_TXEFA_EFAI_Pos))
#define MCAN_TXEFA_MASK                     _U_(0x1F)                                      /**< \deprecated (MCAN_TXEFA) Register MASK  (Use MCAN_TXEFA_Msk instead)  */
#define MCAN_TXEFA_Msk                      _U_(0x1F)                                      /**< (MCAN_TXEFA) Register Mask  */


#endif /* _REG_MAP_MCAN_H_ */