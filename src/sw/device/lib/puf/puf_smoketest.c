#include "sw/device/lib/runtime/log.h"
#include "sw/device/lib/puf/puf.h"
#include "sw/device/lib/testing/test_framework/ottf_main.h"

#include "hw/top_earlgrey/sw/autogen/top_earlgrey.h"

//定义寄存器
uint32_t *PUF_CTRL_SIGNALS_REG_ADDR =(uint32_t *)(TOP_EARLGREY_PUF2_BASE_ADDR+PUF_CTRL_SIGNALS_REG_OFFSET);
uint32_t *PUF_STATE_SIGNALS_REG_ADDR =(uint32_t *)(TOP_EARLGREY_PUF2_BASE_ADDR+PUF_STATE_SIGNALS_REG_OFFSET);

uint32_t *PUF_CHALLENGE_0_REG_ADDR =(uint32_t *)(TOP_EARLGREY_PUF2_BASE_ADDR+PUF_CHALLENGE_0_REG_OFFSET);
uint32_t *PUF_CHALLENGE_1_REG_ADDR =(uint32_t *)(TOP_EARLGREY_PUF2_BASE_ADDR+PUF_CHALLENGE_1_REG_OFFSET);
uint32_t *PUF_CHALLENGE_2_REG_ADDR =(uint32_t *)(TOP_EARLGREY_PUF2_BASE_ADDR+PUF_CHALLENGE_2_REG_OFFSET);
uint32_t *PUF_CHALLENGE_3_REG_ADDR =(uint32_t *)(TOP_EARLGREY_PUF2_BASE_ADDR+PUF_CHALLENGE_3_REG_OFFSET);

uint32_t *PUF_RESPONSE_0_REG_ADDR =(uint32_t *)(TOP_EARLGREY_PUF2_BASE_ADDR+PUF_RESPONSE_0_REG_OFFSET);
uint32_t *PUF_RESPONSE_1_REG_ADDR =(uint32_t *)(TOP_EARLGREY_PUF2_BASE_ADDR+PUF_RESPONSE_1_REG_OFFSET);
uint32_t *PUF_RESPONSE_2_REG_ADDR =(uint32_t *)(TOP_EARLGREY_PUF2_BASE_ADDR+PUF_RESPONSE_2_REG_OFFSET);
uint32_t *PUF_RESPONSE_3_REG_ADDR =(uint32_t *)(TOP_EARLGREY_PUF2_BASE_ADDR+PUF_RESPONSE_3_REG_OFFSET);
uint32_t *PUF_RESPONSE_4_REG_ADDR =(uint32_t *)(TOP_EARLGREY_PUF2_BASE_ADDR+PUF_RESPONSE_4_REG_OFFSET);
uint32_t *PUF_RESPONSE_5_REG_ADDR =(uint32_t *)(TOP_EARLGREY_PUF2_BASE_ADDR+PUF_RESPONSE_5_REG_OFFSET);
uint32_t *PUF_RESPONSE_6_REG_ADDR =(uint32_t *)(TOP_EARLGREY_PUF2_BASE_ADDR+PUF_RESPONSE_6_REG_OFFSET);
uint32_t *PUF_RESPONSE_7_REG_ADDR =(uint32_t *)(TOP_EARLGREY_PUF2_BASE_ADDR+PUF_RESPONSE_7_REG_OFFSET);


OTTF_DEFINE_TEST_CONFIG();

uint32_t result_buf[8] = {0,0,0,0,0,0,0,0};




bool test_main(void) {

    LOG_INFO("Now, PUF unit (puf mode) test!");
    PUF_RNG_OFF(TOP_EARLGREY_PUF1_BASE_ADDR);
    LOG_INFO("Load challenge, wait response");
    puf_get_res_of_a_cha(TOP_EARLGREY_PUF1_BASE_ADDR, a_challenge,result_buf);
    LOG_INFO("response :");
    LOG_INFO("%08x%08x%08x%08x%08x%08x%08x%08x",result_buf[0],result_buf[1],result_buf[2],result_buf[3],result_buf[4],result_buf[5],result_buf[6],result_buf[7]);
    return 0;
}