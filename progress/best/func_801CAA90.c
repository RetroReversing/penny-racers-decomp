inline static int inline_fn(int arg0, int arg1)
{
  return arg0 | arg1;
}

void func_801CAA90(void **arg0, unsigned short arg1, s32 arg2, s32 arg3, unsigned short arg4)
{
  void *temp_v1_2;
  void *__repair_phase_temp_v1_2;
  void *temp_v1_3;
  arg1 &= 0x3FF;
  do
  {
    do
    {
      if (1)
      {
        arg4 &= 0x3FF; temp_v1_2 = *arg0;
        *((s32 *) (((char *) temp_v1_2) + 0)) = 0xBA001402;
      }
      *arg0 = temp_v1_2 + 8;
    }
    while (0);
    *((s32 *) (((char *) temp_v1_2) + 4)) = 0x300000; __repair_phase_temp_v1_2 = *arg0;
  }
  while (0);
  do
  {
    do
    {
      if (1)
      {
        *((s32 *) (((char *) __repair_phase_temp_v1_2) + 0)) = 0xF7000000;
      }
      *arg0 = __repair_phase_temp_v1_2 + 8;
      *((s32 *) (((char *) __repair_phase_temp_v1_2) + 4)) = 0x10001;
      *arg0 = (*arg0) + 8;
      *((s32 *) (((char *) (*arg0)) + 0)) = (s32) inline_fn((arg3 & 0x3FF) << 0xE, inline_fn((2 * arg4) * 2, 0xF6000000));
    }
    while (0);
    *((s32 *) (((char *) (*arg0)) + 4)) = (s32) inline_fn(arg1 << 0xE, (0x3FF & ((u32) arg2)) * 4);
  }
  while (0);
}

