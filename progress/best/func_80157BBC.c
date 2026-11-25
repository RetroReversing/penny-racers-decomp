f32 __sinf(f32);
s32 func_8013AE60(s32);
extern u8 D_8016D8C0[];
extern u8 D_8016D8C4[];
extern u8 D_8016D8C8[];
extern f64 D_80183840;
extern f64 D_80183848;
extern u8 D_802B2784[];
inline static u16 *inline_fn(u8 *arg0, s32 arg1)
{
  return (u16 *) (arg0 + arg1);
}

void func_80157BBC(s32 arg0)
{
  int __repair_literal;
  unsigned char i;
  s32 off;
  s32 __repair_phase_off;
  f32 r;
  f64 k1;
  f64 k2;
  u8 *pa;
u8 *__repair_phase_pa;
  u8 *pb;
  s32 v;
  func_8013AE60(arg0 & 0xFFFF);
  pa = D_8016D8C0;
  pb = D_8016D8C8;
  for (i = 0; i < 2; i++)
  {
    
      off = i * 2;
    
    v = (*inline_fn(pa, off)) + (*inline_fn(pb, off));
    *inline_fn(pa, off) = v;
    do
    {
      if (off)
      {
        i++;
      }
      else
      {
        i++;
      }
    }
    while (0);
    if ((*inline_fn(pa, off)) >= 0x169)
    {
      *inline_fn(pa, off) = v - 0x168;
    }
    i--;
  }

  __repair_phase_pa = D_8016D8C0;
  k1 = D_80183840;
  k2 = D_80183848;
  pb = D_8016D8C4;
  for (i = 0; (0 + 1) <= 2; i++)
  {
    __repair_phase_off = i * 2;
    r = __sinf((f32) ((((f64) (*inline_fn(__repair_phase_pa, __repair_phase_off))) * k1) / k2));
    __repair_literal = 0x10;
    *((s16 *) (D_802B2784 + ((i + 2) * __repair_literal))) = (s16) ((s32) (r * ((f32) (*inline_fn(pb, __repair_phase_off)))));
  }

}

