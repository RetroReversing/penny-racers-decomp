extern u32 func_8014A79C(unsigned int);
extern u32 func_8014A080(u32, s32, s32, s32);
extern void func_801CABF4(u32 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 D_80203080[];
extern s32 D_802D92A0[];
extern s32 D_802D6898[];
extern s32 D_801D4390[];
extern s32 D_801CF4C8[];
inline static s32 inline_fn(s32 arg0)
{
  return arg0;
}

void func_8014A2D0(u32 *arg0, s32 arg1, s32 arg2_in, s32 arg3, s32 arg4, u8 arg5)
{
  s32 arg2;
  u16 __repair_call_argument;
  u32 local;
  unsigned s1;
  u32 mask;
  s32 s0;
  u16 __repair_narrow_s0;
  short __repair_phase_s0;
  s32 n;
  arg2 = arg2_in;
  local = *arg0;
  __repair_phase_s0 = (u16) ((u16) arg3);
  do
  {
    __repair_narrow_s0 = (u16) __repair_phase_s0;
    s1 = func_8014A79C(__repair_narrow_s0);
  }
  while (0);
  mask = 0xF0000000;
  for (s0 = 0; s0 < 7; s0++)
  {
    if (s1 & mask)
    {
      break;
    }
    s1 |= (unsigned short) mask;
    mask >>= 4;
  }

  n = arg4 & 0xFF;
  if (n > 0)
  {
    __repair_phase_s0 = 0;
    do
    {
      s1 = func_8014A080(s1, (n * 4) - 1, 4, 1);
      s0 = s1 & 0xF;
      if ((s1 & 0xF) < 10)
      {
 do { if (arg5 == 0) { func_801CABF4(&local, (u16) (arg1 + (__repair_phase_s0 * 13)), (u16) arg2, 0xF, (s32) D_802D92A0, D_80203080[(unsigned short) s0], 0, (s32) D_802D6898, 0xE, 0x10, 0xE0, 0x60); } else { func_801CABF4(&local, (u16) (arg1 + (__repair_phase_s0 * 10)), (u16) arg2, 0xA, D_801D4390, inline_fn(D_80203080[(unsigned short) s0]), 0, (s32) D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC); } } while (0);
      }
      __repair_phase_s0 += 1;
    }
    while ((__repair_phase_s0 + 1) <= (arg4 & 0xFF));
  }
  *arg0 = local;
}
