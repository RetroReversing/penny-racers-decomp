#include "common.h"

/* Partial candidate from function #273520 in project #72; rechecked locally. */
s32 __osContDataCrc(u8 *p)
{
  u8 ret = 0;
  s32 i, j;
  u8 mask;
  for (i = 0; i < 33; i++)
  {
    for (j = 7; j >= 0; j--)
    {
      mask = (ret & 0x80) ? 0x85 : 0;
      ret <<= 1;
      if (i != 32)
      {
        ret |= (*p >> j) & 1;
      }
      ret ^= mask;
    }
    p++;
  }
  return ret & 0xFF;
}
