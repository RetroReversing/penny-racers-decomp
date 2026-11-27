s32 getMenuNavMask(s32, s32, s32);
extern s16 skipFirstRowFlag;
s32 func_8014BAC0(void)
{
  s32 var_s0;
  volatile short pad;
  s32 var_s1;
  var_s1 = 0;
  var_s0 = 0;
  if ((skipFirstRowFlag + 1) > 0)
  {
    do
    {
      var_s1 |= getMenuNavMask(0x14, 3, var_s0);
      var_s0 += 1;
    }
    while (var_s0 < (skipFirstRowFlag + 1));
  }
  return var_s1 & 0xFF;
}

