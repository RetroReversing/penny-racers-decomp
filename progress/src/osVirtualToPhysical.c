/* identical to osVirtualToPhysical in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
s32 __osProbeTLB(s32);

s32 osVirtualToPhysical(s32 arg0)
{
  if ((u32) (arg0 - 0x80000000) > 0x1FFFFFFFU)
  {
    if ((u32) (arg0 + 0x60000000) > 0x1FFFFFFFU)
    {
      return __osProbeTLB(arg0);
    }
    return arg0 & 0x1FFFFFFF;
  }
  return arg0 & 0x1FFFFFFF;
}
