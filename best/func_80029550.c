s32 osCreateMesgQueue(s32 *, s32 *, s32);
s32 osCreateThread(s32 *, s32, s32 *, s32, s32 *, s32);
s32 osSetEventMesg(s32, s32 *, s32);
s32 osStartThread(s32 *);
s32 osContInit(s32 *, u8 *, s32 *);
extern s32 D_80063DA0;
extern s32 D_80063DC0;
extern s32 D_80065F70;
extern s32 D_80092BF8;
extern s32 D_80092BFC;
extern s32 D_800DE058;
extern s32 func_800295F8;
u8 func_80029550(void)
{
  volatile int sp18;
  u8 sp28;
  D_80092BF8 = 0;
  D_80092BFC = 0;
  osCreateMesgQueue(&D_800DE058, &D_80063DA0, 8);
  osSetEventMesg(5, &D_800DE058, 0);
  osContInit(&D_800DE058, &sp28, &sp18);
  osCreateThread(&D_80063DC0, 5, &func_800295F8, 0, &D_80065F70, 0x73);
  osStartThread(&D_80063DC0);
  return sp28;
}

