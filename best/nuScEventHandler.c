s32 nuScEventBroadcast(void *);
s32 osRecvMesg(s32 *, s32 *, s32);
extern s32 (*D_80046C50)(s32 *);
extern s32 D_8006FB2C;
extern volatile unsigned char D_800DD894;
void nuScEventHandler(void)
{
  s32 sp10;
  D_8006FB2C = 0;
  loop_1:
  osRecvMesg(&D_800DD894, &sp10, 1);

  if (sp10 == 0x29A)
  {
    D_8006FB2C += 1;
    nuScEventBroadcast((&D_800DD894) - 0x74);
    goto loop_1;
  }
  if (sp10 != 0x29D)
  {
    goto loop_1;
  }
  nuScEventBroadcast((&D_800DD894) - 0x72);
  if (D_80046C50 == NULL)
  {
    goto loop_1;
  }
  D_80046C50(&D_800DD894);
  goto loop_1;
}

