extern f32 D_8011F320[];
extern f32 D_8011F324[];
extern f32 D_8011F334[];
extern f64 D_801837E0;
extern f64 D_801837E8;
extern f64 D_801837F0;
extern f64 D_801837F8;
extern f64 D_80183800;
f32 __sinf(f32);
void func_8013AE60(s32);

void func_801525C4(s32 arg0)
{
  f64 k;
  s32 i;
  s32 off;
  f32 t;

  i = arg0 & 0xFFFF;
  func_8013AE60(i);
  k = D_801837F0;
  off = i * 25;
  t = (f32)((f64)D_8011F334[off] + D_801837E0);
  D_8011F334[off] = t;
  if (D_801837E8 <= (f64)t)
  {
    D_8011F334[off] = (f32)(D_801837E8 - (f64)t);
  }
  off = (arg0 & 0xFFFF) * 25;
  D_8011F320[off] = (f32)(((f64)__sinf(D_8011F334[off]) * k) + D_801837F8);
  D_8011F324[off] = (f32)(((f64)__sinf(D_8011F334[off]) * k) + D_80183800);
}
