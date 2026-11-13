s32 __osContDataCrc(s32, s32, u8 *, u8 *);
s32 __osPackRamWriteData(s32, s32, s32);
s32 __osPfsGetStatus(s32, s32);
s32 func_8003F350(s32, s32);
void func_8003F464(u32);
void func_8003F4D0(void);
s32 osRecvMesg(s32, s32, s32);
extern u8 D_80092C04;
extern s32 D_800DD3E0;
inline static int inline_fn(s32 arg0, u32 arg1)
{
  return (arg0 != 1) & (arg1 < 7U);
}

u32 __osContRamWrite(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
  s32 buf[8];
  s32 *src;
  s32 *dst;
  s32 tmp;
  s32 retries;
  u32 var_s0;
  u32 var_v0 = 0;
  u32 addr = arg2 & 0xFFFF;
  s32 i;
  retries = 2;
  if ((!inline_fn(arg4, addr)) || (addr == 0))
  {
    func_8003F464(addr);
    D_80092C04 = 3;
    __repair_rows:
    {
      __osPackRamWriteData(arg1, arg2 & 0xFFFF, arg3);
    }

    if (0)
    {
      goto __repair_rows;
    }
    func_8003F350(1, 0x800DD3E0);
    osRecvMesg(arg0, 0, 1);
    loop_3:
    func_8003F350(0, 0x800DD3E0);

    osRecvMesg(arg0, 0, 1);
    src = &D_800DD3E0;
    for (i = 0; i < arg1; i++)
    {
      src++;
    }

    dst = buf;
    for (i = 0; i < 8; i++)
    {
      dst[i] = src[i];
    }

    var_s0 = (((u8 *) buf)[2] & 0xC0) >> 4;
    if (var_s0 != 0)
    {
      var_s0 = 1;
    }
    else
      if ((__osContDataCrc(arg3, tmp, (u8 *) src, (u8 *) buf) & 0xFF) != ((u8 *) buf)[0x1C])
    {
      var_s0 = __osPfsGetStatus(arg0, arg1);
      if (var_s0 == 0)
      {
        var_s0 = 4;
      }
    }
    if (var_s0 == 4)
    {
      retries--;
      if (retries >= 0)
      {
        goto loop_3;
      }
    }
    func_8003F4D0();
    var_v0 = var_s0;
  }
  return var_v0;
}

