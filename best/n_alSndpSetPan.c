s32 alEvtqPostEvent();
extern void *D_80046DF4;
void n_alSndpSetPan(s8 arg0)
{
  s16 sp10;
  char sp18;
  volatile unsigned int sp14;
  void *temp_a2;
  temp_a2 = *((void **) (((char *) D_80046DF4) + 0xC));
  sp10 = 2;
  sp18 = arg0;
  sp14 = ((*((s32 *) (((char *) temp_a2) + 0x3C))) * 0x30) + (*((s32 *) (((char *) temp_a2) + 0x40)));
  do
  {
    if (D_80046DF4)
    {
      alEvtqPostEvent(temp_a2 + 0x14, &sp10);
    }
    else
    {
      alEvtqPostEvent(temp_a2 + 0x14, &sp10);
    }
  }
  while (0);
}

