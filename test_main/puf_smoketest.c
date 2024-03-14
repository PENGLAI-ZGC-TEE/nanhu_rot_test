#include "sw/device/lib/runtime/log.h"
#include "sw/device/lib/puf/puf.h"
#include "sw/device/lib/testing/test_framework/ottf_main.h"

#include "hw/top_earlgrey/sw/autogen/top_earlgrey.h"

//定义寄存器
uint32_t *PUF_CTRL_SIGNALS_REG_ADDR =(uint32_t *)(TOP_EARLGREY_PUF_BASE_ADDR+PUF_CTRL_SIGNALS_REG_OFFSET);
uint32_t *PUF_STATE_SIGNALS_REG_ADDR =(uint32_t *)(TOP_EARLGREY_PUF_BASE_ADDR+PUF_STATE_SIGNALS_REG_OFFSET);

uint32_t *PUF_CHALLENGE_0_REG_ADDR =(uint32_t *)(TOP_EARLGREY_PUF_BASE_ADDR+PUF_CHALLENGE_0_REG_OFFSET);
uint32_t *PUF_CHALLENGE_1_REG_ADDR =(uint32_t *)(TOP_EARLGREY_PUF_BASE_ADDR+PUF_CHALLENGE_1_REG_OFFSET);
uint32_t *PUF_CHALLENGE_2_REG_ADDR =(uint32_t *)(TOP_EARLGREY_PUF_BASE_ADDR+PUF_CHALLENGE_2_REG_OFFSET);
uint32_t *PUF_CHALLENGE_3_REG_ADDR =(uint32_t *)(TOP_EARLGREY_PUF_BASE_ADDR+PUF_CHALLENGE_3_REG_OFFSET);

uint32_t *PUF_RESPONSE_0_REG_ADDR =(uint32_t *)(TOP_EARLGREY_PUF_BASE_ADDR+PUF_RESPONSE_0_REG_OFFSET);
uint32_t *PUF_RESPONSE_1_REG_ADDR =(uint32_t *)(TOP_EARLGREY_PUF_BASE_ADDR+PUF_RESPONSE_1_REG_OFFSET);
uint32_t *PUF_RESPONSE_2_REG_ADDR =(uint32_t *)(TOP_EARLGREY_PUF_BASE_ADDR+PUF_RESPONSE_2_REG_OFFSET);
uint32_t *PUF_RESPONSE_3_REG_ADDR =(uint32_t *)(TOP_EARLGREY_PUF_BASE_ADDR+PUF_RESPONSE_3_REG_OFFSET);
uint32_t *PUF_RESPONSE_4_REG_ADDR =(uint32_t *)(TOP_EARLGREY_PUF_BASE_ADDR+PUF_RESPONSE_4_REG_OFFSET);
uint32_t *PUF_RESPONSE_5_REG_ADDR =(uint32_t *)(TOP_EARLGREY_PUF_BASE_ADDR+PUF_RESPONSE_5_REG_OFFSET);
uint32_t *PUF_RESPONSE_6_REG_ADDR =(uint32_t *)(TOP_EARLGREY_PUF_BASE_ADDR+PUF_RESPONSE_6_REG_OFFSET);
uint32_t *PUF_RESPONSE_7_REG_ADDR =(uint32_t *)(TOP_EARLGREY_PUF_BASE_ADDR+PUF_RESPONSE_7_REG_OFFSET);


OTTF_DEFINE_TEST_CONFIG();

uint32_t result_buf[8] = {0,0,0,0,0,0,0,0};

uint8_t checkBit(uint32_t* registerAddress, uint32_t bit) {  
    return (*registerAddress & (1 << bit)) != 0;  
}

//等待response_valid
void wait_for_res_valid_BIT(void)
{ 
  while (!checkBit(PUF_STATE_SIGNALS_REG_ADDR,PUF_STATE_SIGNALS_RESPONSE_VALID_BIT_BIT))//应该问red!!!
  {
    asm volatile("" ::: "memory");
  }
    
}

//PUF开机，默认是RNG模式
void PUF_ON(void)
{
    *PUF_CTRL_SIGNALS_REG_ADDR &=~(uint32_t)(1<<PUF_CTRL_SIGNALS_MODE_PUF_BIT);//设为RNG模式
    asm volatile("" ::: "memory");//不优化寄存器操作
    *PUF_CTRL_SIGNALS_REG_ADDR |=(1<<PUF_CTRL_SIGNALS_ENABLE_PUF_BIT);//开机
}

//进行一次C——R的运算，先关机，设为PUF模式后开机，计算取数完成后再恢复成RNG模式。
void puf_get_res_of_a_cha(uint32_t challenge_input[],uint32_t response_output[])
{
    *PUF_CTRL_SIGNALS_REG_ADDR &=~(uint32_t)(1<<PUF_CTRL_SIGNALS_ENABLE_PUF_BIT);//每次计算前先关机
    asm volatile("" ::: "memory");//不优化寄存器操作
    
    *PUF_CHALLENGE_0_REG_ADDR = challenge_input[3];
    *PUF_CHALLENGE_1_REG_ADDR = challenge_input[2];
    *PUF_CHALLENGE_2_REG_ADDR = challenge_input[1];
    *PUF_CHALLENGE_3_REG_ADDR = challenge_input[0];

    *PUF_CTRL_SIGNALS_REG_ADDR |=(1<<PUF_CTRL_SIGNALS_MODE_PUF_BIT);//设置为PUF模式
    asm volatile("" ::: "memory");//不优化寄存器操作
    *PUF_CTRL_SIGNALS_REG_ADDR |=(1<<PUF_CTRL_SIGNALS_ENABLE_PUF_BIT);//开机
    
    
    
    *PUF_CTRL_SIGNALS_REG_ADDR |=(1<<PUF_CTRL_SIGNALS_READY_CHA_BIT);//开始计算
    asm volatile("" ::: "memory");//不优化寄存器操作
    *PUF_CTRL_SIGNALS_REG_ADDR &=~(uint32_t)(1<<PUF_CTRL_SIGNALS_READY_CHA_BIT);//为下次计算方便，放低触发位。
    
    wait_for_res_valid_BIT();//等待计算完成

    response_output[0] = *PUF_RESPONSE_7_REG_ADDR;
    response_output[1] = *PUF_RESPONSE_6_REG_ADDR;
    response_output[2] = *PUF_RESPONSE_5_REG_ADDR;
    response_output[3] = *PUF_RESPONSE_4_REG_ADDR;
    response_output[4] = *PUF_RESPONSE_3_REG_ADDR;
    response_output[5] = *PUF_RESPONSE_2_REG_ADDR;
    response_output[6] = *PUF_RESPONSE_1_REG_ADDR;
    response_output[7] = *PUF_RESPONSE_0_REG_ADDR;

    *PUF_CTRL_SIGNALS_REG_ADDR &=~(uint32_t)(1<<PUF_CTRL_SIGNALS_ENABLE_PUF_BIT);//关机
    *PUF_CTRL_SIGNALS_REG_ADDR &=~(uint32_t)(1<<PUF_CTRL_SIGNALS_MODE_PUF_BIT);//设为RNG模式
    asm volatile("" ::: "memory");//不优化寄存器操作
    *PUF_CTRL_SIGNALS_REG_ADDR |=(1<<PUF_CTRL_SIGNALS_ENABLE_PUF_BIT);//开机
}

bool main(void) {

    LOG_INFO("Now, PUF unit (puf mode) test!");
    PUF_ON();
    LOG_INFO("Load challenge, wait response");
    puf_get_res_of_a_cha(a_challenge,result_buf);
    LOG_INFO("response :");
    LOG_INFO("%08x%08x%08x%08x%08x%08x%08x%08x",result_buf[0],result_buf[1],result_buf[2],result_buf[3],result_buf[4],result_buf[5],result_buf[6],result_buf[7]);
    return 0;
}