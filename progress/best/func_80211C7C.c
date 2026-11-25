extern u8 D_8021B650[];
extern u8 D_8021B651[];
extern u8 D_8021B652[];
extern u8 D_8021B653[];
extern u8 D_8021F264[];
inline static int inline_fn(u32 arg0, int arg1)
{
  return D_8021B651[arg0] - arg1;
}

inline static int inline_fn2(s32 arg0, s32 arg1)
{
  return (-(arg0 < 4)) & arg1;
}

inline static int inline_fn23(u32 arg0)
{
  return arg0 * 4;
}

inline static u8 inline_fn234(u8 *arg0, s32 arg1)
{
  return arg0[arg1];
}

void func_80211C7C(s32 arg0)
{
  u8 *p;
  u32 n;
  u32 frac;
  s32 j;
  u32 i;
  p = D_8021F264;
  n = arg0 & 0xFF;
  frac = (p[0] % n) & 0xFF;
  do
  {
    i = (p[0] / n) & 0xFF;
  }
  while (0);
  j = i + 1;
  j = inline_fn23(inline_fn2(j, j));
  do
  {
    i = i * 4;
    do
    {
      D_8021F264[-4] = (s8) (D_8021B650[i] - (((s32) (frac * (D_8021B650[i] - D_8021B650[j]))) / ((s32) n)));
      p[-3] = (s8) inline_fn((short) i, ((s32) (frac * inline_fn(i, D_8021B651[j]))) / ((s32) (arg0 & 0xFF)));
    }
    while (0);
    p[-2] = (s8) (D_8021B652[i] - (((s32) (frac * (D_8021B652[i] - inline_fn234(D_8021B652, j)))) / ((s32) (arg0 & 0xFF)))); D_8021F264[-1] = (s8) (D_8021B653[i & 0xFF] - (((s32) (frac * (D_8021B653[i] - D_8021B653[j]))) / ((s32) (arg0 & 0xFF))));
  }
  while (0);
  p[0] += 1;
  if ((p[0] & 0xFF) >= inline_fn23(n))
  {
    p[0] = 0;
  }
}

