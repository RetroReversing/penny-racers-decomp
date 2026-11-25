s32 func_800DE41C(s32, s32, s32, s32, s32, s32, s32 *, s32 *, s32 *, f32, f32, f32, s32, s32, s32, f32, f32, f32);
unsigned int func_801FA38C(s32);
extern u16 D_8011F2F0[];
extern u16 D_8011F2F2[];
extern u16 D_8011F32E[];
extern f64 D_80183880;
extern s16 D_8018D660;
extern s32 D_802393D4[];
extern s32 func_80157F6C[];
extern s32 func_801580AC[];
inline static int inline_fn(s32 arg0, int arg1, int arg2)
{
  return (arg0 & arg1) * arg2;
}

inline static float inline_fn2()
{
  return -260.0f;
}

void func_801580F4(volatile s32 arg0)
{
  int __repair_integer_one;
  s32 idx;
  s32 n;
  unsigned int r;
  s32 cnt;
  f64 base;
  f64 v;
  f64 __repair_phase_v;
  u16 *__base_D_8011F2F0;
  __base_D_8011F2F0 = D_8011F2F0;
  r = arg0 & 0xFFFF; idx = r * 0x64;
  if ((*((u16 *) (((u8 *) D_8011F32E) + idx))) == 0)
  {
    D_8018D660 = 0;
    *((u16 *) (((u8 *) D_8011F32E) + idx)) = 1;
  }
  D_8018D660 += 1;
  cnt = 0;
  if ((*((u16 *) (&D_8018D660))) >= 0xB)
  {
    __repair_integer_one = 1;
    base = D_80183880;
    for (;;)
    {
      if (idx)
      {
        r = func_801FA38C(0) % 1800;
        v = (f64) r;
      }
      else
      {
        r = func_801FA38C(0) % 1800;
        v = (f64) r;
      }
      {
        if (r < 0)
        {
          if (idx)
          {
            v += base;
          }
          else
          {
            v += base;
          }
        }
        n = func_800DE41C(0, 0x1E, __repair_integer_one, 0, 0x5B, 0xFF, D_802393D4, func_80157F6C, func_801580AC, 1800.0f, inline_fn2(), ((f32) v) + (-1200.0f), 0, 0, 0, 0.2f, 0.2f, 0.2f);
      }
      if (((u32) ((n + 2) & 0xFFFF)) >= 2)
      {
        *((u16 *) ((((u8 *) __base_D_8011F2F0) + ((n & 0xFFFF) * 0x64)) + 8)) = 0x40;
        *((u16 *) ((((u8 *) __base_D_8011F2F0) + ((n & 0xFFFF) * 0x64)) + 6)) = 0x40;
        *((u16 *) ((((u8 *) __base_D_8011F2F0) + ((n & 0xFFFF) * 0x64)) + 4)) = 0x40;
        *((u16 *) (((u8 *) D_8011F2F2) + ((n & 0xFFFF) * 0x64))) = 0x40;
        r = func_801FA38C(0) % 1800;
        __repair_phase_v = (f64) r;
        if (r < 0)
        {
          __repair_phase_v += base;
        }
        n = func_800DE41C(0, 0x1E, __repair_integer_one, 0, 0x5B, 0xFF, D_802393D4, func_80157F6C, func_801580AC, 1200.0f, -260.0f, ((f32) __repair_phase_v) + (-1200.0f), 0, 0, 0, 0.2f, 0.2f, 0.2f);
        if (((u32) ((n + 2) & 0xFFFF)) >= 2)
        {
          *((u16 *) ((((u8 *) __base_D_8011F2F0) + ((n & 0xFFFF) * 0x64)) + 8)) = 0x40;
          *((u16 *) ((((u8 *) __base_D_8011F2F0) + ((n & 0xFFFF) * 0x64)) + 6)) = 0x40;
          *((u16 *) ((((u8 *) __base_D_8011F2F0) + (((n & 0xFFFF) * 25) * 4)) + 4)) = 0x40;
          *((u16 *) (((u8 *) D_8011F2F2) + inline_fn(n, 0xFFFF, 0x64))) = 0x40;
          do
          {
            cnt += 1;
          }
          while (0);
          if (((u32) (cnt & 0xFFFF)) < 2)
          {
            continue;
          }
        }
      }
      break;
    }

    D_8018D660 = 0;
  }
}

