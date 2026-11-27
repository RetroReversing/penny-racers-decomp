extern f32 func_80127000(void *arg0, void *arg1);
s8 vec3DotSign(volatile long long arg0, volatile int arg1, s32 arg2)
{
  f32 r;
  s8 s;
  do
  {
    r = func_80127000(&arg0, &arg2);
    if (0.0f < r)
    {
      s = 1;
    }
    if (r == 0.0f)
    {
      s = -1;
    }
  }
  while (0);
  if (r < 0.0f)
  {
    s = -1;
  }
  return s;
}

