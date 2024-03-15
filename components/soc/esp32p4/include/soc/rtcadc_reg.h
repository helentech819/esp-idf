/**
 * SPDX-FileCopyrightText: 2023-2024 Espressif Systems (Shanghai) CO LTD
 *
 *  SPDX-License-Identifier: Apache-2.0
 */
#pragma once

#include <stdint.h>
#include "soc/soc.h"
#ifdef __cplusplus
extern "C" {
#endif

/** RTCADC_READER1_CTRL_REG register
 *  Control the read operation of ADC1.
 */
#define RTCADC_READER1_CTRL_REG (DR_REG_LP_ADC_BASE + 0x0)
/** RTCADC_SAR1_CLK_DIV : R/W; bitpos: [7:0]; default: 2;
 *  Clock divider.
 */
#define RTCADC_SAR1_CLK_DIV    0x000000FFU
#define RTCADC_SAR1_CLK_DIV_M  (RTCADC_SAR1_CLK_DIV_V << RTCADC_SAR1_CLK_DIV_S)
#define RTCADC_SAR1_CLK_DIV_V  0x000000FFU
#define RTCADC_SAR1_CLK_DIV_S  0
/** RTCADC_SAR1_DATA_INV : R/W; bitpos: [28]; default: 0;
 *  Invert SAR ADC1 data.
 */
#define RTCADC_SAR1_DATA_INV    (BIT(28))
#define RTCADC_SAR1_DATA_INV_M  (RTCADC_SAR1_DATA_INV_V << RTCADC_SAR1_DATA_INV_S)
#define RTCADC_SAR1_DATA_INV_V  0x00000001U
#define RTCADC_SAR1_DATA_INV_S  28
/** RTCADC_SAR1_INT_EN : R/W; bitpos: [29]; default: 1;
 *  Enable saradc1 to send out interrupt.
 */
#define RTCADC_SAR1_INT_EN    (BIT(29))
#define RTCADC_SAR1_INT_EN_M  (RTCADC_SAR1_INT_EN_V << RTCADC_SAR1_INT_EN_S)
#define RTCADC_SAR1_INT_EN_V  0x00000001U
#define RTCADC_SAR1_INT_EN_S  29
/** RTCADC_SAR1_EN_PAD_FORCE_ENABLE : R/W; bitpos: [31:30]; default: 0;
 *  Force enable adc en_pad to analog circuit 2'b11: force enable .
 */
#define RTCADC_SAR1_EN_PAD_FORCE_ENABLE    0x00000003U
#define RTCADC_SAR1_EN_PAD_FORCE_ENABLE_M  (RTCADC_SAR1_EN_PAD_FORCE_ENABLE_V << RTCADC_SAR1_EN_PAD_FORCE_ENABLE_S)
#define RTCADC_SAR1_EN_PAD_FORCE_ENABLE_V  0x00000003U
#define RTCADC_SAR1_EN_PAD_FORCE_ENABLE_S  30

/** RTCADC_MEAS1_CTRL2_REG register
 *  ADC1 configuration registers.
 */
#define RTCADC_MEAS1_CTRL2_REG (DR_REG_LP_ADC_BASE + 0xc)
/** RTCADC_MEAS1_DATA_SAR : RO; bitpos: [15:0]; default: 0;
 *  SAR ADC1 data.
 */
#define RTCADC_MEAS1_DATA_SAR    0x0000FFFFU
#define RTCADC_MEAS1_DATA_SAR_M  (RTCADC_MEAS1_DATA_SAR_V << RTCADC_MEAS1_DATA_SAR_S)
#define RTCADC_MEAS1_DATA_SAR_V  0x0000FFFFU
#define RTCADC_MEAS1_DATA_SAR_S  0
/** RTCADC_MEAS1_DONE_SAR : RO; bitpos: [16]; default: 0;
 *  SAR ADC1 conversion done indication.
 */
#define RTCADC_MEAS1_DONE_SAR    (BIT(16))
#define RTCADC_MEAS1_DONE_SAR_M  (RTCADC_MEAS1_DONE_SAR_V << RTCADC_MEAS1_DONE_SAR_S)
#define RTCADC_MEAS1_DONE_SAR_V  0x00000001U
#define RTCADC_MEAS1_DONE_SAR_S  16
/** RTCADC_MEAS1_START_SAR : R/W; bitpos: [17]; default: 0;
 *  SAR ADC1 controller (in RTC) starts conversion.
 */
#define RTCADC_MEAS1_START_SAR    (BIT(17))
#define RTCADC_MEAS1_START_SAR_M  (RTCADC_MEAS1_START_SAR_V << RTCADC_MEAS1_START_SAR_S)
#define RTCADC_MEAS1_START_SAR_V  0x00000001U
#define RTCADC_MEAS1_START_SAR_S  17
/** RTCADC_MEAS1_START_FORCE : R/W; bitpos: [18]; default: 0;
 *  1: SAR ADC1 controller (in RTC) is started by SW.
 */
#define RTCADC_MEAS1_START_FORCE    (BIT(18))
#define RTCADC_MEAS1_START_FORCE_M  (RTCADC_MEAS1_START_FORCE_V << RTCADC_MEAS1_START_FORCE_S)
#define RTCADC_MEAS1_START_FORCE_V  0x00000001U
#define RTCADC_MEAS1_START_FORCE_S  18
/** RTCADC_SAR1_EN_PAD : R/W; bitpos: [30:19]; default: 0;
 *  SAR ADC1 pad enable bitmap.
 */
#define RTCADC_SAR1_EN_PAD    0x00000FFFU
#define RTCADC_SAR1_EN_PAD_M  (RTCADC_SAR1_EN_PAD_V << RTCADC_SAR1_EN_PAD_S)
#define RTCADC_SAR1_EN_PAD_V  0x00000FFFU
#define RTCADC_SAR1_EN_PAD_S  19
/** RTCADC_SAR1_EN_PAD_FORCE : R/W; bitpos: [31]; default: 0;
 *  1: SAR ADC1 pad enable bitmap is controlled by SW.
 */
#define RTCADC_SAR1_EN_PAD_FORCE    (BIT(31))
#define RTCADC_SAR1_EN_PAD_FORCE_M  (RTCADC_SAR1_EN_PAD_FORCE_V << RTCADC_SAR1_EN_PAD_FORCE_S)
#define RTCADC_SAR1_EN_PAD_FORCE_V  0x00000001U
#define RTCADC_SAR1_EN_PAD_FORCE_S  31

/** RTCADC_MEAS1_MUX_REG register
 *  SAR ADC1 MUX register.
 */
#define RTCADC_MEAS1_MUX_REG (DR_REG_LP_ADC_BASE + 0x10)
/** RTCADC_SAR1_DIG_FORCE : R/W; bitpos: [31]; default: 0;
 *  1: SAR ADC1 controlled by DIG ADC1 CTRL.
 */
#define RTCADC_SAR1_DIG_FORCE    (BIT(31))
#define RTCADC_SAR1_DIG_FORCE_M  (RTCADC_SAR1_DIG_FORCE_V << RTCADC_SAR1_DIG_FORCE_S)
#define RTCADC_SAR1_DIG_FORCE_V  0x00000001U
#define RTCADC_SAR1_DIG_FORCE_S  31

/** RTCADC_ATTEN1_REG register
 *  ADC1 attenuation registers.
 */
#define RTCADC_ATTEN1_REG (DR_REG_LP_ADC_BASE + 0x14)
/** RTCADC_SAR1_ATTEN : R/W; bitpos: [31:0]; default: 4294967295;
 *  2-bit attenuation for each pad.
 */
#define RTCADC_SAR1_ATTEN    0xFFFFFFFFU
#define RTCADC_SAR1_ATTEN_M  (RTCADC_SAR1_ATTEN_V << RTCADC_SAR1_ATTEN_S)
#define RTCADC_SAR1_ATTEN_V  0xFFFFFFFFU
#define RTCADC_SAR1_ATTEN_S  0

/** RTCADC_READER2_CTRL_REG register
 *  Control the read operation of ADC2.
 */
#define RTCADC_READER2_CTRL_REG (DR_REG_LP_ADC_BASE + 0x24)
/** RTCADC_SAR2_CLK_DIV : R/W; bitpos: [7:0]; default: 2;
 *  Clock divider.
 */
#define RTCADC_SAR2_CLK_DIV    0x000000FFU
#define RTCADC_SAR2_CLK_DIV_M  (RTCADC_SAR2_CLK_DIV_V << RTCADC_SAR2_CLK_DIV_S)
#define RTCADC_SAR2_CLK_DIV_V  0x000000FFU
#define RTCADC_SAR2_CLK_DIV_S  0
/** RTCADC_SAR2_WAIT_ARB_CYCLE : R/W; bitpos: [17:16]; default: 1;
 *  Wait arbit stable after sar_done.
 */
#define RTCADC_SAR2_WAIT_ARB_CYCLE    0x00000003U
#define RTCADC_SAR2_WAIT_ARB_CYCLE_M  (RTCADC_SAR2_WAIT_ARB_CYCLE_V << RTCADC_SAR2_WAIT_ARB_CYCLE_S)
#define RTCADC_SAR2_WAIT_ARB_CYCLE_V  0x00000003U
#define RTCADC_SAR2_WAIT_ARB_CYCLE_S  16
/** RTCADC_SAR2_EN_PAD_FORCE_ENABLE : R/W; bitpos: [28:27]; default: 0;
 *  Force enable adc en_pad to analog circuit 2'b11: force enable .
 */
#define RTCADC_SAR2_EN_PAD_FORCE_ENABLE    0x00000003U
#define RTCADC_SAR2_EN_PAD_FORCE_ENABLE_M  (RTCADC_SAR2_EN_PAD_FORCE_ENABLE_V << RTCADC_SAR2_EN_PAD_FORCE_ENABLE_S)
#define RTCADC_SAR2_EN_PAD_FORCE_ENABLE_V  0x00000003U
#define RTCADC_SAR2_EN_PAD_FORCE_ENABLE_S  27
/** RTCADC_SAR2_DATA_INV : R/W; bitpos: [29]; default: 0;
 *  Invert SAR ADC2 data.
 */
#define RTCADC_SAR2_DATA_INV    (BIT(29))
#define RTCADC_SAR2_DATA_INV_M  (RTCADC_SAR2_DATA_INV_V << RTCADC_SAR2_DATA_INV_S)
#define RTCADC_SAR2_DATA_INV_V  0x00000001U
#define RTCADC_SAR2_DATA_INV_S  29
/** RTCADC_SAR2_INT_EN : R/W; bitpos: [30]; default: 1;
 *  Enable saradc2 to send out interrupt.
 */
#define RTCADC_SAR2_INT_EN    (BIT(30))
#define RTCADC_SAR2_INT_EN_M  (RTCADC_SAR2_INT_EN_V << RTCADC_SAR2_INT_EN_S)
#define RTCADC_SAR2_INT_EN_V  0x00000001U
#define RTCADC_SAR2_INT_EN_S  30

/** RTCADC_MEAS2_CTRL1_REG register
 *  ADC2 configuration registers.
 */
#define RTCADC_MEAS2_CTRL1_REG (DR_REG_LP_ADC_BASE + 0x2c)
/** RTCADC_SAR2_CNTL_STATE : RO; bitpos: [2:0]; default: 0;
 *  saradc2_cntl_fsm.
 */
#define RTCADC_SAR2_CNTL_STATE    0x00000007U
#define RTCADC_SAR2_CNTL_STATE_M  (RTCADC_SAR2_CNTL_STATE_V << RTCADC_SAR2_CNTL_STATE_S)
#define RTCADC_SAR2_CNTL_STATE_V  0x00000007U
#define RTCADC_SAR2_CNTL_STATE_S  0
/** RTCADC_SAR2_PWDET_CAL_EN : R/W; bitpos: [3]; default: 0;
 *  RTC control pwdet enable.
 */
#define RTCADC_SAR2_PWDET_CAL_EN    (BIT(3))
#define RTCADC_SAR2_PWDET_CAL_EN_M  (RTCADC_SAR2_PWDET_CAL_EN_V << RTCADC_SAR2_PWDET_CAL_EN_S)
#define RTCADC_SAR2_PWDET_CAL_EN_V  0x00000001U
#define RTCADC_SAR2_PWDET_CAL_EN_S  3
/** RTCADC_SAR2_PKDET_CAL_EN : R/W; bitpos: [4]; default: 0;
 *  RTC control pkdet enable.
 */
#define RTCADC_SAR2_PKDET_CAL_EN    (BIT(4))
#define RTCADC_SAR2_PKDET_CAL_EN_M  (RTCADC_SAR2_PKDET_CAL_EN_V << RTCADC_SAR2_PKDET_CAL_EN_S)
#define RTCADC_SAR2_PKDET_CAL_EN_V  0x00000001U
#define RTCADC_SAR2_PKDET_CAL_EN_S  4
/** RTCADC_SAR2_EN_TEST : R/W; bitpos: [5]; default: 0;
 *  SAR2_EN_TEST.
 */
#define RTCADC_SAR2_EN_TEST    (BIT(5))
#define RTCADC_SAR2_EN_TEST_M  (RTCADC_SAR2_EN_TEST_V << RTCADC_SAR2_EN_TEST_S)
#define RTCADC_SAR2_EN_TEST_V  0x00000001U
#define RTCADC_SAR2_EN_TEST_S  5

/** RTCADC_MEAS2_CTRL2_REG register
 *  ADC2 configuration registers.
 */
#define RTCADC_MEAS2_CTRL2_REG (DR_REG_LP_ADC_BASE + 0x30)
/** RTCADC_MEAS2_DATA_SAR : RO; bitpos: [15:0]; default: 0;
 *  SAR ADC2 data.
 */
#define RTCADC_MEAS2_DATA_SAR    0x0000FFFFU
#define RTCADC_MEAS2_DATA_SAR_M  (RTCADC_MEAS2_DATA_SAR_V << RTCADC_MEAS2_DATA_SAR_S)
#define RTCADC_MEAS2_DATA_SAR_V  0x0000FFFFU
#define RTCADC_MEAS2_DATA_SAR_S  0
/** RTCADC_MEAS2_DONE_SAR : RO; bitpos: [16]; default: 0;
 *  SAR ADC2 conversion done indication.
 */
#define RTCADC_MEAS2_DONE_SAR    (BIT(16))
#define RTCADC_MEAS2_DONE_SAR_M  (RTCADC_MEAS2_DONE_SAR_V << RTCADC_MEAS2_DONE_SAR_S)
#define RTCADC_MEAS2_DONE_SAR_V  0x00000001U
#define RTCADC_MEAS2_DONE_SAR_S  16
/** RTCADC_MEAS2_START_SAR : R/W; bitpos: [17]; default: 0;
 *  SAR ADC2 controller (in RTC) starts conversion.
 */
#define RTCADC_MEAS2_START_SAR    (BIT(17))
#define RTCADC_MEAS2_START_SAR_M  (RTCADC_MEAS2_START_SAR_V << RTCADC_MEAS2_START_SAR_S)
#define RTCADC_MEAS2_START_SAR_V  0x00000001U
#define RTCADC_MEAS2_START_SAR_S  17
/** RTCADC_MEAS2_START_FORCE : R/W; bitpos: [18]; default: 0;
 *  1: SAR ADC2 controller (in RTC) is started by SW.
 */
#define RTCADC_MEAS2_START_FORCE    (BIT(18))
#define RTCADC_MEAS2_START_FORCE_M  (RTCADC_MEAS2_START_FORCE_V << RTCADC_MEAS2_START_FORCE_S)
#define RTCADC_MEAS2_START_FORCE_V  0x00000001U
#define RTCADC_MEAS2_START_FORCE_S  18
/** RTCADC_SAR2_EN_PAD : R/W; bitpos: [30:19]; default: 0;
 *  SAR ADC2 pad enable bitmap.
 */
#define RTCADC_SAR2_EN_PAD    0x00000FFFU
#define RTCADC_SAR2_EN_PAD_M  (RTCADC_SAR2_EN_PAD_V << RTCADC_SAR2_EN_PAD_S)
#define RTCADC_SAR2_EN_PAD_V  0x00000FFFU
#define RTCADC_SAR2_EN_PAD_S  19
/** RTCADC_SAR2_EN_PAD_FORCE : R/W; bitpos: [31]; default: 0;
 *  1: SAR ADC2 pad enable bitmap is controlled by SW.
 */
#define RTCADC_SAR2_EN_PAD_FORCE    (BIT(31))
#define RTCADC_SAR2_EN_PAD_FORCE_M  (RTCADC_SAR2_EN_PAD_FORCE_V << RTCADC_SAR2_EN_PAD_FORCE_S)
#define RTCADC_SAR2_EN_PAD_FORCE_V  0x00000001U
#define RTCADC_SAR2_EN_PAD_FORCE_S  31

/** RTCADC_MEAS2_MUX_REG register
 *  SAR ADC2 MUX register.
 */
#define RTCADC_MEAS2_MUX_REG (DR_REG_LP_ADC_BASE + 0x34)
/** RTCADC_SAR2_PWDET_CCT : R/W; bitpos: [30:28]; default: 0;
 *  SAR2_PWDET_CCT.
 */
#define RTCADC_SAR2_PWDET_CCT    0x00000007U
#define RTCADC_SAR2_PWDET_CCT_M  (RTCADC_SAR2_PWDET_CCT_V << RTCADC_SAR2_PWDET_CCT_S)
#define RTCADC_SAR2_PWDET_CCT_V  0x00000007U
#define RTCADC_SAR2_PWDET_CCT_S  28
/** RTCADC_SAR2_RTC_FORCE : R/W; bitpos: [31]; default: 0;
 *  In sleep, force to use rtc to control ADC.
 */
#define RTCADC_SAR2_RTC_FORCE    (BIT(31))
#define RTCADC_SAR2_RTC_FORCE_M  (RTCADC_SAR2_RTC_FORCE_V << RTCADC_SAR2_RTC_FORCE_S)
#define RTCADC_SAR2_RTC_FORCE_V  0x00000001U
#define RTCADC_SAR2_RTC_FORCE_S  31

/** RTCADC_ATTEN2_REG register
 *  ADC1 attenuation registers.
 */
#define RTCADC_ATTEN2_REG (DR_REG_LP_ADC_BASE + 0x38)
/** RTCADC_SAR2_ATTEN : R/W; bitpos: [31:0]; default: 4294967295;
 *  2-bit attenuation for each pad.
 */
#define RTCADC_SAR2_ATTEN    0xFFFFFFFFU
#define RTCADC_SAR2_ATTEN_M  (RTCADC_SAR2_ATTEN_V << RTCADC_SAR2_ATTEN_S)
#define RTCADC_SAR2_ATTEN_V  0xFFFFFFFFU
#define RTCADC_SAR2_ATTEN_S  0

/** RTCADC_FORCE_WPD_SAR_REG register
 *  In sleep, force to use rtc to control ADC
 */
#define RTCADC_FORCE_WPD_SAR_REG (DR_REG_LP_ADC_BASE + 0x3c)
/** RTCADC_FORCE_XPD_SAR1 : R/W; bitpos: [1:0]; default: 0;
 *  2'b11:software control, force on. 2'b10:software control, force off. 2'b0x:hardware
 *  control.
 */
#define RTCADC_FORCE_XPD_SAR1    0x00000003U
#define RTCADC_FORCE_XPD_SAR1_M  (RTCADC_FORCE_XPD_SAR1_V << RTCADC_FORCE_XPD_SAR1_S)
#define RTCADC_FORCE_XPD_SAR1_V  0x00000003U
#define RTCADC_FORCE_XPD_SAR1_S  0
/** RTCADC_FORCE_XPD_SAR2 : R/W; bitpos: [3:2]; default: 0;
 *  2'b11:software control, force on. 2'b10:software control, force off. 2'b0x:hardware
 *  control.
 */
#define RTCADC_FORCE_XPD_SAR2    0x00000003U
#define RTCADC_FORCE_XPD_SAR2_M  (RTCADC_FORCE_XPD_SAR2_V << RTCADC_FORCE_XPD_SAR2_S)
#define RTCADC_FORCE_XPD_SAR2_V  0x00000003U
#define RTCADC_FORCE_XPD_SAR2_S  2

/** RTCADC_COCPU_INT_RAW_REG register
 *  Interrupt raw registers.
 */
#define RTCADC_COCPU_INT_RAW_REG (DR_REG_LP_ADC_BASE + 0x48)
/** RTCADC_COCPU_SARADC1_INT_RAW : R/WTC/SS; bitpos: [0]; default: 0;
 *  ADC1 Conversion is done, int raw.
 */
#define RTCADC_COCPU_SARADC1_INT_RAW    (BIT(0))
#define RTCADC_COCPU_SARADC1_INT_RAW_M  (RTCADC_COCPU_SARADC1_INT_RAW_V << RTCADC_COCPU_SARADC1_INT_RAW_S)
#define RTCADC_COCPU_SARADC1_INT_RAW_V  0x00000001U
#define RTCADC_COCPU_SARADC1_INT_RAW_S  0
/** RTCADC_COCPU_SARADC2_INT_RAW : R/WTC/SS; bitpos: [1]; default: 0;
 *  ADC2 Conversion is done, int raw.
 */
#define RTCADC_COCPU_SARADC2_INT_RAW    (BIT(1))
#define RTCADC_COCPU_SARADC2_INT_RAW_M  (RTCADC_COCPU_SARADC2_INT_RAW_V << RTCADC_COCPU_SARADC2_INT_RAW_S)
#define RTCADC_COCPU_SARADC2_INT_RAW_V  0x00000001U
#define RTCADC_COCPU_SARADC2_INT_RAW_S  1
/** RTCADC_COCPU_SARADC1_ERROR_INT_RAW : R/WTC/SS; bitpos: [2]; default: 0;
 *  An errro occurs from ADC1, int raw.
 */
#define RTCADC_COCPU_SARADC1_ERROR_INT_RAW    (BIT(2))
#define RTCADC_COCPU_SARADC1_ERROR_INT_RAW_M  (RTCADC_COCPU_SARADC1_ERROR_INT_RAW_V << RTCADC_COCPU_SARADC1_ERROR_INT_RAW_S)
#define RTCADC_COCPU_SARADC1_ERROR_INT_RAW_V  0x00000001U
#define RTCADC_COCPU_SARADC1_ERROR_INT_RAW_S  2
/** RTCADC_COCPU_SARADC2_ERROR_INT_RAW : R/WTC/SS; bitpos: [3]; default: 0;
 *  An errro occurs from ADC2, int raw.
 */
#define RTCADC_COCPU_SARADC2_ERROR_INT_RAW    (BIT(3))
#define RTCADC_COCPU_SARADC2_ERROR_INT_RAW_M  (RTCADC_COCPU_SARADC2_ERROR_INT_RAW_V << RTCADC_COCPU_SARADC2_ERROR_INT_RAW_S)
#define RTCADC_COCPU_SARADC2_ERROR_INT_RAW_V  0x00000001U
#define RTCADC_COCPU_SARADC2_ERROR_INT_RAW_S  3
/** RTCADC_COCPU_SARADC1_WAKE_INT_RAW : R/WTC/SS; bitpos: [4]; default: 0;
 *  A wakeup event is triggered from ADC1, int raw.
 */
#define RTCADC_COCPU_SARADC1_WAKE_INT_RAW    (BIT(4))
#define RTCADC_COCPU_SARADC1_WAKE_INT_RAW_M  (RTCADC_COCPU_SARADC1_WAKE_INT_RAW_V << RTCADC_COCPU_SARADC1_WAKE_INT_RAW_S)
#define RTCADC_COCPU_SARADC1_WAKE_INT_RAW_V  0x00000001U
#define RTCADC_COCPU_SARADC1_WAKE_INT_RAW_S  4
/** RTCADC_COCPU_SARADC2_WAKE_INT_RAW : R/WTC/SS; bitpos: [5]; default: 0;
 *  A wakeup event is triggered from ADC2, int raw.
 */
#define RTCADC_COCPU_SARADC2_WAKE_INT_RAW    (BIT(5))
#define RTCADC_COCPU_SARADC2_WAKE_INT_RAW_M  (RTCADC_COCPU_SARADC2_WAKE_INT_RAW_V << RTCADC_COCPU_SARADC2_WAKE_INT_RAW_S)
#define RTCADC_COCPU_SARADC2_WAKE_INT_RAW_V  0x00000001U
#define RTCADC_COCPU_SARADC2_WAKE_INT_RAW_S  5

/** RTCADC_INT_ENA_REG register
 *  Interrupt enable registers.
 */
#define RTCADC_INT_ENA_REG (DR_REG_LP_ADC_BASE + 0x4c)
/** RTCADC_COCPU_SARADC1_INT_ENA : R/WTC; bitpos: [0]; default: 0;
 *  ADC1 Conversion is done, int enable.
 */
#define RTCADC_COCPU_SARADC1_INT_ENA    (BIT(0))
#define RTCADC_COCPU_SARADC1_INT_ENA_M  (RTCADC_COCPU_SARADC1_INT_ENA_V << RTCADC_COCPU_SARADC1_INT_ENA_S)
#define RTCADC_COCPU_SARADC1_INT_ENA_V  0x00000001U
#define RTCADC_COCPU_SARADC1_INT_ENA_S  0
/** RTCADC_COCPU_SARADC2_INT_ENA : R/WTC; bitpos: [1]; default: 0;
 *  ADC2 Conversion is done, int enable.
 */
#define RTCADC_COCPU_SARADC2_INT_ENA    (BIT(1))
#define RTCADC_COCPU_SARADC2_INT_ENA_M  (RTCADC_COCPU_SARADC2_INT_ENA_V << RTCADC_COCPU_SARADC2_INT_ENA_S)
#define RTCADC_COCPU_SARADC2_INT_ENA_V  0x00000001U
#define RTCADC_COCPU_SARADC2_INT_ENA_S  1
/** RTCADC_COCPU_SARADC1_ERROR_INT_ENA : R/WTC; bitpos: [2]; default: 0;
 *  An errro occurs from ADC1, int enable.
 */
#define RTCADC_COCPU_SARADC1_ERROR_INT_ENA    (BIT(2))
#define RTCADC_COCPU_SARADC1_ERROR_INT_ENA_M  (RTCADC_COCPU_SARADC1_ERROR_INT_ENA_V << RTCADC_COCPU_SARADC1_ERROR_INT_ENA_S)
#define RTCADC_COCPU_SARADC1_ERROR_INT_ENA_V  0x00000001U
#define RTCADC_COCPU_SARADC1_ERROR_INT_ENA_S  2
/** RTCADC_COCPU_SARADC2_ERROR_INT_ENA : R/WTC; bitpos: [3]; default: 0;
 *  An errro occurs from ADC2, int enable.
 */
#define RTCADC_COCPU_SARADC2_ERROR_INT_ENA    (BIT(3))
#define RTCADC_COCPU_SARADC2_ERROR_INT_ENA_M  (RTCADC_COCPU_SARADC2_ERROR_INT_ENA_V << RTCADC_COCPU_SARADC2_ERROR_INT_ENA_S)
#define RTCADC_COCPU_SARADC2_ERROR_INT_ENA_V  0x00000001U
#define RTCADC_COCPU_SARADC2_ERROR_INT_ENA_S  3
/** RTCADC_COCPU_SARADC1_WAKE_INT_ENA : R/WTC; bitpos: [4]; default: 0;
 *  A wakeup event is triggered from ADC1, int enable.
 */
#define RTCADC_COCPU_SARADC1_WAKE_INT_ENA    (BIT(4))
#define RTCADC_COCPU_SARADC1_WAKE_INT_ENA_M  (RTCADC_COCPU_SARADC1_WAKE_INT_ENA_V << RTCADC_COCPU_SARADC1_WAKE_INT_ENA_S)
#define RTCADC_COCPU_SARADC1_WAKE_INT_ENA_V  0x00000001U
#define RTCADC_COCPU_SARADC1_WAKE_INT_ENA_S  4
/** RTCADC_COCPU_SARADC2_WAKE_INT_ENA : R/WTC; bitpos: [5]; default: 0;
 *  A wakeup event is triggered from ADC2, int enable.
 */
#define RTCADC_COCPU_SARADC2_WAKE_INT_ENA    (BIT(5))
#define RTCADC_COCPU_SARADC2_WAKE_INT_ENA_M  (RTCADC_COCPU_SARADC2_WAKE_INT_ENA_V << RTCADC_COCPU_SARADC2_WAKE_INT_ENA_S)
#define RTCADC_COCPU_SARADC2_WAKE_INT_ENA_V  0x00000001U
#define RTCADC_COCPU_SARADC2_WAKE_INT_ENA_S  5

/** RTCADC_INT_ST_REG register
 *  Interrupt status registers.
 */
#define RTCADC_INT_ST_REG (DR_REG_LP_ADC_BASE + 0x50)
/** RTCADC_COCPU_SARADC1_INT_ST : RO; bitpos: [0]; default: 0;
 *  ADC1 Conversion is done, int status.
 */
#define RTCADC_COCPU_SARADC1_INT_ST    (BIT(0))
#define RTCADC_COCPU_SARADC1_INT_ST_M  (RTCADC_COCPU_SARADC1_INT_ST_V << RTCADC_COCPU_SARADC1_INT_ST_S)
#define RTCADC_COCPU_SARADC1_INT_ST_V  0x00000001U
#define RTCADC_COCPU_SARADC1_INT_ST_S  0
/** RTCADC_COCPU_SARADC2_INT_ST : RO; bitpos: [1]; default: 0;
 *  ADC2 Conversion is done, int status.
 */
#define RTCADC_COCPU_SARADC2_INT_ST    (BIT(1))
#define RTCADC_COCPU_SARADC2_INT_ST_M  (RTCADC_COCPU_SARADC2_INT_ST_V << RTCADC_COCPU_SARADC2_INT_ST_S)
#define RTCADC_COCPU_SARADC2_INT_ST_V  0x00000001U
#define RTCADC_COCPU_SARADC2_INT_ST_S  1
/** RTCADC_COCPU_SARADC1_ERROR_INT_ST : RO; bitpos: [2]; default: 0;
 *  An errro occurs from ADC1, int status.
 */
#define RTCADC_COCPU_SARADC1_ERROR_INT_ST    (BIT(2))
#define RTCADC_COCPU_SARADC1_ERROR_INT_ST_M  (RTCADC_COCPU_SARADC1_ERROR_INT_ST_V << RTCADC_COCPU_SARADC1_ERROR_INT_ST_S)
#define RTCADC_COCPU_SARADC1_ERROR_INT_ST_V  0x00000001U
#define RTCADC_COCPU_SARADC1_ERROR_INT_ST_S  2
/** RTCADC_COCPU_SARADC2_ERROR_INT_ST : RO; bitpos: [3]; default: 0;
 *  An errro occurs from ADC2, int status.
 */
#define RTCADC_COCPU_SARADC2_ERROR_INT_ST    (BIT(3))
#define RTCADC_COCPU_SARADC2_ERROR_INT_ST_M  (RTCADC_COCPU_SARADC2_ERROR_INT_ST_V << RTCADC_COCPU_SARADC2_ERROR_INT_ST_S)
#define RTCADC_COCPU_SARADC2_ERROR_INT_ST_V  0x00000001U
#define RTCADC_COCPU_SARADC2_ERROR_INT_ST_S  3
/** RTCADC_COCPU_SARADC1_WAKE_INT_ST : RO; bitpos: [4]; default: 0;
 *  A wakeup event is triggered from ADC1, int status.
 */
#define RTCADC_COCPU_SARADC1_WAKE_INT_ST    (BIT(4))
#define RTCADC_COCPU_SARADC1_WAKE_INT_ST_M  (RTCADC_COCPU_SARADC1_WAKE_INT_ST_V << RTCADC_COCPU_SARADC1_WAKE_INT_ST_S)
#define RTCADC_COCPU_SARADC1_WAKE_INT_ST_V  0x00000001U
#define RTCADC_COCPU_SARADC1_WAKE_INT_ST_S  4
/** RTCADC_COCPU_SARADC2_WAKE_INT_ST : RO; bitpos: [5]; default: 0;
 *  A wakeup event is triggered from ADC2, int status.
 */
#define RTCADC_COCPU_SARADC2_WAKE_INT_ST    (BIT(5))
#define RTCADC_COCPU_SARADC2_WAKE_INT_ST_M  (RTCADC_COCPU_SARADC2_WAKE_INT_ST_V << RTCADC_COCPU_SARADC2_WAKE_INT_ST_S)
#define RTCADC_COCPU_SARADC2_WAKE_INT_ST_V  0x00000001U
#define RTCADC_COCPU_SARADC2_WAKE_INT_ST_S  5

/** RTCADC_INT_CLR_REG register
 *  Interrupt clear registers.
 */
#define RTCADC_INT_CLR_REG (DR_REG_LP_ADC_BASE + 0x54)
/** RTCADC_COCPU_SARADC1_INT_CLR : WT; bitpos: [0]; default: 0;
 *  ADC1 Conversion is done, int clear.
 */
#define RTCADC_COCPU_SARADC1_INT_CLR    (BIT(0))
#define RTCADC_COCPU_SARADC1_INT_CLR_M  (RTCADC_COCPU_SARADC1_INT_CLR_V << RTCADC_COCPU_SARADC1_INT_CLR_S)
#define RTCADC_COCPU_SARADC1_INT_CLR_V  0x00000001U
#define RTCADC_COCPU_SARADC1_INT_CLR_S  0
/** RTCADC_COCPU_SARADC2_INT_CLR : WT; bitpos: [1]; default: 0;
 *  ADC2 Conversion is done, int clear.
 */
#define RTCADC_COCPU_SARADC2_INT_CLR    (BIT(1))
#define RTCADC_COCPU_SARADC2_INT_CLR_M  (RTCADC_COCPU_SARADC2_INT_CLR_V << RTCADC_COCPU_SARADC2_INT_CLR_S)
#define RTCADC_COCPU_SARADC2_INT_CLR_V  0x00000001U
#define RTCADC_COCPU_SARADC2_INT_CLR_S  1
/** RTCADC_COCPU_SARADC1_ERROR_INT_CLR : WT; bitpos: [2]; default: 0;
 *  An errro occurs from ADC1, int clear.
 */
#define RTCADC_COCPU_SARADC1_ERROR_INT_CLR    (BIT(2))
#define RTCADC_COCPU_SARADC1_ERROR_INT_CLR_M  (RTCADC_COCPU_SARADC1_ERROR_INT_CLR_V << RTCADC_COCPU_SARADC1_ERROR_INT_CLR_S)
#define RTCADC_COCPU_SARADC1_ERROR_INT_CLR_V  0x00000001U
#define RTCADC_COCPU_SARADC1_ERROR_INT_CLR_S  2
/** RTCADC_COCPU_SARADC2_ERROR_INT_CLR : WT; bitpos: [3]; default: 0;
 *  An errro occurs from ADC2, int clear.
 */
#define RTCADC_COCPU_SARADC2_ERROR_INT_CLR    (BIT(3))
#define RTCADC_COCPU_SARADC2_ERROR_INT_CLR_M  (RTCADC_COCPU_SARADC2_ERROR_INT_CLR_V << RTCADC_COCPU_SARADC2_ERROR_INT_CLR_S)
#define RTCADC_COCPU_SARADC2_ERROR_INT_CLR_V  0x00000001U
#define RTCADC_COCPU_SARADC2_ERROR_INT_CLR_S  3
/** RTCADC_COCPU_SARADC1_WAKE_INT_CLR : WT; bitpos: [4]; default: 0;
 *  A wakeup event is triggered from ADC1, int clear.
 */
#define RTCADC_COCPU_SARADC1_WAKE_INT_CLR    (BIT(4))
#define RTCADC_COCPU_SARADC1_WAKE_INT_CLR_M  (RTCADC_COCPU_SARADC1_WAKE_INT_CLR_V << RTCADC_COCPU_SARADC1_WAKE_INT_CLR_S)
#define RTCADC_COCPU_SARADC1_WAKE_INT_CLR_V  0x00000001U
#define RTCADC_COCPU_SARADC1_WAKE_INT_CLR_S  4
/** RTCADC_COCPU_SARADC2_WAKE_INT_CLR : WT; bitpos: [5]; default: 0;
 *  A wakeup event is triggered from ADC2, int clear.
 */
#define RTCADC_COCPU_SARADC2_WAKE_INT_CLR    (BIT(5))
#define RTCADC_COCPU_SARADC2_WAKE_INT_CLR_M  (RTCADC_COCPU_SARADC2_WAKE_INT_CLR_V << RTCADC_COCPU_SARADC2_WAKE_INT_CLR_S)
#define RTCADC_COCPU_SARADC2_WAKE_INT_CLR_V  0x00000001U
#define RTCADC_COCPU_SARADC2_WAKE_INT_CLR_S  5

/** RTCADC_INT_ENA_W1TS_REG register
 *  Interrupt enable assert registers.
 */
#define RTCADC_INT_ENA_W1TS_REG (DR_REG_LP_ADC_BASE + 0x58)
/** RTCADC_COCPU_SARADC1_INT_ENA_W1TS : WT; bitpos: [0]; default: 0;
 *  ADC1 Conversion is done, write 1 to assert int enable.
 */
#define RTCADC_COCPU_SARADC1_INT_ENA_W1TS    (BIT(0))
#define RTCADC_COCPU_SARADC1_INT_ENA_W1TS_M  (RTCADC_COCPU_SARADC1_INT_ENA_W1TS_V << RTCADC_COCPU_SARADC1_INT_ENA_W1TS_S)
#define RTCADC_COCPU_SARADC1_INT_ENA_W1TS_V  0x00000001U
#define RTCADC_COCPU_SARADC1_INT_ENA_W1TS_S  0
/** RTCADC_COCPU_SARADC2_INT_ENA_W1TS : WT; bitpos: [1]; default: 0;
 *  ADC2 Conversion is done, write 1 to assert int enable.
 */
#define RTCADC_COCPU_SARADC2_INT_ENA_W1TS    (BIT(1))
#define RTCADC_COCPU_SARADC2_INT_ENA_W1TS_M  (RTCADC_COCPU_SARADC2_INT_ENA_W1TS_V << RTCADC_COCPU_SARADC2_INT_ENA_W1TS_S)
#define RTCADC_COCPU_SARADC2_INT_ENA_W1TS_V  0x00000001U
#define RTCADC_COCPU_SARADC2_INT_ENA_W1TS_S  1
/** RTCADC_COCPU_SARADC1_ERROR_INT_ENA_W1TS : WT; bitpos: [2]; default: 0;
 *  An errro occurs from ADC1, write 1 to assert int enable.
 */
#define RTCADC_COCPU_SARADC1_ERROR_INT_ENA_W1TS    (BIT(2))
#define RTCADC_COCPU_SARADC1_ERROR_INT_ENA_W1TS_M  (RTCADC_COCPU_SARADC1_ERROR_INT_ENA_W1TS_V << RTCADC_COCPU_SARADC1_ERROR_INT_ENA_W1TS_S)
#define RTCADC_COCPU_SARADC1_ERROR_INT_ENA_W1TS_V  0x00000001U
#define RTCADC_COCPU_SARADC1_ERROR_INT_ENA_W1TS_S  2
/** RTCADC_COCPU_SARADC2_ERROR_INT_ENA_W1TS : WT; bitpos: [3]; default: 0;
 *  An errro occurs from ADC2, write 1 to assert int enable.
 */
#define RTCADC_COCPU_SARADC2_ERROR_INT_ENA_W1TS    (BIT(3))
#define RTCADC_COCPU_SARADC2_ERROR_INT_ENA_W1TS_M  (RTCADC_COCPU_SARADC2_ERROR_INT_ENA_W1TS_V << RTCADC_COCPU_SARADC2_ERROR_INT_ENA_W1TS_S)
#define RTCADC_COCPU_SARADC2_ERROR_INT_ENA_W1TS_V  0x00000001U
#define RTCADC_COCPU_SARADC2_ERROR_INT_ENA_W1TS_S  3
/** RTCADC_COCPU_SARADC1_WAKE_INT_ENA_W1TS : WT; bitpos: [4]; default: 0;
 *  A wakeup event is triggered from ADC1, write 1 to assert int enable.
 */
#define RTCADC_COCPU_SARADC1_WAKE_INT_ENA_W1TS    (BIT(4))
#define RTCADC_COCPU_SARADC1_WAKE_INT_ENA_W1TS_M  (RTCADC_COCPU_SARADC1_WAKE_INT_ENA_W1TS_V << RTCADC_COCPU_SARADC1_WAKE_INT_ENA_W1TS_S)
#define RTCADC_COCPU_SARADC1_WAKE_INT_ENA_W1TS_V  0x00000001U
#define RTCADC_COCPU_SARADC1_WAKE_INT_ENA_W1TS_S  4
/** RTCADC_COCPU_SARADC2_WAKE_INT_ENA_W1TS : WT; bitpos: [5]; default: 0;
 *  A wakeup event is triggered from ADC2, write 1 to assert int enable.
 */
#define RTCADC_COCPU_SARADC2_WAKE_INT_ENA_W1TS    (BIT(5))
#define RTCADC_COCPU_SARADC2_WAKE_INT_ENA_W1TS_M  (RTCADC_COCPU_SARADC2_WAKE_INT_ENA_W1TS_V << RTCADC_COCPU_SARADC2_WAKE_INT_ENA_W1TS_S)
#define RTCADC_COCPU_SARADC2_WAKE_INT_ENA_W1TS_V  0x00000001U
#define RTCADC_COCPU_SARADC2_WAKE_INT_ENA_W1TS_S  5

/** RTCADC_INT_ENA_W1TC_REG register
 *  Interrupt enable deassert registers.
 */
#define RTCADC_INT_ENA_W1TC_REG (DR_REG_LP_ADC_BASE + 0x5c)
/** RTCADC_COCPU_SARADC1_INT_ENA_W1TC : WT; bitpos: [0]; default: 0;
 *  ADC1 Conversion is done, write 1 to deassert int enable.
 */
#define RTCADC_COCPU_SARADC1_INT_ENA_W1TC    (BIT(0))
#define RTCADC_COCPU_SARADC1_INT_ENA_W1TC_M  (RTCADC_COCPU_SARADC1_INT_ENA_W1TC_V << RTCADC_COCPU_SARADC1_INT_ENA_W1TC_S)
#define RTCADC_COCPU_SARADC1_INT_ENA_W1TC_V  0x00000001U
#define RTCADC_COCPU_SARADC1_INT_ENA_W1TC_S  0
/** RTCADC_COCPU_SARADC2_INT_ENA_W1TC : WT; bitpos: [1]; default: 0;
 *  ADC2 Conversion is done, write 1 to deassert int enable.
 */
#define RTCADC_COCPU_SARADC2_INT_ENA_W1TC    (BIT(1))
#define RTCADC_COCPU_SARADC2_INT_ENA_W1TC_M  (RTCADC_COCPU_SARADC2_INT_ENA_W1TC_V << RTCADC_COCPU_SARADC2_INT_ENA_W1TC_S)
#define RTCADC_COCPU_SARADC2_INT_ENA_W1TC_V  0x00000001U
#define RTCADC_COCPU_SARADC2_INT_ENA_W1TC_S  1
/** RTCADC_COCPU_SARADC1_ERROR_INT_ENA_W1TC : WT; bitpos: [2]; default: 0;
 *  An errro occurs from ADC1, write 1 to deassert int enable.
 */
#define RTCADC_COCPU_SARADC1_ERROR_INT_ENA_W1TC    (BIT(2))
#define RTCADC_COCPU_SARADC1_ERROR_INT_ENA_W1TC_M  (RTCADC_COCPU_SARADC1_ERROR_INT_ENA_W1TC_V << RTCADC_COCPU_SARADC1_ERROR_INT_ENA_W1TC_S)
#define RTCADC_COCPU_SARADC1_ERROR_INT_ENA_W1TC_V  0x00000001U
#define RTCADC_COCPU_SARADC1_ERROR_INT_ENA_W1TC_S  2
/** RTCADC_COCPU_SARADC2_ERROR_INT_ENA_W1TC : WT; bitpos: [3]; default: 0;
 *  An errro occurs from ADC2, write 1 to deassert int enable.
 */
#define RTCADC_COCPU_SARADC2_ERROR_INT_ENA_W1TC    (BIT(3))
#define RTCADC_COCPU_SARADC2_ERROR_INT_ENA_W1TC_M  (RTCADC_COCPU_SARADC2_ERROR_INT_ENA_W1TC_V << RTCADC_COCPU_SARADC2_ERROR_INT_ENA_W1TC_S)
#define RTCADC_COCPU_SARADC2_ERROR_INT_ENA_W1TC_V  0x00000001U
#define RTCADC_COCPU_SARADC2_ERROR_INT_ENA_W1TC_S  3
/** RTCADC_COCPU_SARADC1_WAKE_INT_ENA_W1TC : WT; bitpos: [4]; default: 0;
 *  A wakeup event is triggered from ADC1, write 1 to deassert int enable.
 */
#define RTCADC_COCPU_SARADC1_WAKE_INT_ENA_W1TC    (BIT(4))
#define RTCADC_COCPU_SARADC1_WAKE_INT_ENA_W1TC_M  (RTCADC_COCPU_SARADC1_WAKE_INT_ENA_W1TC_V << RTCADC_COCPU_SARADC1_WAKE_INT_ENA_W1TC_S)
#define RTCADC_COCPU_SARADC1_WAKE_INT_ENA_W1TC_V  0x00000001U
#define RTCADC_COCPU_SARADC1_WAKE_INT_ENA_W1TC_S  4
/** RTCADC_COCPU_SARADC2_WAKE_INT_ENA_W1TC : WT; bitpos: [5]; default: 0;
 *  A wakeup event is triggered from ADC2, write 1 to deassert int enable.
 */
#define RTCADC_COCPU_SARADC2_WAKE_INT_ENA_W1TC    (BIT(5))
#define RTCADC_COCPU_SARADC2_WAKE_INT_ENA_W1TC_M  (RTCADC_COCPU_SARADC2_WAKE_INT_ENA_W1TC_V << RTCADC_COCPU_SARADC2_WAKE_INT_ENA_W1TC_S)
#define RTCADC_COCPU_SARADC2_WAKE_INT_ENA_W1TC_V  0x00000001U
#define RTCADC_COCPU_SARADC2_WAKE_INT_ENA_W1TC_S  5

/** RTCADC_WAKEUP1_REG register
 *  ADC1 wakeup configuration registers.
 */
#define RTCADC_WAKEUP1_REG (DR_REG_LP_ADC_BASE + 0x60)
/** RTCADC_SAR1_WAKEUP_TH_LOW : R/W; bitpos: [11:0]; default: 0;
 *  Lower threshold.
 */
#define RTCADC_SAR1_WAKEUP_TH_LOW    0x00000FFFU
#define RTCADC_SAR1_WAKEUP_TH_LOW_M  (RTCADC_SAR1_WAKEUP_TH_LOW_V << RTCADC_SAR1_WAKEUP_TH_LOW_S)
#define RTCADC_SAR1_WAKEUP_TH_LOW_V  0x00000FFFU
#define RTCADC_SAR1_WAKEUP_TH_LOW_S  0
/** RTCADC_SAR1_WAKEUP_TH_HIGH : R/W; bitpos: [25:14]; default: 4095;
 *  Upper threshold.
 */
#define RTCADC_SAR1_WAKEUP_TH_HIGH    0x00000FFFU
#define RTCADC_SAR1_WAKEUP_TH_HIGH_M  (RTCADC_SAR1_WAKEUP_TH_HIGH_V << RTCADC_SAR1_WAKEUP_TH_HIGH_S)
#define RTCADC_SAR1_WAKEUP_TH_HIGH_V  0x00000FFFU
#define RTCADC_SAR1_WAKEUP_TH_HIGH_S  14
/** RTCADC_SAR1_WAKEUP_OVER_UPPER_TH : RO; bitpos: [29]; default: 0;
 *  Indicates that this wakeup event arose from exceeding upper threshold.
 */
#define RTCADC_SAR1_WAKEUP_OVER_UPPER_TH    (BIT(29))
#define RTCADC_SAR1_WAKEUP_OVER_UPPER_TH_M  (RTCADC_SAR1_WAKEUP_OVER_UPPER_TH_V << RTCADC_SAR1_WAKEUP_OVER_UPPER_TH_S)
#define RTCADC_SAR1_WAKEUP_OVER_UPPER_TH_V  0x00000001U
#define RTCADC_SAR1_WAKEUP_OVER_UPPER_TH_S  29
/** RTCADC_SAR1_WAKEUP_EN : R/W; bitpos: [30]; default: 0;
 *  Wakeup function enable.
 */
#define RTCADC_SAR1_WAKEUP_EN    (BIT(30))
#define RTCADC_SAR1_WAKEUP_EN_M  (RTCADC_SAR1_WAKEUP_EN_V << RTCADC_SAR1_WAKEUP_EN_S)
#define RTCADC_SAR1_WAKEUP_EN_V  0x00000001U
#define RTCADC_SAR1_WAKEUP_EN_S  30
/** RTCADC_SAR1_WAKEUP_MODE : R/W; bitpos: [31]; default: 0;
 *  0:absolute value comparison mode. 1: relative value comparison mode.
 */
#define RTCADC_SAR1_WAKEUP_MODE    (BIT(31))
#define RTCADC_SAR1_WAKEUP_MODE_M  (RTCADC_SAR1_WAKEUP_MODE_V << RTCADC_SAR1_WAKEUP_MODE_S)
#define RTCADC_SAR1_WAKEUP_MODE_V  0x00000001U
#define RTCADC_SAR1_WAKEUP_MODE_S  31

/** RTCADC_WAKEUP2_REG register
 *  ADC2 wakeup configuration registers.
 */
#define RTCADC_WAKEUP2_REG (DR_REG_LP_ADC_BASE + 0x64)
/** RTCADC_SAR2_WAKEUP_TH_LOW : R/W; bitpos: [11:0]; default: 0;
 *  Lower threshold.
 */
#define RTCADC_SAR2_WAKEUP_TH_LOW    0x00000FFFU
#define RTCADC_SAR2_WAKEUP_TH_LOW_M  (RTCADC_SAR2_WAKEUP_TH_LOW_V << RTCADC_SAR2_WAKEUP_TH_LOW_S)
#define RTCADC_SAR2_WAKEUP_TH_LOW_V  0x00000FFFU
#define RTCADC_SAR2_WAKEUP_TH_LOW_S  0
/** RTCADC_SAR2_WAKEUP_TH_HIGH : R/W; bitpos: [25:14]; default: 4095;
 *  Upper threshold.
 */
#define RTCADC_SAR2_WAKEUP_TH_HIGH    0x00000FFFU
#define RTCADC_SAR2_WAKEUP_TH_HIGH_M  (RTCADC_SAR2_WAKEUP_TH_HIGH_V << RTCADC_SAR2_WAKEUP_TH_HIGH_S)
#define RTCADC_SAR2_WAKEUP_TH_HIGH_V  0x00000FFFU
#define RTCADC_SAR2_WAKEUP_TH_HIGH_S  14
/** RTCADC_SAR2_WAKEUP_OVER_UPPER_TH : RO; bitpos: [29]; default: 0;
 *  Indicates that this wakeup event arose from exceeding upper threshold.
 */
#define RTCADC_SAR2_WAKEUP_OVER_UPPER_TH    (BIT(29))
#define RTCADC_SAR2_WAKEUP_OVER_UPPER_TH_M  (RTCADC_SAR2_WAKEUP_OVER_UPPER_TH_V << RTCADC_SAR2_WAKEUP_OVER_UPPER_TH_S)
#define RTCADC_SAR2_WAKEUP_OVER_UPPER_TH_V  0x00000001U
#define RTCADC_SAR2_WAKEUP_OVER_UPPER_TH_S  29
/** RTCADC_SAR2_WAKEUP_EN : R/W; bitpos: [30]; default: 0;
 *  Wakeup function enable.
 */
#define RTCADC_SAR2_WAKEUP_EN    (BIT(30))
#define RTCADC_SAR2_WAKEUP_EN_M  (RTCADC_SAR2_WAKEUP_EN_V << RTCADC_SAR2_WAKEUP_EN_S)
#define RTCADC_SAR2_WAKEUP_EN_V  0x00000001U
#define RTCADC_SAR2_WAKEUP_EN_S  30
/** RTCADC_SAR2_WAKEUP_MODE : R/W; bitpos: [31]; default: 0;
 *  0:absolute value comparison mode. 1: relative value comparison mode.
 */
#define RTCADC_SAR2_WAKEUP_MODE    (BIT(31))
#define RTCADC_SAR2_WAKEUP_MODE_M  (RTCADC_SAR2_WAKEUP_MODE_V << RTCADC_SAR2_WAKEUP_MODE_S)
#define RTCADC_SAR2_WAKEUP_MODE_V  0x00000001U
#define RTCADC_SAR2_WAKEUP_MODE_S  31

/** RTCADC_WAKEUP_SEL_REG register
 *  Wakeup source select register.
 */
#define RTCADC_WAKEUP_SEL_REG (DR_REG_LP_ADC_BASE + 0x68)
/** RTCADC_SAR_WAKEUP_SEL : R/W; bitpos: [0]; default: 0;
 *  0: ADC1. 1: ADC2.
 */
#define RTCADC_SAR_WAKEUP_SEL    (BIT(0))
#define RTCADC_SAR_WAKEUP_SEL_M  (RTCADC_SAR_WAKEUP_SEL_V << RTCADC_SAR_WAKEUP_SEL_S)
#define RTCADC_SAR_WAKEUP_SEL_V  0x00000001U
#define RTCADC_SAR_WAKEUP_SEL_S  0

/** RTCADC_SAR1_HW_WAKEUP_REG register
 *  Hardware automatic sampling registers for wakeup function.
 */
#define RTCADC_SAR1_HW_WAKEUP_REG (DR_REG_LP_ADC_BASE + 0x6c)
/** RTCADC_ADC1_HW_READ_EN_I : R/W; bitpos: [0]; default: 0;
 *  Enable hardware automatic sampling.
 */
#define RTCADC_ADC1_HW_READ_EN_I    (BIT(0))
#define RTCADC_ADC1_HW_READ_EN_I_M  (RTCADC_ADC1_HW_READ_EN_I_V << RTCADC_ADC1_HW_READ_EN_I_S)
#define RTCADC_ADC1_HW_READ_EN_I_V  0x00000001U
#define RTCADC_ADC1_HW_READ_EN_I_S  0
/** RTCADC_ADC1_HW_READ_RATE_I : R/W; bitpos: [16:1]; default: 100;
 *  Hardware automatic sampling rate.
 */
#define RTCADC_ADC1_HW_READ_RATE_I    0x0000FFFFU
#define RTCADC_ADC1_HW_READ_RATE_I_M  (RTCADC_ADC1_HW_READ_RATE_I_V << RTCADC_ADC1_HW_READ_RATE_I_S)
#define RTCADC_ADC1_HW_READ_RATE_I_V  0x0000FFFFU
#define RTCADC_ADC1_HW_READ_RATE_I_S  1

/** RTCADC_SAR2_HW_WAKEUP_REG register
 *  Hardware automatic sampling registers for wakeup function.
 */
#define RTCADC_SAR2_HW_WAKEUP_REG (DR_REG_LP_ADC_BASE + 0x70)
/** RTCADC_ADC2_HW_READ_EN_I : R/W; bitpos: [0]; default: 0;
 *  Enable hardware automatic sampling.
 */
#define RTCADC_ADC2_HW_READ_EN_I    (BIT(0))
#define RTCADC_ADC2_HW_READ_EN_I_M  (RTCADC_ADC2_HW_READ_EN_I_V << RTCADC_ADC2_HW_READ_EN_I_S)
#define RTCADC_ADC2_HW_READ_EN_I_V  0x00000001U
#define RTCADC_ADC2_HW_READ_EN_I_S  0
/** RTCADC_ADC2_HW_READ_RATE_I : R/W; bitpos: [16:1]; default: 100;
 *  Hardware automatic sampling rate.
 */
#define RTCADC_ADC2_HW_READ_RATE_I    0x0000FFFFU
#define RTCADC_ADC2_HW_READ_RATE_I_M  (RTCADC_ADC2_HW_READ_RATE_I_V << RTCADC_ADC2_HW_READ_RATE_I_S)
#define RTCADC_ADC2_HW_READ_RATE_I_V  0x0000FFFFU
#define RTCADC_ADC2_HW_READ_RATE_I_S  1

#ifdef __cplusplus
}
#endif
