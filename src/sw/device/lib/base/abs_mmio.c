// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

#include "sw/device/lib/base/abs_mmio.h"

// `extern` declarations to give the inline functions in the corresponding
// header a link location.

// zdr 32-> 64
extern uint8_t abs_mmio_read8(uint64_t addr);
extern void abs_mmio_write8(uint64_t addr, uint8_t value);
extern void abs_mmio_write8_shadowed(uint64_t addr, uint8_t value);
extern uint32_t abs_mmio_read32(uint64_t addr);
extern void abs_mmio_write32(uint64_t addr, uint32_t value);
extern void abs_mmio_write32_shadowed(uint64_t addr, uint32_t value);

