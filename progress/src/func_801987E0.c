u32 getCursorGridCell();
extern s8 cursorY;
inline static int inline_fn(int arg0)
{
  return arg0;
}

s32 func_801987E0(void)
{
  s32 var_v1;
  var_v1 = 0;
  if (cursorY < 0x17)
  {
    var_v1 = inline_fn((getCursorGridCell() >> 1) & 1);
  }
  return var_v1 & 0xFF;
}

