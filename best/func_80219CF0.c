int func_801FA30C(void *);
extern u8 D_8011F2F0[];
extern f32 D_8021CA3C[];
extern u8 D_8021E19E;
extern u8 D_80239984[];
extern u8 func_80219E28[];
extern u8 func_8021A050[];
void func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, s32, f32, f32, s32, s32, s32, f32, f32, f32);
void func_80219CF0(s32 arg0)
{
  f32 temp_fv1;
  u8 *p;
  u8 *flag;
  flag = &D_8021E19E;
  do
  {
    p = D_8011F2F0 + (((arg0 & 0xFFFF) * 10) * 10);
  }
  while (0);
  switch (*((u16 *) (p + 0x3E)))
  {
    case 0:
      D_8021E19E = 0;
 do { *((u16 *) (p + 0x3E)) = 1; } while (0);
      return;

    case 1:
      *flag += 1;
      if ((*flag) >= 6)
    {
      temp_fv1 = D_8021CA3C[func_801FA30C(p) & 1];
      do
      {
        func_800DE41C(0, 0, 1, 0, 0x82, 0xFF, D_80239984, func_80219E28, func_8021A050, 0, 7.0f, 2.0f, 0, 0, 0, temp_fv1, temp_fv1, temp_fv1);
      }
      while (0);
      *flag = 0;
    }
      return;

  }

}
