/* identical to osSpTaskYielded in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
u32 func_8003F0C0();
s32 osSpTaskYielded(void *arg0)
{
  s32 temp_a0;
  u32 temp_v0;
  temp_v0 = func_8003F0C0();
  temp_a0 = temp_v0 >> 8;
  temp_a0 = temp_a0 & 1;
  if (temp_v0 & 0x80)
  {
    *((s32 *) (((s8 *) arg0) + 4)) = (s32) (((*((s32 *) (((s8 *) arg0) + 4))) | temp_a0) & (~2));
  }
  return temp_a0;
}
