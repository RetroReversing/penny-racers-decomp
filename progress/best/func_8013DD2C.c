extern s32 D_800DB1B0;
extern u8 D_800DB1B8[];
extern u8 D_80126FF6;
extern volatile char D_80168166;
extern u8 D_80183BE0[];
inline static int inline_fn(s32 arg0, s32 arg1, s32 arg2)
{
  return (arg0 * arg1) + arg2;
}

inline static u8 inline_fn2()
{
  return D_80168166 << 11;
}

inline static u8 *inline_fn23(u8 *arg0, u8 arg1, int arg2)
{
  return ((arg0 + (arg1 << 12)) + inline_fn2()) + arg2;
}

inline static int inline_fn234(s32 arg0, s32 arg1, s32 arg2, int arg3)
{
  return inline_fn(arg0, arg1, arg2) * arg3;
}

void func_8013DD2C(void)
{
  int __repair_literal;
  u8 *__base_D_80183BE0;
  s32 i;
  long j;
  s32 off = (5 * D_80126FF6) * 8;
  for (j = 0; j < 0x20; j++)
  {
 do { for (i = 0; (i + 1) <= 0x20; i++) { s32 t5 = (((s32) (*((u16 *) ((D_800DB1B8 + 0x2116) + off)))) << 16) >> 21; s32 t4 = *((s16 *) ((D_800DB1B8 + 0x2112) + off)); s32 t1 = (((s32) (*((u16 *) ((D_800DB1B8 + 0x2114) + off)))) << 16) >> 21; s32 t0 = *((s16 *) ((D_800DB1B8 + 0x2110) + off)); __repair_literal = 2; *((s16 *) inline_fn23(__base_D_80183BE0 = D_80183BE0, D_80126FF6, (((i << 5) + 0x1F) - j) * 2)) = (unsigned char) (*((u16 *) (inline_fn234(i, t1, t0, __repair_literal) + (D_800DB1B0 + (inline_fn(j, t5, t4) * 0x280))))); } } while (0);
  }

  D_80168166 ^= 1;
}
