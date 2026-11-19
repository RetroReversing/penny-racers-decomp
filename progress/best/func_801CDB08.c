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

void func_801CDB08(void **arg0, s16 arg1, s16 arg2, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg15, s32 arg16, s32 arg17, s32 arg18, s32 arg19, s32 arg20) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_t0;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_t3;
    s32 temp_t7;
    void *temp_a3;
    void *temp_a3_10;
    void *temp_a3_11;
    void *temp_a3_12;
    void *temp_a3_13;
    void *temp_a3_14;
    void *temp_a3_15;
    void *temp_a3_16;
    void *temp_a3_17;
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
    M2C_FIELD(temp_a3, s32 *, 0) = 0xFD100000;
    M2C_FIELD(temp_a3, s32 *, 4) = arg16;
    temp_a3_3 = temp_a3_2 + 8;
    M2C_FIELD(temp_a3, s32 *, 8) = 0xE8000000;
    M2C_FIELD(temp_a3_2, s32 *, 4) = 0;
    temp_a3_4 = temp_a3_3 + 8;
    M2C_FIELD(temp_a3_2, s32 *, 8) = 0xF5000100;
    M2C_FIELD(temp_a3_3, s32 *, 4) = 0x07000000;
    temp_a3_5 = temp_a3_4 + 8;
    M2C_FIELD(temp_a3_3, s32 *, 8) = 0xE6000000;
    M2C_FIELD(temp_a3_4, s32 *, 4) = 0;
    temp_a3_6 = temp_a3_5 + 8;
    M2C_FIELD(temp_a3_4, s32 *, 8) = 0xF0000000;
    M2C_FIELD(temp_a3_5, s32 *, 4) = 0x073FC000;
    temp_a3_7 = temp_a3_6 + 8;
    M2C_FIELD(temp_a3_5, s32 *, 8) = 0xE7000000;
    M2C_FIELD(temp_a3_6, s32 *, 4) = 0;
    temp_a3_8 = temp_a3_7 + 8;
    temp_t1 = (s16) arg7 - 1;
    M2C_FIELD(temp_a3_6, s32 *, 8) = (s32) ((temp_t1 & 0xFFF) | 0xFD480000);
    M2C_FIELD(temp_a3_7, s32 *, 4) = arg15;
    temp_a3_9 = temp_a3_8 + 8;
    temp_t0 = ((((s32) ((s16) arg7 + 7) >> 3) & 0x1FF) << 9) | 0xF5480000;
    M2C_FIELD(temp_a3_7, s32 *, 8) = temp_t0;
    temp_t3 = (arg18 & 3) << 0x12;
    temp_s0 = (arg20 & 0xF) << 0xE;
    temp_s2 = (arg17 & 3) << 8;
    temp_s1 = (arg19 & 0xF) * 0x10;
    M2C_FIELD(temp_a3_8, s32 *, 4) = (s32) (temp_t3 | (temp_s0 | 0x07000000) | temp_s2 | temp_s1);
    temp_a3_10 = temp_a3_9 + 8;
    M2C_FIELD(temp_a3_8, s32 *, 8) = 0xE6000000;
    M2C_FIELD(temp_a3_9, s32 *, 4) = 0;
    temp_a3_11 = temp_a3_10 + 8;
    M2C_FIELD(temp_a3_9, s32 *, 8) = 0xF4000000;
    temp_t1_2 = ((temp_t1 * 4) & 0xFFF) << 0xC;
    temp_t7 = (((s32) (arg8 << 0x10) >> 0xE) - 4) & 0xFFF;
    M2C_FIELD(temp_a3_10, s32 *, 4) = (s32) (temp_t1_2 | (temp_t7 | 0x07000000));
    temp_a3_12 = temp_a3_11 + 8;
    M2C_FIELD(temp_a3_10, s32 *, 8) = 0xE7000000;
    M2C_FIELD(temp_a3_11, s32 *, 4) = 0;
    temp_a3_13 = temp_a3_12 + 8;
    M2C_FIELD(temp_a3_11, s32 *, 8) = temp_t0;
    M2C_FIELD(temp_a3_12, s32 *, 4) = (s32) (temp_t3 | temp_s0 | temp_s2 | temp_s1);
    temp_a3_14 = temp_a3_13 + 8;
    M2C_FIELD(temp_a3_12, s32 *, 8) = 0xF2000000;
    M2C_FIELD(temp_a3_13, s32 *, 4) = (s32) (temp_t1_2 | temp_t7);
    temp_a3_15 = temp_a3_14 + 8;
    M2C_FIELD(temp_a3_13, s32 *, 8) = (s32) (((((arg1 + (s16) arg5) * 4) & 0xFFF) << 0xC) | ((((arg2 + (s16) arg6) * 4) & 0xFFF) | 0xE4000000));
    M2C_FIELD(temp_a3_14, s32 *, 4) = (s32) ((((arg1 * 4) & 0xFFF) << 0xC) | ((arg2 * 4) & 0xFFF));
    temp_a3_16 = temp_a3_15 + 8;
    M2C_FIELD(temp_a3_14, s32 *, 8) = 0xB4000000;
    M2C_FIELD(temp_a3_15, s32 *, 4) = 0;
    temp_a3_17 = temp_a3_16 + 8;
    M2C_FIELD(temp_a3_15, s32 *, 8) = 0xB3000000;
    M2C_FIELD(temp_a3_16, s32 *, 4) = 0x04000400;
    M2C_FIELD(temp_a3_16, s32 *, 8) = 0xE7000000;
    M2C_FIELD(temp_a3_17, s32 *, 4) = 0;
    *arg0 = temp_a3_17 + 8;
}
