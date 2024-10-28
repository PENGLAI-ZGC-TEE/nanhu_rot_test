#include "sw/device/lib/runtime/log.h"
#include "sw/device/lib/rs_code/rs_decode.h"
#include "sw/device/lib/testing/test_framework/ottf_main.h"

#include "hw/top_earlgrey/sw/autogen/top_earlgrey.h"

uint32_t *RS_DECODE_CTRL_SIGNALS_REG_ADDR =(uint32_t *)(TOP_EARLGREY_RS_DECODE_BASE_ADDR+RS_DECODE_CTRL_SIGNALS_REG_OFFSET);
uint32_t *RS_DECODE_STATE_SIGNALS_REG_ADDR =(uint32_t *)(TOP_EARLGREY_RS_DECODE_BASE_ADDR+RS_DECODE_STATE_SIGNALS_REG_OFFSET);

OTTF_DEFINE_TEST_CONFIG();

uint32_t result_buf[50]={0,0,0,0,0,0,0,0,0,0,
                            0,0,0,0,0,0,0,0,0,0,
                            0,0,0,0,0,0,0,0,0,0,
                            0,0,0,0,0,0,0,0,0,0,
                            0,0,0,0,0,0,0,0,0,0};

uint8_t checkBit(uint32_t* registerAddress, uint32_t bit) {  
    return (*registerAddress & (1 << bit)) != 0;  
}


bool test_main(void) {

    LOG_INFO("Now, rs_decode unit test!");
    LOG_INFO("Load data,expected error_pos result:00d00605(HEAD)");
    rs_decode_function(TOP_EARLGREY_RS_DECODE_BASE_ADDR, encoded_data_err_input_buf,result_buf);
    LOG_INFO("Actual result");
    LOG_INFO("%08x",result_buf[0]);
    if (result_buf[0] != 0x00d00605)
    {
        LOG_INFO("Bad result!");
        return 1;
    }

    return 0;
}