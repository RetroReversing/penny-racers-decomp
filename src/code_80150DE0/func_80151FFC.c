#include "common_local_source_339302417315.h"

/* identical to func_8014F43C (matched), with its names changed by decompdecomp */
extern u8 D_8011F32E[];
extern char D_802E0A70[];
inline static void *inline_fn(void *arg0)
{
  return arg0;
}

void func_80151FFC(void **arg0, s32 arg1)
{
  s32 *temp_v1;
  temp_v1 = *arg0;
  *arg0 = temp_v1 + 2;
  temp_v1[0] = 0xFD48000F;
  temp_v1[1] = (s32) D_802E0A70;
  temp_v1 = *arg0;
  *arg0 = temp_v1 + 2;
  temp_v1[0] = 0xF5480400;
  temp_v1[1] = 0x07014050;
  temp_v1 = *arg0;
  *arg0 = temp_v1 + 2;
  temp_v1[0] = 0xE6000000;
  temp_v1[1] = 0;
  temp_v1 = *arg0;
  *arg0 = temp_v1 + 2;
  temp_v1[0] = 0xF4000000;
  temp_v1[1] = 0x0703E07C;
  temp_v1 = *arg0;
  *arg0 = temp_v1 + 2;
  temp_v1[0] = 0xE7000000;
  temp_v1[1] = 0;
  temp_v1 = *arg0;
  *arg0 = temp_v1 + 2;
  temp_v1[0] = 0xF5400400;
  temp_v1[1] = 0x14050;
  temp_v1 = *arg0;
  *arg0 = temp_v1 + 2;
  temp_v1[0] = 0xF2000000;
  temp_v1[1] = 0x7C07C;
  temp_v1 = inline_fn(*arg0);
  *arg0 = temp_v1 + 2;
  temp_v1[0] = ((*((u16 *) (D_8011F32E + ((arg1 & 0xFFFF) * 0x64)))) & 0xFFF) | 0xF2000000;
  temp_v1[1] = 0x7C07C;
}
