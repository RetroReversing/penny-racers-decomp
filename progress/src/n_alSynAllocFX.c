s32 func_8002DC00(s32);
extern void *D_80046DF4;
inline static int inline_fn(s32 arg0, int arg1)
{
  return arg0 + arg1;
}

s32 n_alSynAllocFX(s32 arg0)
{
  s32 temp_s0;
  temp_s0 = ((s32) (arg0 << 0x10)) >> 0xE;
  func_8002DC00((*((s32 *) (((char *) D_80046DF4) + 0x40))) + inline_fn(temp_s0, 0x24));
  return *((s32 *) (((char *) inline_fn(temp_s0, *((s32 *) (((char *) D_80046DF4) + 0x40)))) + 0x24));
}

