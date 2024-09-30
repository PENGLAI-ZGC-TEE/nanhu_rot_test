#include "sw/device/lib/puf/puf.h"
#include "sw/device/lib/base/abs_mmio.h"
#include "sw/device/lib/base/bitfield.h"
#include "sw/device/lib/base/hardened.h"
#include "sw/device/lib/base/memory.h"

#include "hw/top_earlgrey/sw/autogen/top_earlgrey.h"

#include "sw/device/lib/runtime/log.h"
// set puf to rng mode and enable it
void PUF_RNG_ON(uint32_t base_addr) {
    uint32_t val = abs_mmio_read32(base_addr + PUF_CTRL_SIGNALS_REG_OFFSET); 
    val &= ~(uint32_t)(1 << PUF_CTRL_SIGNALS_MODE_PUF_BIT); 
    abs_mmio_write32(base_addr + PUF_CTRL_SIGNALS_REG_OFFSET, val); 

    val = abs_mmio_read32(base_addr + PUF_CTRL_SIGNALS_REG_OFFSET); 
    val |= (1 << PUF_CTRL_SIGNALS_ENABLE_PUF_BIT);
    abs_mmio_write32(base_addr + PUF_CTRL_SIGNALS_REG_OFFSET, val); 
}

void PUF_OFF(uint32_t base_addr) {
    // disable PUF 
    uint32_t val = abs_mmio_read32(base_addr + PUF_CTRL_SIGNALS_REG_OFFSET); 
    val &= ~(1 << PUF_CTRL_SIGNALS_ENABLE_PUF_BIT);
    abs_mmio_write32(base_addr + PUF_CTRL_SIGNALS_REG_OFFSET, val); 
}

void PUF_RNG_OFF(uint32_t base_addr) {
    // set puf to puf mode
    uint32_t val = abs_mmio_read32(base_addr + PUF_CTRL_SIGNALS_REG_OFFSET); 
    val |= (1 << PUF_CTRL_SIGNALS_MODE_PUF_BIT); 
    abs_mmio_write32(base_addr + PUF_CTRL_SIGNALS_REG_OFFSET, val); 
    // enable puf
    val = abs_mmio_read32(base_addr + PUF_CTRL_SIGNALS_REG_OFFSET); 
    val |= (1 << PUF_CTRL_SIGNALS_ENABLE_PUF_BIT);
    abs_mmio_write32(base_addr + PUF_CTRL_SIGNALS_REG_OFFSET, val); 
}

uint8_t checkBit(uint32_t addr, uint32_t bit) {
    return (abs_mmio_read32(addr) & (1u << bit)) != 0;
}

void wait_for_res_valid_BIT(uint32_t base_addr) {
    while (!checkBit(base_addr + PUF_STATE_SIGNALS_REG_OFFSET, PUF_STATE_SIGNALS_RESPONSE_VALID_BIT_BIT)) {

    }
}

void puf_get_res_of_a_cha(uint32_t base_addr, uint32_t challenge_input[], uint32_t response_output[])
{    
    // disable PUF first
    uint32_t val = abs_mmio_read32(base_addr + PUF_CTRL_SIGNALS_REG_OFFSET); 
    val &= ~(1 << PUF_CTRL_SIGNALS_ENABLE_PUF_BIT);
    abs_mmio_write32(base_addr + PUF_CTRL_SIGNALS_REG_OFFSET, val); 

    // write challenge to reg
    abs_mmio_write32(base_addr + PUF_CHALLENGE_0_REG_OFFSET, challenge_input[3]);
    abs_mmio_write32(base_addr + PUF_CHALLENGE_1_REG_OFFSET, challenge_input[2]);
    abs_mmio_write32(base_addr + PUF_CHALLENGE_2_REG_OFFSET, challenge_input[1]);
    abs_mmio_write32(base_addr + PUF_CHALLENGE_3_REG_OFFSET, challenge_input[0]);

    // set puf to puf mode
    val = abs_mmio_read32(base_addr + PUF_CTRL_SIGNALS_REG_OFFSET); 
    val |= (1 << PUF_CTRL_SIGNALS_MODE_PUF_BIT); 
    abs_mmio_write32(base_addr + PUF_CTRL_SIGNALS_REG_OFFSET, val); 
    // enable puf
    val = abs_mmio_read32(base_addr + PUF_CTRL_SIGNALS_REG_OFFSET); 
    val |= (1 << PUF_CTRL_SIGNALS_ENABLE_PUF_BIT);
    abs_mmio_write32(base_addr + PUF_CTRL_SIGNALS_REG_OFFSET, val); 

    // start compute
    val = abs_mmio_read32(base_addr + PUF_CTRL_SIGNALS_REG_OFFSET); 
    val |= (1 << PUF_CTRL_SIGNALS_READY_CHA_BIT);
    abs_mmio_write32(base_addr + PUF_CTRL_SIGNALS_REG_OFFSET, val); 

    // set ready reg to 0
    val = abs_mmio_read32(base_addr + PUF_CTRL_SIGNALS_REG_OFFSET); 
    val &= ~(1 << PUF_CTRL_SIGNALS_READY_CHA_BIT);
    abs_mmio_write32(base_addr + PUF_CTRL_SIGNALS_REG_OFFSET, val); 

    wait_for_res_valid_BIT(base_addr);

    response_output[0] = abs_mmio_read32(base_addr + PUF_RESPONSE_7_REG_OFFSET);
    response_output[1] = abs_mmio_read32(base_addr + PUF_RESPONSE_6_REG_OFFSET);
    response_output[2] = abs_mmio_read32(base_addr + PUF_RESPONSE_5_REG_OFFSET);
    response_output[3] = abs_mmio_read32(base_addr + PUF_RESPONSE_4_REG_OFFSET);
    response_output[4] = abs_mmio_read32(base_addr + PUF_RESPONSE_3_REG_OFFSET);
    response_output[5] = abs_mmio_read32(base_addr + PUF_RESPONSE_2_REG_OFFSET);
    response_output[6] = abs_mmio_read32(base_addr + PUF_RESPONSE_1_REG_OFFSET);
    response_output[7] = abs_mmio_read32(base_addr + PUF_RESPONSE_0_REG_OFFSET);

    // disable PUF first
    val = abs_mmio_read32(base_addr + PUF_CTRL_SIGNALS_REG_OFFSET); 
    val &= ~(1 << PUF_CTRL_SIGNALS_ENABLE_PUF_BIT);
    abs_mmio_write32(base_addr + PUF_CTRL_SIGNALS_REG_OFFSET, val); 
}