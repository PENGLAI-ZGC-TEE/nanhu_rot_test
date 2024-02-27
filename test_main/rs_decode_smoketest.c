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

//等待rdy
void wait_for_RDY_BIT(void)
{ 
  while (!checkBit(RS_DECODE_STATE_SIGNALS_REG_ADDR,RS_DECODE_STATE_SIGNALS_READY_BIT_BIT))//应该问red!!!
  {
    asm volatile("" ::: "memory");
  }
    
}

void rs_decode_function(uint32_t encoded_data_err_input[],uint32_t error_pos_output[])
{
    uintptr_t  data_in_addr =(uintptr_t )(TOP_EARLGREY_RS_DECODE_BASE_ADDR+RS_DECODE_ENCODED_DATA_IN_49_REG_OFFSET);
    uintptr_t  data_out_addr =(uintptr_t )(TOP_EARLGREY_RS_DECODE_BASE_ADDR+RS_DECODE_ERROR_POS_OUT_49_REG_OFFSET);
    // uint32_t temp1 = (uint32_t)data_in_addr;
    // //LOG_INFO("temp1=%08x",temp1);
    // uint32_t temp2 = (uint32_t)data_out_addr;
    //LOG_INFO("temp2=%08x",temp2);

    for (uint8_t i = 0; i < 50; i++)
    {
        // data_in_addr =(uint32_t *)temp1;
        // *data_in_addr = encoded_data_err_input[i];
        *(uint32_t *)data_in_addr = encoded_data_err_input[i];
        //LOG_INFO("i=%08x",i);
        //LOG_INFO("data_in_addr=%08x",data_in_addr);
        // temp1 = (uint32_t)(data_in_addr) - 0x4;//一种操作指针的方法
        data_in_addr -= sizeof(uint32_t); // 假设寄存器是连续放置的
    }

    *RS_DECODE_CTRL_SIGNALS_REG_ADDR |=(1<<RS_DECODE_CTRL_SIGNALS_DECODE_EN_BIT);
    asm volatile("" ::: "memory");
    *RS_DECODE_CTRL_SIGNALS_REG_ADDR &=~(uint32_t)(1<<RS_DECODE_CTRL_SIGNALS_DECODE_EN_BIT);  

    wait_for_RDY_BIT();

    for (uint8_t j = 0; j < 50; j++)
    {
        // data_out_addr =(uint32_t *)temp2;
        // error_pos_output[j] = *data_out_addr;
        error_pos_output[j] = *(uint32_t *)data_out_addr;
        //LOG_INFO("j=%08x",j);
        //LOG_INFO("data_out_addr=%08x",data_out_addr);
        // temp2 = (uint32_t)(data_out_addr) - 0x4;
        data_out_addr -= sizeof(uint32_t);
    }

}

bool main(void) {

    LOG_INFO("Now, rs_decode unit test!");
    LOG_INFO("Load data,expected error_pos result:00d00605(HEAD)");
    rs_decode_function(encoded_data_err_input_buf,result_buf);
    LOG_INFO("Actual result");
    LOG_INFO("%08x",result_buf[0]);
    return true;
}