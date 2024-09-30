#include "sw/device/lib/rs_code/rs_encode.h"
#include "sw/device/lib/base/abs_mmio.h"
#include "sw/device/lib/base/bitfield.h"
#include "sw/device/lib/base/hardened.h"
#include "sw/device/lib/base/memory.h"

#include "hw/top_earlgrey/sw/autogen/top_earlgrey.h"

#include "sw/device/lib/runtime/log.h"

uint8_t checkBit_rs_encode(uint32_t addr, uint32_t bit) {
    return (abs_mmio_read32(addr) & (1u << bit)) != 0;
}

// is rs encode complete
void wait_for_rs_encode_valid_BIT(uint32_t base_addr) {
    while (!checkBit_rs_encode(base_addr + RS_ENCODE_STATE_SIGNALS_REG_OFFSET, RS_ENCODE_STATE_SIGNALS_READY_BIT_BIT)) {

    }
}


void rs_encode_function(uint32_t base_addr, uint32_t data_input[], uint32_t encoded_output[])
{
    uintptr_t data_in_addr = (uintptr_t)(base_addr + RS_ENCODE_DATA_IN_41_REG_OFFSET);
    uintptr_t data_out_addr = (uintptr_t)(base_addr + RS_ENCODE_ENCODED_DATA_OUT_49_REG_OFFSET);

    uint32_t ctrl_val = abs_mmio_read32(base_addr + RS_ENCODE_CTRL_SIGNALS_REG_OFFSET);
    ctrl_val &= ~(1u << RS_ENCODE_CTRL_SIGNALS_CLRN_BIT);
    abs_mmio_write32(base_addr + RS_ENCODE_CTRL_SIGNALS_REG_OFFSET, ctrl_val);

    ctrl_val = abs_mmio_read32(base_addr + RS_ENCODE_CTRL_SIGNALS_REG_OFFSET);
    ctrl_val |= (1u << RS_ENCODE_CTRL_SIGNALS_CLRN_BIT);
    abs_mmio_write32(base_addr + RS_ENCODE_CTRL_SIGNALS_REG_OFFSET, ctrl_val);


    for (uint8_t i = 0; i < 42; i++)
    {
        abs_mmio_write32(data_in_addr, data_input[i]);
        data_in_addr -= sizeof(uint32_t);
    }

    ctrl_val = abs_mmio_read32(base_addr + RS_ENCODE_CTRL_SIGNALS_REG_OFFSET);
    ctrl_val |= (1u << RS_ENCODE_CTRL_SIGNALS_ENCODE_EN_BIT);
    abs_mmio_write32(base_addr + RS_ENCODE_CTRL_SIGNALS_REG_OFFSET, ctrl_val);


    ctrl_val = abs_mmio_read32(base_addr + RS_ENCODE_CTRL_SIGNALS_REG_OFFSET);
    ctrl_val &= ~(1u << RS_ENCODE_CTRL_SIGNALS_ENCODE_EN_BIT);
    abs_mmio_write32(base_addr + RS_ENCODE_CTRL_SIGNALS_REG_OFFSET, ctrl_val);
    
    wait_for_rs_encode_valid_BIT(base_addr);

    for (uint8_t j = 0; j < 50; j++)
    {
        encoded_output[j] = abs_mmio_read32(data_out_addr);
        data_out_addr -= sizeof(uint32_t);
    }
}