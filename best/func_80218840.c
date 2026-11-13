u16 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_8012AD20(u16, void *, u8, u8);
void func_80203DF8(s32, s32, s32, s32, s32);
void func_8021FCA4(void);
void func_80230960(void *);
extern s8 D_80046832;
extern u16 D_800DA260;
extern u8 D_8011F304[];
extern u8 D_8011F340[];
extern s16 D_80189C94;
extern s8 D_8018A43C;
extern s16 D_8018A44A;
extern u8 D_8018F5D0[];
extern u8 D_80190C9C[];
extern u8 D_80190CB0[];
extern u8 D_801D5A90[];
extern s16 D_8021E1A6;
extern u8 D_8021F0A0[];
extern u8 D_8021FE04[];
extern u8 D_8022026C[];
extern f32 D_80220E40;
extern u8 D_8022A770[];
extern u8 D_80237DC0[];
extern u8 D_80238EC0[];
extern u8 D_80239714[];
extern u8 D_802399B8[];
extern u8 func_8013DD2C[];
extern u8 func_80149A80[];
extern u8 func_8020FED8[];
extern u8 func_802191E4[];
extern u8 func_8021999C[];
extern u8 func_80219A60[];
extern u8 func_80219B58[];
extern u8 func_80219C14[];
extern u8 func_80219CCC[];
extern u8 func_80219CF0[];
void func_80218840(void)
{
  do
  {
    *((s8 *) D_80190CB0) = 0;
  }
  while (0);
  *((u16 *) ((&D_8018A44A) + (D_8021E1A6 * 2))) = 0;
  D_80189C94 = 0;
  D_8018A43C = 0;
  D_80046832 = 1;
  func_800DE41C(0, 0xFF, 3, 0, 0x7F, 0, NULL, D_801D5A90, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
  do
  {
    func_8021FCA4();
  }
  while (0);
 do { func_800DE41C(0, 0, 3, 0, 0x72, 0xFF, NULL, NULL, D_8021FE04, 0, 0, 0, 0, 0, 0, 0, 0, 0); D_80220E40 = 10.0f; } while (0);
  func_800DE41C(0, 0, 3, 0, 0x74, 0xFF, NULL, NULL, D_8022026C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
  func_800DE41C(0, 0, 3, 0, 0x7A, 1, NULL, func_80149A80, NULL, 0, 0, 0, 0, (short) 0x41F00000, 0x42480000, 0, 0, 0);
  *((u16 *) (D_80190CB0 - 0x18)) = func_800DE41C(0, 0, 1, 0x8000, 0x7C, 0x9B, D_80239714, func_80219A60, func_80219B58, 0x3FC00000, 0xC0000000, 0, 0xC1A00000, 0, 0, 0x3D4CCCCD, 0x3DCCCCCD, 0x3D4CCCCD);
  *((u16 *) (D_80190CB0 - 0x16)) = func_800DE41C(0, 0x40, 1, 0x8000, 0x7C, 0x9B, D_80239714, func_80219A60, func_80219B58, 0xBFC00000, 0xC0000000, 0, 0xC1A00000, 0, 0, 0x3D4CCCCD, 0x3DCCCCCD, 0x3D4CCCCD);
  func_800DE41C(0, 0, 3, 0, 0x7A, 0, NULL, func_802191E4, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
  do
  {
    func_80203DF8(1, 0x3C, 0, 0, 0);
  }
  while (0);
}
