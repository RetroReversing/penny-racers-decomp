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

extern M2C_UNK D_800E1C00;
extern M2C_UNK D_8011F330;
extern M2C_UNK D_80167FB8;
extern M2C_UNK D_8031B5F8;
extern M2C_UNK D_8031C400;

void func_801C1680(void **arg0, s32 arg1) {
    s16 temp_v0;
    s16 var_t1;
    s32 temp_a0;
    s32 temp_a1_2;
    s32 temp_v0_2;
    u16 temp_v1;
    void *temp_a1;
    void *temp_a3;
    void *temp_v1_10;
    void *temp_v1_11;
    void *temp_v1_12;
    void *temp_v1_13;
    void *temp_v1_14;
    void *temp_v1_15;
    void *temp_v1_16;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_7;
    void *temp_v1_8;
    void *temp_v1_9;

    temp_v1 = *(&D_8011F330 + ((arg1 & 0xFFFF) * 0x64));
    if (temp_v1 != 0) {
        var_t1 = 0;
        if (temp_v1 != 1) {
            return;
        }
        temp_v1_2 = *arg0;
        *arg0 = temp_v1_2 + 8;
        M2C_FIELD(temp_v1_2, s32 *, 0) = 0x06000000;
        M2C_FIELD(temp_v1_2, M2C_UNK **, 4) = &D_800E1C00;
        temp_v1_3 = *arg0;
        *arg0 = temp_v1_3 + 8;
        M2C_FIELD(temp_v1_3, s32 *, 0) = 0xB6000000;
        M2C_FIELD(temp_v1_3, M2C_UNK **, 4) = (M2C_UNK *)0x2000;
        temp_v1_4 = *arg0;
        *arg0 = temp_v1_4 + 8;
        M2C_FIELD(temp_v1_4, s32 *, 0) = 0xFD100000;
        M2C_FIELD(temp_v1_4, M2C_UNK **, 4) = &D_8031C400;
        temp_v1_5 = *arg0;
        *arg0 = temp_v1_5 + 8;
        M2C_FIELD(temp_v1_5, s32 *, 0) = 0xE8000000;
        M2C_FIELD(temp_v1_5, M2C_UNK **, 4) = NULL;
        temp_v1_6 = *arg0;
        *arg0 = temp_v1_6 + 8;
        M2C_FIELD(temp_v1_6, s32 *, 0) = 0xF5000100;
        M2C_FIELD(temp_v1_6, M2C_UNK **, 4) = (M2C_UNK *)0x07000000;
        temp_v1_7 = *arg0;
        *arg0 = temp_v1_7 + 8;
        M2C_FIELD(temp_v1_7, s32 *, 0) = 0xE6000000;
        M2C_FIELD(temp_v1_7, M2C_UNK **, 4) = NULL;
        temp_v1_8 = *arg0;
        *arg0 = temp_v1_8 + 8;
        M2C_FIELD(temp_v1_8, s32 *, 0) = 0xF0000000;
        M2C_FIELD(temp_v1_8, M2C_UNK **, 4) = (M2C_UNK *)0x0703C000;
        temp_v1_9 = *arg0;
        *arg0 = temp_v1_9 + 8;
        M2C_FIELD(temp_v1_9, s32 *, 0) = 0xE7000000;
        M2C_FIELD(temp_v1_9, M2C_UNK **, 4) = NULL;
        temp_v1_10 = *arg0;
        *arg0 = temp_v1_10 + 8;
        M2C_FIELD(temp_v1_10, s32 *, 0) = 0x040040FF;
        M2C_FIELD(temp_v1_10, M2C_UNK **, 4) = &D_80167FB8;
        __repair_rows: {
            temp_v1_11 = *arg0;
            *arg0 = temp_v1_11 + 8;
            M2C_FIELD(temp_v1_11, s32 *, 0) = 0xFD48006F;
            M2C_FIELD(temp_v1_11, M2C_UNK **, 4) = &D_8031B5F8;
            temp_v1_12 = *arg0;
            *arg0 = temp_v1_12 + 8;
            M2C_FIELD(temp_v1_12, s32 *, 0) = 0xF5480400;
            M2C_FIELD(temp_v1_12, M2C_UNK **, 4) = (M2C_UNK *)0x07080200;
            temp_v1_13 = *arg0;
            *arg0 = temp_v1_13 + 8;
            M2C_FIELD(temp_v1_13, s32 *, 0) = 0xE6000000;
            M2C_FIELD(temp_v1_13, M2C_UNK **, 4) = NULL;
            temp_v1_14 = *arg0;
            *arg0 = temp_v1_14 + 8;
            M2C_FIELD(temp_v1_14, s32 *, 0) = (s32) ((((var_t1 << 6) & 0xFFF) << 0xC) | 0xF4000000);
            temp_a0 = (var_t1 << 5) + 0x1F;
            M2C_FIELD(temp_v1_14, M2C_UNK **, 4) = (M2C_UNK *) ((((temp_a0 * 2) & 0xFFF) << 0xC) | 0x0700007C);
            temp_v1_15 = *arg0;
            *arg0 = temp_v1_15 + 8;
            M2C_FIELD(temp_v1_15, s32 *, 0) = 0xE7000000;
            M2C_FIELD(temp_v1_15, M2C_UNK **, 4) = NULL;
            temp_v1_16 = *arg0;
            *arg0 = temp_v1_16 + 8;
            M2C_FIELD(temp_v1_16, s32 *, 0) = 0xF5400400;
            M2C_FIELD(temp_v1_16, M2C_UNK **, 4) = (M2C_UNK *)0x80200;
            temp_a1 = *arg0;
            *arg0 = temp_a1 + 8;
            M2C_FIELD(temp_a1, s32 *, 0) = (s32) ((((var_t1 << 7) & 0xFFF) << 0xC) | 0xF2000000);
            M2C_FIELD(temp_a1, M2C_UNK **, 4) = (M2C_UNK *) ((((temp_a0 * 4) & 0xFFF) << 0xC) | 0x7C);
            temp_a3 = *arg0;
            *arg0 = temp_a3 + 8;
            temp_a1_2 = ((var_t1 + 8) << 9) & 0xFE00;
            temp_v0_2 = ((var_t1 + 1) * 2) & 0xFF;
            M2C_FIELD(temp_a3, s32 *, 0) = (s32) ((((var_t1 * 2) & 0xFF) << 0x10) | temp_a1_2 | temp_v0_2 | 0xB1000000);
            M2C_FIELD(temp_a3, M2C_UNK **, 4) = (M2C_UNK *) ((temp_v0_2 << 0x10) | temp_a1_2 | (((var_t1 + 9) * 2) & 0xFF));
            temp_v0 = var_t1 + 1;
            var_t1 = temp_v0;
        }
if (temp_v0 < 7) goto __repair_rows;
        return;
    }
    *(&D_8011F330 + ((arg1 & 0xFFFF) * 0x64)) = 1;
}
