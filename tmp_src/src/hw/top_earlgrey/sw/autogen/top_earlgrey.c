// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#include "hw/top_earlgrey/sw/autogen/top_earlgrey.h"

/**
 * PLIC Interrupt Source to Peripheral Map
 *
 * This array is a mapping from `top_earlgrey_plic_irq_id_t` to
 * `top_earlgrey_plic_peripheral_t`.
 */
const top_earlgrey_plic_peripheral_t
    top_earlgrey_plic_interrupt_for_peripheral[17] = {
  [kTopEarlgreyPlicIrqIdHmacHmacDone] = kTopEarlgreyPlicPeripheralHmac,
  [kTopEarlgreyPlicIrqIdHmacFifoEmpty] = kTopEarlgreyPlicPeripheralHmac,
  [kTopEarlgreyPlicIrqIdHmacHmacErr] = kTopEarlgreyPlicPeripheralHmac,
  [kTopEarlgreyPlicIrqIdKmacKmacDone] = kTopEarlgreyPlicPeripheralKmac,
  [kTopEarlgreyPlicIrqIdKmacFifoEmpty] = kTopEarlgreyPlicPeripheralKmac,
  [kTopEarlgreyPlicIrqIdKmacKmacErr] = kTopEarlgreyPlicPeripheralKmac,
  [kTopEarlgreyPlicIrqIdKeymgrOpDone] = kTopEarlgreyPlicPeripheralKeymgr,
  [kTopEarlgreyPlicIrqIdCsrngCsCmdReqDone] = kTopEarlgreyPlicPeripheralCsrng,
  [kTopEarlgreyPlicIrqIdCsrngCsEntropyReq] = kTopEarlgreyPlicPeripheralCsrng,
  [kTopEarlgreyPlicIrqIdCsrngCsHwInstExc] = kTopEarlgreyPlicPeripheralCsrng,
  [kTopEarlgreyPlicIrqIdCsrngCsFatalErr] = kTopEarlgreyPlicPeripheralCsrng,
  [kTopEarlgreyPlicIrqIdEntropySrcEsEntropyValid] = kTopEarlgreyPlicPeripheralEntropySrc,
  [kTopEarlgreyPlicIrqIdEntropySrcEsHealthTestFailed] = kTopEarlgreyPlicPeripheralEntropySrc,
  [kTopEarlgreyPlicIrqIdEntropySrcEsObserveFifoReady] = kTopEarlgreyPlicPeripheralEntropySrc,
  [kTopEarlgreyPlicIrqIdEntropySrcEsFatalErr] = kTopEarlgreyPlicPeripheralEntropySrc,
  [kTopEarlgreyPlicIrqIdEdn0EdnCmdReqDone] = kTopEarlgreyPlicPeripheralEdn0,
  [kTopEarlgreyPlicIrqIdEdn0EdnFatalErr] = kTopEarlgreyPlicPeripheralEdn0,
};


/**
 * Alert Handler Alert Source to Peripheral Map
 *
 * This array is a mapping from `top_earlgrey_alert_id_t` to
 * `top_earlgrey_alert_peripheral_t`.
 */
const top_earlgrey_alert_peripheral_t
    top_earlgrey_alert_for_peripheral[77] = {
  [kTopEarlgreyAlertIdUart0FatalFault] = kTopEarlgreyAlertPeripheralUart0,
  [kTopEarlgreyAlertIdUart1FatalFault] = kTopEarlgreyAlertPeripheralUart1,
  [kTopEarlgreyAlertIdUart2FatalFault] = kTopEarlgreyAlertPeripheralUart2,
  [kTopEarlgreyAlertIdUart3FatalFault] = kTopEarlgreyAlertPeripheralUart3,
  [kTopEarlgreyAlertIdGpioFatalFault] = kTopEarlgreyAlertPeripheralGpio,
  [kTopEarlgreyAlertIdSpiDeviceFatalFault] = kTopEarlgreyAlertPeripheralSpiDevice,
  [kTopEarlgreyAlertIdI2c0FatalFault] = kTopEarlgreyAlertPeripheralI2c0,
  [kTopEarlgreyAlertIdI2c1FatalFault] = kTopEarlgreyAlertPeripheralI2c1,
  [kTopEarlgreyAlertIdI2c2FatalFault] = kTopEarlgreyAlertPeripheralI2c2,
  [kTopEarlgreyAlertIdPattgenFatalFault] = kTopEarlgreyAlertPeripheralPattgen,
  [kTopEarlgreyAlertIdRvTimerFatalFault] = kTopEarlgreyAlertPeripheralRvTimer,
  [kTopEarlgreyAlertIdOtpCtrlFatalMacroError] = kTopEarlgreyAlertPeripheralOtpCtrl,
  [kTopEarlgreyAlertIdOtpCtrlFatalCheckError] = kTopEarlgreyAlertPeripheralOtpCtrl,
  [kTopEarlgreyAlertIdOtpCtrlFatalBusIntegError] = kTopEarlgreyAlertPeripheralOtpCtrl,
  [kTopEarlgreyAlertIdOtpCtrlFatalPrimOtpAlert] = kTopEarlgreyAlertPeripheralOtpCtrl,
  [kTopEarlgreyAlertIdOtpCtrlRecovPrimOtpAlert] = kTopEarlgreyAlertPeripheralOtpCtrl,
  [kTopEarlgreyAlertIdLcCtrlFatalProgError] = kTopEarlgreyAlertPeripheralLcCtrl,
  [kTopEarlgreyAlertIdLcCtrlFatalStateError] = kTopEarlgreyAlertPeripheralLcCtrl,
  [kTopEarlgreyAlertIdLcCtrlFatalBusIntegError] = kTopEarlgreyAlertPeripheralLcCtrl,
  [kTopEarlgreyAlertIdSpiHost0FatalFault] = kTopEarlgreyAlertPeripheralSpiHost0,
  [kTopEarlgreyAlertIdSpiHost1FatalFault] = kTopEarlgreyAlertPeripheralSpiHost1,
  [kTopEarlgreyAlertIdUsbdevFatalFault] = kTopEarlgreyAlertPeripheralUsbdev,
  [kTopEarlgreyAlertIdPwrmgrAonFatalFault] = kTopEarlgreyAlertPeripheralPwrmgrAon,
  [kTopEarlgreyAlertIdRstmgrAonFatalFault] = kTopEarlgreyAlertPeripheralRstmgrAon,
  [kTopEarlgreyAlertIdRstmgrAonFatalCnstyFault] = kTopEarlgreyAlertPeripheralRstmgrAon,
  [kTopEarlgreyAlertIdClkmgrAonRecovFault] = kTopEarlgreyAlertPeripheralClkmgrAon,
  [kTopEarlgreyAlertIdClkmgrAonFatalFault] = kTopEarlgreyAlertPeripheralClkmgrAon,
  [kTopEarlgreyAlertIdSysrstCtrlAonFatalFault] = kTopEarlgreyAlertPeripheralSysrstCtrlAon,
  [kTopEarlgreyAlertIdAdcCtrlAonFatalFault] = kTopEarlgreyAlertPeripheralAdcCtrlAon,
  [kTopEarlgreyAlertIdPwmAonFatalFault] = kTopEarlgreyAlertPeripheralPwmAon,
  [kTopEarlgreyAlertIdPinmuxAonFatalFault] = kTopEarlgreyAlertPeripheralPinmuxAon,
  [kTopEarlgreyAlertIdAonTimerAonFatalFault] = kTopEarlgreyAlertPeripheralAonTimerAon,
  [kTopEarlgreyAlertIdSensorCtrlRecovAlert] = kTopEarlgreyAlertPeripheralSensorCtrl,
  [kTopEarlgreyAlertIdSensorCtrlFatalAlert] = kTopEarlgreyAlertPeripheralSensorCtrl,
  [kTopEarlgreyAlertIdSramCtrlRetAonFatalError] = kTopEarlgreyAlertPeripheralSramCtrlRetAon,
  [kTopEarlgreyAlertIdFlashCtrlRecovErr] = kTopEarlgreyAlertPeripheralFlashCtrl,
  [kTopEarlgreyAlertIdFlashCtrlFatalStdErr] = kTopEarlgreyAlertPeripheralFlashCtrl,
  [kTopEarlgreyAlertIdFlashCtrlFatalErr] = kTopEarlgreyAlertPeripheralFlashCtrl,
  [kTopEarlgreyAlertIdFlashCtrlFatalPrimFlashAlert] = kTopEarlgreyAlertPeripheralFlashCtrl,
  [kTopEarlgreyAlertIdFlashCtrlRecovPrimFlashAlert] = kTopEarlgreyAlertPeripheralFlashCtrl,
  [kTopEarlgreyAlertIdRvDmFatalFault] = kTopEarlgreyAlertPeripheralRvDm,
  [kTopEarlgreyAlertIdRvPlicFatalFault] = kTopEarlgreyAlertPeripheralRvPlic,
  [kTopEarlgreyAlertIdAesRecovCtrlUpdateErr] = kTopEarlgreyAlertPeripheralAes,
  [kTopEarlgreyAlertIdAesFatalFault] = kTopEarlgreyAlertPeripheralAes,
  [kTopEarlgreyAlertIdHmacFatalFault] = kTopEarlgreyAlertPeripheralHmac,
  [kTopEarlgreyAlertIdKmacRecovOperationErr] = kTopEarlgreyAlertPeripheralKmac,
  [kTopEarlgreyAlertIdKmacFatalFaultErr] = kTopEarlgreyAlertPeripheralKmac,
  [kTopEarlgreyAlertIdOtbnFatal] = kTopEarlgreyAlertPeripheralOtbn,
  [kTopEarlgreyAlertIdOtbnRecov] = kTopEarlgreyAlertPeripheralOtbn,
  [kTopEarlgreyAlertIdKeymgrRecovOperationErr] = kTopEarlgreyAlertPeripheralKeymgr,
  [kTopEarlgreyAlertIdKeymgrFatalFaultErr] = kTopEarlgreyAlertPeripheralKeymgr,
  [kTopEarlgreyAlertIdRotTopFatalFaultHmac] = kTopEarlgreyAlertPeripheralRotTop,
  [kTopEarlgreyAlertIdRotTopRecovOperationErrKmac] = kTopEarlgreyAlertPeripheralRotTop,
  [kTopEarlgreyAlertIdRotTopFatalFaultErrKmac] = kTopEarlgreyAlertPeripheralRotTop,
  [kTopEarlgreyAlertIdRotTopRecovOperationErrKeymgr] = kTopEarlgreyAlertPeripheralRotTop,
  [kTopEarlgreyAlertIdRotTopFatalFaultErrKeymgr] = kTopEarlgreyAlertPeripheralRotTop,
  [kTopEarlgreyAlertIdRotTopFatalRomCtrl] = kTopEarlgreyAlertPeripheralRotTop,
  [kTopEarlgreyAlertIdRotTopRecovAlertEdn] = kTopEarlgreyAlertPeripheralRotTop,
  [kTopEarlgreyAlertIdRotTopFatalAlertEdn] = kTopEarlgreyAlertPeripheralRotTop,
  [kTopEarlgreyAlertIdRotTopRecovAlertCsrng] = kTopEarlgreyAlertPeripheralRotTop,
  [kTopEarlgreyAlertIdRotTopFatalAlertCsrng] = kTopEarlgreyAlertPeripheralRotTop,
  [kTopEarlgreyAlertIdRotTopRecovAlertEntropySrc] = kTopEarlgreyAlertPeripheralRotTop,
  [kTopEarlgreyAlertIdRotTopFatalAlertEntropyEntropySrc] = kTopEarlgreyAlertPeripheralRotTop,
  [kTopEarlgreyAlertIdCsrngRecovAlert] = kTopEarlgreyAlertPeripheralCsrng,
  [kTopEarlgreyAlertIdCsrngFatalAlert] = kTopEarlgreyAlertPeripheralCsrng,
  [kTopEarlgreyAlertIdEntropySrcRecovAlert] = kTopEarlgreyAlertPeripheralEntropySrc,
  [kTopEarlgreyAlertIdEntropySrcFatalAlert] = kTopEarlgreyAlertPeripheralEntropySrc,
  [kTopEarlgreyAlertIdEdn0RecovAlert] = kTopEarlgreyAlertPeripheralEdn0,
  [kTopEarlgreyAlertIdEdn0FatalAlert] = kTopEarlgreyAlertPeripheralEdn0,
  [kTopEarlgreyAlertIdEdn1RecovAlert] = kTopEarlgreyAlertPeripheralEdn1,
  [kTopEarlgreyAlertIdEdn1FatalAlert] = kTopEarlgreyAlertPeripheralEdn1,
  [kTopEarlgreyAlertIdSramCtrlMainFatalError] = kTopEarlgreyAlertPeripheralSramCtrlMain,
  [kTopEarlgreyAlertIdRomCtrlFatal] = kTopEarlgreyAlertPeripheralRomCtrl,
  [kTopEarlgreyAlertIdRvCoreIbexFatalSwErr] = kTopEarlgreyAlertPeripheralRvCoreIbex,
  [kTopEarlgreyAlertIdRvCoreIbexRecovSwErr] = kTopEarlgreyAlertPeripheralRvCoreIbex,
  [kTopEarlgreyAlertIdRvCoreIbexFatalHwErr] = kTopEarlgreyAlertPeripheralRvCoreIbex,
  [kTopEarlgreyAlertIdRvCoreIbexRecovHwErr] = kTopEarlgreyAlertPeripheralRvCoreIbex,
};
