s32 func_801CAF18(s32 *, s32, s32, u16, s32, s32, s32, s32, s32, s32, s32);
inline static u16 inline_fn(u16 *arg0)
{
  return *arg0;
}

void func_801CABF4(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u16 *arg5, u8 arg6, s32 arg7, volatile int arg8, volatile unsigned int arg9, volatile unsigned int arg10, s32 arg11)
{
  s32 sp30;
  s32 var_s0;
  sp30 = inline_fn(arg0);
  if (inline_fn(arg5) != 0xFFFF)
  {
    var_s0 = 0;
    do
    {
      func_801CAF18(&sp30, arg1 & 0xFFFF, arg2 & 0xFFFF, inline_fn(((var_s0 & 0xFFFF) * 2) + arg5), arg7, arg4, arg6 & 0xFF, arg8, arg9, arg10, arg11);
      do
      {
        if (sp30)
        {
          var_s0 += 1;
        }
        else
        {
          var_s0 += 1;
        }
      }
      while (0);
      arg1 += arg3;
    }
    while (inline_fn(((var_s0 & 0xFFFF) * 2) + arg5) != 0xFFFF);
  }
  *arg0 = sp30;
}

