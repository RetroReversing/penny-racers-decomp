/* identical to osSetEventMesg in V-RALLY-PAL (matched), with its names changed by decompdecomp */
s32 func_8003EAC0();
s32 func_8003EAE0();
extern char D_800D5D66[];
void func_80034090(s32 arg0, s32 arg1, s32 arg2)
{
  s32 temp_a0;
  void *temp_s0;
  temp_a0 = func_8003EAC0();
  temp_s0 = (arg0 * 8) + (D_800D5D66 + 0x75FA);
  *((s32 *) (((char *) temp_s0) + 0)) = arg1;
  *((s32 *) (((char *) temp_s0) + 4)) = arg2;
  func_8003EAE0(temp_a0);
}
