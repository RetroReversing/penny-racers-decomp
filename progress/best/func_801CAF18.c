inline static int inline_fn(s32 arg0, s32 arg1)
{
  return ((arg0 + arg1) * 4) & 0xFFF;
}

inline static int inline_fn2(int arg0)
{
  return arg0;
}

void func_801CAF18(void **arg0_in, s32 arg1, s32 arg2, u16 arg3, s32 arg4, s32 arg5, s32 arg6, u32 arg7, s32 arg8, u32 arg9)
{
  void **arg0;
  volatile u64 scratch[2];
  s32 temp_a0;
  s32 temp_a0_2;
  s32 temp_a1;
  s32 temp_a1_2;
  s32 temp_a1_3;
  s32 temp_a1_4;
  s32 temp_a2;
  s32 __repair_phase_temp_a2;
  s32 temp_a2_4;
  s32 temp_a3_2;
  s32 temp_lo;
  s32 temp_lo_2;
  s32 temp_t0;
  s32 temp_t0_2;
  s32 temp_t1;
  s32 temp_t1_2;
  s32 temp_t2;
  s32 temp_v1;
  u32 temp_a3;
  void *temp_t5;
  void *__repair_phase_temp_t5;
  void *temp_t5_11;
  void *temp_t5_12;
  void *temp_t5_13;
  void *temp_t5_15;
  void *temp_t5_16;
  void *temp_t5_17;
  void *temp_t5_18;
  void *temp_t5_19;
  void *temp_t5_20;
  void *temp_t5_21;
  void *temp_t5_22;
  void *temp_t5_23;
  void *temp_t5_24;
  void *temp_t5_25;
  void *temp_t5_26;
  void *temp_t5_27;
  void *temp_t5_28;
  void *temp_t5_29;
  void *temp_t5_2;
  void *temp_t5_30;
  void *temp_t5_3;
  void *temp_t5_4;
  void *temp_t5_5;
  void *temp_t5_6;
  void *temp_t5_7;
  void *temp_t5_8;
  void *temp_t5_9;
  void *var_t5;
  if (temp_t5)
  {
    arg0 = arg0_in;
    temp_t5 = *arg0;
  }
  else
  {
    arg0 = arg0_in;
    temp_t5 = *arg0;
  }
  do
  {
    temp_a3 = arg3 & 0xFFFF; temp_a2 = temp_a3 & 0xF; temp_lo_2 = arg7 * temp_a2; temp_lo = (temp_a3 >> 4) * arg8;
    if (arg6 == 0)
    {
      temp_t5_2 = temp_t5 + 8;
      *((s32 *) (((char *) temp_t5) + 0)) = 0xFD100000;
      *((s32 *) (((char *) temp_t5) + 4)) = arg5; temp_t5_3 = temp_t5_2 + 8;
      *((s32 *) (((char *) temp_t5) + 8)) = 0xE8000000;
      *((s32 *) (((char *) temp_t5_2) + 4)) = 0; temp_t5_4 = temp_t5_3 + 8;
      *((s32 *) (((char *) temp_t5_2) + 8)) = 0xF5000100;
      *((s32 *) (((char *) temp_t5_3) + 4)) = 0x07000000; temp_t5_5 = temp_t5_4 + 8;
      *((s32 *) (((char *) temp_t5_3) + 8)) = 0xE6000000;
      *((s32 *) (((char *) temp_t5_4) + 4)) = 0; temp_t5_6 = temp_t5_5 + 8;
      *((s32 *) (((char *) temp_t5_4) + 8)) = 0xF0000000;
      *((s32 *) (((char *) temp_t5_5) + 4)) = 0x0703C000; temp_t5_7 = temp_t5_6 + 8;
      *((s32 *) (((char *) temp_t5_5) + 8)) = 0xE7000000;
      *((s32 *) (((char *) temp_t5_6) + 4)) = 0; temp_t5_8 = temp_t5_7 + 8;
      *((s32 *) (((char *) temp_t5_6) + 8)) = (s32) ((((arg9 >> 1) - 1) & 0xFFF) | 0xFD480000);
      *((s32 *) (((char *) temp_t5_7) + 4)) = arg4; temp_t5_9 = temp_t5_8 + 8; temp_t1 = temp_lo_2 & 0xFFFF; temp_a1 = ((((u32) ((arg7 >> 1) + 7)) >> 3) & 0x1FF) << 9;
      *((s32 *) (((char *) temp_t5_7) + 8)) = (s32) (temp_a1 | 0xF5480000);
      *((s32 *) (((char *) temp_t5_8) + 4)) = 0x07080200; __repair_phase_temp_t5 = temp_t5_9 + 8;
      *((s32 *) (((char *) temp_t5_8) + 8)) = 0xE6000000;
      *((s32 *) (((char *) temp_t5_9) + 4)) = 0; temp_t5_11 = __repair_phase_temp_t5 + 8; temp_t0 = temp_lo & 0xFFFF; temp_a3_2 = (temp_t0 * 4) & 0xFFF;
      *((s32 *) (((char *) temp_t5_9) + 8)) = (s32) ((((temp_t1 * 2) & 0xFFF) << 0xC) | (temp_a3_2 | 0xF4000000)); temp_a2 = (temp_t1 + arg7) - 1;
      ;
      *((s32 *) (((char *) __repair_phase_temp_t5) + 4)) = (s32) ((((temp_a2 * 2) & 0xFFF) << 0xC) | (((((temp_t0 + arg8) - 1) * 4) & 0xFFF) | 0x07000000)); temp_t5_12 = temp_t5_11 + 8;
      *((s32 *) (((char *) __repair_phase_temp_t5) + 8)) = 0xE7000000;
      *((s32 *) (((char *) temp_t5_11) + 4)) = 0; temp_t5_13 = temp_t5_12 + 8;
      *((s32 *) (((char *) temp_t5_11) + 8)) = (s32) (temp_a1 | 0xF5400000);
      *((s32 *) (((char *) temp_t5_12) + 4)) = 0x80200; temp_t5 = temp_t5_13 + 8;
      *((s32 *) (((char *) temp_t5_12) + 8)) = (s32) ((((temp_t1 * 4) & 0xFFF) << 0xC) | (temp_a3_2 | 0xF2000000));
      *((s32 *) (((char *) temp_t5_13) + 4)) = (s32) ((((temp_a2 * 4) & 0xFFF) << 0xC) | ((((temp_t0 + arg8) - 1) * 4) & 0xFFF)); temp_t5_15 = temp_t5 + 8; temp_a1_2 = arg1 & 0xFFFF;
      ;
      *((s32 *) (((char *) temp_t5_13) + 8)) = (s32) (inline_fn2(inline_fn(arg7, temp_a1_2) << 0xC) | (inline_fn(arg8, arg2 & 0xFFFF) | 0xE4000000));
      *((s32 *) (((char *) temp_t5) + 4)) = (s32) ((((temp_a1_2 * 4) & 0xFFF) << 0xC) | (((arg2 & 0xFFFF) * 4) & 0xFFF)); var_t5 = temp_t5_15 + 8;
      *((s32 *) (((char *) temp_t5) + 8)) = 0xB4000000;
      do
      {
        *((s32 *) (((char *) temp_t5_15) + 4)) = (s32) ((temp_t1 << 0x15) | ((temp_t0 << 5) & 0xFFFF));
      }
      while (0);
    }
    else
    {
      temp_t5_16 = temp_t5 + 8;
      *((s32 *) (((char *) temp_t5) + 0)) = 0xFD100000;
      *((s32 *) (((char *) temp_t5) + 4)) = arg5; temp_t5_17 = temp_t5_16 + 8;
      *((s32 *) (((char *) temp_t5) + 8)) = 0xE8000000;
      *((s32 *) (((char *) temp_t5_16) + 4)) = 0; temp_t5_18 = temp_t5_17 + 8;
      *((s32 *) (((char *) temp_t5_16) + 8)) = 0xF5000100;
      *((s32 *) (((char *) temp_t5_17) + 4)) = 0x07000000; temp_t5_19 = temp_t5_18 + 8;
      *((s32 *) (((char *) temp_t5_17) + 8)) = 0xE6000000;
      *((s32 *) (((char *) temp_t5_18) + 4)) = 0; temp_t5_20 = temp_t5_19 + 8;
      *((s32 *) (((char *) temp_t5_18) + 8)) = 0xF0000000;
      *((s32 *) (((char *) temp_t5_19) + 4)) = 0x073FC000; temp_t5_21 = temp_t5_20 + 8;
      *((s32 *) (((char *) temp_t5_19) + 8)) = 0xE7000000;
      *((s32 *) (((char *) temp_t5_20) + 4)) = 0; temp_t5_22 = temp_t5_21 + 8;
      *((s32 *) (((char *) temp_t5_20) + 8)) = (s32) (((arg9 - 1) & 0xFFF) | 0xFD480000);
      *((s32 *) (((char *) temp_t5_21) + 4)) = arg4; temp_t5_23 = temp_t5_22 + 8; temp_t2 = temp_lo_2 & 0xFFFF; temp_a1_3 = (((((u32) (arg7 + 7)) >> 3) & 0x1FF) << 9) | 0xF5480000;
      *((s32 *) (((char *) temp_t5_21) + 8)) = temp_a1_3;
      *((s32 *) (((char *) temp_t5_22) + 4)) = 0x07080200; temp_t5_24 = temp_t5_23 + 8;
      *((s32 *) (((char *) temp_t5_22) + 8)) = 0xE6000000;
      *((s32 *) (((char *) temp_t5_23) + 4)) = 0; temp_t5_25 = temp_t5_24 + 8; temp_a2 = ((temp_t2 * 4) & 0xFFF) << 0xC; temp_t1_2 = temp_lo & 0xFFFF; temp_t0_2 = (temp_t1_2 * 4) & 0xFFF;
      *((s32 *) (((char *) temp_t5_23) + 8)) = (s32) (temp_a2 | (temp_t0_2 | 0xF4000000)); temp_a0_2 = ((((temp_t2 + arg7) - 1) * 4) & 0xFFF) << 0xC; temp_v1 = (((temp_t1_2 + arg8) - 1) * 4) & 0xFFF;
      *((s32 *) (((char *) temp_t5_24) + 4)) = (s32) (temp_a0_2 | (temp_v1 | 0x07000000)); temp_t5_26 = temp_t5_25 + 8;
      *((s32 *) (((char *) temp_t5_24) + 8)) = 0xE7000000;
      *((s32 *) (((char *) temp_t5_25) + 4)) = 0;
      do
      {
        temp_t5_27 = temp_t5_26 + 8;
        *((s32 *) (((char *) temp_t5_25) + 8)) = temp_a1_3;
        *((s32 *) (((char *) temp_t5_26) + 4)) = 0x80200; temp_t5_28 = temp_t5_27 + 8;
        *((s32 *) (((char *) temp_t5_26) + 8)) = (s32) (temp_a2 | (temp_t0_2 | 0xF2000000));
        *((s32 *) (((char *) temp_t5_27) + 4)) = (s32) (temp_a0_2 | temp_v1); temp_t5_29 = temp_t5_28 + 8; temp_a2_4 = arg2 & 0xFFFF; temp_a1_4 = arg1 & 0xFFFF;
        *((s32 *) (((char *) temp_t5_27) + 8)) = (s32) ((inline_fn(arg7, temp_a1_4) << 0xC) | (inline_fn(arg8, temp_a2_4) | 0xE4000000));
        *((s32 *) (((char *) temp_t5_28) + 4)) = (s32) ((((temp_a1_4 * 4) & 0xFFF) << 0xC) | ((temp_a2_4 * 4) & 0xFFF)); var_t5 = temp_t5_29 + 8;
        *((s32 *) (((char *) temp_t5_28) + 8)) = 0xB4000000;
      }
      while (0);
      *((s32 *) (((char *) temp_t5_29) + 4)) = (s32) ((temp_t2 << 0x15) | ((temp_t1_2 << 5) & 0xFFFF));
    }
    temp_t5_30 = var_t5 + 8;
    *((s32 *) (((char *) var_t5) + 0)) = 0xB3000000;
    *((s32 *) (((char *) var_t5) + 4)) = 0x04000400;
    *((s32 *) (((char *) var_t5) + 8)) = 0xE7000000;
    *((s32 *) (((char *) temp_t5_30) + 4)) = 0;
    *arg0 = temp_t5_30 + 8;
  }
  while (0);
}

