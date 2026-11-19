#include "common_local_source_339302416778.h"

/* adapted from similar verified C in osSetThreadPri in V-RALLY-PAL (matched), with its names changed by decompdecomp */
s32 func_8003E734();
s32 func_8003E83C();
s32 __osDisableInt();
s32 func_8003EAE0();
s32 __osDequeueThread();
extern void *D_800470D8;
extern void *D_800470E0;
static inline s32 *inline_fn(int arg0)
{
  return (s32 *) (((char *) D_800470D8) + arg0);
}

void osSetThreadPri(void *arg0, s32 arg1)
{
  int new_var;
  s32 temp_s2;
  arg0 = arg0;
  temp_s2 = __osDisableInt();
  if (arg0 == NULL)
  {
    arg0 = D_800470E0;
  }
  if ((*((s32 *) (((char *) arg0) + 4))) != arg1)
  {
    new_var = arg0 != D_800470E0;
    *((s32 *) (((char *) arg0) + 4)) = arg1;
    if (new_var && ((*((u16 *) (((char *) arg0) + 0x10))) != 1))
    {
      __osDequeueThread(*((s32 *) (((char *) arg0) + 8)), arg0);
      func_8003E83C(*((s32 *) (((char *) arg0) + 8)), arg0);
    }
    if ((*((s32 *) (((char *) D_800470E0) + 4))) < (*inline_fn(4)))
    {
      *((s16 *) (((char *) D_800470E0) + 0x10)) = 2;
      func_8003E734(&D_800470D8);
    }
  }
  func_8003EAE0(temp_s2);
}
