typedef struct 
{
  unsigned char pad[4];
  int value;
} __repair_field_4;
inline static s32 inline_fn(s32 arg0, s32 arg1, int arg2)
{
  return (s32) ((((arg0 * 2) & 0xFFF) << 0xC) | (arg1 | arg2));
}

inline static char *inline_fn2(void *arg0, int arg1)
{
  return ((char *) arg0) + arg1;
}

void func_801CE3A0(void **arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, volatile unsigned int arg11, unsigned long long arg12, s32 arg13, s32 arg14, s32 arg15, s32 arg16)
{
  volatile u64 scratch;
  s32 temp_s2;
  s32 temp_s3;
  s32 temp_s4;
  s32 temp_t1;
  s32 temp_t2;
  s32 temp_t3;
  s32 temp_t4;
  s32 temp_t5;
  void *temp_t0;
  void *__repair_phase_temp_t0;
  void *temp_t0_11;
  void *temp_t0_12;
  void *temp_t0_14;
  void *temp_t0_15;
  void *temp_t0_16;
  void *temp_t0_2;
  void *temp_t0_3;
  void *temp_t0_5;
  void *temp_t0_6;
  void *temp_t0_7;
  void *temp_t0_8;
  void *temp_t0_9;
  temp_t0 = *arg0;
  temp_t0_2 = temp_t0 + 8;
  *((s32 *) inline_fn2(temp_t0, 0)) = 0xFD100000;
  ((__repair_field_4 *) temp_t0)->value = arg12;
  temp_t0_3 = temp_t0_2 + 8;
  *((s32 *) inline_fn2(temp_t0, 8)) = 0xE8000000;
  ((__repair_field_4 *) temp_t0_2)->value = 0;
  temp_t0 = temp_t0_3 + 8;
  *((s32 *) inline_fn2(temp_t0_2, 8)) = 0xF5000100;
  ((__repair_field_4 *) temp_t0_3)->value = 0x07000000;
  temp_t0_5 = temp_t0 + 8;
  *((s32 *) inline_fn2(temp_t0_3, 8)) = 0xE6000000;
  ((__repair_field_4 *) temp_t0)->value = 0;
  temp_t0_6 = temp_t0_5 + 8;
  *((s32 *) inline_fn2(temp_t0, 8)) = 0xF0000000;
  ((__repair_field_4 *) temp_t0_5)->value = 0x0703C000;
  temp_t0_7 = temp_t0_6 + 8;
  *((s32 *) inline_fn2(temp_t0_5, 8)) = 0xE7000000;
  ((__repair_field_4 *) temp_t0_6)->value = 0;
  temp_t0_8 = temp_t0_7 + 8;
  *((s32 *) (((char *) temp_t0_6) + 8)) = (s32) ((((((s32) (arg9 << 0x10)) >> 0x11) - 1) & 0xFFF) | 0xFD480000);
  ((__repair_field_4 *) temp_t0_7)->value = arg11;
  temp_t0_9 = temp_t0_8 + 8;
  temp_t2 = ((((s32) ((((s16) arg7) >> 1) + 7)) >> 3) & 0x1FF) << 9;
  *((s32 *) (((char *) temp_t0_7) + 8)) = (s32) (temp_t2 | 0xF5480000);
  temp_t5 = arg14 & 3; temp_t4 = temp_t5 << 0x12;
  temp_s2 = (arg16 & 0xF) << 0xE;
  temp_s4 = (arg13 & 3) << 8;
  temp_s3 = (arg15 & 0xF) * 0x10;
  ((__repair_field_4 *) temp_t0_8)->value = (s32) (((temp_t4 | (((arg16 & 0xF) << 0xE) | 0x07000000)) | temp_s4) | temp_s3);
  __repair_phase_temp_t0 = temp_t0_9 - (-8);
  *((s32 *) (((char *) temp_t0_8) + 8)) = 0xE6000000;
  ((__repair_field_4 *) temp_t0_9)->value = 0;
  temp_t0_11 = __repair_phase_temp_t0 + 8;
  ;
  *((s32 *) (((char *) temp_t0_9) + 8)) = (s32) ((((((s16) arg5) * 2) & 0xFFF) << 0xC) | (((((s16) arg6) * 4) & 0xFFF) | 0xF4000000));
  temp_t1 = (((s16) arg5) + ((s16) arg7)) - 1;
  temp_t5 = (((((s16) arg6) + ((s16) arg8)) - 1) * 4) & 0xFFF;
  (*((__repair_field_4 *) __repair_phase_temp_t0)).value = inline_fn(temp_t1, temp_t5, 0x07000000);
  temp_t0_12 = temp_t0_11 + 8;
  *((s32 *) (((char *) __repair_phase_temp_t0) + 8)) = 0xE7000000;
  ((__repair_field_4 *) temp_t0_11)->value = 0;
  temp_t0 = temp_t0_12 + 8;
  *((s32 *) (((char *) temp_t0_11) + 8)) = (s32) (temp_t2 | 0xF5400000);
  ((__repair_field_4 *) temp_t0_12)->value = (s32) (((temp_t4 | ((arg16 & 0xF) << 0xE)) | temp_s4) | temp_s3);
  temp_t0_14 = temp_t0 + 8;
  *((s32 *) (((char *) temp_t0_12) + 8)) = (s32) ((((((s16) arg5) * 4) & 0xFFF) << 0xC) | (((((s16) arg6) * 4) & 0xFFF) | 0xF2000000));
  ((__repair_field_4 *) temp_t0)->value = (s32) ((((temp_t1 * 4) & 0xFFF) << 0xC) | temp_t5);
  temp_t0_15 = temp_t0_14 + 8;
  *((s32 *) (((char *) temp_t0) + 8)) = (s32) (((((arg1 + arg3) * 4) & 0xFFF) << 0xC) | ((((arg2 + ((s16) arg4)) * 4) & 0xFFF) | 0xE4000000));
  ((__repair_field_4 *) temp_t0_14)->value = (s32) ((((arg1 * 4) & 0xFFF) << 0xC) | ((arg2 * 4) & 0xFFF));
  temp_t0_16 = temp_t0_15 + 8;
  *((s32 *) (((char *) temp_t0_14) + 8)) = 0xB4000000;
  ((__repair_field_4 *) temp_t0_15)->value = (s32) ((((s16) arg5) << 0x15) | ((((s16) arg6) << 5) & 0xFFFF));
  temp_t0 = temp_t0_16 + 8;
  *((s32 *) (((char *) temp_t0_15) + 8)) = 0xB3000000;
  ((__repair_field_4 *) (temp_t0_15 + 8))->value = 0x04000400;
  *((s32 *) (((char *) (temp_t0_15 + 8)) + 8)) = 0xE7000000;
  ((__repair_field_4 *) temp_t0)->value = 0;
  *arg0 = temp_t0 + 8;
}

