s32 func_800294A0(s32 *, s32 *, s32);
s32 func_800DE41C(s32, s32, s32, s32, s32, s32, s32, s32 *, s32 *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_80143DCC();
s32 func_80203DF8(s32, s32, s32, s32, s32);
extern s32 D_41CF00;
extern s32 D_425610;
extern s8 D_80190CB2;
extern s32 D_801C5E9C;
extern u8 D_801C5EA0;
extern s8 D_801CA13C;
extern s8 D_8021E19E;
extern s32 D_8030BD90;
extern s32 func_80215850;
extern s32 func_80215CCC;
void func_80215700(void)
{
  do
  {
    func_800294A0(&D_41CF00, &D_8030BD90, (&D_425610) - (&D_41CF00));
  }
  while (0);
  do
  {
    func_80143DCC();
  }
  while (0);
 do { do { func_80203DF8(1, 0x14, 0, 0, 0); } while (0); D_801CA13C = 1; } while (0);
  if (D_801C5EA0 == 0)
  {
    *((s8 *) (((char *) (&D_801C5E9C)) + 0)) = 3;
    *((s8 *) (((char *) (&D_801C5E9C)) + 1)) = 5;
    *((s8 *) (((char *) (&D_801C5E9C)) + 2)) = 0;
    *((s8 *) (((char *) (&D_801C5E9C)) + 3)) = 0;
  }
  D_8021E19E = 0;
  D_80190CB2 = 0;
  do
  {
    func_800DE41C(0, 0, 3, 0, 0x40, 0, 0, &func_80215850, &func_80215CCC, 0, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  while (0);
}
