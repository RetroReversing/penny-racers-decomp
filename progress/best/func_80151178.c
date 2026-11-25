s32 func_8013AE60(s32);
extern s32 D_80000000;
extern s32 D_8011F334;
extern s32 D_8011F338;
void func_80151178(s32 arg0)
{
  f32 temp_fv1;
  f32 temp_fv1_2;
  f32 temp_fv1_3;
  f32 temp_fv1_4;
  s32 temp_a1;
  s32 temp_s0;
  s32 temp_v0;
  s32 var_v0_3;
  u32 var_v0_2;
  u32 var_v0_4;
  do { temp_s0 = arg0 & 0xFFFF;
  func_8013AE60(temp_s0);
  temp_a1 = temp_s0 * 0x64;
  temp_fv1 = *((f32 *) (((s8 *) (&D_8011F334)) + temp_a1));
  if (temp_fv1 < 2.1474836e9f)
  {
    temp_v0 = ((s32) temp_fv1) + 1;
  }
  else
  {
    temp_v0 = ((s32) (temp_fv1 - 2.1474836e9f)) | ((s32) ((s32 *) (((s8 *) (&D_80000000)) + 1)));
  }
  *((f32 *) (((s8 *) (&D_8011F334)) + temp_a1)) = (f32) (temp_v0 & 0xFFFF); } while (0);
  temp_fv1_2 = *((f32 *) (((s8 *) (&D_8011F334)) + ((arg0 & 0xFFFF) * 0x64)));
  var_v0_2 = ((u32) temp_fv1_2) & 0xFFFF;
  if (var_v0_2 >= 5U)
  {
    if (temp_fv1)
    {
      temp_a1 = arg0 & 0xFFFF;
      temp_v0 = temp_a1 * 0x64;
      *((s32 *) (((s8 *) (&D_8011F334)) + temp_v0)) = 0;
      temp_fv1_3 = *((f32 *) (((s8 *) (&D_8011F338)) + temp_v0));
    }
    else
    {
      temp_a1 = arg0 & 0xFFFF;
      temp_v0 = temp_a1 * 0x64;
      *((s32 *) (((s8 *) (&D_8011F334)) + temp_v0)) = 0;
      temp_fv1_3 = *((f32 *) (((s8 *) (&D_8011F338)) + temp_v0));
    }
    if (temp_fv1_3 >= 2.1474836e9f)
    {
      var_v0_3 = ((s32) (temp_fv1_3 - 2.1474836e9f)) | ((s32) ((s32 *) (((s8 *) (&D_80000000)) + 1)));
    }
    else
    {
      var_v0_3 = ((s32) temp_fv1_3) + 1;
    }
    *((f32 *) (((s8 *) (&D_8011F338)) + temp_v0)) = (f32) (var_v0_3 & 0xFFFF);
    temp_fv1_4 = *((f32 *) (((s8 *) (&D_8011F338)) + ((arg0 & 0xFFFF) * 0x64)));
    var_v0_4 = ((u32) temp_fv1_4) & 0xFFFF;
    if (var_v0_4 >= 9U)
    {
      *((s32 *) (((s8 *) (&D_8011F338)) + ((arg0 & 0xFFFF) * 0x64))) = 0;
    }
  }
}

