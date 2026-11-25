s32 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, s32, s32, s32, f32, f32, f32);
s32 func_8013E364(void);
s32 func_8013E818(s32, s32, s32, f32, f32, f32, s32);
s32 func_801FA30C(void);
f32 sqrtf(f32);
extern u8 D_8011F2F0[];
extern u8 D_8011F334[];
extern short D_8011F338[];
extern u8 D_8018D730[];
extern u8 D_8022A770[];
extern u8 D_8022A772[];
extern u8 D_8023977C[];
extern u8 D_80239950[];
extern short func_8014081C[];
extern u8 func_80140A0C[];
extern u8 func_80140A38[];
extern u8 func_80138304[];
inline static volatile long long inline_fn(unsigned char arg0)
{
  return arg0 & 0xFFFF;
}

inline static float inline_fn2()
{
  return 0.1f;
}

void func_801402B8(s32 arg0)
{
  u8 *__base_D_8011F2F0;
  u8 *temp_s1;
  u8 *temp_v0;
  s32 var_s2;
  s32 var_s0;
  s32 off;
  f32 fs0;
  f32 fs1;
  f32 fs3;
  f32 fs4;
  f32 fa;
  f32 fb;
  f32 ts0;
  f32 fv;
  f32 fs2;
  s32 r;
  volatile unsigned int pad;
  s32 r2;
  s32 r3;
  u32 t;
  u8 *__base_D_8022A770;
  do
  {
    arg0 &= 0xFFFF;
  }
  while (0);
  if (fa)
  {
    __base_D_8022A770 = D_8022A770;
    __base_D_8011F2F0 = D_8011F2F0;
    temp_s1 = __base_D_8011F2F0 + (arg0 * 0x64);
    var_s2 = 0;
  }
  else
  {
    __base_D_8022A770 = D_8022A770;
    __base_D_8011F2F0 = D_8011F2F0;
    temp_s1 = __base_D_8011F2F0 + (arg0 * 0x64);
    var_s2 = 0;
  }
  for (var_s0 = 0; var_s0 < 7; var_s0++)
  {
    s32 r_arm;
    f32 fs2_arm;
    f32 fs1_arm;
    f32 fs0_arm;
    do
    {
      r_arm = (((var_s0 * 8) + var_s0) * 16) - var_s0; var_s0 = r_arm * 16;
      if ((*((u16 *) (D_8022A772 + var_s0))) != 0xFFFF)
      {
        temp_v0 = D_8011F2F0 + ((*((u16 *) ((__base_D_8022A770 + var_s0) + 2))) * 0x64);
        do
        {
          fs2_arm = (*((f32 *) (temp_s1 + 0x18))) - (*((f32 *) (temp_v0 + 0x18)));
        }
        while (0);
        if (1)
        {
          fs0_arm = (*((f32 *) (temp_s1 + 0x1C))) - (*((f32 *) (temp_v0 + 0x1C)));
          do
          {
            fs1_arm = (*((f32 *) (temp_s1 + 0x20))) - (*((f32 *) (temp_v0 + 0x20)));
          }
          while (0);
          if (sqrtf(((fs2_arm * fs2_arm) + (fs0_arm * fs0_arm)) + (fs1_arm * fs1_arm)) < 1400.0f)
          {
            var_s2 = 1;
          }
        }
      }
    }
    while (0);
  }

  temp_s1[0xC] = temp_s1[0xC] + 1;
  if (var_s2 && (!(temp_s1[0xC] & 0x3F)))
  {
    r = func_8013E364();
    if ((r & 0xFFFF) != 0xFFFF)
    {
      if (temp_s1 || var_s0)
      {
        t = func_801FA30C() & 0x7F;
        fs0 = 240.0f;
        fa = (f32) ((f64) t);
        fs2 = (fa * (-2.74f)) + (-700.0f);
        fs1 = (fa * 2.72f) + 737.0f;
        t = func_801FA30C() & 0x7F;
        fb = (f32) ((f64) t);
        fs3 = (fb * (-1.433f)) + (-965.0f);
        fb = (fb * 1.417f) + 531.0f;
        r2 = func_800DE41C(0, 0, 1, 0, 0x51, 0xC8, D_8023977C, func_8014081C, func_80140A0C, fs2, fs0, fs1, 0, 0, 0, 2.0f, 2.0f, 2.0f);
      }
      else
      {
        t = func_801FA30C() & 0x7F;
        fs0 = 240.0f;
        fa = (f32) ((f64) t);
        fs2 = (fa * (-2.74f)) + (-700.0f);
        fs1 = (fa * 2.72f) + 737.0f;
        t = func_801FA30C() & 0x7F;
        fb = (f32) ((f64) t);
        fs3 = (fb * (-1.433f)) + (-965.0f);
        fb = (fb * 1.417f) + 531.0f;
        r2 = func_800DE41C(0, 0, 1, 0, 0x51, 0xC8, D_8023977C, func_8014081C, func_80140A0C, fs2, fs0, fs1, 0, 0, 0, 2.0f, 2.0f, 2.0f);
      }
      if (((unsigned short) (r2 + 2)) >= 2)
      {
        t = func_801FA30C() & 0x1F;
        ts0 = (((f32) ((f64) t)) * 0.01f) + 0.5f;
        t = func_801FA30C() & 0xF;
        fv = (((f32) ((f64) t)) * inline_fn2()) + 4.0f;
        do
        {
          func_8013E818(r & 0xFFFF, inline_fn(r2), 0x40, ((fs3 - fs2) * 0.008f) * ts0, fv, ((fb - fs1) * 0.008f) * ts0, 0xC8);
        }
        while (0);
        *((s32 *) (D_8011F338 + ((r2 & 0xFFFF) * 0x64))) = 0;
        *((f32 *) (D_8018D730 + ((r & 0xFFFF) * 0x7C))) = 25.0f;
        r3 = func_800DE41C(0, 0, 1, 0, 0x52, 0x9B, D_80239950, func_80140A38, func_80138304, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0.2f, 0.2f, 0.2f);
        if (((unsigned short) (r3 + 2)) >= 2)
        {
          *((f32 *) (D_8011F334 + ((r3 & 0xFFFF) * 0x64))) = (f32) (r2 & 0xFFFF);
          *((f32 *) (D_8011F334 + ((r2 & 0xFFFF) * 0x64))) = (f32) (r3 & 0xFFFF);
        }
      }
      else
      {
        func_8013E49C(r & 0xFFFF);
      }
    }
  }
}

