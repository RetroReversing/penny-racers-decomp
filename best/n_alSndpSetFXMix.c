s32 func_8002D164();
extern void *D_80046DF4;
void n_alSndpSetFXMix(s8 arg0)
{
  s16 sp10;
  volatile unsigned int sp14;
  s8 sp18;
  void *temp_a2;
  temp_a2 = *((void **) (((char *) D_80046DF4) + 0xC));
  sp10 = 8;
  sp18 = arg0;
  sp14 = (*((s32 *) (((char *) temp_a2) + 0x40))) + ((*((s32 *) (((char *) temp_a2) + 0x3C))) * 0x30);
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

