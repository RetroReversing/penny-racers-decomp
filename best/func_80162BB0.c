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

s8 func_801FA30C();                                 /* extern */
M2C_UNK guMtxCatF(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK guMtxXFMF(M2C_UNK *, s32, M2C_UNK, M2C_UNK, f32 *, f32 *, f32 *); /* extern */
M2C_UNK guRotateF(M2C_UNK *, s32, M2C_UNK, M2C_UNK, f32); /* extern */
M2C_UNK guTranslate(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK D_190CB8;
extern s32 D_80046834;
extern M2C_UNK D_8011F2F0;
extern s8 D_80126FF7;
extern M2C_UNK D_80182E40;
extern M2C_UNK D_8018A460;
extern M2C_UNK D_8018BC40;
extern M2C_UNK D_80190CB8;

void func_80162BB0(void **arg0, s32 arg1) {
    M2C_UNK sp20;
    M2C_UNK sp60;
    M2C_UNK spA0;
    f32 spE0;
    f32 spE4;
    f32 spE8;
    void *spF4;
    s32 spFC;                                       /* compiler-managed */
    void *sp104;
    M2C_UNK *sp10C;
    M2C_UNK *sp114;
    s32 temp_a2;
    s32 temp_s0_2;
    s32 var_s0;
    s32 var_s4;
    s32 var_s6;
    s8 var_v0;
    s8 var_v0_2;
    s8 var_v0_3;
    u16 temp_v1;
    u8 temp_a1;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_s0;
    void *temp_s7;
    void *temp_t0;
    void *temp_v1_10;
    void *temp_v1_11;
    void *temp_v1_12;
    void *temp_v1_13;
    void *temp_v1_14;
    void *temp_v1_15;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_7;
    void *temp_v1_8;
    void *temp_v1_9;
    void *var_s1;

    temp_a0 = ((arg1 & 0xFFFF) * 0x64) + &D_8011F2F0;
    temp_t0 = M2C_FIELD(temp_a0, void **, 0x60);
    spF4 = temp_t0;
    var_s4 = 0;
    if (M2C_FIELD(temp_t0, s16 *, 0x14) != 0x12C) {
        spFC = (s32) M2C_FIELD(M2C_FIELD(temp_t0, void **, 4), u16 *, 4);
        temp_a2 = spFC;
        temp_a1 = M2C_FIELD(temp_a0, u8 *, 0xC);
        spFC = (temp_a2 * 0x24C) + ((temp_a1 * 0xC4) + &D_8018A460);
        var_s1 = (temp_a2 * 0x300) + ((temp_a1 << 8) + &D_8018BC40);
        sp104 = var_s1;
        sp10C = &sp60;
        sp114 = &spA0;
        var_s0 = 0 * 4;
        do {
            temp_s0 = var_s0 + spFC;
            guRotateF(&sp20, M2C_FIELD(temp_s0, s32 *, 0x64), 0x3F800000, 0, 0.0f);
            var_s6 = 0;
            guRotateF(sp10C, M2C_FIELD(temp_s0, s32 *, 0x84), 0, 0x3F800000, 0.0f);
            guRotateF(sp114, M2C_FIELD(temp_s0, s32 *, 0xA4), 0, 0, 1.0f);
            guMtxCatF(sp10C, &sp20, &sp20);
            guMtxCatF(&sp20, sp114, sp114);
            temp_s7 = (var_s4 * 4) + spFC;
loop_3:
            temp_s0_2 = (var_s4 + M2C_FIELD(spF4, s16 *, 0x14)) & 7;
            guMtxXFMF(&spA0, *(&D_80182E40 + (((var_s4 * 2) + var_s6) * 4)), 0, 0, &spE0, &spE4, &spE8);
            M2C_FIELD(var_s1, s16 *, 0) = (s16) (s32) (spE0 + M2C_FIELD(temp_s7, f32 *, 4));
            M2C_FIELD(var_s1, s16 *, 2) = (s16) (s32) (spE4 + M2C_FIELD(temp_s7, f32 *, 0x24));
            M2C_FIELD(var_s1, s16 *, 4) = (s16) (s32) (spE8 + M2C_FIELD(temp_s7, f32 *, 0x44));
            temp_v1 = M2C_FIELD(M2C_FIELD(spF4, void **, 4), u16 *, 0x230);
            if (temp_v1 == 7) {
                M2C_FIELD(var_s1, s8 *, 0xC) = 0xFF;
                var_v0 = -0x38 - (temp_s0_2 * 0x14);
                goto block_44;
            }
            if ((s32) temp_v1 < 8) {
                if (temp_v1 != 3) {
                    if ((s32) temp_v1 < 4) {
                        if (temp_v1 == 1) {
                            M2C_FIELD(var_s1, s8 *, 0xC) = 0xFF;
                            M2C_FIELD(var_s1, s8 *, 0xD) = 0;
                            var_v0_2 = -0x38 - (temp_s0_2 * 0x14);
                            goto block_49;
                        }
                        if ((s32) temp_v1 >= 2) {
                            M2C_FIELD(var_s1, s8 *, 0xC) = 0;
                            var_v0 = -0x38 - (temp_s0_2 * 0x14);
                            goto block_44;
                        }
                        if (temp_v1 == 0) {
                            M2C_FIELD(var_s1, s8 *, 0xC) = 0xFF;
                            M2C_FIELD(var_s1, s8 *, 0xD) = (s8) (-0x38 - (temp_s0_2 * 0x14));
                            M2C_FIELD(var_s1, s8 *, 0xE) = 0;
                            goto block_50;
                        }
                        var_v0_3 = var_s4 * 0x1E;
                    } else {
                        if (temp_v1 == 5) {
                            M2C_FIELD(var_s1, s8 *, 0xC) = 0;
                            M2C_FIELD(var_s1, s8 *, 0xD) = 0xFF;
                            var_v0_2 = -0x38 - (temp_s0_2 * 0x14);
                            goto block_49;
                        }
                        if ((s32) temp_v1 >= 6) {
                            M2C_FIELD(var_s1, s8 *, 0xC) = 0xFF;
                            M2C_FIELD(var_s1, s8 *, 0xD) = 0xFF;
                            var_v0_2 = -0x38 - (temp_s0_2 * 0x14);
                            goto block_49;
                        }
                        M2C_FIELD(var_s1, s8 *, 0xC) = (s8) (-0x38 - (temp_s0_2 * 0x14));
                        M2C_FIELD(var_s1, s8 *, 0xD) = 0xFF;
                        M2C_FIELD(var_s1, s8 *, 0xE) = 0;
                        goto block_50;
                    }
                } else {
                    M2C_FIELD(var_s1, s8 *, 0xC) = (s8) (-0x38 - (temp_s0_2 * 0x14));
                    M2C_FIELD(var_s1, s8 *, 0xD) = 0;
                    M2C_FIELD(var_s1, s8 *, 0xE) = 0xFF;
                    goto block_50;
                }
            } else if (temp_v1 != 0xB) {
                if ((s32) temp_v1 < 0xC) {
                    if (temp_v1 != 9) {
                        if ((s32) temp_v1 < 0xA) {
                            M2C_FIELD(var_s1, s8 *, 0xC) = (s8) (-0x38 - (temp_s0_2 * 0x14));
                            M2C_FIELD(var_s1, s8 *, 0xD) = 0xFF;
                            M2C_FIELD(var_s1, s8 *, 0xE) = 0xFF;
                        } else {
                            var_v0_2 = -0x38 - (temp_s0_2 * 0x14);
                            M2C_FIELD(var_s1, s8 *, 0xC) = var_v0_2;
                            M2C_FIELD(var_s1, s8 *, 0xD) = 0xFF;
                            goto block_49;
                        }
                    } else {
                        var_v0 = -0x38 - (temp_s0_2 * 0x14);
                        M2C_FIELD(var_s1, s8 *, 0xC) = var_v0;
block_44:
                        M2C_FIELD(var_s1, s8 *, 0xD) = var_v0;
                        M2C_FIELD(var_s1, s8 *, 0xE) = 0xFF;
                    }
                    goto block_50;
                }
                if (temp_v1 != 0xC) {
                    var_v0_3 = var_s4 * 0x1E;
                    if ((s32) temp_v1 < 0x100) {
                        M2C_FIELD(var_s1, s8 *, 0xC) = func_801FA30C();
                        M2C_FIELD(var_s1, s8 *, 0xD) = func_801FA30C();
                        var_v0_2 = func_801FA30C();
                        goto block_49;
                    }
                } else {
                    var_v0_2 = -0x38 - (temp_s0_2 * 0x14);
                    M2C_FIELD(var_s1, s8 *, 0xC) = var_v0_2;
                    M2C_FIELD(var_s1, s8 *, 0xD) = var_v0_2;
                    goto block_49;
                }
            } else {
                M2C_FIELD(var_s1, s8 *, 0xC) = 0xFF;
                var_v0_2 = -0x38 - (temp_s0_2 * 0x14);
                M2C_FIELD(var_s1, s8 *, 0xD) = var_v0_2;
block_49:
                M2C_FIELD(var_s1, s8 *, 0xE) = var_v0_2;
block_50:
                var_v0_3 = var_s4 * 0x1E;
            }
            M2C_FIELD(var_s1, s8 *, 0xF) = var_v0_3;
            var_s6 += 1;
            var_s1 += 0x10;
            if (var_s6 < 2) {
                goto loop_3;
            }
            var_s4 += 1;
            var_s0 = var_s4 * 4;
        } while (var_s4 < 8);
        guTranslate((D_80046834 << 6) + &D_80190CB8, 0, 0, 0);
        temp_a0_2 = *arg0;
        *arg0 = temp_a0_2 + 8;
        M2C_FIELD(temp_a0_2, s32 *, 0) = 0x01020040;
        M2C_FIELD(temp_a0_2, void **, 4) = (void *) ((D_80046834 << 6) + &D_190CB8);
        temp_v1_2 = *arg0;
        *arg0 = temp_v1_2 + 8;
        M2C_FIELD(temp_v1_2, s32 *, 0) = 0xE7000000;
        M2C_FIELD(temp_v1_2, void **, 4) = NULL;
        temp_v1_3 = *arg0;
        *arg0 = temp_v1_3 + 8;
        M2C_FIELD(temp_v1_3, s32 *, 0) = 0xBA001402;
        M2C_FIELD(temp_v1_3, void **, 4) = NULL;
        temp_v1_4 = *arg0;
        *arg0 = temp_v1_4 + 8;
        M2C_FIELD(temp_v1_4, s32 *, 0) = 0xB6000000;
        M2C_FIELD(temp_v1_4, void **, 4) = (void *)0xF3205;
        temp_v1_5 = *arg0;
        *arg0 = temp_v1_5 + 8;
        M2C_FIELD(temp_v1_5, s32 *, 0) = 0xB7000000;
        M2C_FIELD(temp_v1_5, void **, 4) = (void *)0x204;
        temp_v1_6 = *arg0;
        *arg0 = temp_v1_6 + 8;
        M2C_FIELD(temp_v1_6, s32 *, 0) = 0xFCFFFFFF;
        M2C_FIELD(temp_v1_6, void **, 4) = (void *)0xFFFE793C;
        temp_v1_7 = *arg0;
        *arg0 = temp_v1_7 + 8;
        M2C_FIELD(temp_v1_7, s32 *, 0) = 0xB900031D;
        M2C_FIELD(temp_v1_7, void **, 4) = (void *)0x504240;
        temp_v1_8 = *arg0;
        *arg0 = temp_v1_8 + 8;
        M2C_FIELD(temp_v1_8, s32 *, 0) = 0x040040FF;
        M2C_FIELD(temp_v1_8, void **, 4) = sp104;
        temp_v1_9 = *arg0;
        *arg0 = temp_v1_9 + 8;
        M2C_FIELD(temp_v1_9, s32 *, 0) = 0xB1020400;
        M2C_FIELD(temp_v1_9, void **, 4) = (void *)0x20604;
        temp_v1_10 = *arg0;
        *arg0 = temp_v1_10 + 8;
        M2C_FIELD(temp_v1_10, s32 *, 0) = 0xB1060804;
        M2C_FIELD(temp_v1_10, void **, 4) = (void *)0x60A08;
        temp_v1_11 = *arg0;
        *arg0 = temp_v1_11 + 8;
        M2C_FIELD(temp_v1_11, s32 *, 0) = 0xB10A0C08;
        M2C_FIELD(temp_v1_11, void **, 4) = (void *)0xA0E0C;
        temp_v1_12 = *arg0;
        *arg0 = temp_v1_12 + 8;
        M2C_FIELD(temp_v1_12, s32 *, 0) = 0xB10E100C;
        M2C_FIELD(temp_v1_12, void **, 4) = (void *)0xE1210;
        temp_v1_13 = *arg0;
        *arg0 = temp_v1_13 + 8;
        M2C_FIELD(temp_v1_13, s32 *, 0) = 0xB1121410;
        M2C_FIELD(temp_v1_13, void **, 4) = (void *)0x1614;
        temp_v1_14 = *arg0;
        *arg0 = temp_v1_14 + 8;
        M2C_FIELD(temp_v1_14, s32 *, 0) = 0xB1161814;
        M2C_FIELD(temp_v1_14, void **, 4) = (void *)0x161A18;
        temp_v1_15 = *arg0;
        *arg0 = temp_v1_15 + 8;
        M2C_FIELD(temp_v1_15, s32 *, 0) = 0xB11A1C18;
        M2C_FIELD(temp_v1_15, void **, 4) = (void *)0x1A1E1C;
        D_80126FF7 = 0xFF;
    }
}
