s32 func_800DE41C(s32, s32, s32, s32, s32, s32, s32, s32 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_800E067C();
s32 func_8013ADA8(s32);
s32 func_801FA338(s32);
s32 func_8021F6A0(s32);
s32 func_8022F780(u16);
s32 func_8022FE50(s32, s32, s32, s32);
s32 func_802306F0(u8);
s32 func_802312F8(s32);
s32 func_80231A0C();
s32 func_80231E30();
s32 func_80232360(s32, s32);
extern s32 D_8006FAF0;
extern s32 D_8006FB14;
extern s32 D_800DB1B8;
extern s32 D_8012FFF0;
extern s8 D_8021E144;
extern u16 D_8021E18C;
extern u8 D_8021EEB2;
void func_8021A994(void)
{
  u16 i;
  func_801FA338(0);
  func_80231A0C();
  *((u16 *) (((char *) (&D_8006FAF0)) + 0x20)) = (u16) (D_8021E18C + 1);
  func_80231E30();
  D_8021E144 = 1;
  func_8022F780(*((u16 *) (((char *) (&D_8006FAF0)) + 0x20)));
  D_8021E144 = 0;
  func_800E067C();
  func_802312F8(0);
  func_802306F0(D_8021EEB2);
  for (i = 0; i < 6; i++)
  {
    func_8022FE50(i & 0xFF, i & 0xFF, i & 0xFF, 1);
  }
  func_8021F6A0(1);
  *((s8 *) (((char *) (&D_8006FB14)) + 4)) = 1;
  func_800DE41C(0, 0, 3, 0, 0x80, 1, 0, &D_8012FFF0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
  *((s16 *) (((char *) (&D_800DB1B8)) + 0x2114)) = 0xA0;
  *((s16 *) (((char *) (&D_800DB1B8)) + 0x2116)) = 0x78;
  *((s16 *) (((char *) (&D_800DB1B8)) + 0x2110)) = 0xA0;
  *((s16 *) (((char *) (&D_800DB1B8)) + 0x2112)) = 0x3C;
  *((s16 *) (((char *) (&D_800DB1B8)) + 0x2128)) = 0xA0;
  *((s16 *) (((char *) (&D_800DB1B8)) + 0x212A)) = 0x3C;
  *((s16 *) (((char *) (&D_800DB1B8)) + 0x212C)) = 0x140;
  *((s16 *) (((char *) (&D_800DB1B8)) + 0x212E)) = 0xB4;
  func_8013ADA8(0xA0);
  func_80232360(0, 1);
  func_80232360(1, 1);
  func_80232360(2, 0);
  func_80232360(3, 1);
  func_80232360(4, 1);
  func_80232360(5, 2);
}
