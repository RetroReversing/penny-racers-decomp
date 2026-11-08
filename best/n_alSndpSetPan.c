s32 func_8002D164();
extern void *D_80046DF4;
void n_alSndpSetPan(s8 arg0)
{
  s16 sp10;
  volatile unsigned int sp14;
  volatile unsigned char sp18;
  void *temp_a2;
  temp_a2 = *((void **) (((char *) D_80046DF4) + 0xC));
  sp10 = 2;
  sp18 = arg0;
  sp14 = (*((s32 *) (((char *) temp_a2) + 0x40))) + ((*((s32 *) (((char *) temp_a2) + 0x3C))) * 0x30);
  do
  {
    func_8002D164(temp_a2 + 0x14, &sp10);
  }
  while (0);
}

