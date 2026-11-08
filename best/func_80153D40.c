f32 __sinf(f32);
s32 func_8013AE60(s32);
extern s32 D_8011F30C;
extern s32 D_8011F32E;
extern s32 D_8011F334;
extern s32 D_8011F338;
extern f64 D_80183810;
extern f64 D_80183818;
void func_80153D40(s32 arg0)
{
  f32 temp_fv0;
  s32 temp_s0;
  s32 temp_s0_2;
  s32 temp_v0;
  s32 temp_v1;
  temp_s0 = arg0 & 0xFFFF;
  func_8013AE60(temp_s0);
  temp_v1 = temp_s0 * 0x64;
  if ((*((&D_8011F32E) + temp_v1)) == 0)
  {
    *((&D_8011F338) + temp_v1) = *((&D_8011F30C) + temp_v1);
    *((&D_8011F32E) + temp_v1) = 1;
  }
  temp_v0 = (arg0 & 0xFFFF) * 0x64;
  temp_fv0 = (*((&D_8011F334) + temp_v0)) + 2.0f;
  *((&D_8011F334) + temp_v0) = temp_fv0;
  if (temp_fv0 > 360.0f)
  {
    if (temp_fv0)
    {
      *((&D_8011F334) + temp_v0) = temp_fv0 - 360.0f;
    }
    else
    {
      *((&D_8011F334) + temp_v0) = temp_fv0 - 360.0f;
    }
  }
  temp_s0_2 = (arg0 & 0xFFFF) * 0x64;
  *((&D_8011F30C) + temp_s0_2) = (__sinf((f32) ((((f64) (*((&D_8011F334) + temp_s0_2))) * D_80183810) / D_80183818)) * 8.0f) + (*((&D_8011F338) + temp_s0_2));
}

