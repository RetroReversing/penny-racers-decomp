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
  unsigned short off;
  f32 t;

  func_8013AE60(i);
  i = arg0 & 0xFFFF;
  k = D_801837F0;do{
  off = i * 25;}while(0);
  i = (unsigned short)off;
    t = (f32)((f64)D_8011F334[(unsigned short)i] + D_801837E0);
  D_8011F334[(unsigned short)off] = t;
  if (D_801837E8 <= (f64)t)
  {
    D_8011F334[(unsigned short)off] = (f32)(D_801837E8 - (f64)t);
  }
  off = (arg0 & 0xFFFF) * 25;
  D_8011F320[off] = (f32)(((f64)__sinf(D_8011F334[(unsigned short)off]) * k) + D_801837F8);
  D_8011F324[off] = (f32)(((f64)__sinf(D_8011F334[(unsigned short)off]) * k) + D_80183800);
}
