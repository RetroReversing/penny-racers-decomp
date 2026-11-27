u32 func_8019A31C();
extern s8 cursorX;
inline static int inline_fn(int arg0)
{
  return arg0;
}

s32 func_8019881C(void)
{
  s32 var_v1;
  var_v1 = 0;
  if (cursorX < 0x17)
  {
    var_v1 = inline_fn((func_8019A31C() >> 3) & 1);
  }
  return var_v1 & 0xFF;
}

