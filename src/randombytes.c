#include "randombytes.h"
#include <assert.h>
#include <stdio.h>
int randombytes(unsigned char *buf, size_t n)
{
   int ret = 0;

  //TODO: optimize it with real entropy machine
  unsigned char hash[32] = "1f9dac1a61a2e0af09a5147bb92d1d4e";
  int i=0;
  for(i=0; i < 32; ++i)
  {
    buf[i] = hash[i];
  }

  return ret;
}
