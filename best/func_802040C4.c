extern s32 D_8011F308;
extern s32 D_8011F30C;
extern s32 D_8011F310;
inline static int inline_fn(s32 arg0, int arg1)
{
  return arg0 & arg1;
}

void func_802040C4(void **arg0, s32 arg1)
{
  f32 temp_fv1;
  f32 temp_fv1_2;
  f32 temp_fv1_3;
  f32 temp_fv1_4;
  f32 temp_fv1_5;
  f32 temp_fv1_6;
  s32 var_v0;
  s32 var_v0_2;
  s32 var_v0_4;
  s32 var_v0_5;
  u32 var_v0_3;
  u32 var_v0_6;
  void *temp_v1;
  void *temp_v1_2;
  void *temp_v1_3;
  void *temp_v1_4;
  temp_v1 = *arg0;
  *arg0 = temp_v1 + 8;
  *((s32 *) (((char *) temp_v1) + 0)) = 0xE7000000;
  *((s32 *) (((char *) temp_v1) + 4)) = 0;
  temp_v1_2 = *arg0;
  *arg0 = temp_v1_2 + 8;
  *((s32 *) (((char *) temp_v1_2) + 0)) = 0xBA001402;
  *((s32 *) (((char *) temp_v1_2) + 4)) = 0x300000;
  temp_v1_3 = *arg0;
  *arg0 = temp_v1_3 + 8;
  *((s32 *) (((char *) temp_v1_3) + 0)) = 0xF7000000;
  temp_fv1 = *((&D_8011F308) + (inline_fn(arg1, 0xFFFF) * 0x64));
  if (temp_fv1 >= 2.1474836e9f)
  {
    var_v0 = (((s32) (temp_fv1 - 2.1474836e9f)) | 0x80000000) << 8;
  }
  else
  {
    var_v0 = ((s32) temp_fv1) << 8;
  }
  temp_fv1_2 = *((&D_8011F30C) + (inline_fn(arg1, 0xFFFF) * 0x64));
  if (temp_fv1_2 >= 2.1474836e9f)
  {
    var_v0_2 = (((s32) (temp_fv1_2 - 2.1474836e9f)) | 0x80000000) * 8;
  }
  else
  {
    var_v0_2 = ((s32) temp_fv1_2) * 8;
  }
  temp_fv1_3 = *((&D_8011F310) + (inline_fn(arg1, 0xFFFF) * 0x64));
  if (temp_fv1_3 >= 2.1474836e9f)
  {
    var_v0_3 = ((u32) (((s32) (temp_fv1_3 - 2.1474836e9f)) | 0x80000000)) >> 2;
  }
  else
  {
    var_v0_3 = ((u32) ((s32) temp_fv1_3)) >> 2;
  }
  temp_fv1_4 = *((&D_8011F308) + (inline_fn(arg1, 0xFFFF) * 0x64));
  if (temp_fv1_4 >= 2.1474836e9f)
  {
    var_v0_4 = (((s32) (temp_fv1_4 - 2.1474836e9f)) | 0x80000000) << 8;
  }
  else
  {
    var_v0_4 = ((s32) temp_fv1_4) << 8;
  }
  temp_fv1_5 = *((&D_8011F30C) + (inline_fn(arg1, 0xFFFF) * 0x64));
  if (temp_fv1_5 >= 2.1474836e9f)
  {
    var_v0_5 = (((s32) (temp_fv1_5 - 2.1474836e9f)) | 0x80000000) * 8;
  }
  else
  {
    var_v0_5 = ((s32) temp_fv1_5) * 8;
  }
  temp_fv1_6 = *((&D_8011F310) + (inline_fn(arg1, 0xFFFF) * 0x64));
  if (temp_fv1_6 >= 2.1474836e9f)
  {
    var_v0_6 = ((u32) (((s32) (temp_fv1_6 - 2.1474836e9f)) | 0x80000000)) >> 2;
  }
  else
  {
    var_v0_6 = ((u32) ((s32) temp_fv1_6)) >> 2;
  }
  *((s32 *) (((char *) temp_v1_3) + 4)) = (s32) ((((((inline_fn(var_v0, 0xF800) | inline_fn(var_v0_2, 0x7C0)) | inline_fn(var_v0_3, 0x3E)) | 1) << 0x10) | 1) | ((inline_fn(var_v0_4, 0xF800) | inline_fn(var_v0_5, 0x7C0)) | inline_fn(var_v0_6, 0x3E)));
  temp_v1_4 = *arg0;
  *arg0 = temp_v1_4 + 8;
  *((s32 *) (((char *) temp_v1_4) + 0)) = 0xF64FC3BC;
  *((s32 *) (((char *) temp_v1_4) + 4)) = 0;
}

