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

extern s32 D_80046834;
extern M2C_UNK D_800DE080;
extern M2C_UNK D_800E18A0;
extern M2C_UNK D_8011F32E;
extern M2C_UNK D_8011F330;
extern M2C_UNK D_80187D00;
extern M2C_UNK D_80189930;
extern M2C_UNK D_802F94E8;
extern M2C_UNK D_80301BE0;

void func_8015B344(void **arg0, s32 arg1) {
    s16 temp_a1_2;
    s16 temp_a2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1_3;
    s32 temp_a2_2;
    s32 temp_t2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_12;
    s32 temp_v1_27;
    s32 temp_v1_28;
    s32 var_t0;
    s32 var_t1;
    void *temp_a1;
    void *temp_a1_4;
    void *temp_v1_10;
    void *temp_v1_11;
    void *temp_v1_13;
    void *temp_v1_14;
    void *temp_v1_15;
    void *temp_v1_16;
    void *temp_v1_17;
    void *temp_v1_18;
    void *temp_v1_19;
    void *temp_v1_20;
    void *temp_v1_21;
    void *temp_v1_22;
    void *temp_v1_23;
    void *temp_v1_24;
    void *temp_v1_25;
    void *temp_v1_26;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_7;
    void *temp_v1_8;
    void *temp_v1_9;

    temp_v1 = (arg1 & 0xFFFF) * 0x64;
    if (*(&D_8011F32E + temp_v1) != 0) {
        var_t1 = 0;
        if (*(&D_8011F330 + temp_v1) == 0) {
            temp_v1_2 = *arg0;
            *arg0 = temp_v1_2 + 8;
            M2C_FIELD(temp_v1_2, s32 *, 0) = 0x06000000;
            M2C_FIELD(temp_v1_2, M2C_UNK **, 4) = &D_800E18A0;
            temp_v1_3 = *arg0;
            *arg0 = temp_v1_3 + 8;
            M2C_FIELD(temp_v1_3, s32 *, 0) = 0xB900031D;
            M2C_FIELD(temp_v1_3, M2C_UNK **, 4) = (M2C_UNK *)0x552048;
            temp_v1_4 = *arg0;
            *arg0 = temp_v1_4 + 8;
            M2C_FIELD(temp_v1_4, s32 *, 0) = 0xB6000000;
            M2C_FIELD(temp_v1_4, M2C_UNK **, 4) = (M2C_UNK *)0x2001;
            temp_v1_5 = M2C_FIELD(&D_800DE080, void **, 0x64);
            M2C_FIELD(&D_800DE080, void **, 0x64) = (void *) (temp_v1_5 + 8);
            M2C_FIELD(temp_v1_5, s32 *, 0) = 0xBC000002;
            M2C_FIELD(temp_v1_5, s32 *, 4) = 0x80000040;
            M2C_FIELD(&D_800DE080, void **, 0x64) = (void *) (temp_v1_5 + 0x10);
            M2C_FIELD(temp_v1_5, s32 *, 8) = 0x03860010;
            M2C_FIELD(temp_v1_5, M2C_UNK **, 0xC) = &D_80189930;
            M2C_FIELD(&D_800DE080, void **, 0x64) = (void *) (temp_v1_5 + 0x18);
            M2C_FIELD(temp_v1_5, s32 *, 0x10) = 0x03880010;
            M2C_FIELD(temp_v1_5, void **, 0x14) = (void *) (&D_80189930 - 8);
            temp_v1_6 = *arg0;
            *arg0 = temp_v1_6 + 8;
            M2C_FIELD(temp_v1_6, s32 *, 0) = 0xFD100000;
            M2C_FIELD(temp_v1_6, M2C_UNK **, 4) = &D_80301BE0;
            temp_v1_7 = *arg0;
            *arg0 = temp_v1_7 + 8;
            M2C_FIELD(temp_v1_7, s32 *, 0) = 0xE8000000;
            M2C_FIELD(temp_v1_7, M2C_UNK **, 4) = NULL;
            temp_v1_8 = *arg0;
            *arg0 = temp_v1_8 + 8;
            M2C_FIELD(temp_v1_8, s32 *, 0) = 0xF5000100;
            M2C_FIELD(temp_v1_8, M2C_UNK **, 4) = (M2C_UNK *)0x07000000;
            temp_v1_9 = *arg0;
            *arg0 = temp_v1_9 + 8;
            M2C_FIELD(temp_v1_9, s32 *, 0) = 0xE6000000;
            M2C_FIELD(temp_v1_9, M2C_UNK **, 4) = NULL;
            temp_v1_10 = *arg0;
            *arg0 = temp_v1_10 + 8;
            M2C_FIELD(temp_v1_10, s32 *, 0) = 0xF0000000;
            M2C_FIELD(temp_v1_10, M2C_UNK **, 4) = (M2C_UNK *)0x073FC000;
            temp_v1_11 = *arg0;
            *arg0 = temp_v1_11 + 8;
            M2C_FIELD(temp_v1_11, s32 *, 0) = 0xE7000000;
            M2C_FIELD(temp_v1_11, M2C_UNK **, 4) = NULL;
            do {
                temp_a1 = *arg0;
                *arg0 = temp_a1 + 8;
                M2C_FIELD(temp_a1, s32 *, 0) = 0x040081FF;
                M2C_FIELD(temp_a1, M2C_UNK **, 4) = (M2C_UNK *) ((D_80046834 * 0xE00) + ((var_t1 << 8) + &D_80187D00));
                var_t0 = 0;
                temp_v1_12 = var_t1 - 1;
                temp_v0 = (temp_v1_12 * 0x2C) & 0xFFC;
                temp_t2 = (((temp_v1_12 * 0xB) + 0xA) * 4) & 0xFFC;
loop_4:
                if ((((var_t0 == 0) | (var_t0 == 0xE)) != 0) || (temp_v0_2 = var_t0 - 1, (((var_t1 == 0) | (var_t1 == 0xC)) != 0))) {
                    temp_v1_13 = *arg0;
                    *arg0 = temp_v1_13 + 8;
                    M2C_FIELD(temp_v1_13, s32 *, 0) = 0xFD48010F;
                    M2C_FIELD(temp_v1_13, M2C_UNK **, 4) = &D_802F94E8;
                    temp_v1_14 = *arg0;
                    *arg0 = temp_v1_14 + 8;
                    M2C_FIELD(temp_v1_14, s32 *, 0) = 0xF5480600;
                    M2C_FIELD(temp_v1_14, M2C_UNK **, 4) = (M2C_UNK *)0x07080200;
                    temp_v1_15 = *arg0;
                    *arg0 = temp_v1_15 + 8;
                    M2C_FIELD(temp_v1_15, s32 *, 0) = 0xE6000000;
                    M2C_FIELD(temp_v1_15, M2C_UNK **, 4) = NULL;
                    temp_v1_16 = *arg0;
                    *arg0 = temp_v1_16 + 8;
                    M2C_FIELD(temp_v1_16, s32 *, 0) = 0xF4000000;
                    M2C_FIELD(temp_v1_16, M2C_UNK **, 4) = (M2C_UNK *)0x0704C028;
                    temp_v1_17 = *arg0;
                    *arg0 = temp_v1_17 + 8;
                    M2C_FIELD(temp_v1_17, s32 *, 0) = 0xE7000000;
                    M2C_FIELD(temp_v1_17, M2C_UNK **, 4) = NULL;
                    temp_v1_18 = *arg0;
                    *arg0 = temp_v1_18 + 8;
                    M2C_FIELD(temp_v1_18, s32 *, 0) = 0xF5480600;
                    M2C_FIELD(temp_v1_18, M2C_UNK **, 4) = (M2C_UNK *)0x80200;
                    temp_v1_19 = *arg0;
                    *arg0 = temp_v1_19 + 8;
                    M2C_FIELD(temp_v1_19, s32 *, 0) = 0xF2000000;
                    M2C_FIELD(temp_v1_19, M2C_UNK **, 4) = (M2C_UNK *)0x4C028;
                } else {
                    temp_a2 = (temp_v0_2 * 0x14) + 0x13;
                    temp_v1_20 = *arg0;
                    *arg0 = temp_v1_20 + 8;
                    M2C_FIELD(temp_v1_20, s32 *, 0) = 0xFD48010F;
                    M2C_FIELD(temp_v1_20, M2C_UNK **, 4) = &D_802F94E8;
                    temp_v1_21 = *arg0;
                    *arg0 = temp_v1_21 + 8;
                    temp_a1_2 = temp_v0_2 * 0x14;
                    temp_a0 = ((((s32) ((temp_a2 - temp_a1_2) + 8) >> 3) & 0x1FF) << 9) | 0xF5480000;
                    M2C_FIELD(temp_v1_21, s32 *, 0) = temp_a0;
                    M2C_FIELD(temp_v1_21, M2C_UNK **, 4) = (M2C_UNK *)0x07080200;
                    temp_v1_22 = *arg0;
                    *arg0 = temp_v1_22 + 8;
                    M2C_FIELD(temp_v1_22, s32 *, 0) = 0xE6000000;
                    M2C_FIELD(temp_v1_22, M2C_UNK **, 4) = NULL;
                    temp_v1_23 = *arg0;
                    *arg0 = temp_v1_23 + 8;
                    temp_a1_3 = ((temp_a1_2 * 4) & 0xFFF) << 0xC;
                    M2C_FIELD(temp_v1_23, s32 *, 0) = (s32) (temp_a1_3 | (temp_v0 | 0xF4000000));
                    temp_a2_2 = ((temp_a2 * 4) & 0xFFF) << 0xC;
                    M2C_FIELD(temp_v1_23, M2C_UNK **, 4) = (M2C_UNK *) (temp_a2_2 | (temp_t2 | 0x07000000));
                    temp_v1_24 = *arg0;
                    *arg0 = temp_v1_24 + 8;
                    M2C_FIELD(temp_v1_24, s32 *, 0) = 0xE7000000;
                    M2C_FIELD(temp_v1_24, M2C_UNK **, 4) = NULL;
                    temp_v1_25 = *arg0;
                    *arg0 = temp_v1_25 + 8;
                    M2C_FIELD(temp_v1_25, s32 *, 0) = temp_a0;
                    M2C_FIELD(temp_v1_25, M2C_UNK **, 4) = (M2C_UNK *)0x80200;
                    temp_v1_26 = *arg0;
                    *arg0 = temp_v1_26 + 8;
                    M2C_FIELD(temp_v1_26, s32 *, 0) = (s32) (temp_a1_3 | (temp_v0 | 0xF2000000));
                    M2C_FIELD(temp_v1_26, M2C_UNK **, 4) = (M2C_UNK *) (temp_a2_2 | temp_t2);
                }
                temp_a1_4 = *arg0;
                *arg0 = temp_a1_4 + 8;
                temp_a0_2 = ((var_t0 + 0x10) << 9) & 0xFE00;
                temp_v1_27 = ((var_t0 + 1) * 2) & 0xFF;
                M2C_FIELD(temp_a1_4, s32 *, 0) = (s32) ((((var_t0 * 2) & 0xFF) << 0x10) | temp_a0_2 | temp_v1_27 | 0xB1000000);
                temp_v1_28 = (temp_v1_27 << 0x10) | temp_a0_2 | (((var_t0 + 0x11) * 2) & 0xFF);
                var_t0 += 1;
                M2C_FIELD(temp_a1_4, M2C_UNK **, 4) = (M2C_UNK *) temp_v1_28;
                if (var_t0 < 0xF) {
                    goto loop_4;
                }
                var_t1 += 1;
            } while (var_t1 < 0xD);
        }
    }
}
