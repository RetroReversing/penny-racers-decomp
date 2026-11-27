extern u8 D_80189B34;
extern s16 skipFirstRowFlag;
inline static int inline_fn(s16 arg0)
{
  return arg0 != 0;
}

s32 func_80149778(s32 arg0)
{
  s32 var_a1;
  var_a1 = 1;
  if (D_80189B34 == 2)
  {
    var_a1 = inline_fn(skipFirstRowFlag) >= (arg0 & 0xFF);
  }
  return var_a1 & 0xFF;
}

