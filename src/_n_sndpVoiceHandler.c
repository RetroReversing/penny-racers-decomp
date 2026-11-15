s32 _n_handleEvent(void *);
s32 func_8002D0CC(void *, void *);
s32 alEvtqPostEvent(void *, s16 *, s32);
s32 _n_sndpVoiceHandler(void *arg0)
{
  s16 sp10[8];
  unsigned long ret;
  do
  {
    if ((*((s16 *) (((s8 *) arg0) + 0x28))) == 5)
    {
      sp10[0] = 5;
      alEvtqPostEvent(((s8 *) arg0) + 0x14, sp10, *((s32 *) (((s8 *) arg0) + 0x48)));
    }
    else
    {
      _n_handleEvent(((s8 *) arg0) + 0x28);
    }
    ret = func_8002D0CC(((s8 *) arg0) + 0x14, ((s8 *) arg0) + 0x28);
    *((s32 *) (((s8 *) arg0) + 0x4C)) = ret;
  }
  while (ret == 0);
  *((s32 *) (((s8 *) arg0) + 0x50)) += ret;
  return *((s32 *) (((s8 *) arg0) + 0x4C));
}

