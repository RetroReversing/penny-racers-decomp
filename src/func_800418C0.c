/* identical to osPiGetCmdQueue in V-RALLY-PAL (matched), with its names changed by decompdecomp */
extern s32 D_80048130;
extern s32 D_80048138;

s32 func_800418C0(void)
{
  s32 temp_v1;

  temp_v1 = D_80048130;
  if (temp_v1 == 0)
  {
    return 0;
  }
  return D_80048138;
}
