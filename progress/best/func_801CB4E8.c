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

void func_801CB4E8(void **arg0, s32 arg1, s32 arg2, u16 arg3, s32 arg4, s32 arg5) {
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
    void *temp_t1_12;
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

    temp_t1 = *arg0;
    temp_a3 = arg3 & 0xFFFF;
    temp_t1_2 = temp_t1 + 8;
    M2C_FIELD(temp_t1, s32 *, 0) = 0xFD100000;
    M2C_FIELD(temp_t1, s32 *, 4) = arg5;
    temp_t1_3 = temp_t1_2 + 8;
    M2C_FIELD(temp_t1, s32 *, 8) = 0xE8000000;
    M2C_FIELD(temp_t1_2, s32 *, 4) = 0;
    temp_t1_4 = temp_t1_3 + 8;
    M2C_FIELD(temp_t1_2, s32 *, 8) = 0xF5000100;
    M2C_FIELD(temp_t1_3, s32 *, 4) = 0x07000000;
    temp_t1_5 = temp_t1_4 + 8;
    M2C_FIELD(temp_t1_3, s32 *, 8) = 0xE6000000;
    M2C_FIELD(temp_t1_4, s32 *, 4) = 0;
    temp_t1_6 = temp_t1_5 + 8;
    M2C_FIELD(temp_t1_4, s32 *, 8) = 0xF0000000;
    M2C_FIELD(temp_t1_5, s32 *, 4) = 0x0703C000;
    temp_t1_7 = temp_t1_6 + 8;
    M2C_FIELD(temp_t1_5, s32 *, 8) = 0xE7000000;
    M2C_FIELD(temp_t1_6, s32 *, 4) = 0;
    temp_t1_8 = temp_t1_7 + 8;
    M2C_FIELD(temp_t1_6, s32 *, 8) = 0xFD48006F;
    M2C_FIELD(temp_t1_7, s32 *, 4) = arg4;
    temp_t1_9 = temp_t1_8 + 8;
    M2C_FIELD(temp_t1_7, s32 *, 8) = 0xF5480200;
    M2C_FIELD(temp_t1_8, s32 *, 4) = 0x07080200;
    temp_t1_10 = temp_t1_9 + 8;
    M2C_FIELD(temp_t1_8, s32 *, 8) = 0xE6000000;
    M2C_FIELD(temp_t1_9, s32 *, 4) = 0;
    temp_t1_11 = temp_t1_10 + 8;
    temp_t4 = ((temp_a3 & 0xF) * 0xE) & 0xFFFF;
    temp_a3_2 = temp_a3 & 0xFFF0;
    temp_t3 = (temp_a3_2 * 4) & 0xFFF;
    M2C_FIELD(temp_t1_9, s32 *, 8) = (s32) ((((temp_t4 * 2) & 0xFFF) << 0xC) | (temp_t3 | 0xF4000000));
    temp_t0 = temp_t4 + 0xD;
    temp_t2 = ((temp_a3_2 + 0xF) * 4) & 0xFFF;
    M2C_FIELD(temp_t1_10, s32 *, 4) = (s32) ((((temp_t0 * 2) & 0xFFF) << 0xC) | (temp_t2 | 0x07000000));
    temp_t1_12 = temp_t1_11 + 8;
    M2C_FIELD(temp_t1_10, s32 *, 8) = 0xE7000000;
    M2C_FIELD(temp_t1_11, s32 *, 4) = 0;
    temp_t1_13 = temp_t1_12 + 8;
    M2C_FIELD(temp_t1_11, s32 *, 8) = 0xF5400200;
    M2C_FIELD(temp_t1_12, s32 *, 4) = 0x80200;
    temp_t1_14 = temp_t1_13 + 8;
    M2C_FIELD(temp_t1_12, s32 *, 8) = (s32) ((((temp_t4 * 4) & 0xFFF) << 0xC) | (temp_t3 | 0xF2000000));
    M2C_FIELD(temp_t1_13, s32 *, 4) = (s32) ((((temp_t0 * 4) & 0xFFF) << 0xC) | temp_t2);
    temp_t1_15 = temp_t1_14 + 8;
    temp_a1 = arg1 & 0xFFFF;
    temp_a2 = arg2 & 0xFFFF;
    M2C_FIELD(temp_t1_13, s32 *, 8) = (s32) (((((temp_a1 + 0xE) * 4) & 0xFFF) << 0xC) | ((((temp_a2 + 0x10) * 4) & 0xFFF) | 0xE4000000));
    M2C_FIELD(temp_t1_14, s32 *, 4) = (s32) ((((temp_a1 * 4) & 0xFFF) << 0xC) | ((temp_a2 * 4) & 0xFFF));
    temp_t1_16 = temp_t1_15 + 8;
    M2C_FIELD(temp_t1_14, s32 *, 8) = 0xB4000000;
    M2C_FIELD(temp_t1_15, s32 *, 4) = (s32) ((temp_t4 << 0x15) | ((temp_a3_2 << 5) & 0xFFFF));
    temp_t1_17 = temp_t1_16 + 8;
    M2C_FIELD(temp_t1_15, s32 *, 8) = 0xB3000000;
    M2C_FIELD(temp_t1_16, s32 *, 4) = 0x04000400;
    M2C_FIELD(temp_t1_16, s32 *, 8) = 0xE7000000;
    M2C_FIELD(temp_t1_17, s32 *, 4) = 0;
    *arg0 = temp_t1_17 + 8;
}
