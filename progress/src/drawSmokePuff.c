extern u8 racerTimerFlags[];
extern u8 lastMaterial;
inline static int inline_fn(u8 arg0, int arg1, int arg2, u8 arg3)
{
  return (((u32) ((u8) (~arg0))) << arg1) | (arg2 | arg3);
}

void drawSmokePuff(u32 **arg0, s32 arg1)
{
  u8 b;
  u32 *temp;
  temp = *arg0;
  *arg0 = temp + 2;
  temp[0] = 0xFA000000;
  b = racerTimerFlags[(arg1 & 0xFFFF) * 100];
  temp[1] = inline_fn(b, 16, 0xFF000000, b);
  lastMaterial = 0xFF;
}

