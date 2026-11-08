/* identical to osSetThreadPri in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
s32 func_8003E734();
s32 func_8003E83C();
s32 func_8003EAC0();
s32 func_8003EAE0();
s32 func_80034300();
extern void *D_800A2518;
extern void *D_800A2520;
static inline s32 *inline_fn(int arg0)
{
  return (s32 *) (((char *) D_800A2518) + arg0);
}

void func_800340F0(void *arg0, s32 arg1)
{
  int new_var;
  s32 temp_s2;
  arg0 = arg0;
  temp_s2 = func_8003EAC0();
  if (arg0 == NULL)
  {
    arg0 = D_800A2520;
  }
  if ((*((s32 *) (((char *) arg0) + 4))) != arg1)
  {
    new_var = arg0 != D_800A2520;
    *((s32 *) (((char *) arg0) + 4)) = arg1;
    if (new_var && ((*((u16 *) (((char *) arg0) + 0x10))) != 1))
    {
      func_80034300(*((s32 *) (((char *) arg0) + 8)), arg0);
      func_8003E83C(*((s32 *) (((char *) arg0) + 8)), arg0);
    }
    if ((*((s32 *) (((char *) D_800A2520) + 4))) < (*inline_fn(4)))
    {
      *((s16 *) (((char *) D_800A2520) + 0x10)) = 2;
      func_8003E734(&D_800A2518);
    }
  }
  func_8003EAE0(temp_s2);
}
