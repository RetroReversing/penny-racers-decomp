s32 func_800284D8(s32 *, s32 *, s32);
s32 func_80033A90(s32 *, s32 *, s32);
s32 osRecvMesg(s32 *, s32 *, s32);
extern s32 D_80092BE0;
extern void *D_80092BF8;
void func_800295F8(void)
{
  volatile long long sp10;
  s32 sp20;
  s32 sp40;
  s32 (*temp_v0)(s32);
  void *var_s0;
  func_80033A90(&D_80092BE0, &sp20, 8);
  func_800284D8(&sp10, &D_80092BE0, 3);
  loop_1:
  osRecvMesg(&D_80092BE0, &sp40, 1);

  var_s0 = D_80092BF8;
  if (var_s0 == NULL)
  {
    goto loop_1;
  }
  do
  {
    temp_v0 = *((s32 (**)(s32)) (((char *) var_s0) + 4));
    if ((temp_v0 != NULL) && (temp_v0(sp40) != 0))
    {
      goto loop_1;
    }
    var_s0 = *((void **) (((char *) var_s0) + 0));
  }
  while (var_s0 != NULL);
  goto loop_1;
}

