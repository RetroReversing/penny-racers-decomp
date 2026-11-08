s32 func_8002D164();
extern void *D_80046DF4;
inline static s32 *inline_fn(void *arg0)
{
  return (s32 *) (((char *) arg0) + 0x40);
}

void n_alSndpSetPitch(f32 arg0)
{
  s16 sp10;
  volatile int sp14;
  f32 sp18;
  void *temp_a0;
  temp_a0 = *((void **) (((char *) D_80046DF4) + 0xC));
  sp10 = 4;
  sp18 = arg0;
  sp14 = ((*((s32 *) (((char *) temp_a0) + 0x3C))) * 0x30) + (*inline_fn(temp_a0));
  do
  {
    func_8002D164(temp_a0 + 0x14, &sp10);
  }
  while (0);
}

