extern u8 D_8011F2F0[];
extern u8 D_8011F304[];
extern u8 D_8011F308[];
extern u8 D_8011F318[];
extern u8 D_8011F340[];
extern u8 D_80190C98[];
extern f64 D_8021DDB0;
extern f64 D_8021DDB8;
extern s8 D_8021E15F;
extern s8 D_8021E231[];
extern u8 D_8021EECC[];
extern u8 D_8021F036[];
extern u8 D_8021F0A0[];
volatile unsigned long func_8012AD20(int, void *, s32, u8);
inline static unsigned short inline_fn(s32 arg0)
{
  return (unsigned short) arg0;
}

void func_80210D88(s32 arg0)
{
  long temp_a3;
  f32 temp_fv1;
  s32 temp_s1;
  do
  {
    temp_s1 = (arg0 & 0xFFFF) * 0x64;
    if ((*(*((u8 **) (temp_s1 + D_8011F340)))) == 0)
    {
      *((f32 *) (D_8011F308 + temp_s1)) = (f32) (((float) ((D_8021DDB0 * ((f64) D_8011F2F0[(unsigned short) temp_s1])) + D_8021DDB8)) - ((f64) (*((f32 *) D_8021EECC))));
      do
      {
        temp_a3 = D_8021E231[(unsigned char) ((D_8021E15F * 0x110) + D_8011F2F0[inline_fn(temp_s1)])];
        func_8012AD20(*((u16 *) (D_8011F304 + ((*((u16 *) (D_80190C98 + (temp_a3 * 2)))) * 0x64))), D_8021F0A0 + (temp_a3 << 5), temp_a3 & 0xFF, D_8021F036[temp_a3]);
        if (D_8011F2F0[inline_fn(temp_s1)] == D_8021EECC[-0xC])
        {
          *((f32 *) (D_8011F318 + inline_fn(((arg0 & 0xFFFF) * 0x64) & 0xFFFF))) = (*((f32 *) (D_8011F318 + temp_s1))) - 1.0f; temp_fv1 = *((f32 *) (D_8011F318 + temp_s1));
          if (temp_fv1 < 0.0f)
          {
            *((f32 *) (D_8011F318 + temp_s1)) = temp_fv1 + 360.0f;
          }
        }
        else
        {
          *((f32 *) (D_8011F318 + temp_s1)) = 333.0f;
        }
      }
      while (0);
    }
  }
  while (0);
}

