s32 func_80033A90(s32 *, s32 *, s32);
s32 osCreateThread(s32 *, s32, s32 *, s32 *, s32 *, s32);
s32 func_80034090(s32, s32 *, s32);
volatile unsigned short osSetThreadPri(s32, s32);
s32 osStartThread(s32 *);
s32 func_8003D9B0();
s32 func_8003EAC0();
s32 func_8003EAE0(s32);
s32 func_8003EDA0(s32);
extern s32 D_80048130;
extern s32 *D_80048134;
extern s32 *D_80048138;
extern s32 *D_8004813C;
extern s32 *D_80048140;
extern s32 *D_80048144;
extern s32 *D_80048148;
extern s32 D_80048160;
extern s32 D_8006D590;
extern s32 D_8006E740;
extern s32 D_8006E758;
extern s32 D_8006FF50;
extern s32 func_8003D1A0;
extern s32 func_8003D5F0;
extern s32 func_800417F0;
void osCreatePiManager(s32 arg0, s32 *arg1, s32 *arg2, s32 arg3)
{
  s32 temp_v0;
  s32 temp_v0_2;
  s32 var_s2;
  if (D_80048130 == 0)
  {
    func_80033A90(arg1, arg2, arg3);
    do
    {
      func_80033A90(&D_8006E740, &D_8006E758, 1);
    }
    while (0);
    if (D_80048160 == 0)
    {
      func_8003D9B0();
    }
    func_80034090(8, &D_8006E740, 0x22222222);
    var_s2 = -1;
    temp_v0 = func_8003EDA0(0);
    if (temp_v0 < arg0)
    {
 do { var_s2 = temp_v0; } while (0);
      osSetThreadPri(0, arg0);
    }
    temp_v0_2 = func_8003EAC0();
    D_80048130 = 1;
    D_80048140 = &D_8006FF50;
    D_80048144 = &func_800417F0;
    D_80048148 = &func_8003D1A0;
    D_80048134 = &D_8006D590;
    D_80048138 = arg1;
    D_8004813C = &D_8006E740;
    osCreateThread(&D_8006D590, 0, &func_8003D5F0, &D_80048130, &D_8006E740, arg0);
    osStartThread(&D_8006D590);
    do
    {
      func_8003EAE0(temp_v0_2);
    }
    while (0);
    if (var_s2 != (-1))
    {
      osSetThreadPri(0, temp_v0);
    }
  }
}
