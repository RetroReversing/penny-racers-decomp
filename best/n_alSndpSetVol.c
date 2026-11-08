s32 func_8002D164();
extern void *D_80046DF4;
void n_alSndpSetVol(unsigned int arg0)
{
  volatile int sp14;
  s16 sp18;
  s16 sp10;
  void *temp_a2;
  temp_a2 = *((void **) (((char *) D_80046DF4) + 0xC));
  sp10 = 3;
  sp18 = arg0;
  sp14 = ((*((s32 *) (((char *) temp_a2) + 0x3C))) * 0x30) + (*((s32 *) (((char *) temp_a2) + 0x40)));
  do
  {
    if (D_80046DF4)
    {
      func_8002D164(temp_a2 + 0x14, &sp10);
    }
    else
    {
      func_8002D164(temp_a2 + 0x14, &sp10);
    }
  }
  while (0);
}

