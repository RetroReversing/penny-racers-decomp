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

s32 func_800DE41C(M2C_UNK, u8, M2C_UNK, M2C_UNK, s32, s32, s32, M2C_UNK *, M2C_UNK *, s32, s32, s32, s32, s32, s32, f32, f32, f32); /* extern */
s32 func_8013E364();                                /* extern */
M2C_UNK func_8013E49C(s32);                         /* extern */
M2C_UNK func_8013E640(s32, s32, void *, M2C_UNK, s32, s32, s32, f32, f32, f32, s32); /* extern */
M2C_UNK func_801D7028(u16, M2C_UNK);                /* extern */
s32 func_801F9D8C(s32, s32);                        /* extern */
M2C_UNK guMtxXFMF(void *, f32, M2C_UNK, f32);       /* extern */
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8018A460;
extern M2C_UNK D_8018D6C4;
extern M2C_UNK D_8018D6D6;
extern M2C_UNK D_8018D727;
extern M2C_UNK D_8018D730;
extern M2C_UNK D_8022A720;
extern M2C_UNK D_8022A770;
extern M2C_UNK D_8022E620;
extern M2C_UNK func_8016221C;
extern M2C_UNK func_80162460;
extern M2C_UNK func_80162BB0;

void func_80161BE0(void *arg0) {
    f32 sp48;
    f32 sp4C;
    f32 sp50;
    M2C_UNK var_a2;
    f32 temp_fv1;
    f32 var_a1;
    f32 var_a3;
    f32 var_ft0;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1_3;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_v0;
    s32 var_v0_2;
    u16 temp_v0_3;
    u16 temp_v0_8;
    u16 temp_v1;
    u16 temp_v1_2;
    u16 var_a0_2;
    void *temp_s1;
    void *temp_s3;
    void *temp_s4;
    void *temp_v0_4;
    void *temp_v0_5;
    void *var_a0;

    temp_s4 = (M2C_FIELD(arg0, u16 *, 2) * 0x64) + &D_8011F2F0;
    if ((M2C_FIELD(arg0, s32 *, 0x898) == 1) && (temp_v1 = M2C_FIELD(arg0, u16 *, 0x560), ((temp_v1 & 8) == 0)) && ((temp_v1 & 7) < 4) && ((u32) (M2C_FIELD(arg0, u8 *, 0x8A1) - 2) >= 2U) && (temp_v0 = func_8013E364(), var_s0 = 0, ((temp_v0 & 0xFFFF) != 0xFFFF))) {
        var_v0 = 0 * 2;
loop_6:
        temp_s3 = (M2C_FIELD(arg0, u16 *, 4) * 0x24C) + (((((var_v0 + var_s0) * 0x10) + var_s0) * 4) + &D_8018A460);
        if (M2C_FIELD(temp_s3, u8 *, 0) != 0) {
            var_s0 += 1;
            var_v0 = var_s0 * 2;
            if (var_s0 >= 3) {

            } else {
                goto loop_6;
            }
        }
        if ((var_s0 == 3) || (M2C_FIELD(temp_s3, u8 *, 0) = 1U, temp_v0_2 = func_800DE41C(0, 0U, 3, 0, 0x5B, var_s0 & 0xFF, 0, &func_80162460, &func_80162BB0, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f), var_s0_2 = 0, (((u32) ((temp_v0_2 + 2) & 0xFFFF) < 2U) != 0))) {
            func_8013E49C(temp_v0 & 0xFFFF);
            return;
        }
        temp_v0_3 = M2C_FIELD(arg0, u16 *, 0x560);
        M2C_FIELD(arg0, u16 *, 0x560) = (u16) ((temp_v0_3 & 0xF8) | ((temp_v0_3 & 7) + 1));
        M2C_FIELD(temp_s3, s8 *, 1) = -1;
loop_13:
        if (M2C_FIELD(temp_s3, s8 *, 1) == -1) {
            temp_v1_2 = M2C_FIELD(arg0, u16 *, 4);
            if (*((var_s0_2 * 4) + ((temp_v1_2 * 0x18) + &D_8022E620)) < 2000.0f) {
                temp_s1 = (*((temp_v1_2 * 6) + &D_8022A720 + var_s0_2) * 0x8F0) + &D_8022A770;
                temp_v0_4 = (M2C_FIELD(temp_s1, u16 *, 2) * 0x64) + &D_8011F2F0;
                temp_fv1 = M2C_FIELD(temp_s4, f32 *, 0x28) - (f32) (func_801F9D8C((s32) (M2C_FIELD(temp_v0_4, f32 *, 0x20) - M2C_FIELD(temp_s4, f32 *, 0x20)), (s32) (M2C_FIELD(temp_v0_4, f32 *, 0x18) - M2C_FIELD(temp_s4, f32 *, 0x18))) & 0xFFFF);
                var_ft0 = temp_fv1;
                if (!(temp_fv1 > 0.0f)) {
                    var_ft0 = -temp_fv1;
                }
                if (M2C_FIELD(temp_s1, u8 *, 0x879) == 0) {
                    if ((var_ft0 < 50.0f) && (M2C_FIELD(temp_s1, u8 *, 0x8A1) != 4) && (M2C_FIELD(temp_s1, u8 *, 0x8D0) == 0)) {
                        goto block_23;
                    }
                } else if (var_ft0 < 50.0f) {
block_23:
                    M2C_FIELD(temp_s3, s8 *, 1) = (s8) *((M2C_FIELD(arg0, u16 *, 4) * 6) + &D_8022A720 + var_s0_2);
                    var_s0_2 = 7;
                }
            }
            var_s0_2 += 1;
            if (!((var_s0_2 < 7) & (var_s0_2 < 6))) {
                var_a0 = arg0 + 0x6D4;
                if (M2C_FIELD(temp_s3, s8 *, 1) == -1) {
                    var_a1 = (f32) (M2C_FIELD(arg0, u8 *, 0x778) & 0x1F) - 20.0f;
                    var_a2 = 0x41A00000;
                    var_a3 = (M2C_FIELD(arg0, f32 *, 0x774) * 0.3f) + 20.0f;
                } else {
                    goto block_27;
                }
            } else {
                goto loop_13;
            }
        } else {
block_27:
            var_a0 = arg0 + 0x6D4;
            var_a1 = (f32) (M2C_FIELD(arg0, u8 *, 0x778) & 0x1F) - 20.0f;
            var_a2 = 0x41700000;
            var_a3 = (M2C_FIELD(arg0, f32 *, 0x774) * 0.3f) + -20.0f;
        }
        var_s0_3 = 0;
        guMtxXFMF(var_a0, var_a1, var_a2, var_a3);
        func_8013E640(temp_v0 & 0xFFFF, temp_v0_2 & 0xFFFF, arg0, 0x40, 0, 0, 0, sp48, sp4C, sp50, 0x12C);
        temp_v1_3 = (temp_v0 & 0xFFFF) * 0x7C;
        *(&D_8018D6C4 + temp_v1_3) = arg0;
        *(temp_v1_3 + &D_8018D727 + M2C_FIELD(arg0, u16 *, 4)) = 1;
        *(&D_8018D730 + temp_v1_3) = 30.0f;
        *(&D_8018D6D6 + temp_v1_3) = 0;
        var_v0_2 = 0 * 4;
        __repair_rows: {
            temp_v0_5 = var_v0_2 + temp_s3;
            M2C_FIELD(temp_v0_5, f32 *, 4) = (f32) M2C_FIELD(temp_s4, f32 *, 0x18);
            M2C_FIELD(temp_v0_5, f32 *, 0x24) = (f32) M2C_FIELD(temp_s4, f32 *, 0x1C);
            M2C_FIELD(temp_v0_5, f32 *, 0x44) = (f32) M2C_FIELD(temp_s4, f32 *, 0x20);
            M2C_FIELD(temp_v0_5, f32 *, 0xA4) = 0.0f;
            M2C_FIELD(temp_v0_5, f32 *, 0x84) = 0.0f;
            M2C_FIELD(temp_v0_5, f32 *, 0x64) = 0.0f;
            var_s0_3 += 1;
            var_v0_2 = var_s0_3 * 4;
        }
if (var_s0_3 < 8) goto __repair_rows;
        temp_v0_6 = M2C_FIELD(arg0, s16 *, 0x55E);
        if (temp_v0_6 > 0) {
            temp_v0_7 = temp_v0_6 - 1;
            M2C_FIELD(arg0, s16 *, 0x55E) = temp_v0_7;
            var_a0_2 = temp_v0_2 & 0xFFFF;
            if ((temp_v0_7 << 0x10) == 0) {
                func_800DE41C(0, M2C_FIELD(arg0, u8 *, 5), 3, 0, 0x5B, 0, 0, &func_8016221C, NULL, 0, 0, 0, 0, 0, 0, 1.0f, 1.0f, 1.0f);
                temp_v0_8 = M2C_FIELD(arg0, u16 *, 0x560);
                M2C_FIELD(arg0, u16 *, 0x560) = (u16) ((temp_v0_8 & 0xF8) | ((temp_v0_8 & 7) + 1));
                func_801D7028(M2C_FIELD(arg0, u16 *, 2), 0x2A);
                goto block_33;
            }
        } else {
block_33:
            var_a0_2 = temp_v0_2 & 0xFFFF;
        }
        func_801D7028(var_a0_2, 0x2E);
    }
}
