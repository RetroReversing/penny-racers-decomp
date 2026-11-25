inline static int inline_fn(s32 arg0)
{
  return ((arg0 + 8) * 4) & 0xFFF;
}

inline static void *inline_fn2(void *arg0, int arg1)
{
  return arg0 + arg1;
}

inline static int inline_fn23(s32 arg0)
{
  return inline_fn(arg0) << 0xC;
}

typedef struct 
{
  s32 v;
} Field_s32;
inline static int inline_fn234(s32 arg0)
{
  return arg0 | 0x07000000;
}

void func_801CA778(void **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, volatile s32 arg5)
{
  void *temp_t0_2;
  s32 temp_a1;
  s32 temp_a2;
  unsigned short temp_a3_2;
  s32 temp_t1;
  s32 temp_t2;
  s32 temp_t3;
  char temp_t5;
  u32 temp_a3;
  void *temp_t0;
  void *temp_t0_11;
  void *temp_t0_12;
  void *temp_t0_15;
  void *temp_t0_14;
  volatile unsigned char pad;
  void *temp_t0_17;
  void *temp_t0_3;
  void *temp_t0_4;
  void *temp_t0_6;
  void *temp_t0_7;
  void *temp_t0_8;
  void *temp_t0_9;
  temp_t0 = *arg0;
  temp_a3 = arg3 & 0xFFFF;
  temp_t0_2 = temp_t0 + 8;
  ((Field_s32 *) (((char *) temp_t0) + 0))->v = 0xFD100000;
  ((Field_s32 *) (((char *) temp_t0) + 4))->v = arg5 & 0xFFFF;
  temp_t0_3 = temp_t0_2 + 8;
  ((Field_s32 *) (((char *) temp_t0) + 8))->v = 0xE8000000;
  ((Field_s32 *) (((char *) (temp_t0 + 8)) + 4))->v = 0;
  do
  {
    ((Field_s32 *) (((char *) temp_t0_2) + 8))->v = 0xF5000100;
    do
    {
      ((Field_s32 *) (4 + ((char *) temp_t0_3)))->v = 0x07000000; temp_t0 = (temp_t0_3 + 8) + 8;
      *((s32 *) (((char *) (temp_t0_2 + 8)) + 8)) = 0xE6000000;
      ((Field_s32 *) (((char *) (temp_t0_3 + 8)) + 4))->v = 0; temp_t0_6 = temp_t0 + 8;
    }
    while (0);
    ((Field_s32 *) (((char *) (temp_t0_3 + 8)) + 8))->v = 0xF0000000;
    ((Field_s32 *) (((char *) temp_t0) + 4))->v = 0x0703C000;
    do
    {
      temp_t0_7 = temp_t0_6 + 8;
      ((Field_s32 *) (((char *) temp_t0) + 8))->v = 0xE7000000;
      ((Field_s32 *) (((char *) temp_t0_6) + 4))->v = 0; temp_t0_8 = temp_t0_7 + 8;
      ((Field_s32 *) (((char *) temp_t0_6) + 8))->v = 0xFD48003F;
    }
    while (0);
    ((Field_s32 *) (((char *) temp_t0_7) + 4))->v = arg4; temp_t0_9 = temp_t0_8 + 8;
    ((Field_s32 *) (((char *) temp_t0_7) + 8))->v = 0xF5480200;
    ((Field_s32 *) (((char *) temp_t0_8) + 4))->v = 0x07080200; temp_t0 = temp_t0_9 + 8;
    ((Field_s32 *) (((char *) temp_t0_8) + 8))->v = 0xE6000000;
    ((Field_s32 *) (((char *) temp_t0_9) + 4))->v = 0;
  }
  while (0);
  temp_t0_11 = temp_t0 + 8;
  temp_a3_2 = (temp_a3 & 0xF) * 8;
  temp_t5 = (temp_a3 >> 4) * 8;
  temp_t3 = (temp_t5 * 4) & 0xFFF;
  ((Field_s32 *) (((char *) temp_t0_9) + 8))->v = (s32) ((((temp_a3 & 0xF) * 8) << 0xD) | (temp_t3 | 0xF4000000));
  arg3 = temp_a3_2 + 7;
  temp_t1 = ((temp_t5 + 7) * 4) & 0xFFF;
  ((Field_s32 *) (((char *) temp_t0) + 4))->v = (s32) ((arg3 << 0xD) | inline_fn234(temp_t1));
  temp_t0_12 = temp_t0_11 + 8;
  ((Field_s32 *) (((char *) temp_t0) + 8))->v = 0xE7000000;
  ((Field_s32 *) (((char *) temp_t0_11) + 4))->v = 0;
  temp_t0 = temp_t0_12 + 8;
  ((Field_s32 *) (((char *) temp_t0_11) + 8))->v = 0xF5400200;
  ((Field_s32 *) (((char *) temp_t0_12) + 4))->v = 0x80200;
  temp_t0_14 = temp_t0 + 8;
  ((Field_s32 *) (((char *) temp_t0_12) + 8))->v = (s32) ((temp_a3_2 << 0xE) | (temp_t3 | 0xF2000000));
  ((Field_s32 *) (((char *) temp_t0) + 4))->v = (s32) ((arg3 << 0xE) | temp_t1);
  ;
  temp_t2 = arg1 & 0xFFFF;
  ;
  ((Field_s32 *) (((char *) temp_t0) + 8))->v = (s32) (inline_fn23(temp_t2) | (inline_fn(arg2 & 0xFFFF) | 0xE4000000));
  temp_t0 = 0;
  ((Field_s32 *) (((char *) temp_t0_14) + 4))->v = (s32) ((((temp_t2 * 4) & 0xFFF) << 0xC) | (((arg2 & 0xFFFF) * 4) & 0xFFF));
  do
  {
    temp_t0 = inline_fn2(temp_t0_15, 8);
    ((Field_s32 *) (((char *) temp_t0_14) + 8))->v = 0xB4000000;
  }
  while (0);
  ((Field_s32 *) (((char *) (temp_t0_14 + 8)) + 4))->v = (s32) ((temp_a3_2 << 0x15) | ((temp_t5 << 5) & 0xFFFF));
  temp_t0_17 = temp_t0 + 8;
  ((Field_s32 *) (((char *) (temp_t0_14 + 8)) + 8))->v = 0xB3000000;
  do
  {
    if (temp_t0_14)
    {
      ((Field_s32 *) (((char *) temp_t0) + 4))->v = 0x04000400;
      ((Field_s32 *) (((char *) temp_t0) + 8))->v = 0xE7000000;
      ((Field_s32 *) (((char *) temp_t0_17) + 4))->v = 0;
      *arg0 = temp_t0_17 + 8;
    }
    else
    {
      ((Field_s32 *) (((char *) temp_t0) + 4))->v = 0x04000400;
      ((Field_s32 *) (((char *) temp_t0) + 8))->v = 0xE7000000;
      ((Field_s32 *) (((char *) temp_t0_17) + 4))->v = 0;
      *arg0 = temp_t0_17 + 8;
    }
  }
  while (0);
}

