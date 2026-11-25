inline static int inline_fn(int arg0)
{
  return arg0;
}

inline static int inline_fn2(s32 arg0)
{
  return arg0 + 0xE;
}

inline static int inline_fn23(int arg0, int arg1)
{
  return arg0 << arg1;
}

void func_801CB4E8(void **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5)
{
  s32 temp_a1;
  s32 temp_a2;
  s32 temp_a3;
  s32 temp_a3_2;
  s32 temp_t0;
  s32 temp_t2;
  s32 temp_t3;
  s32 temp_t4;
  void *temp_t1;
  void *temp_t1_10;
  void *temp_t1_11;
  void *temp_t1_13;
  void *temp_t1_14;
  void *temp_t1_15;
  void *temp_t1_16;
  void *temp_t1_17;
  void *temp_t1_2;
  void *temp_t1_3;
  void *temp_t1_4;
  void *temp_t1_5;
  void *temp_t1_6;
  void *temp_t1_7;
  void *temp_t1_8;
  void *temp_t1_9;
  arg3 &= 0xFFFF;
  do
  {
    temp_t1 = *arg0; temp_a3 = arg3 & 0xFFFF; temp_t1_2 = temp_t1 + 8;
    *((s32 *) (((char *) temp_t1) + 0)) = 0xFD100000;
    *((s32 *) (((char *) temp_t1) + 4)) = arg5; temp_t1_3 = temp_t1_2 + 8;
    *((s32 *) (((char *) temp_t1) + 8)) = 0xE8000000;
    *((s32 *) (((char *) temp_t1_2) + 4)) = 0; temp_t1_4 = temp_t1_3 + 8;
    *((s32 *) (((char *) temp_t1_2) + 8)) = 0xF5000100;
    *((s32 *) (((char *) temp_t1_3) + 4)) = 0x07000000; temp_t1_5 = temp_t1_4 + 8;
    *((s32 *) (((char *) temp_t1_3) + 8)) = 0xE6000000;
    *((s32 *) (((char *) temp_t1_4) + 4)) = 0; temp_t1_6 = temp_t1_5 + 8;
    *((s32 *) (((char *) temp_t1_4) + 8)) = 0xF0000000;
    *((s32 *) (((char *) temp_t1_5) + 4)) = 0x0703C000; temp_t1_7 = temp_t1_6 + 8;
    *((s32 *) (((char *) temp_t1_5) + 8)) = 0xE7000000;
    *((s32 *) (((char *) temp_t1_6) + 4)) = 0; temp_t1_8 = temp_t1_7 + 8;
    *((s32 *) (((char *) temp_t1_6) + 8)) = 0xFD48006F;
    *((s32 *) (((char *) temp_t1_7) + 4)) = arg4; temp_t1_9 = temp_t1_8 + 8;
    *((s32 *) (((char *) temp_t1_7) + 8)) = 0xF5480200;
    *((s32 *) (((char *) temp_t1_8) + 4)) = 0x07080200; temp_t1_10 = temp_t1_9 + 8;
    *((s32 *) (((char *) temp_t1_8) + 8)) = 0xE6000000;
    *((s32 *) (((char *) temp_t1_9) + 4)) = 0; temp_t1_11 = temp_t1_10 + 8; temp_t4 = ((temp_a3 & 0xF) * 0xE) & 0xFFFF; temp_a3 = temp_a3 & 0xFFF0; temp_t3 = (temp_a3 * 4) & 0xFFF;
    *((s32 *) (((char *) temp_t1_9) + 8)) = (s32) (inline_fn23((temp_t4 * 2) & 0xFFF, 0xC) | (temp_t3 | 0xF4000000)); temp_t2 = ((temp_a3 + 0xF) * 4) & 0xFFF; arg4 = temp_t4 + 0xD;
    *((s32 *) (((char *) temp_t1_10) + 4)) = (s32) (inline_fn23((arg4 * 2) & 0xFFF, 0xC) | (temp_t2 | 0x07000000)); temp_t1 = temp_t1_11 + 8;
    *((s32 *) (((char *) temp_t1_10) + 8)) = 0xE7000000;
    *((s32 *) (((char *) (temp_t1_10 + 8)) + 4)) = 0; temp_t1_13 = temp_t1 + 8;
    *((s32 *) (((char *) (temp_t1_10 + 8)) + 8)) = 0xF5400200;
    *((s32 *) (((char *) temp_t1) + 4)) = 0x80200; temp_t1_14 = temp_t1_13 + 8;
    *((s32 *) (((char *) temp_t1) + 8)) = (s32) (inline_fn23((temp_t4 * 4) & 0xFFF, 0xC) | (temp_t3 | 0xF2000000));
    *((s32 *) (((char *) temp_t1_13) + 4)) = (s32) (inline_fn23((arg4 * 4) & 0xFFF, 0xC) | temp_t2); temp_t1_15 = temp_t1_14 + 8; temp_a2 = arg1 & 0xFFFF; temp_t0 = arg2 & 0xFFFF;
    *((s32 *) (((char *) temp_t1_13) + 8)) = (s32) (inline_fn23((inline_fn2(temp_a2) * 4) & 0xFFF, 0xC) | (inline_fn((((arg2 & 0xFFFF) + 0x10) * 4) & 0xFFF) | 0xE4000000));
    *((s32 *) (((char *) temp_t1_14) + 4)) = (s32) (inline_fn23((temp_a2 * 4) & 0xFFF, (((((((0xC & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) & 0xFFFFFFFF) | (((arg2 & 0xFFFF) * 4) & 0xFFF)); temp_t1_16 = temp_t1_15 + 8;
    *((s32 *) (((char *) temp_t1_14) + 8)) = 0xB4000000;
    *((s32 *) (((char *) temp_t1_15) + 4)) = (s32) (inline_fn23(temp_t4, 0x15) | (inline_fn23(temp_a3, 5) & 0xFFFF)); temp_t1_17 = temp_t1_16 + 8;
    *((s32 *) (((char *) temp_t1_15) + 8)) = 0xB3000000;
  }
  while (0);
  if (temp_t4 || temp_t1_9)
  {
    *((s32 *) (((char *) temp_t1_16) + 4)) = 0x04000400;
    *((s32 *) (((char *) temp_t1_16) + 8)) = 0xE7000000;
    *((s32 *) (((char *) temp_t1_17) + 4)) = 0;
    *arg0 = temp_t1_17 + 8;
  }
  else
    if (temp_t1_14)
  {
    *((s32 *) (((char *) temp_t1_16) + 4)) = 0x04000400;
    *((s32 *) (((char *) temp_t1_16) + 8)) = 0xE7000000;
    *((s32 *) (((char *) temp_t1_17) + 4)) = 0;
    *arg0 = temp_t1_17 + 8;
  }
  else
  {
    *((s32 *) (((char *) temp_t1_16) + 4)) = 0x04000400;
    *((s32 *) (((char *) temp_t1_16) + 8)) = 0xE7000000;
    *((s32 *) (((char *) temp_t1_17) + 4)) = 0;
    *arg0 = temp_t1_17 + 8;
  }
}

