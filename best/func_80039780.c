/* identical to func_8008A6D0 in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
extern u8 D_800A1C80;
extern volatile s32 D_A4500000;
extern s32 func_80034640(s32);
extern s32 func_8003F080(void);
s32 func_80039780(s32 arg0, s32 arg1)
{
  s32 addr = arg0;
  s32 ret;
  if (D_800A1C80 != 0)
  {
    addr -= 0x2000;
  }
  if (((arg0 + arg1) & 0x1FFF) == 0)
  {
    D_800A1C80 = 1; }
  else
  {
    D_800A1C80 = 0;
  }
  if (func_8003F080() == 0)
  {
    ret = func_80034640(addr);
    *(volatile s32 *)0xA4500000 = ret;
    ret = 0;
    *((vs32 *) 0xA4500004) = arg1;
    return ret;
  }
  return -1;
}
