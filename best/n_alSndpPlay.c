s32 func_8002D164(void *, s16 *, s32);
extern void *D_80046DF4;
void n_alSndpPlay(void)
{
  s16 sp10;
  volatile char sp14;
  s32 temp_a1;
  void *temp_a0;
  temp_a0 = *((void **) (((char *) D_80046DF4) + 0xC));
  temp_a1 = *((s32 *) (((char *) temp_a0) + 0x40));
  if ((*((s32 *) (((char *) (((*((s32 *) (((char *) temp_a0) + 0x3C))) * 0x30) + temp_a1)) + 0x28))) == 0)
  {
    sp10 = 0;
    sp14 = temp_a1 + ((*((s32 *) (((char *) temp_a0) + 0x3C))) * 0x30);
    func_8002D164(temp_a0 + 0x14, &sp10, 0);
  }
}

