inline static int inline_fn(volatile unsigned int arg0)
{
  return arg0;
}

void func_800DF428(void *arg0)
{
  volatile unsigned int pad;
  do
  {
  }
  while (inline_fn(0));
}

