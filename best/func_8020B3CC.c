inline static int inline_fn(int arg0, volatile unsigned long arg1)
{
  return arg0 & arg1;
}

inline static int inline_fn2(volatile long long arg0)
{
  return inline_fn(0xFFFF, arg0);
}

void func_8020B3CC(s32 arg0, int arg1)
{
  do
  {
    func_80209B90((int) ((long long) ((double) inline_fn2(arg1))));
  }
  while ((float) 0);
}

