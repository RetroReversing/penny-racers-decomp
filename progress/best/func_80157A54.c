f32 __sinf(f32);
void func_8013AE60(s32);
extern u16 D_8016D8A8[];
extern u16 D_8016D8B4[];
extern u8 D_8016D898[];
extern u8 D_8016D8A0[];
extern f64 D_80183830;
extern f64 D_80183838;
extern u8 D_802B27C4[];
inline static int inline_fn(u8 *arg0, s32 arg1)
{
  return (arg0 + 16)[arg1] * 16;
}

void func_80157A54(s32 arg0)
{
  int __repair_literal;
  s32 i;
  u16 old;
  f64 k1;
  f64 k2;
  u8 *__base_D_802B27C4;
  __base_D_802B27C4 = D_802B27C4;
  func_8013AE60(arg0 & 0xFFFF);
  do
  {
    for (i = 0; i < 5; i++)
    {
      old = D_8016D8A8[(unsigned short) i]; D_8016D8A8[(unsigned short) i] = old + 0xC;
      if (D_8016D8A8[i] >= 0x169)
      {
        D_8016D8A8[(unsigned short) i] = old - 0x15C;
      }
    }

  }
  while (0);
  k1 = D_80183830;
  k2 = D_80183838;
  for (i = 0; i < 5; i++)
  {
 do { *((s16 *) (D_802B27C4 + inline_fn(D_8016D898, i))) = (s16) ((s32) (__sinf((f32) ((((f64) D_8016D8A8[(unsigned short) i]) * k1) / k2)) * ((f32) D_8016D8B4[(unsigned short) i]))); do { __repair_literal = 16; *((s16 *) (D_802B27C4 + (D_8016D8A0[i] * __repair_literal))) = *((s16 *) (__base_D_802B27C4 + (D_8016D898[i] * 16))); } while (0); } while (0);
  }

}
