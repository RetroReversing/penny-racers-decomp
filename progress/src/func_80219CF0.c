int nextRandom(void *);
extern u8 D_8011F2F0[];
extern f32 D_8021CA3C[];
extern u8 menuArrowAlpha;
extern u8 D_80239984[];
extern u8 updateFloatingObj[];
extern u8 func_8021A050[];
void objCreate(s32, s32, s32, s32, s32, s32, void *, void *, void *, s32, f32, f32, s32, s32, s32, f32, f32, f32);
void func_80219CF0(s32 arg0)
{
  f32 temp_fv1;
  u8 *p;
  volatile u8 *flag;
  p = D_8011F2F0 + (((arg0 & 0xFFFF) * 10) * 10);
  switch (*((u16 *) (p + 0x3E)))
  {
    case 0:
      menuArrowAlpha = 0;
      *((u16 *) (p + 0x3E)) = 1;
      return;
    case 1:
      flag = &menuArrowAlpha;
      *flag += 1;
      if ((*flag) >= 6)
      {
        temp_fv1 = D_8021CA3C[nextRandom(p) & 1];
        objCreate(0, 0, 1, 0, 0x82, 0xFF, D_80239984, updateFloatingObj, func_8021A050, 0, 7.0f, 2.0f, 0, 0, 0, temp_fv1, temp_fv1, temp_fv1);
        *flag = 0;
      }
      return;
  }
}
