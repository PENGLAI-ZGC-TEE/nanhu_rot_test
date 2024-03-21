#include "sw/device/lib/sm/sm4_reg.h"
#include "sw/device/lib/runtime/log.h"

#include "sw/device/lib/testing/test_framework/ottf_main.h"

#include "hw/top_earlgrey/sw/autogen/top_earlgrey.h"

//#include <stdio.h>

unsigned int *SM4_CTRL_SIGNALS_REG_ADDR =(unsigned int *)(TOP_EARLGREY_SM4_BASE_ADDR+SM4_CTRL_SIGNALS_REG_OFFSET);
unsigned int *SM4_STATE_SIGNALS_REG_ADDR =(unsigned int *)(TOP_EARLGREY_SM4_BASE_ADDR+SM4_STATE_SIGNALS_REG_OFFSET);
unsigned int *SM4_KEY_0_REG_ADDR =(unsigned int *)(TOP_EARLGREY_SM4_BASE_ADDR+SM4_KEY_0_REG_OFFSET);
unsigned int *SM4_KEY_1_REG_ADDR =(unsigned int *)(TOP_EARLGREY_SM4_BASE_ADDR+SM4_KEY_1_REG_OFFSET);
unsigned int *SM4_KEY_2_REG_ADDR =(unsigned int *)(TOP_EARLGREY_SM4_BASE_ADDR+SM4_KEY_2_REG_OFFSET);
unsigned int *SM4_KEY_3_REG_ADDR =(unsigned int *)(TOP_EARLGREY_SM4_BASE_ADDR+SM4_KEY_3_REG_OFFSET);
unsigned int *SM4_DATA_IN_0_REG_ADDR =(unsigned int *)(TOP_EARLGREY_SM4_BASE_ADDR+SM4_DATA_IN_0_REG_OFFSET);
unsigned int *SM4_DATA_IN_1_REG_ADDR =(unsigned int *)(TOP_EARLGREY_SM4_BASE_ADDR+SM4_DATA_IN_1_REG_OFFSET);
unsigned int *SM4_DATA_IN_2_REG_ADDR =(unsigned int *)(TOP_EARLGREY_SM4_BASE_ADDR+SM4_DATA_IN_2_REG_OFFSET);
unsigned int *SM4_DATA_IN_3_REG_ADDR =(unsigned int *)(TOP_EARLGREY_SM4_BASE_ADDR+SM4_DATA_IN_3_REG_OFFSET);
unsigned int *SM4_RESULT_OUT_0_REG_ADDR =(unsigned int *)(TOP_EARLGREY_SM4_BASE_ADDR+SM4_RESULT_OUT_0_REG_OFFSET);
unsigned int *SM4_RESULT_OUT_1_REG_ADDR =(unsigned int *)(TOP_EARLGREY_SM4_BASE_ADDR+SM4_RESULT_OUT_1_REG_OFFSET);
unsigned int *SM4_RESULT_OUT_2_REG_ADDR =(unsigned int *)(TOP_EARLGREY_SM4_BASE_ADDR+SM4_RESULT_OUT_2_REG_OFFSET);
unsigned int *SM4_RESULT_OUT_3_REG_ADDR =(unsigned int *)(TOP_EARLGREY_SM4_BASE_ADDR+SM4_RESULT_OUT_3_REG_OFFSET);

unsigned int out_data[4];//定义数组来接收输出数据



OTTF_DEFINE_TEST_CONFIG();

void SM4_ON(void)
{
  *SM4_CTRL_SIGNALS_REG_ADDR |=(1<<SM4_CTRL_SIGNALS_SM4_ENABLE_IN_BIT);
  *SM4_CTRL_SIGNALS_REG_ADDR |=(1<<SM4_CTRL_SIGNALS_ENABLE_KEY_EXP_IN_BIT);
}

void operate_mode(uint8_t enc_dec)
{
  if(!enc_dec)
    *SM4_CTRL_SIGNALS_REG_ADDR &=~(unsigned int)(1<<SM4_CTRL_SIGNALS_ENCDEC_SEL_IN_BIT);
  else *SM4_CTRL_SIGNALS_REG_ADDR |=(1<<SM4_CTRL_SIGNALS_ENCDEC_SEL_IN_BIT);    
}

void input_key128(unsigned int key[4])
{
  *SM4_KEY_0_REG_ADDR=key[0];
  *SM4_KEY_1_REG_ADDR=key[1];
  *SM4_KEY_2_REG_ADDR=key[2];
  *SM4_KEY_3_REG_ADDR=key[3];
  *SM4_CTRL_SIGNALS_REG_ADDR |=(1<<SM4_CTRL_SIGNALS_USER_KEY_VALID_IN_BIT);
}

void encdec_enable(uint8_t flag)
{
  if(flag)
    *SM4_CTRL_SIGNALS_REG_ADDR |=(1<<SM4_CTRL_SIGNALS_ENCDEC_ENABLE_IN_BIT);
  else *SM4_CTRL_SIGNALS_REG_ADDR &=~(unsigned int)(1<<SM4_CTRL_SIGNALS_ENCDEC_ENABLE_IN_BIT);

}

void input_data(unsigned int data_in[4])
{
  *SM4_DATA_IN_0_REG_ADDR=data_in[0];
  *SM4_DATA_IN_1_REG_ADDR=data_in[1];
  *SM4_DATA_IN_2_REG_ADDR=data_in[2];
  *SM4_DATA_IN_3_REG_ADDR=data_in[3];
  *SM4_CTRL_SIGNALS_REG_ADDR |=(1<<SM4_CTRL_SIGNALS_VALID_IN_BIT);
}

//检查寄存器某位的值
uint8_t checkBit(unsigned int* registerAddress, unsigned int bit) {  
    return (*registerAddress & (1 << bit)) != 0;  
}

//等待输出数据有效位的变化
void wait_for_dataout(void)
{
  while (!checkBit(SM4_STATE_SIGNALS_REG_ADDR,SM4_STATE_SIGNALS_VALID_OUT_BIT))
  {
    LOG_INFO("The SM4 unit is calculating!!!");/* code */
  }
  LOG_INFO("SM4 unit calculation completed!!!");
  
}

//将数据读取到out_data数组，如果此时数据无效则将out_data赋0值
void readout_data(void)      
{
  uint8_t valid_out_bit = 0;
  valid_out_bit =(*SM4_STATE_SIGNALS_REG_ADDR >> SM4_STATE_SIGNALS_VALID_OUT_BIT)&1;
  if(valid_out_bit)
  {
    out_data[0] =*SM4_RESULT_OUT_0_REG_ADDR;
    out_data[1] =*SM4_RESULT_OUT_1_REG_ADDR;
    out_data[2] =*SM4_RESULT_OUT_2_REG_ADDR;
    out_data[3] =*SM4_RESULT_OUT_3_REG_ADDR;
  }
  else
  { 
    for (uint8_t i = 0; i <4; i++)
    {
      out_data[i] =0;
    }
  }
}

void SM4_OFF(void)
{
  *SM4_CTRL_SIGNALS_REG_ADDR &=~(unsigned int)(1<<SM4_CTRL_SIGNALS_SM4_ENABLE_IN_BIT);
  *SM4_CTRL_SIGNALS_REG_ADDR &=~(unsigned int)(1<<SM4_CTRL_SIGNALS_ENABLE_KEY_EXP_IN_BIT);
  encdec_enable(DISABLE_encdec);  
  *SM4_CTRL_SIGNALS_REG_ADDR &=~(unsigned int)(1<<SM4_CTRL_SIGNALS_USER_KEY_VALID_IN_BIT);
  *SM4_CTRL_SIGNALS_REG_ADDR &=~(unsigned int)(1<<SM4_CTRL_SIGNALS_VALID_IN_BIT);
}



bool main(void) {
  LOG_INFO("Now proceed with testing the SM4 accelerator.");
  SM4_ON();

  LOG_INFO("The first step is the encryption process.");
  operate_mode(enc_mode);

  input_key128(key_enc);
  LOG_INFO("INPUT KEY_ENC IS:");
  LOG_INFO("%08x%08x%08x%08x",*SM4_KEY_3_REG_ADDR,*SM4_KEY_2_REG_ADDR,*SM4_KEY_1_REG_ADDR,*SM4_KEY_0_REG_ADDR);

  encdec_enable(ENABLE_encdec);
  LOG_INFO("Enable encryption");

  input_data(data_in_enc);
  LOG_INFO("Load data <128'h0123456789abcdeffedcba9876543210> and start encryption");

  LOG_INFO("Wait for dataout");

  LOG_INFO("Expected encryption result: 128'h681edf34d206965e86b3e94f536e4246");
  LOG_INFO("Actual encryption result:");
  //sprintf(strings,"%x%x%x%x",out_data[3],out_data[2],out_data[1],out_data[0]);
  //LOG_INFO(strings);
  LOG_INFO("%08x%08x%08x%08x",*SM4_RESULT_OUT_3_REG_ADDR,*SM4_RESULT_OUT_2_REG_ADDR,*SM4_RESULT_OUT_1_REG_ADDR,*SM4_RESULT_OUT_0_REG_ADDR);
  SM4_OFF();

//接下来是解密过程
  LOG_INFO("The second step is the decryption process.");
  SM4_ON();
  
  operate_mode(dec_mode);

  input_key128(key_dec);
  LOG_INFO("INPUT KEY IS:");
  LOG_INFO("%08x%08x%08x%08x",*SM4_KEY_3_REG_ADDR,*SM4_KEY_2_REG_ADDR,*SM4_KEY_1_REG_ADDR,*SM4_KEY_0_REG_ADDR);
  
  encdec_enable(ENABLE_encdec);
  LOG_INFO("Enable decryption");

  input_data(data_in_dec);
  LOG_INFO("Load data <128'h681edf34d206965e86b3e94f536e4246> and start decryption");

  LOG_INFO("Wait for dataout");
  
  readout_data();//读到数组中

  LOG_INFO("Expected decryption result: 128'h0123456789abcdeffedcba9876543210");
  LOG_INFO("Actual encryption result:");

  LOG_INFO("%08x%08x%08x%08x",out_data[3],out_data[2],out_data[1],out_data[0]);//将数组中的值显示
  SM4_OFF();

  return 0;
}
