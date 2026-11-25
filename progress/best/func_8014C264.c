s32 func_8013AE60(s32);
extern s32 D_80000000;
extern s32 D_8011F334;
extern s32 D_8011F338;
inline static s8 *inline_fn(s8 *arg0)
{
  return arg0 + 1;
}

long long func_8014C264(s32 arg0)
{
  f32 temp_fv1;
  f32 temp_fv1_2;
  f32 temp_fv1_3;
  f32 temp_fv1_4;
  unsigned char temp_a1;
  s32 temp_s0;
  s32 temp_v0;
  s32 var_v0_3;
  u32 var_v0_2;
  u32 var_v0_4;
  temp_s0 = arg0 & 0xFFFF;
  func_8013AE60(temp_s0);
  do
  {
    do
    {
      do
      {
        temp_a1 = (temp_s0 * 2) * 50;
      }
      while (0);
    }
    while (0);
  }
  while (0);
  temp_fv1 = *((f32 *) (((s8 *) (&D_8011F334)) + temp_a1));
  if (temp_fv1 <= (2.1474836e9f - 1))
  {
    temp_v0 = ((s32) temp_fv1) + 1;
  }
  else
  {
    temp_v0 = ((s32) (temp_fv1 - 2.1474836e9f)) | ((s32) ((s32 *) (((s8 *) (&D_80000000)) + 1)));
  }
  *((f32 *) (((s8 *) (&D_8011F334)) + temp_a1)) = (f32) (temp_v0 & 0xFFFF);
  temp_fv1_2 = *((f32 *) (((s8 *) (&D_8011F334)) + ((arg0 & 0xFFFF) * 0x64)));
  var_v0_2 = ((u32) temp_fv1_2) & 0xFFFF;
  if (var_v0_2 >= 0xBU)
  {
    temp_a1 = arg0 & 0xFFFF; temp_v0 = temp_a1 * 0x64;
    do
    {
 do { *((s32 *) (((s8 *) (&D_8011F334)) + temp_v0)) = 0; temp_fv1_3 = *((f32 *) (((s8 *) (&D_8011F338)) + temp_v0)); if (!(temp_fv1_3 >= 2.1474836e9f)) { var_v0_3 = ((s32) temp_fv1_3) + 1; } else { var_v0_3 = ((s32) (temp_fv1_3 - 2.1474836e9f)) | ((s32) ((s32 *) inline_fn((s8 *) (&D_80000000)))); } *((f32 *) (((s8 *) (&D_8011F338)) + temp_v0)) = (f32) (var_v0_3 & 0xFFFF); } while (0);
      temp_fv1_4 = *((f32 *) (((s8 *) (&D_8011F338)) + ((arg0 & 0xFFFF) * 0x64)));
    }
    while (0);
    var_v0_4 = ((u32) temp_fv1_4) & 0xFFFF;
    if (var_v0_4 >= 9U)
    {
      *((s32 *) (((s8 *) (&D_8011F338)) + ((arg0 & 0xFFFF) * 0x64))) = 0;
    }
  }
}
