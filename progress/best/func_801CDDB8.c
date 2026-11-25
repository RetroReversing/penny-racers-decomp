typedef struct 
{
  unsigned char pad[8];
  int value;
} __repair_field_8;
typedef struct 
{
  int field_0;
  int field_4;
} __repair_record_temp_v1;
inline static int inline_fn(int arg0, int arg1)
{
  return arg0 | arg1;
}

typedef struct 
{
  s32 v;
} Field_s32;
int func_801CDDB8(void **arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11, volatile unsigned int arg12, s32 arg13, s32 arg14, s32 arg15, s32 arg16)
{
  volatile u64 scratch;
  s32 temp_t5;
  int temp_t4;
  register volatile int temp_s3;
  volatile int pad;
  register s32 temp_s2;
  register unsigned temp_t1;
  s32 temp_t2;
  register u32 temp_t3;
  s32 temp_t0;
  s32 temp_s4;
  void *temp_v1;
  void *temp_v1_11;
  register void *temp_v1_12;
  void *temp_v1_14;
  void *temp_v1_15;
  register void *temp_v1_16;
  void *temp_v1_2;
  register void *temp_v1_3;
  void *temp_v1_4;
  void *temp_v1_6;
  register void *temp_v1_7;
  register void *temp_v1_8;
  void *temp_v1_9;
  arg15 = arg15 & 0xF;
  temp_v1 = *arg0;
  temp_v1_2 = temp_v1 + 8;
  ((__repair_record_temp_v1 *) temp_v1)->field_0 = 0xFD100000;
  ((__repair_record_temp_v1 *) temp_v1)->field_4 = arg12;
  temp_v1_3 = temp_v1_2 + 8;
  ((__repair_field_8 *) temp_v1)->value = 0xE8000000;
  *((s32 *) (((char *) temp_v1_2) + 4)) = 0;
  temp_v1_4 = temp_v1_3 + 8;
  *((s32 *) (((char *) (temp_v1_2 + 8)) + 4)) = 0x07000000;
  ((__repair_field_8 *) temp_v1_2)->value = 0xF5000100;
  temp_v1 = temp_v1_4 + 8;
  ((__repair_field_8 *) (temp_v1_2 + 8))->value = 0xE6000000;
  temp_v1_6 = temp_v1 + 8;
  ((__repair_field_8 *) temp_v1_4)->value = 0xF0000000;
  *((s32 *) (((char *) temp_v1_4) + 4)) = 0;
  ((__repair_record_temp_v1 *) temp_v1)->field_4 = 0x073FC000;
  temp_v1_7 = temp_v1_6 + 8;
  ((__repair_field_8 *) temp_v1)->value = 0xE7000000;
  if (1)
  {
    *((s32 *) (((char *) temp_v1_6) + 4)) = 0;
    temp_v1_8 = temp_v1_7 + 8;
    ((__repair_field_8 *) temp_v1_6)->value = (s32) inline_fn((((s16) arg9) - 1) & 0xFFF, 0xFD480000);
    *((s32 *) (((char *) temp_v1_7) + 4)) = arg11;
    temp_v1_9 = temp_v1_8 + 8;
    temp_t2 = (((((s32) (((s16) arg7) + 7)) >> 3) & 0x1FF) << 9) | 0xF5480000;
    ((__repair_field_8 *) temp_v1_7)->value = temp_t2;
    temp_t5 = (arg14 & 3) << 0x12;
    temp_s2 = (arg16 & 0xF) << 0xE;
    arg9 = (arg13 & 3) << 8;
    temp_s3 = arg15 * 0x10;
    *((s32 *) (((char *) (temp_v1_7 + 8)) + 4)) = (s32) inline_fn((temp_t5 | inline_fn((arg16 & 0xF) << 0xE, 0x07000000)) | arg9, temp_s3);
    temp_v1 = temp_v1_9 + 8;
    ((__repair_field_8 *) temp_v1_8)->value = 0xE6000000;
    ((Field_s32 *) (((char *) temp_v1_9) + 4))->v = 0;
    temp_v1_11 = temp_v1 + 8;
    temp_t0 = ((((s16) arg5) * 4) & 0xFFF) << 0xC;
    temp_t3 = (((s16) arg6) * 4) & 0xFFF;
    ((__repair_field_8 *) ((temp_v1_7 + 8) + 8))->value = (s32) (temp_t0 | (temp_t3 | 0xF4000000));
  }
  temp_t1 = ((((((s16) (arg5 & 0xFF)) + ((s16) arg7)) - 1) * 4) & 0xFFF) << 0xC;
  temp_t4 = (((((s16) arg6) + ((s16) arg8)) - 1) * 4) & 0xFFF;
  temp_v1_12 = temp_v1_11 + 8;
  ((__repair_record_temp_v1 *) temp_v1)->field_4 = (s32) (temp_t1 | inline_fn(temp_t4, 0x07000000));
  ((__repair_field_8 *) temp_v1)->value = 0xE7000000;
  *((s32 *) (((char *) temp_v1_11) + 4)) = 0;
  temp_v1 = temp_v1_12 + 8;
  ((__repair_field_8 *) temp_v1_11)->value = temp_t2;
  temp_v1_14 = temp_v1 + 8;
  *((s32 *) (((char *) temp_v1_12) + 4)) = (s32) (((temp_t5 | temp_s2) | arg9) | temp_s3);
  ((__repair_field_8 *) temp_v1_12)->value = (s32) (temp_t0 | (temp_t3 | 0xF2000000));
  ((__repair_record_temp_v1 *) temp_v1)->field_4 = (s32) inline_fn(temp_t1, temp_t4);
  temp_v1_15 = temp_v1_14 + 8;
  ((__repair_field_8 *) temp_v1)->value = (s32) (((((arg1 + arg3) * 4) & 0xFFF) << 0xC) | ((((arg2 + ((s16) arg4)) * 4) & 0xFFF) | 0xE4000000));
  *((s32 *) (((char *) temp_v1_14) + 4)) = (s32) ((((arg1 * 4) & 0xFFF) << 0xC) | ((arg2 * 4) & 0xFFF));
  temp_v1_16 = temp_v1_15 + 8;
  ((__repair_field_8 *) temp_v1_14)->value = 0xB4000000;
  *((s32 *) (((char *) temp_v1_15) + 4)) = (s32) inline_fn(((s16) arg5) << 0x15, (((s16) arg6) << 5) & 0xFFFF);
  do
  {
    ((__repair_field_8 *) temp_v1_15)->value = 0xB3000000; temp_v1 = temp_v1_16 + 8;
 do { ((__repair_field_8 *) temp_v1_16)->value = 0xE7000000; *((s32 *) (((char *) temp_v1_16) + 4)) = 0x04000400; ((__repair_record_temp_v1 *) temp_v1)->field_4 = 0; *arg0 = temp_v1 + 8; } while (0);
    return temp_t4;
  }
  while (0);
}
