inline static double inline_fn()
{
  return (double) 0;
}

inline static double inline_fn2(double arg0)
{
  return arg0;
}

inline static unsigned char inline_fn23()
{
  return (unsigned char) inline_fn2(inline_fn());
}

inline static unsigned char inline_fn234()
{
  return inline_fn23();
}

volatile short func_8015A9CC(volatile unsigned long long arg0)
{
  volatile unsigned long long pad;
  do
  {
    if (1)
    {
    }
  }
  while (inline_fn234());
}

