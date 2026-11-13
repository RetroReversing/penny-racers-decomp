extern f32 D_8011F308[];
extern f32 D_8011F30C[];
extern f32 D_8011F310[];
inline static f32 inline_fn(s32 arg0)
{
  return D_8011F308[arg0];
}

void func_8014A134(s32 arg0, s32 arg1, s32 arg2)
{
  s32 temp_v1;
  s32 temp_v0;
  temp_v1 = (arg1 & 0xFFFF) * 25;
  temp_v0 = (arg0 & 0xFFFF) * 25;
  D_8011F308[temp_v1] = ((D_8011F308[temp_v0] - D_8011F308[temp_v1]) / ((f32) arg2)) + inline_fn(temp_v1);
  D_8011F30C[temp_v1] = ((D_8011F30C[temp_v0] - D_8011F30C[temp_v1]) / ((f32) arg2)) + D_8011F30C[temp_v1];
  D_8011F310[temp_v1] = ((D_8011F310[temp_v0] - D_8011F310[temp_v1]) / ((f32) arg2)) + D_8011F310[temp_v1];
}

