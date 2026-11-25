inline static int inline_fn(int arg0)
{
  return arg0 | 1;
}

inline static int inline_fn2(s32 arg0, int arg1)
{
  return (arg0 & arg1) << 0xE;
}

void func_801CAB1C(void **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, u32 arg7)
{
  unsigned temp_t0;
  void *temp_v1;
  void *temp_v1_3;
  void *temp_v1_4;
 do { temp_v1 = *arg0; do { *((s32 *) (((char *) temp_v1) + 0)) = 0xBA001402; *((s32 *) (((char *) temp_v1) + 4)) = 0x300000; } while (0); *arg0 = temp_v1 + 8; } while (0);
  do
  {
    {
      temp_v1 = *arg0;
      *((s32 *) (((char *) temp_v1) + 0)) = 0xF7000000;
      *arg0 = temp_v1 + 8;
      *((s32 *) (((char *) temp_v1) + 4)) = (s32) (inline_fn(inline_fn((((arg5 << 8) & 0xF800) | ((arg6 * 8) & 0x7C0)) | ((arg7 >> 2) & 0x3E)) << 0x10) | ((((arg5 << 8) & 0xF800) | ((arg6 * 8) & 0x7C0)) | ((arg7 >> 2) & 0x3E)));
      *arg0 += 8;
    }
    do
    {
      *((s32 *) (((char *) (*arg0)) + 0)) = (s32) ((((arg4 & 0x3FF) * 4) | 0xF6000000) | inline_fn2(arg3, 0x3FF));
      *((s32 *) (((char *) (*arg0)) + 4)) = (s32) (((arg1 & 0x3FF) << 0xE) | ((arg2 & 0x3FF) * 4));
    }
    while (0);
    temp_v1_4 = *arg0;
    *arg0 = temp_v1_4 + 8;
    *((s32 *) (((char *) temp_v1_4) + 0)) = 0xE7000000;
    *((s32 *) (((char *) temp_v1_4) + 4)) = 0;
  }
  while (0);
}
