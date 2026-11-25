f32 __cosf(f32);
f32 __sinf(void);
f32 sqrtf(void);
typedef struct 
{
  u16 f0;
  u8 pad[98];
} Slot_8011F32E;
extern Slot_8011F32E D_8011F32E[];
extern f32 D_8011F334[];
extern f32 D_8011F338[];
extern f32 D_8011F33C[];
extern unsigned long long D_8011F340[];
extern f64 D_80203460;
extern f64 D_80203468;
extern f64 D_80203470;
extern f64 D_80203478;
extern f64 D_80203480;
extern f32 D_802038A0;
extern f32 D_802038A4;
extern f32 D_802038A8;
extern f32 D_802038AC;
extern f32 D_802038B0;
extern f32 D_802038B4;
extern f32 D_802038B8;
extern u16 D_802038BC[];
extern f32 D_80221080[];
extern f32 D_80221084[];
extern f32 D_80221088[];
extern f32 D_8022108C[];
extern f32 D_80221090[];
extern f32 D_80221094[];
extern u16 D_80233EC0;
inline static f32 inline_fn(double arg0, f64 arg1)
{
  return (f32) (arg0 / arg1);
}

inline static int inline_fn2(int arg0)
{
  return 1 & arg0;
}

inline static unsigned int inline_fn23()
{
  return 1 & 0xFFFF;
}

inline static unsigned int inline_fn234(unsigned arg0)
{
  return arg0 / 4;
}

void func_801FBBFC(volatile unsigned long arg0)
{
  u16 temp_v1;
  s32 temp_a0;
  long temp_v0;
  unsigned int temp_s0;
  s32 temp_v0_2;
  s32 temp_s0_2;
  unsigned temp_v0_3;
  f32 temp_fv1;
  f32 temp_fv1_2;
  f32 temp_fv1_3;
  f32 temp_fv0;
  f32 temp_ft0;
  f32 temp_ft1;
  f32 temp_ft2;
  f32 temp_fs0;
  f32 temp_fs0_2;
  f32 temp_fs0_3;
  f32 temp_fs0_4;
  long long phantom_wide = arg0;
  f32 temp_fs1;
  register f32 temp_fs1_2;
  f32 temp_fs3_2;
  f32 temp_fs3_3;
  f64 temp_fs1_3;
  f64 temp_fs2;
  f64 temp_fs2_2;
  f64 temp_fs3;
  do
  {
    temp_v1 = (&D_8011F32E[arg0 & 0xFFFF])->f0;
  }
  while (0);
  switch ((u32) temp_v1)
  {
    case 0:
      D_802038A0 = 0.0f;
    {
      D_802038A8 = 0.0f; D_802038AC = 15.0f;
      do
      {
        D_802038A4 = 200.0f; D_802038BC[0] = D_80233EC0; temp_v0_2 = D_802038BC[0] * 0x64; D_802038BC[1] = *((u16 *) ((D_8011F340 - (-temp_v0_2)) + 0xA)); temp_v0 = D_802038BC[1] * 0x64; D_802038B0 = D_8011F334[inline_fn234(temp_v0)]; D_802038B4 = D_8011F338[inline_fn234(temp_v0)]; D_802038B8 = D_8011F33C[inline_fn234(temp_v0)]; temp_s0 = inline_fn2(0xFFFF) * 0x24; D_8022108C[inline_fn234(temp_s0)] = D_8011F334[inline_fn234(D_802038BC[0] * 0x64)]; D_80221090[inline_fn234(temp_s0)] = D_8011F338[inline_fn234(temp_v0_2)] + (-50.0f); D_80221094[inline_fn234(temp_s0)] = D_8011F33C[inline_fn234(temp_v0_2)]; temp_fs2 = D_80203460; temp_fs3 = D_80203468; temp_fs1 = __sinf() * D_802038A4; temp_fs0 = __sinf(); D_80221080[inline_fn234(temp_s0)] = (temp_fs1 - ((temp_fs0 * __sinf()) * D_802038A4)) + D_8022108C[inline_fn234(inline_fn23() * 0x24)]; D_80221084[inline_fn234(inline_fn2(0xFFFF) * 0x24)] = (__sinf() * D_802038A4) + D_80221090[inline_fn234(inline_fn23() * 0x24)]; temp_fs1_2 = __cosf(inline_fn(((f64) D_802038A0) * temp_fs2, temp_fs3)) * D_802038A4;
      }
      while (0);
    }
      if (temp_v0_2)
    {
      temp_fs0_2 = __cosf(inline_fn(((f64) D_802038A0) * temp_fs2, temp_fs3));
      D_80221088[inline_fn234(inline_fn2(0xFFFF) * 0x24)] = (temp_fs1_2 - ((temp_fs0_2 * __sinf()) * D_802038A4)) + D_80221094[inline_fn234(inline_fn2(0xFFFF) * 0x24)];
      D_8011F32E[arg0 & 0xFFFF].f0 = 1;
      return;
    }
    else
    {
      if (1)
      {
        temp_fs0_2 = __cosf(inline_fn(((f64) D_802038A0) * temp_fs2, temp_fs3));
        D_80221088[inline_fn234(inline_fn2(0xFFFF) * 0x24)] = (temp_fs1_2 - ((temp_fs0_2 * __sinf()) * D_802038A4)) + D_80221094[inline_fn234(inline_fn2(0xFFFF) * 0x24)];
      }
      D_8011F32E[arg0 & 0xFFFF].f0 = 1;
      return;
    }

    case 1:
      temp_v0_2 = inline_fn23() * 0x24;
      temp_fv1 = D_8022108C[inline_fn234(temp_v0_2)];
      D_8022108C[inline_fn234(inline_fn2(0xFFFF) * 0x24)] = temp_fv1 + ((D_802038B0 - temp_fv1) * 0.02f);
      temp_fv1_2 = D_80221090[inline_fn234(temp_v0_2)];
      D_80221090[inline_fn234(inline_fn2(0xFFFF) * 0x24)] = (0.02f * (D_802038B4 - ((double) temp_fv1_2))) + temp_fv1_2;
      temp_fv0 = D_80221094[inline_fn234(temp_v0_2)];
      temp_fv1_3 = ((D_802038B8 - temp_fv0) * 0.02f) + temp_fv0;
      D_80221094[inline_fn234(inline_fn23() * 0x24)] = temp_fv1_3;
      temp_ft2 = D_802038B0 - D_8022108C[inline_fn234(temp_v0_2)];
      temp_ft1 = D_802038B4 - D_80221090[inline_fn234(temp_v0_2)];
      temp_ft0 = D_802038B8 - temp_fv1_3;
      if (((sqrtf() + 1) + 1) < ((100.0f - -1) + 1))
    {
      if (temp_fs1_3)
      {
        D_802038BC[0] = D_802038BC[1];
      }
      else
      {
        D_802038BC[0] = D_802038BC[1];
      }
      do
      {
        do
        {
          {
            do
            {
              D_802038BC[1] = *((u16 *) ((D_8011F340 + (D_802038BC[0] * 0x64)) + 0xA));
            }
            while (0);
            temp_v0_3 = D_802038BC[1] * 0x64;
          }
          D_802038B0 = D_8011F334[inline_fn234(temp_v0_3)];
        }
        while (0);
        D_802038B4 = D_8011F338[inline_fn234(temp_v0_3)];
      }
      while (0);
      D_802038B8 = D_8011F33C[inline_fn234(temp_v0_3)];
    }
      D_802038A0 = D_802038A8;
      do
    {
      if (D_802038A8 >= 360.0f)
      {
        D_802038A8 = 0.0f;
      }
      else
      {
        {
        }
        D_802038A8 = (f32) (((f64) D_802038A8) + D_80203470);
      }
      temp_s0_2 = inline_fn2(0xFFFF) * 0x24; temp_fs2_2 = D_80203478; temp_fs1_3 = D_80203480; temp_fs3_2 = __sinf() * D_802038A4;
    }
    while (0);
      temp_fs0_3 = __sinf();
      D_80221080[inline_fn234(temp_s0_2)] = (temp_fs3_2 - ((temp_fs0_3 * __sinf()) * D_802038A4)) + D_8022108C[inline_fn234(temp_s0_2)];
      D_80221084[inline_fn234(temp_s0_2)] = (__sinf() * D_802038A4) + D_80221090[inline_fn234(temp_s0_2)];
      temp_fs3_3 = __cosf(inline_fn(((f64) D_802038A0) * temp_fs2_2, temp_fs1_3)) * D_802038A4;
      temp_fs0_4 = __cosf(inline_fn(((f64) D_802038A0) * temp_fs2_2, temp_fs1_3));
      D_80221088[inline_fn234(temp_s0_2)] = (temp_fs3_3 - ((temp_fs0_4 * __sinf()) * D_802038A4)) + D_80221094[inline_fn234(temp_s0_2)];
      return;

    case 2:
    {
      long long phantom_wide2 = arg0;
    }
      break;

  }

}

