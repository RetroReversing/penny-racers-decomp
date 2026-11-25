typedef struct 
{
  unsigned char pad[4];
  int value;
} __repair_field_4;
void func_801CDB08(void **arg0, s16 arg1, s16 arg2, s32 arg3, s32 arg4, short arg5, s32 arg6, short arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11, s32 arg12, s32 arg13, s32 arg14, s32 arg15, int arg16, s32 arg17, s32 arg18, s32 arg19, s32 arg20)
{
  s32 temp_s0;
  s32 temp_s1;
  s32 temp_s2;
  s32 temp_t0;
  s32 temp_t1;
  unsigned long long temp_t1_2;
  s32 temp_t3;
  s32 temp_t7;
  void *temp_a3;
  void *temp_a3_11;
  void *temp_a3_12;
  void *temp_a3_13;
  void *temp_a3_15;
  void *temp_a3_16;
  void *temp_a3_2;
  void *temp_a3_3;
  void *temp_a3_4;
  void *temp_a3_5;
  void *temp_a3_6;
  void *temp_a3_7;
  void *temp_a3_8;
  void *temp_a3_9;
  temp_a3 = *arg0;
  temp_a3_2 = temp_a3 + 8;
  *((s32 *) (((char *) temp_a3) + 0)) = 0xFD100000;
  ((__repair_field_4 *) temp_a3)->value = arg16;
  temp_a3_3 = temp_a3_2 + 8;
  *((s32 *) (((char *) temp_a3) + 8)) = 0xE8000000;
  ((__repair_field_4 *) temp_a3_2)->value = 0;
  temp_a3_4 = temp_a3_3 + 8;
  *((s32 *) (((char *) temp_a3_2) + 8)) = 0xF5000100;
  ((__repair_field_4 *) temp_a3_3)->value = 0x07000000;
  temp_a3_5 = temp_a3_4 + 8;
  *((s32 *) (((char *) temp_a3_3) + 8)) = 0xE6000000;
  ((__repair_field_4 *) temp_a3_4)->value = 0;
  temp_a3_6 = temp_a3_5 + 8;
  *((s32 *) (((char *) temp_a3_4) + 8)) = 0xF0000000;
  ((__repair_field_4 *) temp_a3_5)->value = 0x073FC000;
  temp_a3_7 = temp_a3_6 + 8;
  *((s32 *) (((char *) temp_a3_5) + 8)) = 0xE7000000;
  ((__repair_field_4 *) temp_a3_6)->value = 0;
  temp_a3_8 = temp_a3_7 + 8;
  do
  {
    temp_t1 = ((s16) arg7) - 1;
    *((s32 *) (((char *) temp_a3_6) + 8)) = (s32) ((temp_t1 & 0xFFF) | 0xFD480000);
    ((__repair_field_4 *) temp_a3_7)->value = arg15; temp_a3_9 = temp_a3_8 + 8; temp_t0 = (((((s32) (((s16) arg7) + 7)) >> 3) & 0x1FF) << 9) | 0xF5480000;
    *((s32 *) (((char *) temp_a3_7) + 8)) = temp_t0;
    ;
    temp_t3 = (arg18 & 3) << 0x12; temp_s1 = (arg19 & 0xF) * 0x10;
    ;
    ((__repair_field_4 *) temp_a3_8)->value = (s32) (((temp_t3 | (((arg20 & 0xF) << 0xE) | 0x07000000)) | ((arg17 & 3) << 8)) | temp_s1); temp_a3 = temp_a3_9 + 8;
    *((s32 *) (((char *) temp_a3_8) + 8)) = 0xE6000000;
    ((__repair_field_4 *) temp_a3_9)->value = 0; temp_a3_11 = temp_a3 - (-8);
    *((s32 *) (((char *) (temp_a3_8 + 8)) + 8)) = 0xF4000000; temp_t1_2 = (((temp_t1 * 4) & 0xFFF) << 10) << 2; temp_t7 = ((((s32) (arg8 << 0x10)) >> 0xE) - 4) & 0xFFF;
    ((__repair_field_4 *) temp_a3)->value = (s32) (temp_t1_2 | (temp_t7 | 0x07000000)); temp_a3_12 = temp_a3_11 + 8;
    do
    {
      *((s32 *) (((char *) temp_a3) + 8)) = 0xE7000000;
      ((__repair_field_4 *) temp_a3_11)->value = 0; temp_a3_13 = temp_a3_12 + 8;
      *((s32 *) (((char *) temp_a3_11) + 8)) = temp_t0;
      do
      {
        ((__repair_field_4 *) temp_a3_12)->value = (s32) (temp_s1 | ((temp_t3 | ((arg20 & 0xF) << 0xE)) | ((arg17 & 3) << 8))); temp_a3 = temp_a3_13 + 8;
        *((s32 *) (((char *) temp_a3_12) + 8)) = 0xF2000000;
      }
      while (0);
      ((__repair_field_4 *) (temp_a3_12 + 8))->value = (s32) (temp_t1_2 | temp_t7);
    }
    while (0);
    temp_a3_15 = temp_a3 + 8;
    *((s32 *) (((char *) (temp_a3_12 + 8)) + 8)) = (s32) (((((arg1 + ((s16) arg5)) * 4) & 0xFFF) << 0xC) | ((((arg2 + ((s16) arg6)) * 4) & 0xFFF) | 0xE4000000));
    ((__repair_field_4 *) temp_a3)->value = (s32) ((((((unsigned long long) arg1) * 4) & 0xFFF) << 0xC) | ((arg2 * 4) & 0xFFF)); temp_a3_16 = temp_a3_15 + 8;
    *((s32 *) (((char *) temp_a3) + 8)) = 0xB4000000;
    ((__repair_field_4 *) temp_a3_15)->value = 0;
  }
  while (0);
  do
  {
    temp_a3 = temp_a3_16 + 8;
    do
    {
 do { *((s32 *) (((char *) temp_a3_15) + 8)) = 0xB3000000; do { ((__repair_field_4 *) temp_a3_16)->value = 0x04000400; } while (0); *((s32 *) (((char *) temp_a3_16) + 8)) = 0xE7000000; ((__repair_field_4 *) temp_a3)->value = 0; } while (0);
      *arg0 = temp_a3 + 8;
    }
    while (0);
  }
  while (0);
}
