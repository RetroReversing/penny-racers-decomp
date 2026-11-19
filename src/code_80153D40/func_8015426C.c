#include "common.h"

/* identical to func_8014F3B0 (matched), with its names changed by decompdecomp */
void func_8013AE60(u16);
extern u8 D_8011F32E[];
void func_8015426C(s32 arg0)
{
  u16 temp_s0;
  s32 temp_v1;
 do { temp_s0 = arg0; func_8013AE60(temp_s0); temp_v1 = temp_s0 * 100; } while (0);
  *((volatile u16 *) (D_8011F32E + temp_v1)) += 1;
  if ((*((volatile u16 *) (D_8011F32E + temp_v1))) >= 0x80)
  {
    *((volatile u16 *) (D_8011F32E + temp_v1)) -= 0x7F;
  }
}
