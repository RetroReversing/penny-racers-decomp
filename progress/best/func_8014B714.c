extern void func_80149CC4(s32, s32, void *, void *);
extern u8 D_80189B38[];
extern u8 D_8018D3A0[];
extern u8 D_8021E22F[];
extern u8 D_8021F048[];
extern u8 D_8021F270[];
s32 func_8014B714(s32 arg0)
{
  s32 i;
  s32 __repair_phase_i;
  u8 *dst;
  u32 idx = arg0 & 0xFF;
  s32 ret = 0xFF;
  if (idx < 4)
  {
    ret = 0;
    i = 0;
    __repair_rows:
    {
      __repair_phase_i = 0;
      D_8021F048[(idx * 0xE) + i] = D_80189B38[i + 4];
      do
      {
        *((u16 *) (((D_8021F270 + (idx * 0xE0)) + (i * 0x10)) + (__repair_phase_i * 2))) = *((u16 *) (((D_80189B38 + (i * 0x10)) + 0x1C) + (__repair_phase_i * 2)));
        __repair_phase_i += 1;
      }
      while ((__repair_phase_i - 1) < (8 - 1));
      do
      {
        do
        {
          do
          {
            i++;
          }
          while (0);
        }
        while (0);
      }
      while (0);
    }

    if (i < 0xE)
    {
      goto __repair_rows;
    }
    dst = D_8018D3A0 + (idx * 0x20);
    __repair_phase_i = 0;
    do {
    {
      do
      {
        *((s32 *) (dst + (__repair_phase_i * 4))) = *((s32 *) ((D_80189B38 + (__repair_phase_i * 4)) + 0x11C)); D_8021E22F[(__repair_phase_i * 0x22) + ((arg0 & 0xFF) * 0x110)] = D_80189B38[__repair_phase_i + 0x14];
      }
      while (0);
      ++__repair_phase_i;
    }

    } while (__repair_phase_i < 8);
    func_80149CC4(idx, 1, dst, D_8021F270 + (idx * 0xE0));
  }
  return ret;
}

