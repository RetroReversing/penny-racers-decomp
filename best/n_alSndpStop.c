s32 func_8002D164();
extern void *D_80046DF4;
void n_alSndpStop(void)
{
  volatile short sp10;
  volatile unsigned int sp14;
  void *temp_a0;
  temp_a0 = *((void **) (((char *) D_80046DF4) + 0xC));
  sp10 = 1;
  sp14 = ((*((s32 *) (((char *) temp_a0) + 0x3C))) * 0x30) + (*((s32 *) (((char *) temp_a0) + 0x40)));
  do
  {
    volatile int pad;
    func_8002D164(temp_a0 + 0x14, &sp10);
  }
  while (0);
}

