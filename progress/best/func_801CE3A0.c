/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

void func_801CE3A0(void **arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg11, s32 arg12, s32 arg13, s32 arg14, s32 arg15, s32 arg16) {
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_t1;
    s32 temp_t2;
    s32 temp_t3;
    s32 temp_t4;
    s32 temp_t5;
    void *temp_t0;
    void *temp_t0_10;
    void *temp_t0_11;
    void *temp_t0_12;
    void *temp_t0_13;
    void *temp_t0_14;
    void *temp_t0_15;
    void *temp_t0_16;
    void *temp_t0_17;
    void *temp_t0_2;
    void *temp_t0_3;
    void *temp_t0_4;
    void *temp_t0_5;
    void *temp_t0_6;
    void *temp_t0_7;
    void *temp_t0_8;
    void *temp_t0_9;

    temp_t0 = *arg0;
    temp_t0_2 = temp_t0 + 8;
    M2C_FIELD(temp_t0, s32 *, 0) = 0xFD100000;
    M2C_FIELD(temp_t0, s32 *, 4) = arg12;
    temp_t0_3 = temp_t0_2 + 8;
    M2C_FIELD(temp_t0, s32 *, 8) = 0xE8000000;
    M2C_FIELD(temp_t0_2, s32 *, 4) = 0;
    temp_t0_4 = temp_t0_3 + 8;
    M2C_FIELD(temp_t0_2, s32 *, 8) = 0xF5000100;
    M2C_FIELD(temp_t0_3, s32 *, 4) = 0x07000000;
    temp_t0_5 = temp_t0_4 + 8;
    M2C_FIELD(temp_t0_3, s32 *, 8) = 0xE6000000;
    M2C_FIELD(temp_t0_4, s32 *, 4) = 0;
    temp_t0_6 = temp_t0_5 + 8;
    M2C_FIELD(temp_t0_4, s32 *, 8) = 0xF0000000;
    M2C_FIELD(temp_t0_5, s32 *, 4) = 0x0703C000;
    temp_t0_7 = temp_t0_6 + 8;
    M2C_FIELD(temp_t0_5, s32 *, 8) = 0xE7000000;
    M2C_FIELD(temp_t0_6, s32 *, 4) = 0;
    temp_t0_8 = temp_t0_7 + 8;
    M2C_FIELD(temp_t0_6, s32 *, 8) = (s32) (((((s32) (arg9 << 0x10) >> 0x11) - 1) & 0xFFF) | 0xFD480000);
    M2C_FIELD(temp_t0_7, s32 *, 4) = arg11;
    temp_t0_9 = temp_t0_8 + 8;
    temp_t2 = (((s32) (((s16) arg7 >> 1) + 7) >> 3) & 0x1FF) << 9;
    M2C_FIELD(temp_t0_7, s32 *, 8) = (s32) (temp_t2 | 0xF5480000);
    temp_t4 = (arg14 & 3) << 0x12;
    temp_s2 = (arg16 & 0xF) << 0xE;
    temp_s4 = (arg13 & 3) << 8;
    temp_s3 = (arg15 & 0xF) * 0x10;
    M2C_FIELD(temp_t0_8, s32 *, 4) = (s32) (temp_t4 | (temp_s2 | 0x07000000) | temp_s4 | temp_s3);
    temp_t0_10 = temp_t0_9 + 8;
    M2C_FIELD(temp_t0_8, s32 *, 8) = 0xE6000000;
    M2C_FIELD(temp_t0_9, s32 *, 4) = 0;
    temp_t0_11 = temp_t0_10 + 8;
    temp_t3 = ((s16) arg6 * 4) & 0xFFF;
    M2C_FIELD(temp_t0_9, s32 *, 8) = (s32) (((((s16) arg5 * 2) & 0xFFF) << 0xC) | (temp_t3 | 0xF4000000));
    temp_t1 = ((s16) arg5 + (s16) arg7) - 1;
    temp_t5 = ((((s16) arg6 + (s16) arg8) - 1) * 4) & 0xFFF;
    M2C_FIELD(temp_t0_10, s32 *, 4) = (s32) ((((temp_t1 * 2) & 0xFFF) << 0xC) | (temp_t5 | 0x07000000));
    temp_t0_12 = temp_t0_11 + 8;
    M2C_FIELD(temp_t0_10, s32 *, 8) = 0xE7000000;
    M2C_FIELD(temp_t0_11, s32 *, 4) = 0;
    temp_t0_13 = temp_t0_12 + 8;
    M2C_FIELD(temp_t0_11, s32 *, 8) = (s32) (temp_t2 | 0xF5400000);
    M2C_FIELD(temp_t0_12, s32 *, 4) = (s32) (temp_t4 | temp_s2 | temp_s4 | temp_s3);
    temp_t0_14 = temp_t0_13 + 8;
    M2C_FIELD(temp_t0_12, s32 *, 8) = (s32) (((((s16) arg5 * 4) & 0xFFF) << 0xC) | (temp_t3 | 0xF2000000));
    M2C_FIELD(temp_t0_13, s32 *, 4) = (s32) ((((temp_t1 * 4) & 0xFFF) << 0xC) | temp_t5);
    temp_t0_15 = temp_t0_14 + 8;
    M2C_FIELD(temp_t0_13, s32 *, 8) = (s32) (((((arg1 + arg3) * 4) & 0xFFF) << 0xC) | ((((arg2 + (s16) arg4) * 4) & 0xFFF) | 0xE4000000));
    M2C_FIELD(temp_t0_14, s32 *, 4) = (s32) ((((arg1 * 4) & 0xFFF) << 0xC) | ((arg2 * 4) & 0xFFF));
    temp_t0_16 = temp_t0_15 + 8;
    M2C_FIELD(temp_t0_14, s32 *, 8) = 0xB4000000;
    M2C_FIELD(temp_t0_15, s32 *, 4) = (s32) (((s16) arg5 << 0x15) | (((s16) arg6 << 5) & 0xFFFF));
    temp_t0_17 = temp_t0_16 + 8;
    M2C_FIELD(temp_t0_15, s32 *, 8) = 0xB3000000;
    M2C_FIELD(temp_t0_16, s32 *, 4) = 0x04000400;
    M2C_FIELD(temp_t0_16, s32 *, 8) = 0xE7000000;
    M2C_FIELD(temp_t0_17, s32 *, 4) = 0;
    *arg0 = temp_t0_17 + 8;
}
