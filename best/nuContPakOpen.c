s32 func_80033A90(s32 *, s32 *, s32);
s32 osRecvMesg(s32 *, s32, s32);
s32 osSendMesg(s32 *, s16 *, s32);
extern s32 D_80046D6C;
extern s32 D_80092BE0;
extern s32 D_800DDEB8;
void nuContPakOpen(void **arg0, s32 arg1)
{
  s32 sp10;
  unsigned int sp28;
  s32 *sp2C;
  void **sp30;
  s32 sp38;
  void *temp_v0;
  if (D_80046D6C != 0)
  {
    func_80033A90(&sp10, &sp38, 1);
    temp_v0 = (char *) (arg1 * 0x68); temp_v0 = temp_v0 + ((s32) (&D_800DDEB8));
    *arg0 = temp_v0;
    *((s32 *) (((char *) temp_v0) + 8)) = arg1;
    sp28 = 0x2001;
    sp30 = arg0;
    sp2C = &sp10;
    osSendMesg(&D_80092BE0, &sp28, 1);
    if (((unsigned long) sp2C) & 0x100)
    {
      osRecvMesg(&sp10, 0, 1);
    }
    else
    {
      osRecvMesg(&sp10, 0, 1);
    }
  }
}

