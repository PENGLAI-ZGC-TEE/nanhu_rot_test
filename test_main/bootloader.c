#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "gm/sm2.h"
#include "gm/sm3.h"
#include "sw/device/lib/runtime/log.h"
#define FLASH_BASE 0x10000000
typedef unsigned char byte;
unsigned int penglai_sm_size = 0x10000;
//extern byte penglai_dev_public_key[64];
byte penglai_dev_secret_key[32];
byte penglai_sm_public_key[64];
byte penglai_sm_secret_key[32];
byte penglai_sm_hash[32];
//extern byte penglai_sm_signature[64];

void main() {
  void *puf_enable_addr = (void*)0x3b1c0000;
  void *entropy_conf_addr = (void*)0x3b160024;
  void *entropy_en_addr = (void*)0x3b160020;
  void *csrng_ctrl_addr = (void*)0x3b150014;
  void *end0_ctrl_addr = (void*)0x3b190014;
  *(uint32_t*)entropy_conf_addr = 0x00909099;
  asm volatile("" ::: "memory");
  *(uint32_t*)entropy_en_addr = 0x00000006;
  asm volatile("" ::: "memory");
  *(uint32_t*)csrng_ctrl_addr = 0x00000666;
  asm volatile("" ::: "memory");
  *(uint32_t*)end0_ctrl_addr = 0x00009966;
  asm volatile("" ::: "memory");
  *(uint32_t*)puf_enable_addr = 0x00000001;
  asm volatile("" ::: "memory");
  
  struct sm3_context ctx;

  /**
   * Measure SM.
   * You can just use this function
   * sm3((void*)DRAM_BASE, penglai_sm_size, penglai_sm_hash);
   * Or you can do it yourself.
   */
  sm3_init(&ctx);
  sm3_update(&ctx, (void*)FLASH_BASE, penglai_sm_size);
  sm3_final(&ctx, penglai_sm_hash);

  /**
   * TEST SM key.
   * The keypair is created by sm2 algorithm.
   */
  #include "use_dev_keys.h"
  ecc_point pub;
  //sm2_make_keypair(penglai_dev_secret_key, &pub);
  //sm2_make_keypair(penglai_sm_secret_key, &pub);
  //sm2_make_prikey(penglai_sm_secret_key);
  //sm2_make_pubkey(penglai_sm_secret_key, &pub);
  
  //memcpy(penglai_sm_public_key, &pub, 64);

  /**
   * Sign the SM
   */
  //signature_t *signature = (struct signature_t*)penglai_sm_signature;
  //初始化sig
  struct signature_t *signature = (struct signature_t*)malloc(sizeof(struct signature_t));
 
  sm2_sign((void*)(signature->r), (void*)(signature->s), (void*)penglai_dev_secret_key, (void*)penglai_sm_hash);
  LOG_INFO("r:");
  for(int i=0;i<32;i++){
    LOG_INFO("%x",signature->r[i]);
  }
  LOG_INFO("\ns:");
  for(int i=0;i<32;i++){
    LOG_INFO("%x",signature->s[i]);
  }
  //memcpy(penglai_sm_signature, &signature, 64);

  /**
   * Clean up.
   */
  //memset((void*)penglai_dev_secret_key, 0, sizeof(penglai_dev_secret_key));


}
