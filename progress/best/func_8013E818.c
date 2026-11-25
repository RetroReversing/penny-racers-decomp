inline static int __repair_inline(s32 a, s32 b)
{
  return a < b;
}

s16 func_8012913C(u16, s32, s32, s32);
extern u8 D_8011F2F0[];
extern u8 D_8011F350[];
extern u8 D_8018D6C0[];
typedef struct 
{
  u16 f0;
  u8 pad[2286];
} Slot_8022A772;
extern Slot_8022A772 D_8022A772[];
extern u8 D_8022AD5C[];
extern u16 D_80233EC0;
inline static u8 *inline_fn(u8 *arg0)
{
  return arg0 + 0x14;
}

inline static s32 inline_fn2(u8 *arg0)
{
  return *((s32 *) (arg0 + 0x18));
}

inline static int inline_fn23()
{
  return -1;
}

void func_8013E818(u16 arg0, s32 arg1, s16 arg2, s32 arg3, f32 arg4, f32 arg5, u16 arg6)
{
  u8 *__base_D_8022AD5C;
  short __index_D_8022AD5C;
  u8 *t0;
  unsigned short j;
  register u8 *s0;
  __base_D_8022AD5C = 0;
  t0 = D_8011F2F0 + (arg1 * 100);
  s0 = D_8018D6C0 + (arg0 * 124);
  *((s16 *) (t0 + 8)) = arg2;
  *((u8 **) (D_8011F350 + (arg1 * 100))) = s0;
  *((s16 *) (t0 + 4)) = arg2;
  do
  {
    *((s16 *) (t0 + 6)) = arg2;
    *((s16 *) (t0 + 2)) = arg2;
    *((s32 *) (s0 + 8)) = arg3;
    *((f32 *) (s0 + 0xC)) = arg4; s0[0x16] = 0;
    *((f32 *) (s0 + 0x10)) = arg5;
    *((u16 *) inline_fn(s0)) = arg6;
    *((s16 *) (s0 + 0x20)) = func_8012913C(D_80233EC0, inline_fn2(t0), *((s32 *) ((((unsigned short) D_8011F2F0) + (arg1 * 100)) + 0x1C)), *((s32 *) (t0 + 0x20)));
    *((u16 *) (s0 + 0x22)) = 0; s0[0x1D] = 0; s0[0x1E] = 0;
    *((s32 *) (s0 + 0x70)) = 0;
  }
  while (0);
  for (j = 0; __repair_inline(0, 7); j++)
  {
    s0[j + 0x67] = 0;
    do
    {
      __index_D_8022AD5C = j * 2288;
    }
    while (0);
    if (!((D_8022A772[j].f0 != 0xFFFF) && (0.0f < (*((f32 *) ((__base_D_8022AD5C = D_8022AD5C) + __index_D_8022AD5C))))))
    {
      if (1)
      {
        s0[j + 0x60] = inline_fn23();
      }
    }
    else
    {
      s0[j + 0x60] = j;
    }
  }

}

