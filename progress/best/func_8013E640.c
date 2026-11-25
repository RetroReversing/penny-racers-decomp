s16 func_8012913C(u16, f32, f32, f32);
extern u8 D_8011F2F0[];
extern f32 D_8011F308[];
extern f32 D_8011F30C[];
extern f32 D_8011F310[];
extern u8 D_8018D6C0[];
extern u16 D_8022A772[];
extern f32 D_8022AD5C[];
extern u16 D_80233EC0;
inline static int inline_fn()
{
  return -1;
}

inline static int inline_fn2()
{
  return -1;
}

void func_8013E640(s32 arg0, s32 arg1, void *arg2, s16 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, f32 arg9, u16 arg10)
{
  s32 i;
  u8 *s0;
  u8 *t0;
  t0 = D_8011F2F0 + (((u16) arg1) * 0x64);
  s0 = D_8018D6C0 + (((u16) arg0) * 0x7C);
  *((void **) (t0 + 0x60)) = s0;
  *((s16 *) (t0 + 8)) = arg3;
  *((s16 *) (t0 + 6)) = arg3;
  *((s16 *) (t0 + 4)) = arg3;
  *((s16 *) (t0 + 2)) = arg3;
  do
  {
    *((f32 *) (t0 + 0x18)) = arg4 + ((f32 *) D_8011F308)[(*((u16 *) (((u8 *) arg2) + 2))) * 0x19];
    *((f32 *) (t0 + 0x1C)) = arg5 + ((f32 *) D_8011F30C)[(*((u16 *) (((u8 *) arg2) + 2))) * 0x19];
    *((f32 *) (t0 + 0x20)) = arg6 + ((f32 *) D_8011F310)[(*((u16 *) (((u8 *) arg2) + 2))) * 0x19];
    *((f32 *) (s0 + 8)) = arg7;
    *((f32 *) (s0 + 0xC)) = arg8;
    *((f32 *) (s0 + 0x10)) = arg9;
    *((u16 *) (s0 + 0x14)) = arg10;
    *((s8 *) (s0 + 0x16)) = 0;
    *((u16 *) (s0 + 0x74)) = *((u16 *) (((u8 *) arg2) + 0x8E4));
  }
  while (0);
  *((void **) (s0 + 4)) = arg2;
  *((s16 *) (s0 + 0x20)) = func_8012913C(D_80233EC0, *((f32 *) (0x18 + t0)), *((f32 *) (t0 + 0x1C)), *((f32 *) (t0 + 0x20)));
  *((s16 *) (s0 + 0x22)) = 0;
  do
  {
    *((s8 *) (s0 + 0x1D)) = 0;
    *((s8 *) (s0 + 0x1E)) = 0;
    *((s32 *) (s0 + 0x70)) = 0;
  }
  while (0);
  for (i = 0; i < 7; i++)
  {
    u32 off = 143 * (i * 16);
    s0[i + 0x67] = 0;
    do
    {
      if (!(((*((u16 *) (((u8 *) D_8022A772) + off))) != 0xFFFF) && ((*((f32 *) (((u8 *) D_8022AD5C) + off))) > 0.0f)))
      {
        if (i)
        {
          s0[0x60 + i] = inline_fn2();
        }
        else
        {
          s0[0x60 + i] = inline_fn();
        }
      }
      else
      {
        s0[0x60 + i] = i;
      }
    }
    while (0);
  }

}

