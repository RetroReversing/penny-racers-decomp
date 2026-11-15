extern volatile unsigned char D_8011F314[];
extern unsigned long D_8011F31C[];
extern char D_8011F32E[];
extern char D_8011F334[];
extern char D_8011F338[];
extern f64 D_80183760;
extern f64 D_80183768;
f32 __sinf(f32);
f32 __cosf(f32);
void func_8013AE60(s32);
void func_8014D2B4(s32 arg0)
{
  char *__repair_addr;
  s32 i;
  s32 off;
  f32 angle;
  i = arg0 & 0xFFFF;
  func_8013AE60(i);
  off = i * 100;
  if ((*((u16 *) (D_8011F32E + off))) == 0)
  {
    *((f32 *) (D_8011F338 + off)) = *((f32 *) (D_8011F314 + off));
    *((u16 *) (D_8011F32E + off)) = 1;
  }
  __repair_addr = (char *) (D_8011F334 + off);
  *((f32 *) __repair_addr) = (*((f32 *) (D_8011F334 + off))) + 1.0f;
  if (((*((f32 *) (D_8011F334 + off))) - 1) >= 360.0f)
  {
    *((f32 *) (D_8011F334 + off)) = (*((f32 *) (D_8011F334 + off))) - 360.0f;
  }
  off = (arg0 & 0xFFFF) * 100;
  angle = (f32) ((((f64) (*((f32 *) (D_8011F334 + off)))) * D_80183760) / D_80183768);
  *((f32 *) (D_8011F314 + off)) = (__sinf(angle) * 20.0f) - (*((f32 *) (D_8011F338 + off)));
  *((f32 *) (D_8011F31C + off)) = __cosf(angle) * 30.0f;
}

