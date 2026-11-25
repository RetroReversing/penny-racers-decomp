inline static u16 __repair_inline(u16 a)
{
  return a;
}

f32 __cosf(f32);
f32 __sinf();
s32 func_80129C88();
f32 func_801F9C8C(f32, f32);
unsigned int guMtxCatF();
s32 guMtxXFMF(s32, s32, f32, s32);
s32 guRotateF(u8, f32, s32, f32 *);
extern char D_8011F2FC[];
extern char D_8011F308[];
extern char D_8011F30C[];
extern char D_8011F310[];
extern char D_8011F314[];
extern char D_8011F318[];
extern char D_8011F31C[];
extern char D_8011F32E[];
extern char D_80167EA4[];
extern char D_80167EB4[];
extern char D_80167EC4[];
extern char D_80221080[];
extern char D_80221084[];
extern char D_80221088[];
extern char D_8022108C[];
extern char D_80221090[];
extern char D_80221094[];
extern char D_80221098[];
extern char D_8022109C[];
extern char D_802210A0[];
extern char D_8022A772[];
extern char D_8022AF3C[];
extern char D_8022AFE0[];
inline static int inline_fn(s32 arg0)
{
  return arg0 & 0xFFFF;
}

inline static float inline_fn2(f32 *arg0, char *arg1)
{
  return (*arg0) - (*((f32 *) arg1));
}

inline static f32 inline_fn23(unsigned char arg0)
{
  return __sinf(arg0);
}

volatile unsigned short func_8012FFF0(u16 arg0)
{
  f32 __repair_fzero = 0.0f;
  f32 *sp10;
  f32 *sp14;
  f32 *sp18;
  char sp20[0x40];
  u8 sp60[0x40];
  u8 spA0[0x40];
  u8 spE0[0x50];
  f32 sp120[3];
  f32 sp130;
  f32 sp134;
  f32 sp138;
  f32 *temp_s0;
  f32 *temp_s2;
  f32 *temp_v0;
  f32 temp_fa0;
  f32 temp_fa0_2;
  f32 temp_fa1;
  f32 temp_fs0;
  f32 temp_fs0_2;
  f32 temp_fs0_3;
  f32 temp_fs0_4;
  f32 temp_fs0_5;
  f32 temp_fs1;
  f32 temp_fs1_2;
  f32 temp_fs1_3;
  f32 temp_fs1_4;
  f32 temp_fs1_5;
  f32 temp_fs2;
  f32 temp_fs3;
  f32 temp_fs5;
  f32 temp_ft1;
  f32 temp_fv0;
  f32 temp_fv0_2;
  f32 temp_fv0_3;
  f32 temp_fv0_4;
  f32 temp_fv1;
  f32 temp_fv1_2;
  f32 temp_fv1_3;
  f32 temp_fv1_4;
  f32 temp_fv1_5;
  f32 temp_s6;
  f32 temp_s7;
  s32 temp_a0;
  s32 temp_a0_2;
  s32 temp_s0_2;
  s32 temp_s0_3;
  s32 temp_s1;
  s32 temp_s3;
  s32 temp_s3_2;
  s32 temp_s4;
  s32 temp_v0_2;
  s32 temp_v0_3;
  s32 temp_v0_4;
  s32 temp_v1;
  unsigned int temp_fp;
  u8 temp_s5;
  void *temp_v1_2;
  if (D_80221098)
  {
    temp_a0 = (arg0 & 0xFFFF) * 0x64;
    temp_s5 = *(D_8011F2FC + temp_a0);
    ;
    temp_v1 = inline_fn(temp_s4);
    temp_fp = __repair_inline(*((u16 *) (D_8022A772 + (temp_v1 * 0x8F0))));
  }
  else
  {
    temp_a0 = (arg0 & 0xFFFF) * 0x64;
    temp_s5 = *(D_8011F2FC + temp_a0);
    ;
    temp_v1 = inline_fn(temp_s4);
    temp_fp = __repair_inline(*((u16 *) (D_8022A772 + (temp_v1 * 0x8F0))));
  }
  if ((*((u16 *) (D_8011F32E + temp_a0))) == 0)
  {
    *((s32 *) (D_80167EB4 + (temp_v1 * 4))) = 0;
    *((u16 *) (D_8011F32E + temp_a0)) = 1;
  }
  temp_s0_2 = inline_fn(temp_s4);
  temp_s3 = temp_s0_2 * 4;
  temp_v0 = temp_s3 + D_80167EB4;
  temp_fv1 = (*temp_v0) + 0.5f;
  *temp_v0 = temp_fv1;
  temp_v0_2 = (temp_fp & 0xFFFF) * 0x64;
  temp_s6 = *((s32 *) (D_8011F30C + temp_v0_2));
  do
  {
    temp_fs5 = *((f32 *) (D_8011F308 + temp_v0_2)); temp_s7 = *((s32 *) (D_8011F310 + temp_v0_2));
    if ((*(D_8022AFE0 + ((temp_s0_2 * 208) * 11))) == 0)
    {
      do
      {
        temp_s1 = (temp_s5 & 0xFFFF) * 0x24; temp_fs2 = ((temp_fv1 + (*((f32 *) (D_8011F318 + temp_v0_2)))) * 3.14f) / 180.0f; temp_s0 = temp_s3 + D_80167EA4; temp_fs1 = __sinf(temp_fs2, temp_s0_2) * (*temp_s0); temp_fs0 = __sinf(temp_fs2); temp_s2 = temp_s3 + D_80167EC4;
        *((f32 *) (D_80221080 + temp_s1)) = (temp_fs1 - ((temp_fs0 * __sinf(((*temp_s2) * 3.14f) / 180.0f)) * (*temp_s0))) + temp_fs5;
        *((f32 *) (D_80221084 + temp_s1)) = (__sinf(((*temp_s2) * 3.14f) / 180.0f) * (*temp_s0)) + temp_s6; temp_fs1_2 = __cosf(temp_fs2) * (*temp_s0); temp_fs0_2 = __cosf(temp_fs2);
        *((f32 *) (D_80221088 + temp_s1)) = (temp_fs1_2 - ((temp_fs0_2 * __sinf(((*temp_s2) * 3.14f) / 180.0f)) * (*temp_s0))) + temp_s7;
      }
      while (0);
    }
    temp_s3_2 = temp_s5 & 0xFFFF; arg0 = temp_s3_2 * 0x24;
    *((f32 *) (D_8022108C + (temp_s3_2 * 0x24))) = temp_fs5;
    *((f32 *) (D_80221090 + (temp_s3_2 * 0x24))) = temp_s6 + 10.0f;
    *(D_80221094 + arg0) = temp_s7;
    func_80129C88((inline_fn((temp_s5 & 0xFFFF) / 3) * 0x8F0) + D_8022AF3C, 4, ((temp_s5 & 0xFFFF) / 3) & 0xFF);
    temp_v0_3 = 0x64 * (temp_fp & 0xFFFF); temp_fs0_3 = *((f32 *) (D_8011F318 + temp_v0_3)); temp_fs1_3 = *((f32 *) (D_8011F31C + temp_v0_3)); sp10 = NULL;
    guRotateF(sp60, *((f32 *) (D_8011F314 + temp_v0_3)), (f32 *) 0x3F800000, sp10);
    sp10 = NULL;
  }
  while (0);
  guRotateF(sp20, temp_fs0_3, sp10, (f32 *) 0x3F800000);
  sp10 = (f32 *) 0x3F800000;
  guRotateF(spA0, temp_fs1_3, NULL, NULL);
  guMtxCatF(sp20, sp60, spE0);
  guMtxCatF(spE0, spA0, spE0);
  sp10 = &sp130;
  sp14 = &sp134;
  sp18 = &sp138;
  do
  {
    guMtxXFMF(spE0, 0, 1.0f, 0);
  }
  while (0);
  temp_v0_4 = (temp_s3_2 - 1) * 0x24;
  temp_v1_2 = arg0 + D_80221080;
  temp_fv1_2 = *((f32 *) (D_80221098 + arg0));
  temp_fv0 = ((sp130 - temp_fv1_2) * 0.05f) + temp_fv1_2;
  *((f32 *) (((char *) temp_v1_2) + 0x18)) = temp_fv0;
  *((f32 *) (D_80221098 + temp_v0_4)) = temp_fv0;
  temp_fv1_3 = *((f32 *) (D_8022109C + arg0));
  temp_fv0_2 = ((sp134 - temp_fv1_3) * 0.05f) + temp_fv1_3;
  *((f32 *) (((char *) temp_v1_2) + 0x1C)) = temp_fv0_2;
  *((f32 *) (D_80221098 + temp_v0_4)) = temp_fv0_2;
  temp_fv1_4 = *((f32 *) (D_802210A0 + arg0));
  temp_fv0_3 = ((sp138 - temp_fv1_4) * 0.05f) + temp_fv1_4;
  *((f32 *) (((char *) temp_v1_2) + 0x20)) = temp_fv0_3;
  *((f32 *) (D_80221098 + temp_v0_4)) = temp_fv0_3;
  temp_ft1 = inline_fn2((f32 *) ((D_8022108C - 12) + arg0), D_80221080 + arg0);
  sp120[0] = temp_ft1;
  temp_fv1_5 = inline_fn2((f32 *) (D_80221090 + arg0), D_80221084 + arg0);
  sp120[1] = temp_fv1_5;
  temp_fv0_4 = inline_fn2(D_80221094 + arg0, D_80221088 + arg0);
  sp120[2] = temp_fv0_4;
  temp_fa0 = 1.0f / sqrtf(((temp_ft1 * temp_ft1) + (temp_fv1_5 * temp_fv1_5)) + (temp_fv0_4 * temp_fv0_4));
  temp_fa1 = temp_fa0 * sp120[0];
  sp120[0] = temp_fa1;
  sp120[1] *= temp_fa0;
  temp_fa0_2 = temp_fa0 * temp_fv0_4;
  sp120[2] = temp_fa0_2;
  temp_fs3 = func_801F9C8C(temp_fa0_2, -temp_fa1);
  temp_s0_3 = (inline_fn(temp_s5) - 1) * 0x24;
  *((f32 *) (D_80221080 + temp_s0_3)) = __repair_fzero;
  *((f32 *) (D_80221084 + temp_s0_3)) = __repair_fzero;
  *((f32 *) (D_80221088 + temp_s0_3)) = __repair_fzero;
  temp_fs1_4 = __sinf(temp_fs3) * 400.0f;
  temp_fs0_4 = __sinf(temp_fs3);
  *((f32 *) (D_8022108C + temp_s0_3)) = temp_fs1_4 - ((temp_fs0_4 * __sinf(0.0f)) * 400.0f);
  *((f32 *) (D_80221090 + temp_s0_3)) = inline_fn23((unsigned char) 0.0f) * 400.0f;
  temp_fs1_5 = __cosf(temp_fs3) * 400.0f;
  temp_fs0_5 = __cosf(temp_fs3);
  *(D_80221094 + temp_s0_3) = temp_fs1_5 - ((temp_fs0_5 * inline_fn23(0.0f)) * 400.0f);
}

