s32 func_80028AF0(s32 *);
s32 func_80028B50();
s32 func_80028B70(s32 *, s32);
s32 func_80029A80();
s32 nuGfxTaskMgrInit();
s32 nuGfxTaskStart(s32 *, s32, s32, s32);
extern s32 D_46C78;
extern s32 D_80046C60;
extern s32 D_80046C70;
extern s32 D_8006F9D0;
extern s32 *D_8006FF68;
extern s32 func_80028B30;
void func_80028A00(void)
{
  s32 sp10;
  s32 *sp14;
  s32 sp18;
  s32 sp1C;
  volatile unsigned long sp20;
  s32 sp24;
  func_80029A80();
  func_80028B70(&D_80046C70, 2);
  D_8006F9D0 = 0x80000400;
  func_80028AF0(&func_80028B30);
  D_8006FF68 = &D_80046C60;
  nuGfxTaskMgrInit();
  do
  {
    sp10 = 0x06000000;
  }
  while (0);
  sp14 = &D_46C78;
  sp18 = 0xE9000000;
  sp1C = 0;
  sp20 = 0xB8000000;
  sp24 = 0;
  if (((unsigned long) sp14) & 0x10000)
  {
    if (((unsigned long) sp14) & 0x100)
    {
      nuGfxTaskStart(&sp10, 0x18, 0, 0);
    }
    else
    {
      nuGfxTaskStart(&sp10, 0x18, 0, 0);
    }
  }
  else
    if (((unsigned long) sp14) & 0x100)
  {
    nuGfxTaskStart(&sp10, 0x18, 0, 0);
  }
  else
  {
    nuGfxTaskStart(&sp10, 0x18, 0, 0);
  }
  func_80028B50();
}

