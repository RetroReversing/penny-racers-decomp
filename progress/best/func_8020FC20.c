s32 func_8012AD20(u16, void *, s32, u8);
s32 func_80149F40(u8, s32, s8);
s32 func_80230960(void *);
extern u8 D_8011F2F0[];
extern u8 D_8011F304[];
extern u8 D_8011F340[];
extern f64 D_8021DD18;
extern u16 D_8021E120;
extern u8 D_8021E231[];
extern s8 D_8021E2DB[];
extern s8 D_8021E2FD[];
extern s8 D_8021E31F[];
extern u8 D_8021EEA7[];
extern u8 D_8021F048[];
extern u8 D_8021F0A0[];
extern u8 D_8022A770[];
extern u8 D_80237DC0[];

void func_8020FC20(s32 arg0)
{
    u8 *__base_D_8011F304;
  u8 *s2;
  u8 *s0;
  f32 f;
  s32 a0;
  s32 a2;
  s2 = D_8011F2F0 + (arg0 & 0xFFFF) * 0x64;
  switch (*(u16 *)(s2 + 0x3E))
  {
    case 0:
      *(u16 *)(s2 + 2) |= 0x8000;
      *(u16 *)(s2 + 0x3E) = 0x10;
      return;
    case 16:
      s0 = D_8022A770 + D_8021EEA7[0] * 0x8F0;
      *(u16 *)(s0 + 2) = D_8021E120;
      *(s16 *)(s0 + 0x534) = func_80149F40(D_8021EEA7[0], 5, D_8021E2DB[D_8021EEA7[0] * 0x110 + D_8021EEA7[6]]) & 0xFF;
      *(s16 *)(s0 + 0x538) = func_80149F40(D_8021EEA7[0], 6, D_8021E2FD[D_8021EEA7[0] * 0x110 + D_8021EEA7[7]]) & 0xFF;
      *(s16 *)(s0 + 0x53A) = func_80149F40(D_8021EEA7[0], 7, D_8021E31F[D_8021EEA7[0] * 0x110 + D_8021EEA7[8]]) & 0xFF;
      *(s16 *)(s0 + 0x230) = D_8021E231[D_8021EEA7[0] * 0x110 + D_8021EEA7[1]];
      func_80230960(s0);
      a2 = D_8021E231[D_8021EEA7[0] * 0x110 + D_8021EEA7[1]];
      a0 = D_8021E120 * 0x64;
      __base_D_8011F304 = D_8011F304;
      *(void **)(D_8011F340 + *(s32 *)(__base_D_8011F304 + a0) * 0x64 + 4) = D_80237DC0 + a2 * 0xC;
      func_8012AD20(*(s32 *)(__base_D_8011F304 + a0), D_8021F0A0 + (D_8021EEA7[0] << 5), a2 & 0xFF, D_8021F048[D_8021EEA7[0] * 0xE + a2]);
      if (**(u8 **)(s2 + 0x50) == 0)
      {
        f = *(f32 *)(s2 + 0x28) - D_8021DD18;
        *(f32 *)(s2 + 0x28) = f;
        if (f < 0.0f)
          *(f32 *)(s2 + 0x28) = f + 360.0f;
      }
      return;
  }
}
