s32 osCreateMesgQueue();
s32 osRecvMesg(s32 *, s32, s32);
s32 osSendMesg(s32 *);
extern s32 D_8006FEF8;
extern char D_80092BE0[];
void func_8002A3D0(void)
{
  volatile short sp10;
  s32 *sp14;
  volatile long long sp18;
  s32 sp30;
  if (D_8006FEF8 != 0)
  {
    osCreateMesgQueue(&sp18, &sp30, 1);
    sp10 = 0x1002;
    sp14 = &sp18;
    osSendMesg(&D_80092BE0);
    if (((unsigned long) sp14) & 0x10000)
    {
      if (((unsigned long) sp14) & 0x100)
      {
        osRecvMesg(&sp18, 0, 1);
      }
      else
      {
        osRecvMesg(&sp18, 0, 1);
      }
    }
    else
      if (((unsigned long) sp14) & 0x100)
    {
      osRecvMesg(&sp18, 0, 1);
    }
    else
    {
      osRecvMesg(&sp18, 0, 1);
    }
  }
}

