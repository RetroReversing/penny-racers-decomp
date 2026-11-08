/* Partial candidate from function #273520 in project #72; rechecked locally. */
s32 __osContDataCrc(u8 *p)
{
  s32 v1 = 0;
  s32 t0 = 0;
  s32 t2 = -123;
  s32 t1 = 32;
  s32 a1;
  s32 v0;
  s32 a2;
  s32 a3;
  do
  {
    a1 = 7;
    a2 = v1 & 128;
    do
    {
      v0 = (v1 = a2);
      a2 = v1 << 1;
      v0 = v0 != 0;
      v0 = -v0;
      a3 = v0 & t2;
      if (t0 != t1)
      {
        v0 = *p;
        v0 >>= a1;
        v0 &= 1;
        v1 = a2 | v0;
      }
      a1--;
      v1 ^= a3;
    }
    while (a1 >= 0);
    t0++;
    p++;
  }
  while (t0 < 33);
  return v1 & 255;
}

