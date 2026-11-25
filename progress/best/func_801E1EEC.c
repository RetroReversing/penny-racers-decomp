s32 func_800DE41C(s32, s32, s32, s32, s32 *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_800DEFF8();
s32 func_801DD938(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_801DDA5C();
extern s8 D_801F1888;
extern s32 func_801E2020;
extern s32 func_801E3640;
extern s32 func_801E3AE4;
void func_801E1EEC(long arg0, s32 arg1)
{
  s32 *var_v0;
  s32 temp_v1;
  volatile short pad;
  D_801F1888 = arg0;
  func_800DEFF8();
  func_801DDA5C();
  temp_v1 = arg0 & 0xFF;
  if (temp_v1 == 8)
  {
    func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xB4, 0x12, 0x1F, 0, 0x21);
    return;
  }
  if (temp_v1 == 6)
  {
    var_v0 = &func_801E3640;
  }
  else
    if ((arg0 & 0xFF) == 9)
  {
    var_v0 = &func_801E3AE4;
  }
  else
  {
    var_v0 = &func_801E2020;
  }
  if (arg0)
  {
    func_800DE41C(0, arg1 & 0xFF, 3, 0, var_v0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  else
  {
    func_800DE41C(0, arg1 & 0xFF, 3, 0, var_v0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
  }
}

