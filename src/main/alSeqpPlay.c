#include "common.h"

/* adapted from similar verified C in alSeqpStop in PENNY RACERS (matched), with its names changed by decompdecomp */
s32 alEvtqPostEvent(s32, s16 *, s32);
void alSeqpPlay(s32 arg0)
{
  s16 sp10;
  sp10 = 15;
  alEvtqPostEvent(arg0 + 0x48, &sp10, 0);
  if (1)
  {
    char __repair_stack_padding[8];
  }
}
