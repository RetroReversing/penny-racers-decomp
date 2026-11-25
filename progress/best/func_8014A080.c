inline static int inline_fn(s32 arg0, int arg1)
{
  return arg0 & arg1;
}

s32 func_8014A080(s32 v, s32 n, s32 count, s32 dir)
{
  s32 high;
  s32 keep;
  s32 bitmask;
  s32 bit;
  s16 limit;
  u8 unused[16];
  if (keep)
  {
    n &= 31;
  }
  else
  {
    n &= 31;
  }
  do
  {
    bitmask = 1 << n;
  }
  while (0);
  high = (-2) << n; keep = inline_fn(v, high);
  if ((dir & 255) == 1)
  {
    limit = count & 255;
    n = 0;
    if (limit > 0)
    {
      count = ~high;
      do
      {
        bit = inline_fn(v, bitmask) != 0; v = inline_fn((v << 1) | bit, count) | keep;
        n++;
      }
      while (n < limit);
    }
    return v;
  }
  limit = count & 255;
  n = 0;
  if (limit > 0)
  {
    count = ~high;
    do
    {
      bit = inline_fn(-inline_fn(v, 1), bitmask); v = ((((u32) (v & count)) >> 1) | bit) | keep;
 do { n++; } while (0);
    }
    while (n < limit);
  }
  return v;
}
