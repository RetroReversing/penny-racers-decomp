s32 __osContRamRead(void *, s32, s32, u8 *);
s32 __osPfsSelectBank(void *, s32);
volatile int __osSumcalc(u8 *, s32);
s32 __osBlockSum(void *arg0, s32 arg1, u16 *arg2, s8 arg3)
{
  u8 sp10[32];
  s32 ret;
  s32 i;
  if (1)
  {
    ((s8 *) arg0)[0x65] = arg3;
    ret = __osPfsSelectBank(arg0, 0);
    if (ret != 0)
    {
      return ret;
    }
  }
  for (i = 0; i < 8; i++)
  {
    ret = __osContRamRead(arg0, (((u8) arg1) * 8) + i, 0, sp10);
    if (ret != 0)
    {
      ((s8 *) arg0)[0x65] = 0;
      __osPfsSelectBank(arg0, 0);
      return ret;
    }
    *arg2 += __osSumcalc(sp10, 0x20);
  }

  ((s8 *) arg0)[0x65] = 0;
  return __osPfsSelectBank(arg0, 0);
}

