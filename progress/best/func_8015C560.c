#define GW(w0, w1) do { u32 *p_ = (u32 *)*arg0; *arg0 = (void *)((u8 *)p_ + 8); p_[0] = (w0); p_[1] = (u32)(w1); } while (0)
#define OFF ((arg1 & 0xFFFF) * 100)
extern s32 D_80046834;
extern u8 D_8011F2F0[];
extern u8 D_8011F2FC[];
extern u8 D_8011F32E[];
extern f32 D_8011F334;
extern u8 D_80182E20[];
extern f64 D_80183968;
extern u8 D_80189970[];
extern long long D_80189DC8[];
extern f32 D_8022AFD4;
inline static unsigned long long inline_fn()
{
  return (unsigned long long) 0x0400103F;
}

void func_8015C560(void **arg0, s32 arg1)
{
  u8 *dst;
  s32 t5;
  s32 i;
  f32 ft0;
  if ((*((u16 *) (D_8011F32E + OFF))) != 0)
  {
    u8 *src;
    t5 = D_8011F2F0[OFF];
    ft0 = *((f32 *) (((u8 *) (&D_8022AFD4)) + ((t5 & 0xFF) * 0x8F0)));
    do
    {
      if ((!(D_80183968 < ((f64) ft0))) || (((f64) (*((f32 *) (((u8 *) (&D_8011F334)) + OFF)))) != 0.0))
      {
        GW(0xFA000000, D_8011F2FC[(unsigned short) OFF]);
        GW(0xFD900000, (u32) D_80182E20);
        GW(0xF5900000, 0x07080200);
        GW(0xE6000000, 0);
        GW(0xF3000000, 0x07007400);
        GW(0xE7000000, 0);
        GW(0xF5800400, 0x00080200);
        GW(0xF2000000, 0x0007C000);
        src = D_80189970 + (t5 << 6);
        for (i = 0; i < 4; i++)
        {
          if (dst)
          {
            dst = (((D_80046834 * 0x1C0) + (t5 << 6)) + (i * 16)) + D_80189DC8;
            ((u32 *) dst)[0] = ((u32 *) (src + (i * 16)))[0];
            ((u32 *) dst)[1] = ((u32 *) (src + (i * 16)))[1];
            ((u32 *) dst)[2] = ((u32 *) (src + (i * 16)))[2];
            ((u32 *) dst)[3] = ((u32 *) (src + (i * 16)))[3];
          }
          else
          {
            dst = (((D_80046834 * 0x1C0) + (t5 << 6)) + (i * 16)) + D_80189DC8;
            ((u32 *) dst)[0] = ((u32 *) (src + (i * 16)))[0];
            ((u32 *) dst)[1] = ((u32 *) (src + (i * 16)))[1];
            ((u32 *) dst)[2] = ((u32 *) (src + (i * 16)))[2];
            ((u32 *) dst)[3] = ((u32 *) (src + (i * 16)))[3];
          }
        }

        GW(inline_fn(), (u32) ((D_80189DC8 + (D_80046834 * 0x1C0)) + (t5 << 6)));
        if (0.0f <= ft0)
        {
          GW(0xB1000204, 0x20604);
        }
        else
        {
          GW(0xB1000402, 0x20406);
        }
      }
    }
    while (0);
  }
}

