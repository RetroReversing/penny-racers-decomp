f32 func_80032310();
s32 func_800DE41C();
s32 func_8013E364();
s32 func_8013E49C();
s32 func_8013E818();
s32 func_801FA30C();
extern char D_8011F2F0[];
extern char D_8011F334[];
extern char D_8011F338[];
extern f64 D_801834A8;
extern f64 D_801834B0;
extern f64 D_801834B8;
extern f64 D_801834C0;
extern int D_8018D730[];
extern char D_8022A770[];
extern char D_8022A772[];
extern char D_8023977C[];
extern char D_80239950[];
extern s32 func_80138304;
extern s32 func_8014081C;
extern s32 func_80140A0C;
extern s32 func_80140A38;
void func_801402B8(s32 arg0)
{
  f32 temp_fa0;
  f32 temp_fs0;
  f32 temp_fs0_2;
  f32 temp_fs1;
  f32 temp_fs1_2;
  f32 temp_fs2;
  f32 temp_fs2_2;
  f32 temp_fv1;
  f32 temp_fv1_2;
  f32 var_fv0;
  f64 var_fv1;
  f64 var_fv1_2;
  f64 var_fv1_3;
  f64 var_fv1_4;
  s32 temp_s0;
  s32 temp_s1_2;
  s32 temp_s2;
  s32 temp_v0_3;
  s32 temp_v0_4;
  s32 temp_v0_5;
  s32 temp_v0_6;
  s32 temp_v0_7;
  s32 temp_v0_8;
  s32 temp_v0_9;
  s32 temp_v1;
  s32 temp_v1_2;
  s32 var_s0;
  s32 var_s2;
  s32 var_v0;
  u8 temp_v0_2;
  void *temp_s1;
  void *temp_v0;
  var_s2 = 0;
  temp_s1 = ((arg0 & 0xFFFF) * 0x64) + D_8011F2F0;
  var_s0 = 0;
  do
  {
    var_v0 = 0 * 8;
  }
  while (0);
  __repair_rows:
  {
    temp_v1 = (((var_v0 + var_s0) * 0x10) - var_s0) * 0x10;
    if ((*(D_8022A772 + temp_v1)) != 0xFFFF)
    {
      temp_v0 = ((*((u16 *) (((char *) (temp_v1 + D_8022A770)) + 2))) * 0x64) + D_8011F2F0;
      temp_fs2 = (*((f32 *) (((char *) temp_s1) + 0x18))) - (*((f32 *) (((char *) temp_v0) + 0x18)));
      temp_fs0 = (*((f32 *) (((char *) temp_s1) + 0x1C))) - (*((f32 *) (((char *) temp_v0) + 0x1C)));
      temp_fs1 = (*((f32 *) (((char *) temp_s1) + 0x20))) - (*((f32 *) (((char *) temp_v0) + 0x20)));
      temp_fa0 = ((temp_fs2 * temp_fs2) + (temp_fs0 * temp_fs0)) + (temp_fs1 * temp_fs1);
      var_fv0 = sqrtf(temp_fa0);
      if (var_fv0 != var_fv0)
      {
        var_fv0 = func_80032310(temp_fa0);
      }
      if (var_fv0 < 1400.0f)
      {
        var_s2 = 1;
      }
    }
    var_s0 += 1;
    var_v0 = var_s0 * 8;
  }

  if (var_s0 < 7)
  {
    goto __repair_rows;
  }
  temp_v0_2 = (*((u8 *) (((char *) temp_s1) + 0xC))) + 1;
  *((u8 *) (((char *) temp_s1) + 0xC)) = temp_v0_2;
  if ((var_s2 & (!(temp_v0_2 & 0x3F))) && ((temp_v0_3 = func_8013E364(), (temp_v0_3 & 0xFFFF) != 0xFFFF)))
  {
    temp_v0_4 = func_801FA30C() & 0x7F;
    var_fv1 = (f64) temp_v0_4;
    if (temp_v0_4 < 0)
    {
      var_fv1 += D_801834A8;
    }
    temp_fv1 = (f32) var_fv1;
    temp_fs2_2 = (temp_fv1 * (-2.74f)) + (-700.0f);
    temp_fs1_2 = (temp_fv1 * 2.72f) + 737.0f;
    temp_v0_5 = func_801FA30C() & 0x7F;
    var_fv1_2 = (f64) temp_v0_5;
    if (temp_v0_5 < 0)
    {
      var_fv1_2 += D_801834B0;
    }
    temp_fv1_2 = (f32) var_fv1_2;
    temp_v0_6 = func_800DE41C(0, 0, 1, 0, 0x51, 0xC8, D_8023977C, &func_8014081C, &func_80140A0C, temp_fs2_2, 0x43700000, temp_fs1_2, 0, 0, 0, 2.0f, 2.0f, 2.0f);
    if (((u32) ((temp_v0_6 + 2) & 0xFFFF)) >= 2U)
    {
      temp_v0_7 = func_801FA30C() & 0x1F;
      var_fv1_3 = (f64) temp_v0_7;
      if (temp_v0_7 < 0)
      {
        var_fv1_3 += D_801834B8;
      }
      temp_fs0_2 = (((f32) var_fv1_3) * 0.01f) + 0.5f;
      temp_v0_8 = func_801FA30C() & 0xF;
      var_fv1_4 = (f64) temp_v0_8;
      if (temp_v0_8 < 0)
      {
        var_fv1_4 += D_801834C0;
      }
      temp_s0 = temp_v0_3 & 0xFFFF;
      temp_v1_2 = temp_v0_6 & 0xFFFF;
    temp_s1_2 = temp_v1_2;
      func_8013E818(temp_s0, temp_s1_2, 0x40, ((((temp_fv1_2 * (-1.433f)) + (-965.0f)) - temp_fs2_2) * 0.008f) * temp_fs0_2, (((f32) var_fv1_4) * 0.1f) + 4.0f, ((((temp_fv1_2 * 1.417f) + 531.0f) - temp_fs1_2) * 0.008f) * temp_fs0_2);
      temp_s2 = temp_s1_2 * 0x64;
      *(D_8011F338 + temp_s2) = 0;
      *(D_8018D730 + (temp_s0 * 0x7C)) = 25.0f;
      temp_v0_6 = func_800DE41C(0, 0, 1, 0, 0x52, 0x9B, D_80239950, &func_80140A38, &func_80138304, 0.0f, 0, 0.0f, 0, 0, 0, 0.2f, 0.2f, 0.2f);
      temp_v1_2 = temp_v0_6 & 0xFFFF;
      if (((u32) ((temp_v0_6 + 2) & 0xFFFF)) >= 2U)
      {
        *(D_8011F334 + (temp_v1_2 * 0x64)) = (f32) temp_s1_2;
        *(D_8011F334 + temp_s2) = (f32) temp_v1_2;
      }
    }
    else
    {
      func_8013E49C(temp_v0_3 & 0xFFFF);
    }
  }
}

