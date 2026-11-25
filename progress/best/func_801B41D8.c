extern u8 D_8011F2F0[];
extern u8 D_8011F2FC[];
inline static int inline_fn(u16 arg0)
{
  return arg0 * 100;
}

inline static int inline_fn2(int arg0, int arg1)
{
  return D_8011F2F0[arg0] + arg1;
}

inline static int inline_fn23(u16 arg0)
{
  return arg0 * 100;
}

void func_801B41D8(unsigned char arg0)
{
  __repair_rows:
  {
    do
    {
      do
      {
        if (D_8011F2F0[(u16) inline_fn23(arg0)] < 0x1E)
        {
          D_8011F2FC[inline_fn23(arg0)] -= 6;
        }
        else
          if (((u8) (D_8011F2F0[(unsigned char) inline_fn23(arg0)] - 0x1E)) < 0x1E)
        {
          D_8011F2FC[arg0] = D_8011F2FC[arg0] + 6;
        }
        D_8011F2F0[(u16) inline_fn23(arg0)] = inline_fn2(inline_fn23(arg0), 1);
      }
      while (0);
    }
    while (0);
  }

  if (0)
  {
    goto __repair_rows;
  }
  if (D_8011F2F0[inline_fn23(arg0)] == 0x3C)
  {
    D_8011F2F0[inline_fn(arg0)] = 0;
  }
}

