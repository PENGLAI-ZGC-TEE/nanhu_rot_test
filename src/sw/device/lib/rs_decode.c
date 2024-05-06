#include "sw/device/lib/rs_code/rs_decode.h"
#include "sw/device/lib/base/abs_mmio.h"
#include "sw/device/lib/base/bitfield.h"
#include "sw/device/lib/base/hardened.h"
#include "sw/device/lib/base/memory.h"

#include "hw/top_earlgrey/sw/autogen/top_earlgrey.h"

#include "sw/device/lib/runtime/log.h"

uint8_t checkBit_rs_decode(uint32_t addr, uint32_t bit) {
    return (abs_mmio_read32(addr) & (1u << bit)) != 0;
}

// is rs decode complete
int wait_for_rs_decode_valid_BIT(uint32_t base_addr) {
    int i;
    for (i = 0; i < 200; i++) {
        if (checkBit_rs_decode(base_addr + RS_DECODE_STATE_SIGNALS_REG_OFFSET, RS_DECODE_STATE_SIGNALS_READY_BIT_BIT)) {
            break; 
        }
    }
    return i;
}

void rs_decode_function(uint32_t base_addr, uint32_t encoded_data_err_input[],uint32_t error_pos_output[])
{
    uintptr_t  data_in_addr = (uintptr_t )(base_addr + RS_DECODE_ENCODED_DATA_IN_49_REG_OFFSET);
    uintptr_t  data_out_addr = (uintptr_t )(base_addr + RS_DECODE_ERROR_POS_OUT_49_REG_OFFSET);

    // clrn fisrt
    uint32_t ctrl_val = abs_mmio_read32(base_addr + RS_DECODE_CTRL_SIGNALS_REG_OFFSET);
    ctrl_val &= ~(1U << RS_DECODE_CTRL_SIGNALS_CLRN_BIT);
    abs_mmio_write32(base_addr + RS_DECODE_CTRL_SIGNALS_REG_OFFSET, ctrl_val);

    ctrl_val = abs_mmio_read32(base_addr + RS_DECODE_CTRL_SIGNALS_REG_OFFSET);
    ctrl_val |= (1U << RS_DECODE_CTRL_SIGNALS_CLRN_BIT);
    abs_mmio_write32(base_addr + RS_DECODE_CTRL_SIGNALS_REG_OFFSET, ctrl_val);
    
    for (uint8_t i = 0; i < 50; i++)
    {   
        abs_mmio_write32(data_in_addr, encoded_data_err_input[i]);
        data_in_addr -= sizeof(uint32_t); 
    }

    // Assuming RS_DECODE_CTRL_SIGNALS_REG_ADDR is the address of the control register
    // and RS_DECODE_CTRL_SIGNALS_DECODE_EN_BIT is the enable bit
    ctrl_val = abs_mmio_read32(base_addr + RS_DECODE_CTRL_SIGNALS_REG_OFFSET);
    ctrl_val |= (1U << RS_DECODE_CTRL_SIGNALS_DECODE_EN_BIT);
    abs_mmio_write32(base_addr + RS_DECODE_CTRL_SIGNALS_REG_OFFSET, ctrl_val);

    ctrl_val = abs_mmio_read32(base_addr + RS_DECODE_CTRL_SIGNALS_REG_OFFSET);
    ctrl_val &= ~(1U << RS_DECODE_CTRL_SIGNALS_DECODE_EN_BIT);
    abs_mmio_write32(base_addr + RS_DECODE_CTRL_SIGNALS_REG_OFFSET, ctrl_val);

    int loop = wait_for_rs_decode_valid_BIT(base_addr);

    if (loop==200) {
        for (uint8_t j = 0; j < 50; j++)
        {
            error_pos_output[j] = 0;
            data_out_addr -= sizeof(uint32_t);
        }
    } else {
        for (uint8_t j = 0; j < 50; j++)
        {
            error_pos_output[j] = abs_mmio_read32(data_out_addr);
            data_out_addr -= sizeof(uint32_t);
        }
    }

}