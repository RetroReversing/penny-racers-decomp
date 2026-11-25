void func_801CE0D4(void **arg0, s16 arg1, s16 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11, s32 arg12, s32 arg13, s32 arg14, s32 arg15, s32 arg16, s32 arg17, s32 arg18, s32 arg19, s32 arg20)
{
  s32 temp_s0;
  s32 temp_s1;
  s32 temp_s2;
  s32 temp_t0;
  s32 temp_t0_2;
  int temp_t1;
  s32 temp_t3;
  s32 temp_t6;
  void *temp_a3;
  void *temp_a3_10;
  void *temp_a3_11;
  void *temp_a3_14;
  void *temp_a3_16;
  void *temp_a3_17;
  void *temp_a3_2;
  void *temp_a3_3;
  void *temp_a3_4;
  void *temp_a3_6;
  void *temp_a3_7;
  void *temp_a3_9;
  temp_a3 = *arg0;
  temp_a3_2 = temp_a3 + 8;
  *((s32 *) (((char *) temp_a3) + 0)) = 0xFD100000;
  *((s32 *) (((char *) temp_a3) + 4)) = arg16;
  temp_a3_3 = temp_a3_2 + 8;
  *((s32 *) (((char *) temp_a3) + 8)) = 0xE8000000;
  *((s32 *) (((char *) temp_a3_2) + 4)) = 0;
  temp_a3_4 = temp_a3_3 + 8;
  *((s32 *) (((char *) temp_a3_2) + 8)) = 0xF5000100;
  *((s32 *) (((char *) temp_a3_3) + 4)) = 0x07000000;
  temp_a3 = temp_a3_4 + 8;
  *((s32 *) (((char *) (temp_a3_2 + 8)) + 8)) = 0xE6000000;
  *((s32 *) (((char *) temp_a3_4) + 4)) = 0;
  temp_a3_6 = temp_a3 + 8;
  *((s32 *) (((char *) temp_a3_4) + 8)) = 0xF0000000;
  *((s32 *) (((char *) (temp_a3_4 + 8)) + 4)) = 0x073FC000;
  temp_a3_7 = temp_a3_6 - (-8);
  *((s32 *) (((char *) (temp_a3_4 + 8)) + 8)) = 0xE7000000;
  __repair_rows:
  {
    *((s32 *) (((char *) temp_a3_6) + 4)) = 0; temp_a3 = temp_a3_7 + 8; temp_t0 = ((s32) (arg7 << 0x10)) >> 0x11;
    *((s32 *) (((char *) temp_a3_6) + 8)) = (s32) (((temp_t0 - 1) & 0xFFF) | 0xFD480000);
    do
    {
      *((s32 *) (((char *) temp_a3_7) + 4)) = arg15; temp_a3_9 = temp_a3 + 8; temp_t0_2 = ((((s32) (temp_t0 + 7)) >> 3) & 0x1FF) << 9;
      *((s32 *) (((char *) temp_a3_7) + 8)) = (s32) (temp_t0_2 | 0xF5480000); temp_t3 = (arg18 & 3) << 0x12;
      do
      {
        temp_s0 = (arg20 & 0xF) << 0xE; temp_s2 = (arg17 & 3) << 8; temp_s1 = (arg19 & 0xF) * 0x10;
        do
        {
          *((s32 *) (((char *) temp_a3) + 4)) = (s32) (((temp_t3 | (temp_s0 | 0x07000000)) | temp_s2) | temp_s1); temp_a3_10 = temp_a3_9 + 8;
          *((s32 *) (((char *) temp_a3) + 8)) = 0xE6000000;
          *((s32 *) (((char *) temp_a3_9) + 4)) = 0;
        }
        while (0);
        temp_a3_11 = temp_a3_10 + 8;
        *((s32 *) (((char *) temp_a3_9) + 8)) = 0xF4000000;
 do { temp_t1 = ((s16) arg7) - 1; } while (0);
        temp_t6 = ((((s32) (arg8 << 0x10)) >> 0xE) - 4) & 0xFFF;
        *((s32 *) (((char *) temp_a3_10) + 4)) = (s32) ((((temp_t1 * 2) & 0xFFF) << 0xC) | (temp_t6 | 0x07000000)); temp_a3 = temp_a3_11 + 8;
        *((s32 *) (((char *) (temp_a3_9 + 8)) + 8)) = 0xE7000000;
      }
      while (0);
    }
    while (0);
  }

  if (0)
  {
    goto __repair_rows;
  }
  if (temp_a3_4)
  {
    *((s32 *) (((char *) temp_a3_11) + 4)) = 0;
    temp_a3_10 = temp_a3 + 8;
    *((s32 *) (((char *) temp_a3_11) + 8)) = (s32) (temp_t0_2 | 0xF5400000);
    *((s32 *) (((char *) temp_a3) + 4)) = (s32) (((temp_t3 | temp_s0) | temp_s2) | temp_s1);
    temp_a3_14 = temp_a3_10 + 8;
    *((s32 *) (((char *) temp_a3) + 8)) = 0xF2000000;
  }
  else
  {
    *((s32 *) (((char *) temp_a3_11) + 4)) = 0;
    temp_a3_10 = temp_a3 + 8;
    *((s32 *) (((char *) temp_a3_11) + 8)) = (s32) (temp_t0_2 | 0xF5400000);
    *((s32 *) (((char *) temp_a3) + 4)) = (s32) (((temp_t3 | temp_s0) | temp_s2) | temp_s1);
    temp_a3_14 = temp_a3_10 + 8;
    *((s32 *) (((char *) temp_a3) + 8)) = 0xF2000000;
  }
  do
  {
    *((s32 *) (((char *) temp_a3_10) + 4)) = (s32) ((((temp_t1 * 4) & 0xFFF) << 0xC) | temp_t6);
    temp_a3 = temp_a3_14 + 8;
    *((s32 *) (((char *) temp_a3_10) + 8)) = (s32) ((((((arg1 + ((s16) arg5)) * 4) & 0xFFF) << 1) << 11) | ((((arg2 + ((s16) arg6)) * 4) & 0xFFF) | 0xE4000000));
    *((s32 *) (((char *) temp_a3_14) + 4)) = (s32) ((((arg1 * 4) & 0xFFF) << 0xC) | ((2 * (arg2 * 2)) & 0xFFF));
    temp_a3_16 = temp_a3 + 8;
    *((s32 *) (((char *) (temp_a3_10 + 8)) + 8)) = 0xB4000000;
    *((s32 *) (((char *) temp_a3) + 4)) = 0;
    temp_a3_17 = temp_a3_16 + 8;
    *((s32 *) (((char *) temp_a3) + 8)) = 0xB3000000;
    temp_a3 = 0;
    *((s32 *) (((char *) temp_a3_16) + 4)) = 0x04000400;
    *((s32 *) (((char *) temp_a3_16) + 8)) = 0xE7000000;
    *((s32 *) (((char *) temp_a3_17) + 4)) = 0;
    *arg0 = temp_a3_17 + 8;
  }
  while (0);
}
