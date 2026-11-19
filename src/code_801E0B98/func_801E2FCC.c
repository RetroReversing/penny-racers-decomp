#include "common_local_source_339302417495.h"

s32 func_800297E8(u8, void *, s32);
extern s32 D_801E91C8;
extern volatile unsigned char D_801E97A0;
inline static int inline_fn(s32 arg0)
{
  return arg0 * 0x30;
}

void func_801E2FCC(s32 arg0)
{
  s32 temp_a0;
  temp_a0 = arg0 & 0xFFFF;
  func_800297E8(*((u8 *)&D_801E91C8 + temp_a0), inline_fn(temp_a0) + (&D_801E97A0), 0x30);
}
