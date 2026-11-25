extern u8 D_8011F2FA[];
inline static u8 inline_fn(u16 *arg0, int arg1)
{
  return D_8011F2FA[arg0[arg1] * 100];
}

void func_800E0A00(s32 arg0_in, s32 arg1_in, u16 *arg2)
{
  unsigned short arg0;
  s32 arg1;
  unsigned short i;
  s32 j;
  u8 pivot;
  u16 tmp;
  do
  {
    arg1 = arg1_in; arg0 = arg0_in;
  }
  while (0);
  do
  {
    pivot = inline_fn(arg2, (arg0 + arg1) / 2);
  }
  while (0);
  i = arg0;
  j = arg1;
  for (;;)
  {
    while (pivot > inline_fn(arg2, i))
    {
      {
        i++;
      }
    }

    while (pivot < inline_fn(arg2, j))
    {
      if (j)
      {
        j--;
      }
      else
      {
 do { j--; } while (0);
      }
    }

    if (i < j)
    {
      tmp = arg2[i];
      arg2[j] = tmp;
      arg2[i] = arg2[j];
      {
        {
          do
          {
            i++;
          }
          while (0);
        }
      }
      j -= 1;
    }
    else
      if (j)
    {
      break;
    }
    else
    {
      break;
    }
  }

  if ((arg0 - 1) < ((i - 1) - 1))
  {
    func_800E0A00(arg0, i - 1, arg2);
  }
  if ((j + 1) < arg1)
  {
    func_800E0A00(j + 1, arg1, arg2);
  }
}
