extern f32 D_8022E620[][6];
extern u8 D_8022A720[][6];

void func_8022976C(u16 group, u16 lo, u16 hi)
{
  f32 pivot;
  u16 i;
  u16 j;
  u8 tmp;
  f32 ftmp;

  pivot = D_8022E620[group][(lo + hi) >> 1];
  i = lo;
  j = hi;
  while (1)
  {
    while (D_8022E620[group][i] < pivot)
    {
      i++;
    }
    while (pivot < D_8022E620[group][j])
    {
      j--;
    }
    if (i >= j)
    {
      break;
    }
    tmp = D_8022A720[group][i];
    D_8022A720[group][i] = D_8022A720[group][j];
    D_8022A720[group][j] = tmp;
    ftmp = D_8022E620[group][i];
    D_8022E620[group][i] = D_8022E620[group][j];
    D_8022E620[group][j] = ftmp;
    i++;
    j--;
  }
  if (lo < (i - 1))
  {
    func_8022976C(group, lo, i - 1);
  }
  if ((j + 1) < hi)
  {
    func_8022976C(group, j + 1, hi);
  }
}
