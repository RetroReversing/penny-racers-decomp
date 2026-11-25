extern u8 D_8018D3A0[];
extern u8 D_8018D3A4[];
extern u8 D_8018D3B0[];
extern u8 D_8018D3B4[];
extern unsigned long D_8018D3B8[];
extern u8 D_8018D3BC[];
inline static int inline_fn(s32 arg0)
{
  return (*((volatile s32 *) (D_8018D3BC + ((arg0 & 0xFF) << 5)))) & 0x4000;
}

inline static volatile s32 *inline_fn2(u8 *arg0)
{
  return (volatile s32 *) arg0;
}

s32 func_8014BB30(volatile unsigned long arg0)
{
  u8 *__base_D_8018D3A4;
  short var_a1 = 0;
  if ((*((volatile s32 *) (D_8018D3A0 + ((arg0 & 0xFF) << 5)))) & 0x2000)
  {
    do
    {
      if (var_a1 || arg0)
      {
        var_a1 = 0x800;
      }
      else
      {
        var_a1 = 0x800;
      }
    }
    while (0);
  }
  __base_D_8018D3A4 = D_8018D3A4;
  if ((*inline_fn2(__base_D_8018D3A4 - (-((arg0 & 0xFF) << 5)))) & 0x200000)
  {
    var_a1 |= 0x1;
  }
  if ((*((volatile s32 *) (__base_D_8018D3A4 + ((arg0 & 0xFF) << 5)))) & 0x400000)
  {
    var_a1 |= 0x2;
  }
  if ((*((volatile s32 *) (__base_D_8018D3A4 + ((arg0 & 0xFF) << 5)))) & 0x800000)
  {
    var_a1 |= 0x4;
  }
  if ((*((volatile s32 *) (__base_D_8018D3A4 + ((arg0 & 0xFF) << 5)))) & 0x1000000)
  {
    var_a1 |= 0x8;
  }
  if ((*((volatile s32 *) (D_8018D3B0 + ((arg0 & 0xFF) << 5)))) & 0x200)
  {
    var_a1 |= 0x10;
  }
  if ((*((volatile s32 *) (D_8018D3B4 + ((arg0 & 0xFF) << 5)))) & 0x40)
  {
    var_a1 |= 0x20;
  }
  if ((*((volatile s32 *) (D_8018D3B4 + ((arg0 & 0xFF) << 5)))) & 0x80)
  {
    var_a1 |= 0x40;
  }
  if ((*((volatile s32 *) (D_8018D3B8 + ((arg0 & 0xFF) << 5)))) & 0x40000)
  {
    var_a1 |= 0x80;
  }
  if ((*((volatile s32 *) (D_8018D3B8 + ((arg0 & 0xFF) << 5)))) & 0x80000)
  {
    var_a1 |= 0x100;
  }
  if ((*((volatile s32 *) (D_8018D3B8 + ((arg0 & 0xFF) << 5)))) & 0x100000)
  {
    var_a1 |= 0x200;
  }
  if (inline_fn(arg0))
  {
    var_a1 |= 0x400;
  }
  return var_a1 & 0xFFFF;
}

