extern u32 D_8022A720;
extern u32 D_8022E620;
inline static int inline_fn(u16 arg0, int arg1)
{
  return arg0 + arg1;
}

void func_8022976C(u16 grp, u16 lo, u16 hi)
{
  f32 *keys = (f32 *) (((u8 *) (&D_8022E620)) + (grp * 0x18));
  u8 *vals = ((u8 *) (&D_8022A720)) + (grp * 6);
  f32 pivot = ((f32 *) (((u8 *) (&D_8022E620)) + (grp * 0x18)))[(u16) (inline_fn(lo, hi) >> 1)];
  u16 i = lo;
  u16 j = hi;
  u8 tv;
  f32 tk;
  for (;;)
  {
    while (((f32 *) (((u8 *) (&D_8022E620)) + (grp * 0x18)))[i] < pivot)
    {
      i++;
    }

    while (pivot < ((f32 *) (((u8 *) (&D_8022E620)) + (grp * 0x18)))[j])
    {
      j--;
    }

    if (!(i < j))
    {
      break;
    }
    tv = vals[i];
    vals[i] = vals[j];
    vals[j] = tv;
    tk = ((f32 *) (((u8 *) (&D_8022E620)) + (grp * 0x18)))[i];
    ((f32 *) (((u8 *) (&D_8022E620)) + (grp * 0x18)))[i] = ((f32 *) (((u8 *) (&D_8022E620)) + (grp * 0x18)))[j];
    ((f32 *) (((u8 *) (&D_8022E620)) + (grp * 0x18)))[j] = tk;
    i++;
    j--;
  }

  if (lo < (i - 1))
  {
    do
    {
      func_8022976C(grp, lo, i - 1);
    }
    while (0);
  }
  if (inline_fn(j, 1) < hi)
  {
    func_8022976C(grp, j + 1, hi);
  }
}

