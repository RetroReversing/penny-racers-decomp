inline static float inline_fn(float arg0, f32 arg1)
{
  return arg0 * arg1;
}

inline static float inline_fn2(f32 arg0, f32 arg1, f32 arg2, float arg3)
{
  return inline_fn(arg0 - arg1, arg2) - arg3;
}

inline static float inline_fn23(float arg0, f32 arg1)
{
  return arg0 * arg1;
}

f32 func_801FA3B4(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7)
{
  f32 dy1;
  f32 dy2;
  f32 denominator;
  f32 numerator;
  f32 first;
  dy1 = arg6 - arg4;
  dy2 = arg7 - arg5;
  arg3 -= arg1;
  do
  {
    if (dy1 == 0.0f)
    {
      if (arg0 == arg2)
      {
        half:
        return 0.5f;

      }
      first = arg4 - arg0;
      if (first == 0.0f)
      {
        if (1)
        {
          goto half;
        }
      }
      return first / (arg2 - arg0);
    }
    if (dy2 == 0.0f)
    {
      if (arg0 != arg2)
      {
        goto half;
      }
      arg5 -= arg1;
      if (arg5 == 0.0f)
      {
        goto half;
      }
      denominator = arg3 - arg1;
      goto divide;
    }
    dy1 = 1.0f / dy1; dy2 = 1.0f / dy2;
    do
    {
      arg5 = inline_fn2(arg1, arg5, dy2, inline_fn(arg0 - arg4, dy1));
      do
      {
        denominator = inline_fn23(arg2 - arg0, dy1) - inline_fn(arg3 - arg1, dy2);
        divide:
        return arg5 / denominator;

      }
      while (0);
    }
    while (0);
  }
  while (0);
}

