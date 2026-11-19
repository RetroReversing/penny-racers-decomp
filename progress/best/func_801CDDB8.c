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

void func_801CDDB8(void **arg0, s16 arg1, s16 arg2, s16 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg11, s32 arg12, s32 arg13, s32 arg14, s32 arg15, s32 arg16) {
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_t0;
    s32 temp_t1;
    s32 temp_t2;
    s32 temp_t3;
    s32 temp_t4;
    s32 temp_t5;
    void *temp_v1;
    void *temp_v1_10;
    void *temp_v1_11;
    void *temp_v1_12;
    void *temp_v1_13;
    void *temp_v1_14;
    void *temp_v1_15;
    void *temp_v1_16;
    void *temp_v1_17;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_7;
    void *temp_v1_8;
    void *temp_v1_9;

    temp_v1 = *arg0;
    temp_v1_2 = temp_v1 + 8;
    M2C_FIELD(temp_v1, s32 *, 0) = 0xFD100000;
    M2C_FIELD(temp_v1, s32 *, 4) = arg12;
    temp_v1_3 = temp_v1_2 + 8;
    M2C_FIELD(temp_v1, s32 *, 8) = 0xE8000000;
    M2C_FIELD(temp_v1_2, s32 *, 4) = 0;
    temp_v1_4 = temp_v1_3 + 8;
    M2C_FIELD(temp_v1_2, s32 *, 8) = 0xF5000100;
    M2C_FIELD(temp_v1_3, s32 *, 4) = 0x07000000;
    temp_v1_5 = temp_v1_4 + 8;
    M2C_FIELD(temp_v1_3, s32 *, 8) = 0xE6000000;
    M2C_FIELD(temp_v1_4, s32 *, 4) = 0;
    temp_v1_6 = temp_v1_5 + 8;
    M2C_FIELD(temp_v1_4, s32 *, 8) = 0xF0000000;
    M2C_FIELD(temp_v1_5, s32 *, 4) = 0x073FC000;
    temp_v1_7 = temp_v1_6 + 8;
    M2C_FIELD(temp_v1_5, s32 *, 8) = 0xE7000000;
    M2C_FIELD(temp_v1_6, s32 *, 4) = 0;
    temp_v1_8 = temp_v1_7 + 8;
    M2C_FIELD(temp_v1_6, s32 *, 8) = (s32) ((((s16) arg9 - 1) & 0xFFF) | 0xFD480000);
    M2C_FIELD(temp_v1_7, s32 *, 4) = arg11;
    temp_v1_9 = temp_v1_8 + 8;
    temp_t2 = ((((s32) ((s16) arg7 + 7) >> 3) & 0x1FF) << 9) | 0xF5480000;
    M2C_FIELD(temp_v1_7, s32 *, 8) = temp_t2;
    temp_t5 = (arg14 & 3) << 0x12;
    temp_s2 = (arg16 & 0xF) << 0xE;
    temp_s4 = (arg13 & 3) << 8;
    temp_s3 = (arg15 & 0xF) * 0x10;
    M2C_FIELD(temp_v1_8, s32 *, 4) = (s32) (temp_t5 | (temp_s2 | 0x07000000) | temp_s4 | temp_s3);
    temp_v1_10 = temp_v1_9 + 8;
    M2C_FIELD(temp_v1_8, s32 *, 8) = 0xE6000000;
    M2C_FIELD(temp_v1_9, s32 *, 4) = 0;
    temp_v1_11 = temp_v1_10 + 8;
    temp_t0 = (((s16) arg5 * 4) & 0xFFF) << 0xC;
    temp_t3 = ((s16) arg6 * 4) & 0xFFF;
    M2C_FIELD(temp_v1_9, s32 *, 8) = (s32) (temp_t0 | (temp_t3 | 0xF4000000));
    temp_t1 = (((((s16) arg5 + (s16) arg7) - 1) * 4) & 0xFFF) << 0xC;
    temp_t4 = ((((s16) arg6 + (s16) arg8) - 1) * 4) & 0xFFF;
    M2C_FIELD(temp_v1_10, s32 *, 4) = (s32) (temp_t1 | (temp_t4 | 0x07000000));
    temp_v1_12 = temp_v1_11 + 8;
    M2C_FIELD(temp_v1_10, s32 *, 8) = 0xE7000000;
    M2C_FIELD(temp_v1_11, s32 *, 4) = 0;
    temp_v1_13 = temp_v1_12 + 8;
    M2C_FIELD(temp_v1_11, s32 *, 8) = temp_t2;
    M2C_FIELD(temp_v1_12, s32 *, 4) = (s32) (temp_t5 | temp_s2 | temp_s4 | temp_s3);
    temp_v1_14 = temp_v1_13 + 8;
    M2C_FIELD(temp_v1_12, s32 *, 8) = (s32) (temp_t0 | (temp_t3 | 0xF2000000));
    M2C_FIELD(temp_v1_13, s32 *, 4) = (s32) (temp_t1 | temp_t4);
    temp_v1_15 = temp_v1_14 + 8;
    M2C_FIELD(temp_v1_13, s32 *, 8) = (s32) (((((arg1 + arg3) * 4) & 0xFFF) << 0xC) | ((((arg2 + (s16) arg4) * 4) & 0xFFF) | 0xE4000000));
    M2C_FIELD(temp_v1_14, s32 *, 4) = (s32) ((((arg1 * 4) & 0xFFF) << 0xC) | ((arg2 * 4) & 0xFFF));
    temp_v1_16 = temp_v1_15 + 8;
    M2C_FIELD(temp_v1_14, s32 *, 8) = 0xB4000000;
    M2C_FIELD(temp_v1_15, s32 *, 4) = (s32) (((s16) arg5 << 0x15) | (((s16) arg6 << 5) & 0xFFFF));
    temp_v1_17 = temp_v1_16 + 8;
    M2C_FIELD(temp_v1_15, s32 *, 8) = 0xB3000000;
    M2C_FIELD(temp_v1_16, s32 *, 4) = 0x04000400;
    M2C_FIELD(temp_v1_16, s32 *, 8) = 0xE7000000;
    M2C_FIELD(temp_v1_17, s32 *, 4) = 0;
    *arg0 = temp_v1_17 + 8;
}
