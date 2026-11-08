/* Partial candidate from function #273519 in project #72; rechecked locally. */
s32 __osContAddressCrc(s32 a0)
{
  s32 v1 = 0;
  unsigned short a2;
  s32 v0;
  s32 a1 = (double) 0xF;
  do
  {
    v0 = v1 & 0x10;
    v0 = v0 != 0;
    a2 = -v0;
    a2 &= 0x15;
    v1 <<= 1;
    v1 &= 0xFF;
    if (a0 & 0x400)
    {
      v1 |= 1;
    }
    a0 <<= 1;
    v0 = v1 ^ a2;
    a1--;
    v1 = v0;
  }
  while (a1 >= 0);
  a1 = v0 & 0x1F;
  return a1;
}

