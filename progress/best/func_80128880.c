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

f32 func_80127000(f32 *, f32 *);                    /* extern */
M2C_UNK func_80127030(f32 *, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_80127148(s32 *, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_801271A0();                                /* extern */
M2C_UNK func_80127870(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
f32 sqrtf(f32);                                     /* extern */
extern f64 D_8012AA30;
extern M2C_UNK D_8012AB40;
extern f32 D_8012AB48;
extern M2C_UNK D_8012AB4C;
extern f32 D_8012AB50;
extern f32 D_8012AB54;
extern M2C_UNK D_8012AB58;
extern f32 D_8012AB60;
extern M2C_UNK D_8012AB64;
extern M2C_UNK D_8012AB70;
extern M2C_UNK D_8012AB7C;
extern f32 D_8012AB80;
extern f32 D_8012AB84;
extern M2C_UNK D_8012AB88;
extern M2C_UNK D_8012AB98;
extern M2C_UNK D_8012AB9C;
extern M2C_UNK D_8012ABA0;

void func_80128880(void *arg0, void *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7) {
    s32 sp34;
    s32 sp38;
    s32 sp44;
    s32 sp48;
    f32 sp20;
    f32 sp24;
    f32 sp28;
    s32 sp30;
    s32 sp40;
    s32 sp54;
    u8 ***sp5C;
    f32 temp_ft0;
    f32 temp_ft0_2;
    f32 temp_ft1;
    f32 temp_ft1_2;
    f32 temp_ft1_3;
    f32 temp_ft2;
    f32 temp_ft2_2;
    f32 temp_ft2_3;
    f32 temp_ft3;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 var_fs1;
    f32 var_fv0;
    s32 temp_a0;
    s32 temp_t0;
    s32 var_a0;
    s32 var_a1;
    s32 var_fp;
    s32 var_s2;
    s32 var_t0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1_2;
    s32 var_v1_3;
    u8 ***temp_v0;
    u8 **temp_s7;
    u8 **temp_v0_2;
    u8 **var_v1;
    void *temp_a0_2;
    void *temp_s0;

    M2C_FIELD(arg0, s8 *, 1) = 0;
    M2C_FIELD(arg0, u8 *, 2) = 0U;
    do { M2C_FIELD(&D_8012AB40, f32 *, 0) = arg2; } while (0);
    M2C_FIELD(&D_8012AB40, f32 *, 4) = arg3;
    M2C_FIELD(&D_8012AB40, f32 *, 8) = arg4;
    do { M2C_FIELD(&D_8012AB58, f32 *, 0) = (f32) (arg2 + arg5); } while (0);
    M2C_FIELD(&D_8012AB58, f32 *, 4) = (f32) (arg3 + arg6);
    M2C_FIELD(&D_8012AB58, f32 *, 8) = (f32) (arg4 + arg7);
    var_fs1 = -32000.0f;
    temp_v0 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, M2C_UNK **, 0x50), M2C_UNK **, 4), u8 ****, 4);
    sp5C = temp_v0;
    sp54 = 0;
    temp_v0_2 = *temp_v0;
    var_v1 = temp_v0_2;
    if (*temp_v0_2 != NULL) {
        var_t0 = sp54;
        var_v0 = var_t0 * 2;
        do {
            temp_s7 = &var_v1[var_v0 + var_t0];
            temp_ft0 = ((f32) M2C_FIELD(M2C_FIELD(temp_s7, M2C_UNK **, 4), s16 *, 0x50) + M2C_FIELD(arg1, f32 *, 0x18)) - 30.0f;
            M2C_FIELD(&D_8012AB88, f32 *, 0) = temp_ft0;
            temp_ft2 = (f32) M2C_FIELD(M2C_FIELD(temp_s7, M2C_UNK **, 4), s16 *, 0x40) + M2C_FIELD(arg1, f32 *, 0x18) + 30.0f;
            M2C_FIELD(&D_8012AB70, f32 *, 0) = temp_ft2;
            temp_ft1 = ((f32) M2C_FIELD(M2C_FIELD(temp_s7, M2C_UNK **, 4), s16 *, 0x54) + M2C_FIELD(arg1, f32 *, 0x20)) - 30.0f;
            M2C_FIELD(&D_8012AB88, f32 *, 8) = temp_ft1;
            temp_fv0 = (f32) M2C_FIELD(M2C_FIELD(temp_s7, M2C_UNK **, 4), s16 *, 0x44) + M2C_FIELD(arg1, f32 *, 0x20) + 30.0f;
            M2C_FIELD(&D_8012AB70, f32 *, 8) = temp_fv0;
            var_v1_2 = 0;
            if ((temp_ft0 <= M2C_FIELD(&D_8012AB40, f32 *, 0)) && (M2C_FIELD(&D_8012AB40, f32 *, 0) <= temp_ft2) && (temp_ft1 <= D_8012AB48) && (D_8012AB48 <= temp_fv0)) {
                var_v1_2 = 1;
            }
            if (!(var_v1_2 & 0xFF)) {
                if ((M2C_FIELD(&D_8012AB88, f32 *, 0) <= M2C_FIELD(&D_8012AB58, f32 *, 0)) && (M2C_FIELD(&D_8012AB58, f32 *, 0) <= M2C_FIELD(&D_8012AB70, f32 *, 0)) && (M2C_FIELD(&D_8012AB88, f32 *, 8) <= D_8012AB60) && (D_8012AB60 <= M2C_FIELD(&D_8012AB70, f32 *, 8))) {
                    var_v1_2 += 1;
                }
                if (var_v1_2 & 0xFF) {
                    goto block_14;
                }
            } else {
block_14:
                var_fp = 0;
                if (*M2C_FIELD(temp_s7, u8 **, 0) != 0) {
                    var_v0_2 = 0 * 0x10;
                    do {
                        temp_s0 = var_v0_2 + M2C_FIELD(temp_s7, u8 **, 0);
                        var_a1 = 0;
                        if ((s32) M2C_FIELD(temp_s0, u8 *, 0xC) > 0) {
                            __repair_rows: {
                                temp_a0 = var_a1 * 0x10;
                                *(&D_8012AB98 + ((M2C_FIELD(temp_s0, u8 *, 0xD) + var_a1) * 0xC)) = *(f32 *)(s32 *)(temp_a0 + M2C_FIELD(temp_s0, s32 *, 8)) + M2C_FIELD(arg1, f32 *, 0x18);
                                *(&D_8012AB9C + ((M2C_FIELD(temp_s0, u8 *, 0xD) + var_a1) * 0xC)) = (f32) M2C_FIELD((temp_a0 + M2C_FIELD(temp_s0, s32 *, 8)), s16 *, 2) + M2C_FIELD(arg1, f32 *, 0x1C);
                                *(&D_8012ABA0 + ((M2C_FIELD(temp_s0, u8 *, 0xD) + var_a1) * 0xC)) = (f32) M2C_FIELD((temp_a0 + M2C_FIELD(temp_s0, s32 *, 8)), s16 *, 4) + M2C_FIELD(arg1, f32 *, 0x20);
                                var_a1 += 1;
                            }
if (var_a1 < (s32) M2C_FIELD(temp_s0, u8 *, 0xC)) goto __repair_rows;
                        }
                        var_s2 = 0;
                        if ((s32) M2C_FIELD(temp_s0, u8 *, 0) > 0) {
                            var_a0 = 0 * 2;
                            do {
                                temp_a0_2 = var_a0 + var_s2 + M2C_FIELD(temp_s0, s32 *, 4);
                                M2C_FIELD(&D_8012AB64, f32 *, 0) = *(f32 *)(&D_8012AB98 + (M2C_FIELD(temp_a0_2, u8 *, 0) * 0xC));
                                M2C_FIELD(&D_8012AB64, f32 *, 4) = *(f32 *)(&D_8012AB9C + (M2C_FIELD(temp_a0_2, u8 *, 0) * 0xC));
                                M2C_FIELD(&D_8012AB64, f32 *, 8) = *(f32 *)(&D_8012ABA0 + (M2C_FIELD(temp_a0_2, u8 *, 0) * 0xC));
                                M2C_FIELD(&D_8012AB4C, M2C_UNK32 *, 0) = (M2C_UNK32) *(&D_8012AB98 + (M2C_FIELD(temp_a0_2, u8 *, 1) * 0xC));
                                D_8012AB50 = *(&D_8012AB9C + (M2C_FIELD(temp_a0_2, u8 *, 1) * 0xC));
                                D_8012AB54 = *(&D_8012ABA0 + (M2C_FIELD(temp_a0_2, u8 *, 1) * 0xC));
                                M2C_FIELD(&D_8012AB7C, M2C_UNK32 *, 0) = (M2C_UNK32) *(&D_8012AB98 + (M2C_FIELD(temp_a0_2, u8 *, 2) * 0xC));
                                D_8012AB80 = *(&D_8012AB9C + (M2C_FIELD(temp_a0_2, u8 *, 2) * 0xC));
                                D_8012AB84 = *(&D_8012ABA0 + (M2C_FIELD(temp_a0_2, u8 *, 2) * 0xC));
                                func_80127870(&D_8012AB64, &D_8012AB4C, &D_8012AB7C, &D_8012AB88, &D_8012AB70);
                                temp_fv1 = M2C_FIELD(&D_8012AB88, f32 *, 0) - 30.0f;
                                M2C_FIELD(&D_8012AB88, f32 *, 0) = temp_fv1;
                                temp_ft2_2 = M2C_FIELD(&D_8012AB88, f32 *, 8) - 30.0f;
                                M2C_FIELD(&D_8012AB88, f32 *, 8) = temp_ft2_2;
                                temp_ft1_2 = M2C_FIELD(&D_8012AB70, f32 *, 0) + 30.0f;
                                M2C_FIELD(&D_8012AB70, f32 *, 0) = temp_ft1_2;
                                temp_fv0_2 = M2C_FIELD(&D_8012AB70, f32 *, 8) + 30.0f;
                                M2C_FIELD(&D_8012AB70, f32 *, 8) = temp_fv0_2;
                                var_v1_3 = 0;
                                if (temp_fv1 <= M2C_FIELD(&D_8012AB40, f32 *, 0)) {
                                    var_v0_3 = 0 & 0xFF;
                                    if ((M2C_FIELD(&D_8012AB40, f32 *, 0) <= temp_ft1_2) && (temp_ft2_2 <= D_8012AB48)) {
                                        if (D_8012AB48 <= temp_fv0_2) {
                                            var_v1_3 = 1;
                                        }
                                        goto block_25;
                                    }
                                } else {
block_25:
                                    var_v0_3 = var_v1_3 & 0xFF;
                                }
                                if (var_v0_3 == 0) {
                                    if ((M2C_FIELD(&D_8012AB88, f32 *, 0) <= M2C_FIELD(&D_8012AB58, f32 *, 0)) && (M2C_FIELD(&D_8012AB58, f32 *, 0) <= M2C_FIELD(&D_8012AB70, f32 *, 0)) && (M2C_FIELD(&D_8012AB88, f32 *, 8) <= D_8012AB60) && (D_8012AB60 <= M2C_FIELD(&D_8012AB70, f32 *, 8))) {
                                        var_v1_3 += 1;
                                    }
                                    if (var_v1_3 & 0xFF) {
                                        goto block_33;
                                    }
                                } else {
block_33:
                                    if ((func_801271A0() & 0xFF) == 1) {
                                        do { func_80127148(&sp30, &D_8012AB4C, &D_8012AB64); } while (0);
                                        do { func_80127148(&sp40, &D_8012AB7C, &D_8012AB64); } while (0);
                                        func_80127030(&sp20, sp30, sp34, sp38, sp40, sp44, sp48);
                                        temp_fv0_3 = func_80127000(&sp20, &sp20);
                                        var_fv0 = sqrtf(temp_fv0_3);
                                        if (var_fv0 != var_fv0) {
                                            var_fv0 = sqrtf(temp_fv0_3);
                                        }
                                        temp_ft2_3 = (f32) (D_8012AA30 / (f64) var_fv0);
                                        temp_ft1_3 = temp_ft2_3 * sp24;
                                        temp_fv1_2 = temp_ft2_3 * sp20;
                                        sp20 = temp_fv1_2;
                                        sp24 = temp_ft1_3;
                                        temp_ft0_2 = temp_ft2_3 * sp28;
                                        sp28 = temp_ft0_2;
                                        temp_ft3 = -((arg2 * temp_fv1_2) + (arg3 * temp_ft1_3) + (arg4 * temp_ft0_2) + -((temp_fv1_2 * M2C_FIELD(&D_8012AB64, f32 *, 0)) + (temp_ft1_3 * M2C_FIELD(&D_8012AB64, f32 *, 4)) + (temp_ft0_2 * M2C_FIELD(&D_8012AB64, f32 *, 8)))) / ((arg5 * temp_fv1_2) + (arg6 * temp_ft1_3) + (arg7 * temp_ft0_2));
                                        temp_fv1_3 = arg3 + (arg6 * temp_ft3);
                                        if (var_fs1 < temp_fv1_3) {
                                            M2C_FIELD(arg0, u8 *, 0) = (u8) M2C_FIELD(temp_s7, u8 *, 8);
                                            M2C_FIELD(arg0, s8 *, 1) = 1;
                                            M2C_FIELD(arg0, f32 *, 0x14) = sp20;
                                            M2C_FIELD(arg0, f32 *, 0x18) = sp24;
                                            M2C_FIELD(arg0, f32 *, 0x1C) = sp28;
                                            M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(&D_8012AB64, f32 *, 0);
                                            M2C_FIELD(arg0, f32 *, 0x24) = (f32) M2C_FIELD(&D_8012AB64, f32 *, 4);
                                            M2C_FIELD(arg0, f32 *, 0x28) = (f32) M2C_FIELD(&D_8012AB64, f32 *, 8);
                                            M2C_FIELD(arg0, M2C_UNK32 *, 0x2C) = (M2C_UNK32) M2C_FIELD(&D_8012AB4C, M2C_UNK32 *, 0);
                                            M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(&D_8012AB4C, s32 *, 4);
                                            M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(&D_8012AB4C, s32 *, 8);
                                            M2C_FIELD(arg0, M2C_UNK32 *, 0x38) = (M2C_UNK32) M2C_FIELD(&D_8012AB7C, M2C_UNK32 *, 0);
                                            M2C_FIELD(arg0, s32 *, 0x3C) = (s32) M2C_FIELD(&D_8012AB7C, s32 *, 4);
                                            M2C_FIELD(arg0, s32 *, 0x40) = (s32) M2C_FIELD(&D_8012AB7C, s32 *, 8);
                                            var_fs1 = temp_fv1_3;
                                            M2C_FIELD(arg0, f32 *, 0xC) = temp_fv1_3;
                                            M2C_FIELD(arg0, f32 *, 8) = (f32) (arg2 + (arg5 * temp_ft3));
                                            M2C_FIELD(arg0, f32 *, 0x10) = (f32) (arg4 + (arg7 * temp_ft3));
                                        }
                                        M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) + 1);
                                    }
                                }
                                var_s2 += 1;
                                var_a0 = var_s2 * 2;
                            } while (var_s2 < (s32) M2C_FIELD(temp_s0, u8 *, 0));
                        }
                        var_fp += 1;
                        var_v0_2 = var_fp * 0x10;
                    } while (*(s32 *)((var_fp * 0x10) + M2C_FIELD(temp_s7, u8 **, 0)) != 0);
                }
            }
            temp_t0 = sp54 + 1;
            sp54 = temp_t0;
            var_v1 = *sp5C;
            var_t0 = temp_t0;
            var_v0 = var_t0 * 2;
        } while (*(s32 *)((var_t0 * 0xC) + var_v1) != 0);
    }
}
