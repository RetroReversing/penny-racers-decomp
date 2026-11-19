s32 alEvtqPostEvent(s32, s16 *, s32);

void alSeqpStop(s32 arg0)
{
  s16 sp10;
  sp10 = 17;
  alEvtqPostEvent(arg0 + 0x48, &sp10, 0);
  if (1)
  {
    char __repair_stack_padding[8];
  }
}
