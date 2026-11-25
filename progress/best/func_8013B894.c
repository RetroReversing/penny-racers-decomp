#define F32AT(base, o) (*(f32 *)((u8 *)(base) + (o)))
f32 __cosf(f32);
f32 __sinf(f32);
extern u8 D_8011F2FD[];
extern u8 D_8011F308[];
extern u8 D_8011F30C[];
extern u8 D_8011F310[];
extern u8 D_8011F334[];
extern u8 D_8011F338[];
void func_8013B894(s32 arg0)
{
  s32 off;
  s32 a1;
  s32 odd;
  f32 fa;
  s32 temp;
  a1 = arg0;
  temp = (a1 & 0xFFFF) * 0x64;
  odd = arg0 & 1;
  arg0 = temp;
  if ((*((f32 *) (((u8 *) D_8011F338) + arg0))) < (*((f32 *) (((u8 *) D_8011F30C) + arg0))))
  {
    *((f32 *) (((u8 *) D_8011F30C) + arg0)) = (*((f32 *) (((u8 *) D_8011F30C) + arg0))) - 0.6f;
    do
    {
      fa = (*((f32 *) (((u8 *) D_8011F334) + arg0))) + 0.02f;
      *((f32 *) (((u8 *) D_8011F334) + arg0)) = fa;
      do
      {
        if (odd != 0)
        {
          *((f32 *) (((u8 *) D_8011F308) + arg0)) = __sinf(fa) + (*((f32 *) (arg0 + ((u8 *) D_8011F308))));
          do
          {
            *((f32 *) (((u8 *) D_8011F310) + arg0)) = __cosf(*((f32 *) (((u8 *) D_8011F334) + arg0))) + (*((f32 *) (((u8 *) D_8011F310) + arg0)));
            return;
          }
          while (0);
        }
        arg0 = (a1 & 0xFFFF) * 0x64;
        *((f32 *) (((u8 *) D_8011F308) + arg0)) = (*((f32 *) (((u8 *) D_8011F308) + arg0))) - __cosf(*((f32 *) (((u8 *) D_8011F334) + arg0)));
      }
      while (0);
    }
    while (0);
    *((f32 *) (((u8 *) D_8011F310) + arg0)) = (*((f32 *) (((u8 *) D_8011F310) + arg0))) - __sinf(*((f32 *) (((u8 *) D_8011F334) + arg0)));
    return;
  }
  arg0 = (a1 & 0xFFFF) * 0x64;
 do { *((u8 *) (D_8011F2FD + arg0)) = 2; } while (0);
}
