#include "common_local_source_339302417210.h"

extern u8 D_8011F2FC[];
extern u8 D_80126FF7;
inline static int inline_fn(u8 arg0, int arg1, int arg2, u8 arg3)
{
  return (((u32) ((u8) (~arg0))) << arg1) | (arg2 | arg3);
}

void func_80141BC4(u32 **arg0, s32 arg1)
{
  u8 b;
  u32 *temp;
  temp = *arg0;
  *arg0 = temp + 2;
  temp[0] = 0xFA000000;
  b = D_8011F2FC[(arg1 & 0xFFFF) * 100];
  temp[1] = inline_fn(b, 16, 0xFF000000, b);
  D_80126FF7 = 0xFF;
}
