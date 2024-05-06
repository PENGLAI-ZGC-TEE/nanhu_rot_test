#include "gm.h"
#include "sm3.h"
#include "sm2.h"
#include "sm4.h"
#include <stdio.h>
#include "sw/device/lib/runtime/log.h"
#include "sw/device/lib/runtime/print.h"
/**
 * 国密SM2单元测试
 * @param key_hex 私钥十六进制
 * @param pubKey_hex 公钥十六进制
 * @param sig_hex 预期结果十六进制
 * @param dgst_bytes 消息摘要二进制
 * @param algType 算法，0签名及验签，1仅签名，2仅验签
 */
void test_gm_sv(const char * key_hex, const char * pubKey_hex, const char * sig_hex,
        const unsigned char * dgst_bytes,
        int algType) {
    unsigned char sig_res[256] = {0};
    gm_bn_t testK;
    gm_bn_t key;
    gm_bn_t dgst;
    gm_point_t _P, *P = &_P;
    int i, j;

    gm_bn_from_hex(testK, key_hex);
    if(dgst_bytes == NULL) {
        gm_bn_from_hex(dgst, key_hex);
    }else {
        gm_bn_from_bytes(dgst, dgst_bytes);
    }
    gm_bn_from_hex(key, key_hex);
    gm_point_from_hex(P, pubKey_hex);

    if(algType == 0) { // sign and verify
        for (i = 0; i < 1000; i++) {
            if (gm_do_sign_for_test(key, dgst, sig_res + 64, testK) != 1) {
                LOG_INFO("gm do sign failed.\n");
            }
            if (gm_do_verify(P, dgst, sig_res + 64) != 1) {
                LOG_INFO("gm do verify failed.\n");
            }
            for (j = 0; j < 32; j++) {
                sig_res[j] = sig_res[64 + j] ^ sig_res[96 + j];
            }
            gm_bn_from_bytes(dgst, sig_res);
        }
    }else if(algType == 1000) { // sign only
        for (i = 0; i < 1; i++) {
            if (gm_do_sign_for_test(key, dgst, sig_res + 64, testK) != 1) {
                LOG_INFO("gm do sign failed.\n");
            }
            for (j = 0; j < 32; j++) {
                sig_res[j] = sig_res[64 + j] ^ sig_res[96 + j];
            }
            gm_bn_from_bytes(dgst, sig_res);
        }
    }else if(algType == 2) { // verify only
        gm_bn_from_hex(key, sig_hex);
        gm_bn_to_bytes(key, sig_res + 64);
        gm_bn_from_hex(key, sig_hex + 64);
        gm_bn_to_bytes(key, sig_res + 96);

        for (i = 0; i < 1000; i++) {
            if (gm_do_verify(P, dgst, sig_res + 64) != 1) {
                LOG_INFO("gm do verify failed.\n");
            }
        }
    }

    int k;
    for (k = 0; k < 64; k++) {
        sprintf(sig_res + k * 2, "%02X", (sig_res[64 + k] & 0x0FF));
    }

    sig_res[129] = 0;

    LOG_INFO("r = %s\n", sig_res);
    LOG_INFO("test result: %s\n", (strcmp(sig_hex, sig_res) == 0 ? "ok" : "fail"));
}

void test_sm2_sv(const char * key_hex, const char * pubKey_hex, const char * sig_hex,
                 const char * input, unsigned int iLen,
                 int algType) {
    unsigned char buf[32] = {0};
    gm_bn_t key;
    gm_point_t _P, *P = &_P;

    gm_bn_from_hex(key, key_hex);
    // 从私钥中计算公钥
    gm_point_mul(P, key, GM_MONT_G);

    gm_sm2_compute_msg_hash(input, iLen, "1234567812345678", 16, P, buf);

    test_gm_sv(key_hex, pubKey_hex, sig_hex, buf, algType);
}


void test_sm2_gen_keypair() {
    gm_bn_t k;
    gm_point_t p;
    int i;
    LOG_INFO("test sm2 gen keypair\n");
    gm_sm2_gen_keypair(k, &p);

    char buf[132] = {0};

    gm_bn_to_hex(k, buf);
    LOG_INFO("private key: %s\n", buf);

    gm_point_encode(&p, buf, 1);
    for (i = 0; i < 33; i++) {
        sprintf(buf + 33 + i * 2, "%02X", (buf[i] & 0x0FF));
    }
    buf[99] = 0;
    LOG_INFO("public key compressed: %s\n", buf + 33);

    gm_point_to_hex(&p, buf);
    buf[128] = 0;
    LOG_INFO("public key: 04%s\n", buf);
}


void test_sm2_ctx_sv() {
    unsigned char input[60] = {0};
    unsigned char buf[64] = {0};
    unsigned char userId[3] = {0x61, 0x62, 0x63};
     LOG_INFO("0\n");
    gm_bn_t k, dgst;
    gm_point_t p;
    gm_sm2_context ctx;

    unsigned char testPrivK[32] = {0};
    unsigned char testPubK[65] = {0};

    gm_hex2bin("3D325BAA32B2A2437FFB471901FD7C0D218FEF5B9BCF5187431DC4B23330FB16", 64, testPrivK);
    gm_hex2bin("04328B2B5CEB896FB409FAD358F8228F8FD17A9AED7F9C78B1D78AAD45D2514EA1CC615C5184B1CA6C8462DC3ED541E2D7666FEB6C5293FB1B7E60CBE8DF203D2F", 130, testPubK);
    gm_bn_from_bytes(k, testPrivK);
    gm_point_from_bytes(&p, testPubK + 1);

    gm_hex2bin("32C4AE2C1F1981195F9904466A39C9948FE30BBFF2660BE1715A4589334C74C791167A5EE1C13B05D6A1ED99AC24C3C33E7981EDDCA6C05061328990", 
        120, input);

    // 旧方法签名
    gm_sm2_compute_msg_hash(input, 60, userId, 3, &p, buf);
    gm_bn_from_bytes(dgst, buf);
    if(gm_do_sign_for_test(k, dgst, buf, k) != 1) {
        LOG_INFO("test result sign: fail\n");
        return;
    }
    LOG_INFO("1\n");

    //新方法验签
    if(gm_sm2_sign_init(&ctx, testPubK, 65, userId, 3, 0) == 0) {
        LOG_INFO("test result sign init: fail\n");
        return;
    }
    LOG_INFO("2\n");
    gm_sm2_sign_update(&ctx, input, 60);
    if(gm_sm2_sign_done_for_test(&ctx, buf, k) != 1) {
        LOG_INFO("test result verify: fail\n");
        return;
    }
    LOG_INFO("3\n");

    // 新方法签名
    if(gm_sm2_sign_init(&ctx, testPrivK, 32, userId, 3, 1) == 0) {
        LOG_INFO("test result sign init: fail1\n");
        return;
    }
    LOG_INFO("4\n");
    gm_sm2_sign_update(&ctx, input, 60);
    if(gm_sm2_sign_done_for_test(&ctx, buf, k) != 1) {
        LOG_INFO("test result sign: fail1\n");
        return;
    }
    LOG_INFO("5\n");
    // 旧方法验签
    if(gm_do_verify(&p, dgst, buf) != 1) {
        LOG_INFO("test result verify: fail1\n");
        return;
    }
    LOG_INFO("test result: ok\n");
}
int main(void) {
  test_sm2_ctx_sv();
//   test_sm2_gen_keypair();
  return 0;
}