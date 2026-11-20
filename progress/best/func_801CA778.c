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

void func_801CA778(void **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3_2;
    s32 temp_t1;
    s32 temp_t2;
    s32 temp_t3;
    s32 temp_t5;
    u32 temp_a3;
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
    temp_a3 = arg3 & 0xFFFF;
    temp_t0_2 = temp_t0 + 8;
    M2C_FIELD(temp_t0, s32 *, 0) = 0xFD100000;
    M2C_FIELD(temp_t0, s32 *, 4) = arg5;
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
    M2C_FIELD(temp_t0_6, s32 *, 8) = 0xFD48003F;
    M2C_FIELD(temp_t0_7, s32 *, 4) = arg4;
    temp_t0_9 = temp_t0_8 + 8;
    M2C_FIELD(temp_t0_7, s32 *, 8) = 0xF5480200;
    M2C_FIELD(temp_t0_8, s32 *, 4) = 0x07080200;
    temp_t0_10 = temp_t0_9 + 8;
    M2C_FIELD(temp_t0_8, s32 *, 8) = 0xE6000000;
    M2C_FIELD(temp_t0_9, s32 *, 4) = 0;
    temp_t0_11 = temp_t0_10 + 8;
    temp_a3_2 = (temp_a3 & 0xF) * 8;
    temp_t5 = (temp_a3 >> 4) * 8;
    temp_t3 = (temp_t5 * 4) & 0xFFF;
    M2C_FIELD(temp_t0_9, s32 *, 8) = (s32) ((temp_a3_2 << 0xD) | (temp_t3 | 0xF4000000));
    arg3 = temp_a3_2 + 7;
    temp_t1 = ((temp_t5 + 7) * 4) & 0xFFF;
    M2C_FIELD(temp_t0_10, s32 *, 4) = (s32) ((arg3 << 0xD) | (temp_t1 | 0x07000000));
    temp_t0_12 = temp_t0_11 + 8;
    M2C_FIELD(temp_t0_10, s32 *, 8) = 0xE7000000;
    M2C_FIELD(temp_t0_11, s32 *, 4) = 0;
    temp_t0_13 = temp_t0_12 + 8;
    M2C_FIELD(temp_t0_11, s32 *, 8) = 0xF5400200;
    M2C_FIELD(temp_t0_12, s32 *, 4) = 0x80200;
    temp_t0_14 = temp_t0_13 + 8;
    M2C_FIELD(temp_t0_12, s32 *, 8) = (s32) ((temp_a3_2 << 0xE) | (temp_t3 | 0xF2000000));
    M2C_FIELD(temp_t0_13, s32 *, 4) = (s32) ((arg3 << 0xE) | temp_t1);
    temp_t0_15 = temp_t0_14 + 8;
    temp_t2 = arg1 & 0xFFFF;
    temp_a2 = arg2 & 0xFFFF;
    M2C_FIELD(temp_t0_13, s32 *, 8) = (s32) (((((temp_t2 + 8) * 4) & 0xFFF) << 0xC) | ((((temp_a2 + 8) * 4) & 0xFFF) | 0xE4000000));
    M2C_FIELD(temp_t0_14, s32 *, 4) = (s32) ((((temp_t2 * 4) & 0xFFF) << 0xC) | ((temp_a2 * 4) & 0xFFF));
    temp_t0_16 = temp_t0_15 + 8;
    M2C_FIELD(temp_t0_14, s32 *, 8) = 0xB4000000;
    M2C_FIELD(temp_t0_15, s32 *, 4) = (s32) ((temp_a3_2 << 0x15) | ((temp_t5 << 5) & 0xFFFF));
    temp_t0_17 = temp_t0_16 + 8;
    M2C_FIELD(temp_t0_15, s32 *, 8) = 0xB3000000;
    M2C_FIELD(temp_t0_16, s32 *, 4) = 0x04000400;
    M2C_FIELD(temp_t0_16, s32 *, 8) = 0xE7000000;
    M2C_FIELD(temp_t0_17, s32 *, 4) = 0;
    *arg0 = temp_t0_17 + 8;
}
