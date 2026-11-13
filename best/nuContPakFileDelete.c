extern s32 D_80046D6C;
extern s32 D_80092BE0;
void osCreateMesgQueue(void *mq, void *msg, s32 count);
s32 osRecvMesg(void *mq, void *msg, s32 flags);
s32 osSendMesg(void *mq);
void nuContPakFileDelete(s32 arg0, s32 arg1, s32 arg2)
{
  s16 sp28;
  s32 *sp2C;
  volatile char sp30;
  s32 sp34;
  s32 sp10[6];
  s32 sp38;
  s32 sp48[6];
  if (D_80046D6C != 0)
  {
    osCreateMesgQueue(sp10, sp48, 1);
    sp30 = arg0;
    sp28 = 0x2005;
    sp2C = sp10;
    sp34 = arg1;
    sp38 = arg2;
    osSendMesg(&D_80092BE0);
    osRecvMesg(sp10, 0, 1);
  }
}

