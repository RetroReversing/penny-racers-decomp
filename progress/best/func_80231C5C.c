extern volatile unsigned short func_800DE41C(s32, s32, s32, s32, s32, s32, s32, void *, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern u8 D_8011F350[];
extern u16 D_8018BC3C;
extern u8 D_801CE928[];
extern volatile char D_801CEC2C[];
extern u8 D_801D59A0;
inline static int inline_fn()
{
  return D_8018BC3C * 100;
}

inline static unsigned char *inline_fn2(unsigned char *arg0)
{
  return arg0 + 6;
}

void func_80231C5C(void)
{
  u16 *__base_D_8018BC3C;
  unsigned char *__repair_loop_constant;
  do
  {
    do
    {
      __base_D_8018BC3C = &D_8018BC3C;
      *__base_D_8018BC3C = func_800DE41C(0, 0, 3, 0, 0xA0, 0xFF, 0, D_801CE928, D_801CEC2C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
      *((u8 **) (D_8011F350 + inline_fn())) = &D_801D59A0;
      do
      {
        __repair_loop_constant = D_8011F350;
      }
      while (0);
      if (!((*__base_D_8018BC3C) || D_801CE928))
      {
        *((u16 *) ((*((u8 **) (__repair_loop_constant + inline_fn()))) + 2)) = 0x46; D_801D59A0 = 0;
        *((u16 *) ((*((u8 **) (__repair_loop_constant + inline_fn()))) + 4)) = 0;
        *((u8 *) ((*((u8 **) inline_fn2(__repair_loop_constant))) + inline_fn())) = 0xFF;
        *((u8 *) ((*((u8 **) (__repair_loop_constant + inline_fn()))) + 7)) = 0xFF;
        *((u8 *) ((*((u8 **) (__repair_loop_constant + inline_fn()))) + 8)) = 0xFF;
        *((u8 *) ((*((u8 **) (__repair_loop_constant + inline_fn()))) + 9)) = 0xFF;
        *((u16 *) ((*((u8 **) (__repair_loop_constant + inline_fn()))) + 10)) = 0;
        *((u16 *) ((*((u8 **) (__repair_loop_constant + inline_fn()))) + 12)) = 0;
        *((u16 *) ((*((u8 **) (__repair_loop_constant + inline_fn()))) + 14)) = 0x140;
        *((u16 *) ((*((u8 **) (__repair_loop_constant + inline_fn()))) + 16)) = 0xF0;
      }
      else
      {
        *((u16 *) ((*((u8 **) (__repair_loop_constant - (-inline_fn())))) + 2)) = 0x46; D_801D59A0 = 0;
        *((u16 *) ((*((u8 **) (__repair_loop_constant + inline_fn()))) + 4)) = 0;
        *((u8 *) ((*((u8 **) inline_fn2(__repair_loop_constant))) + inline_fn())) = 0xFF;
        *((u8 *) ((*((u8 **) (__repair_loop_constant + inline_fn()))) + 7)) = 0xFF;
        *((u8 *) ((*((u8 **) (__repair_loop_constant + inline_fn()))) + 8)) = 0xFF;
        do
        {
          *((u8 *) ((*((u8 **) (__repair_loop_constant + inline_fn()))) + 9)) = 0xFF;
          *((u16 *) ((*((u8 **) (__repair_loop_constant + ((unsigned char) inline_fn())))) + 10)) = 0;
          *((u16 *) ((*((u8 **) (__repair_loop_constant - (-inline_fn())))) + 12)) = 0;
          *((u16 *) ((*((u8 **) (__repair_loop_constant + inline_fn()))) + 14)) = 0x140;
          *((u16 *) ((*((u8 **) (__repair_loop_constant + inline_fn()))) + 16)) = 0xF0;
        }
        while (0);
      }
    }
    while (0);
  }
  while (0);
}

