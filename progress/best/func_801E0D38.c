s16 func_800DE41C(s32, s32, s32, s32, s32, s32, s32, s32 *, s32 *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
s32 func_801DDA5C();
s32 func_80203DF8(s32, s32, s32, s32, s32);
s32 func_802153C4(volatile long long, s32, s32, s32);
s32 func_80231C5C();
extern s32 D_801D5A90;
extern s32 D_801D6670;
extern s32 D_801DF62C;
extern s32 D_801DFDEC;
extern s16 D_801E9D5E;
extern s32 func_80138B1C;
inline static s16 inline_fn(int arg0, int arg1, volatile unsigned long arg2, int arg3, s32 *arg4, int arg5, int arg6, int arg7, int arg8, int arg9)
{
  return func_800DE41C(arg0, 0, arg1, arg2, 0x40, 0xFF, arg3, NULL, arg4, arg5, 0, 0, 0, arg6, arg7, 0, arg8, arg9);
}

void func_801E0D38(void)
{
  do
  {
    D_801E9D5E = inline_fn(0, 3, 0, 0, &func_80138B1C, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0x80, (char) 0xFF, 0, &D_801DF62C, &D_801DFDEC, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    do
    {
      if (1)
      {
        func_80231C5C();
      }
    }
    while (0);
    func_80203DF8(0, 0x3C, 0xFF, 0xFF, 0xFF);
  }
  while (0);
  do
  {
    do
    {
      func_801DDA5C();
    }
    while (0);
    func_802153C4(0x41, 0, 0, 0);
    func_800DE41C(0, 0xFF, 3, 0, 0x7F, 0, 0, &D_801D5A90, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
  }
  while (0);
  func_800DE41C(0, 0xFF, 3, 0, 0x7F, 0, 0, &D_801D6670, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}

