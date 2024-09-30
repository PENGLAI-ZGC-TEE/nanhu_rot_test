#include "sw/device/lib/runtime/log.h"
#include "sw/device/lib/puf/puf.h"
#include "sw/device/lib/rs_code/rs_decode.h"
#include "sw/device/lib/rs_code/rs_encode.h"
#include "sm3.h"
// #include "sw/device/lib/testing/test_framework/ottf_main.h"

#include "hw/top_earlgrey/sw/autogen/top_earlgrey.h"
#include "sw/device/lib/runtime/print.h"
#include "sw/device/lib/base/abs_mmio.h"

#include <string.h>


#define DRAM_BASE 0x10000000 // 替换为实际的DRAM基地址

uint32_t puf_auth_result_buf[8] = {0,0,0,0,0,0,0,0};
uint32_t puf_result_buf[42] = {0,0,0,0,0,0,0,0,0,0,
                            0,0,0,0,0,0,0,0,0,0,
                            0,0,0,0,0,0,0,0,0,0,
                            0,0,0,0,0,0,0,0,0,0,
                            0,0};
// uint32_t rs_decode_result_buf[50]={0,0,0,0,0,0,0,0,0,0,
//                             0,0,0,0,0,0,0,0,0,0,
//                             0,0,0,0,0,0,0,0,0,0,
//                             0,0,0,0,0,0,0,0,0,0,
//                             0,0,0,0,0,0,0,0,0,0};
uint32_t rs_encode_result_buf[50]={0,0,0,0,0,0,0,0,0,0,
                            0,0,0,0,0,0,0,0,0,0,
                            0,0,0,0,0,0,0,0,0,0,
                            0,0,0,0,0,0,0,0,0,0,
                            0,0,0,0,0,0,0,0,0,0};

void calculate_sm3_hash_of_puf_result(uint32_t puf_result_buf[8], unsigned char output[32]) {
    unsigned char input[8 * sizeof(uint32_t)]; // 8 uint32_t elements, each 4 bytes

    // Convert the uint32_t values to a byte sequence in little-endian format
    for (size_t i = 0; i < 8; ++i) {
        // Assuming the system is little-endian
        input[i * 4 + 3] = (unsigned char)(puf_result_buf[i] & 0xFF);
        input[i * 4 + 2] = (unsigned char)((puf_result_buf[i] >> 8) & 0xFF);
        input[i * 4 + 1] = (unsigned char)((puf_result_buf[i] >> 16) & 0xFF);
        input[i * 4 + 0] = (unsigned char)((puf_result_buf[i] >> 24) & 0xFF);
    }

    // Now 'input' contains the byte sequence of 'puf_result_buf', call gm_sm3 to calculate the hash
    gm_sm3(input, sizeof(input), output);
}

inline void abs_mmio_write64(uint64_t addr, uint64_t value) {
    *((volatile uint64_t *)addr) = value;
}

inline uint64_t abs_mmio_read64(uint64_t addr) {
    return *((volatile uint64_t *)addr);
}

uint64_t PUF_hash_addr = 0x3b010008u;

//base_register_address: 0x3b010008L
void write_hash_to_registers(unsigned char output[32], uint64_t base_register_address) {
    // Iterate over the hash output and write each consecutive 8 bytes to a 64-bit register
    for (size_t i = 0; i < 4; ++i) {
        uint64_t value = 0;
        // Assuming the system is little-endian, construct the 64-bit value from the hash output
        for (size_t j = 0; j < 8; ++j) {
            value |= ((uint64_t)output[i * 8 + j]) << ((7 - j) * 8);
        }
        // Write the 64-bit value to the appropriate register
        abs_mmio_write64(base_register_address + i * sizeof(uint64_t), value);
    }
}

// Read and print the high and low 32 bits of 4 consecutive 64-bit registers
// starting from the base address.
void read_hash_from_registers(uint64_t base_addr) {
    for (int i = 0; i < 4; ++i) {
        uint64_t reg_value = abs_mmio_read64(base_addr + i * sizeof(uint64_t));
        uint32_t high = (uint32_t)(reg_value >> 32); // Extract high 32 bits
        uint32_t low = (uint32_t)(reg_value & 0xFFFFFFFF); // Extract low 32 bits
        LOG_INFO("Register %d: High 32 bits:  %08x , Low 32 bits:  %08x", i, high, low);
    }
}

// ! change PUF to PUF2
bool PUF_enrollment(uint32_t *helper_data) {
    puf_get_res_of_a_cha(TOP_EARLGREY_PUF_BASE_ADDR, a_challenge, puf_result_buf);
    LOG_INFO("PUF enrollment response :");
    LOG_INFO("%08x%08x%08x%08x%08x%08x%08x%08x",puf_result_buf[0],puf_result_buf[1],puf_result_buf[2],puf_result_buf[3],puf_result_buf[4],puf_result_buf[5],puf_result_buf[6],puf_result_buf[7]);

    LOG_INFO("Now, RS encode:");
    rs_encode_function(TOP_EARLGREY_RS_ENCODE_BASE_ADDR, puf_result_buf, rs_encode_result_buf);
    LOG_INFO("Helper data :");
    LOG_INFO("%08x%08x%08x%08x%08x%08x%08x%08x",rs_encode_result_buf[0],rs_encode_result_buf[1],rs_encode_result_buf[2],rs_encode_result_buf[3],rs_encode_result_buf[4],rs_encode_result_buf[5],rs_encode_result_buf[6],rs_encode_result_buf[7]);
    
    for (size_t i = 0; i < 8; ++i) {
        if (puf_result_buf[i] != rs_encode_result_buf[i + 8]) {
            LOG_INFO("Encode Error!");
            return false; // If any elements are not equal, return false
        }
    }
     // Calculate SM3 hash of PUF result
    unsigned char hash_output[32];
    calculate_sm3_hash_of_puf_result(puf_result_buf, hash_output);

    // Write the hash to the register
    write_hash_to_registers(hash_output, PUF_hash_addr);

    for (size_t i = 0; i < 8; ++i) {
        helper_data[i] = rs_encode_result_buf[i];
    }

    return true;
}

void PUF_authorization(uint32_t helper_data[8]){
    uint32_t rs_err_result_buf[50]={0};
    uint32_t rs_decode_result_buf[50]={0};
    uint32_t puf_result_buf_auth[42]={0};

    puf_get_res_of_a_cha(TOP_EARLGREY_PUF_BASE_ADDR, a_challenge, puf_result_buf_auth);
    LOG_INFO("PUF authorization response :");
    LOG_INFO("%08x%08x%08x%08x%08x%08x%08x%08x",puf_result_buf_auth[0],puf_result_buf_auth[1],puf_result_buf_auth[2],puf_result_buf_auth[3],puf_result_buf_auth[4],puf_result_buf_auth[5],puf_result_buf_auth[6],puf_result_buf_auth[7]);
    // Combine helper_data and puf_result_buf into rs_encode_result_buf
    puf_result_buf_auth[0] = puf_result_buf_auth[0] + 1;
    for(int i = 0; i < 8; i++) {
        rs_err_result_buf[i] = helper_data[i];
    }

    for(int i = 0; i < 42; i++) {
        rs_err_result_buf[8 + i] = puf_result_buf_auth[i];
    }

    LOG_INFO("Now, RS decode:");
    rs_decode_function(TOP_EARLGREY_RS_DECODE_BASE_ADDR, rs_err_result_buf, rs_decode_result_buf);

    // XOR operation to obtain puf_auth_result_buf
    for (size_t i = 0; i < 8; ++i) {
        puf_auth_result_buf[i] = puf_result_buf_auth[i] ^ rs_decode_result_buf[i + 8];
    }

     // Calculate SM3 hash of PUF result
    unsigned char hash_output[32];
    calculate_sm3_hash_of_puf_result(puf_auth_result_buf, hash_output);

    // Write the hash to the register
    write_hash_to_registers(hash_output, PUF_hash_addr);
};

void PUF_authorization2(uint32_t helper_data[8]){
    uint32_t rs_err_result_buf[50]={0};
    uint32_t rs_decode_result_buf[50]={0};
    uint32_t puf_result_buf_auth[42]={0};

    puf_get_res_of_a_cha(TOP_EARLGREY_PUF_BASE_ADDR, a_challenge, puf_result_buf_auth);
    LOG_INFO("PUF authorization response :");
    LOG_INFO("%08x%08x%08x%08x%08x%08x%08x%08x",puf_result_buf_auth[0],puf_result_buf_auth[1],puf_result_buf_auth[2],puf_result_buf_auth[3],puf_result_buf_auth[4],puf_result_buf_auth[5],puf_result_buf_auth[6],puf_result_buf_auth[7]);
    // Combine helper_data and puf_result_buf into rs_encode_result_buf
    // puf_result_buf_auth[0] = puf_result_buf_auth[0] + 1;
    for(int i = 0; i < 8; i++) {
        rs_err_result_buf[i] = helper_data[i];
    }

    for(int i = 0; i < 42; i++) {
        rs_err_result_buf[8 + i] = puf_result_buf_auth[i];
    }

    LOG_INFO("Now, RS decode:");
    rs_decode_function(TOP_EARLGREY_RS_DECODE_BASE_ADDR, rs_err_result_buf, rs_decode_result_buf);

    // XOR operation to obtain puf_auth_result_buf
    for (size_t i = 0; i < 8; ++i) {
        puf_auth_result_buf[i] = puf_result_buf_auth[i] ^ rs_decode_result_buf[i + 8];
    }

     // Calculate SM3 hash of PUF result
    unsigned char hash_output[32];
    calculate_sm3_hash_of_puf_result(puf_auth_result_buf, hash_output);

    // Write the hash to the register
    write_hash_to_registers(hash_output, PUF_hash_addr);
};

bool main(void) {

    LOG_INFO("Now, ROM init");

    uint32_t helper_data[8];
    LOG_INFO("Now, enrollment:");
    bool enroll_True = PUF_enrollment(helper_data);
    read_hash_from_registers(PUF_hash_addr);

    if (enroll_True)
    {
       LOG_INFO("Now, authorization:");
       PUF_authorization(helper_data);
       read_hash_from_registers(PUF_hash_addr);
       PUF_authorization2(helper_data);
       read_hash_from_registers(PUF_hash_addr);
       PUF_authorization(helper_data);
       read_hash_from_registers(PUF_hash_addr);
    }
    
    return 0;
}  