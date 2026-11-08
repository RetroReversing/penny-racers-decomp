/* identical to osYieldThread in V-RALLY-PAL (matched), with its names changed by decompdecomp */
/* identical to osYieldThread in V-RALLY (matched), with its names changed by decompdecomp */
/* identical to func_80095C90 in V-RALLY (matched), with its names changed by decompdecomp */

s32 func_8003E734();
s32 __osDisableInt();
s32 func_8003EAE0();
extern char D_800470D8[];
extern void *D_800470E0;
static inline char *inline_fn()
{
  return ((char *) D_800470E0) + 0x10;
}

void osYieldThread(void)
{
  int new_var;
  s32 temp_s0;
  temp_s0 = __osDisableInt();
  new_var = 2;
  *((s16 *) inline_fn()) = new_var;
  func_8003E734(&D_800470D8, 2);
  func_8003EAE0(temp_s0);
}
