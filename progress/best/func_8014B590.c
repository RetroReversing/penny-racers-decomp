inline static int __repair_inline(s32 a, s32 b)
{
  return a > b;
}

extern unsigned char D_80189B38[];
extern s32 D_8018D3A0;
extern u8 D_8021E22F[];
extern u8 D_8021F048[];
extern u8 D_8021F270[];
extern u8 D_80183750[];
s32 func_8003DE60();
inline static int inline_fn(s32 arg0)
{
  return arg0 & 0xFF;
}

s32 func_8014B590(volatile int arg0)
{
  s32 i;
  char var_s0 = 0xFF;
  char sum;
  if (((u32) inline_fn(arg0)) < 4U)
  {
    var_s0 = 0;
    for (i = 0; __repair_inline(0xE, i); i++)
    {
    }

    sum = 0;
    for (i = 4; __repair_inline(0x140, i); i++)
    {
      sum += ((s32 *) D_80189B38)[(unsigned char) i];
    }

    D_80189B38[0] = sum;
    func_8003DE60(D_80183750, sum, i);
  }
  return inline_fn(var_s0);
}

