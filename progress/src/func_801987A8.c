u32 func_8019A31C();
extern s8 cursorX;
inline static int inline_fn()
{
  return (func_8019A31C() >> 2) & 1;
}

s32 func_801987A8(void)
{
  s32 var_v1;
  var_v1 = 0;
  if (cursorX != 0)
  {
    var_v1 = inline_fn();
  }
  return var_v1 & 0xFF;
}

