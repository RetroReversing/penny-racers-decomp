extern f32 D_800E1EE0[];
inline static int inline_fn(int arg0, s32 arg1)
{
  return arg0 < arg1;
}

void func_800E08B4(s32 arg0, s32 arg1, u16 *arg2)
{
  s32 i;
  s32 j;
  f32 pivot;
  u16 tmp;
  pivot = D_800E1EE0[arg2[(arg0 + arg1) / 2]];
  i = arg0;
  j = arg1;
  for (;;)
  {
    while (inline_fn(D_800E1EE0[arg2[i]], pivot))
    {
      i++;
    }

    while (inline_fn(pivot, D_800E1EE0[arg2[j]]))
    {
      j--;
    }

    if (inline_fn(i, j))
    {
      tmp = arg2[i];
      arg2[i] = arg2[j];
      arg2[j] = tmp;
      do
      {
        i++;
      }
      while (0);
      j--;
    }
    else
    {
      break;
    }
  }

  if (inline_fn(arg0, i - 1))
  {
    func_800E08B4(arg0, i - 1, arg2);
  }
  if (inline_fn(j + 1, arg1))
  {
    func_800E08B4(j + 1, arg1, arg2);
  }
}

