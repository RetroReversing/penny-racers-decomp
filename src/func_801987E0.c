u32 func_8019A31C();
extern s8 D_801C6BB9;
inline static int inline_fn(int arg0)
{
  return arg0;
}

s32 func_801987E0(void)
{
  s32 var_v1;
  var_v1 = 0;
  if (D_801C6BB9 < 0x17)
  {
    var_v1 = inline_fn((func_8019A31C() >> 1) & 1);
  }
  return var_v1 & 0xFF;
}

