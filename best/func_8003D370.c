s32 osSendMesg(s32, void *, s32);
s32 osJamMesg(s32, void *, s32);
s32 func_800418C0();
extern s32 D_80048130;
s32 func_8003D370(s32 arg0, void *arg1, s32 arg2)
{
  s16 var_v0;
  if (D_80048130 == 0)
  {
    return -1;
  }
  *((s32 *) (((char *) arg1) + 0x14)) = arg0;
  if (arg2 == 0)
  {
    var_v0 = 0xF;
  }
  else
  {
    var_v0 = 0x10;
  }
  if (var_v0 || arg0)
  {
    *((s16 *) (((char *) arg1) + 0)) = var_v0;
  }
  else
  {
    *((s16 *) (((char *) arg1) + 0)) = var_v0;
  }
  if ((*((u8 *) (((char *) arg1) + 2))) == 1)
  {
    return osJamMesg(func_800418C0(), arg1, 0);
  }
  return osSendMesg(func_800418C0(), arg1, 0);
}

