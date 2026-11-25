extern void func_80149CC4(s32, s32);
extern u8 D_80189B38[];
extern u8 D_8018D3A0[];
extern u8 D_8021E22F[];
extern int D_8021F048[];
extern u8 D_8021F270[];
inline static int inline_fn(s32 arg0, s8 arg1)
{
  return (arg0 * 0x22) + ((arg1 & 0xFF) * 0x110);
}

s32 func_8014B714(s8 arg0)
{
    u8 *__base_D_8018D3A0;
  u8 *__base_D_80189B38;
  s32 __index_D_80189B38;
  
  s32 __repair_phase_i;
  u8 *dst;
  u32 idx = arg0 & 0xFF;
  s32 ret = 0xFF;
  if (idx < 4)
  {
    ret = 0;
    __index_D_80189B38 = 0;
    __repair_rows:
    {
      __repair_phase_i = 0;
      D_8021F048[((arg0 & 0xFF) * 0xE) + __index_D_80189B38] = D_80189B38[__index_D_80189B38 + 4];
      do
      {
        *((u16 *) (((D_8021F270 + (idx * 0xE0)) + (__index_D_80189B38 * 0x10)) + (__repair_phase_i * 2))) = *((u16 *) (((D_80189B38 + (__index_D_80189B38 * 0x10)) + 0x1C) + (__repair_phase_i * 2)));
        __repair_phase_i += 1;
      }
      while ((__repair_phase_i - 1) < (8 - 1));
      do
      {
        do
        {
          do
          {
            __index_D_80189B38++;
          }
          while (0);
        }
        while (0);
      }
      while (0);
    }

    if (__index_D_80189B38 < 0xE)
    {
      goto __repair_rows;
    }
    __base_D_8018D3A0 = D_8018D3A0;
    dst = __base_D_8018D3A0 + ((arg0 & 0xFF) * 0x20);
    __repair_phase_i = 0;
    do
    {
      {
        __index_D_80189B38 = __repair_phase_i * 4;
        do
        {
          *((s32 *) (dst + (__repair_phase_i * 4))) = *((s32 *) (((__base_D_80189B38 = D_80189B38) + __index_D_80189B38) + 0x11C)); D_8021E22F[inline_fn(__repair_phase_i, arg0)] = D_80189B38[__repair_phase_i + 0x14];
        }
        while (0);
        ++__repair_phase_i;
      }
    }
    while ((__index_D_80189B38 = __repair_phase_i) < 8);
    func_80149CC4((arg0 & 0xFF), 1);
  }
  return ret;
}

