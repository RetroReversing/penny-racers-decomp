#include "common_local_source_339302417295.h"

extern char D_8011F32E[];
extern char D_802EFB00[];
inline static int inline_fn(u32 arg0, u32 arg1, int arg2)
{
  return (arg0 << 12) | (arg1 | arg2);
}

void func_8014D18C(u32 **arg0, s32 arg1)
{
  u32 *p;
  u32 *q;
  u32 t;
  p = *arg0;
  *arg0 = p + 2; p[0] = 0xFD48000F; p[1] = (u32) D_802EFB00;
  p = *arg0;
  *arg0 = p + 2; p[0] = 0xF5480400; p[1] = 0x07014050;
  p = *arg0;
  *arg0 = p + 2; p[0] = 0xE6000000; p[1] = 0;
  p = *arg0;
  *arg0 = p + 2; p[0] = 0xF4000000; p[1] = 0x0703E07C;
  p = *arg0;
  *arg0 = p + 2; p[0] = 0xE7000000; p[1] = 0;
  p = *arg0;
  *arg0 = p + 2; p[0] = 0xF5400400; p[1] = 0x14050;
  p = *arg0;
  *arg0 = p + 2; p[0] = 0xF2000000; p[1] = 0x7C07C;
  q = *arg0;
  *arg0 = q + 2;
  t = (*((u16 *) (D_8011F32E + ((arg1 & 0xFFFF) * 0x64)))) & 0xFFF;
  q[0] = inline_fn(t, t, 0xF2000000); q[1] = 0x7C07C;
}
