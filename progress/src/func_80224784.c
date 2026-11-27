#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_BITS_F32(expr) (m2c_bits = (u32)(expr), *(f32 *)&m2c_bits)
extern u32 m2c_bits;
#define M2C_PTR_FROM_F32(type, expr) ((type)(m2c_fbits = (expr), *(u32 *)&m2c_fbits))
extern f32 m2c_fbits;
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

f32 func_80032310(f32);                             /* extern */
f32 func_80032320(f32);                             /* extern */
void func_80032CC0(void *);
void func_80033280(void *, f32, f32, f32, f32);
void func_80033560(void *, f32, f32, f32);
f32 func_80033640(f32);                             /* extern */
void func_8003DE90(void *, void *, void *);
void func_8003DF6C(void *, f32, f32, f32, f32 *, f32 *, f32 *);
void func_80129918(void *, f32, f32, f32, f32, f32, f32);
void func_80129BAC(void *, f32, f32, f32, f32, f32, f32);
M2C_UNK func_801D7028(u16, M2C_UNK);                /* extern */
f32 func_801F9AC0(f32);                             /* extern */
f32 func_801F9BE8(f32, f32);                        /* extern */
s32 func_801F9D8C(s32, s32);                        /* extern */
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8011F31C;
extern M2C_UNK D_802D2B94;

f32 sqrtf(f32);
void func_80224784(void *arg0, f32 arg1, f32 arg2, s32 arg3) {
    f32 temp_abs_b;
    f32 sp10;                                       /* compiler-managed */
    f32 sp14;                                       /* compiler-managed */
    f32 sp18;                                       /* compiler-managed */
    f32 sp20[4][4];
    f32 sp60[4][4];
    f32 spA0[4][4];
    f32 spE0[4][4];
    f32 sp120[4][4];
    M2C_UNK *temp_s2;
    M2C_UNK var_a1;
    f32 var_a3;
    f32 temp_fa0;
    f32 temp_fa0_10;
    f32 temp_fa0_2;
    f32 temp_fa0_3;
    f32 temp_fa0_4;
    f32 temp_fa0_5;
    f32 temp_fa0_6;
    f32 temp_fa0_7;
    f32 temp_fa0_8;
    f32 temp_fa0_9;
    f32 temp_fa1;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_ft0;
    f32 temp_ft0_3;
    f32 temp_ft1;
    f32 temp_ft1_2;
    f32 temp_fv0;
    f32 temp_fv0_10;
    f32 temp_fv0_11;
    f32 temp_fv0_12;
    f32 temp_fv0_13;
    f32 temp_fv0_14;
    f32 temp_fv0_15;
    f32 temp_fv0_18;
    f32 temp_fv0_19;
    f32 temp_fv0_22;
    f32 temp_fv0_23;
    f32 temp_fv0_24;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0_5;
    f32 temp_fv0_6;
    f32 temp_fv0_9;
    f32 temp_fv1;
    f32 temp_fv1_11;
    f32 temp_fv1_12;
    f32 temp_fv1_13;
    f32 temp_fv1_14;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1_5;
    f32 temp_fv1_6;
    f32 temp_fv1_9;
    f32 var_a1_2;
    f32 var_a2;
    f32 var_fs0;
    f32 var_fs0_2;
    f32 var_fs1;
    f32 var_fs2;
    f32 var_ft0;
    f32 var_ft0_2;
    f32 var_ft1;
    f32 var_ft1_2;
    f32 var_ft1_3;
    f32 var_ft1_4;
    f32 var_ft1_5;
    f32 var_ft1_6;
    f32 var_fv0;
    f32 var_fv0_2;
    f32 var_fv0_3;
    f32 var_fv0_4;
    f32 var_fv0_5;
    f32 var_fv0_6;
    f32 var_fv0_7;
    f32 var_fv1;
    f32 var_fv1_2;
    f32 var_fv1_3;
    u16 var_a0;
    s32 var_v0;
    s32 var_v1;
    u8 temp_v1;
    u8 temp_v1_3;
    u8 temp_v1_4;
    void *temp_s4;
    void *temp_v0;
    void *temp_v0_2;

    temp_s4 = (u8 *)&D_8011F2F0 + (M2C_FIELD(arg0, u16 *, 2) * 0x64);
    if (M2C_FIELD(arg0, f32 *, 0x770) > 5.0f) {
        if (arg3 < 0xF) {
            var_fv1 = arg2 - 90.0f;
        } else {
            var_fv1 = arg2 + 90.0f;
        }
        if (var_fv1 > 359.0f) {
            var_fv1 -= 360.0f;
        } else if (var_fv1 < 0.0f) {
            var_fv1 += 360.0f;
        }
        temp_fs0 = (var_fv1 * 3.14f) / 180.0f;
        M2C_FIELD(arg0, f32 *, 0x7A8) = (f32) (-func_80033640(temp_fs0) * arg1 * 0.0015f);
        M2C_FIELD(arg0, f32 *, 0x7B0) = (f32) (-func_80032320(temp_fs0) * arg1 * 0.0015f);
    } else {
        M2C_FIELD(arg0, f32 *, 0x7A8) = 0.0f;
        M2C_FIELD(arg0, f32 *, 0x7B0) = 0.0f;
    }
    if (M2C_FIELD(arg0, u8 *, 0x860) != 0) {
        if ((M2C_FIELD(arg0, f32 *, 0x7B4) == 0.0f) && (M2C_FIELD(arg0, f32 *, 0x7BC) == 0.0f)) {
            M2C_FIELD(arg0, f32 *, 0x864) = 1.0f;
        } else if ((M2C_FIELD(arg0, f32 *, 0x784) == 0.0f) && (M2C_FIELD(arg0, f32 *, 0x78C) == 0.0f)) {
            M2C_FIELD(arg0, f32 *, 0x864) = 1.0f;
        } else {
            temp_fa0_6 = (M2C_FIELD(arg0, f32 *, 0x7B4) * M2C_FIELD(arg0, f32 *, 0x7B4)) + (M2C_FIELD(arg0, f32 *, 0x7BC) * M2C_FIELD(arg0, f32 *, 0x7BC));
            temp_fv0_12 = sqrtf(temp_fa0_6);
            var_fs0 = temp_fv0_12;
            temp_fa0_7 = (M2C_FIELD(arg0, f32 *, 0x784) * M2C_FIELD(arg0, f32 *, 0x784)) + (M2C_FIELD(arg0, f32 *, 0x78C) * M2C_FIELD(arg0, f32 *, 0x78C));
            var_ft1_3 = sqrtf(temp_fa0_7);
            M2C_FIELD(arg0, f32 *, 0x864) = (f32) (((M2C_FIELD(arg0, f32 *, 0x784) * M2C_FIELD(arg0, f32 *, 0x7B4)) + (M2C_FIELD(arg0, f32 *, 0x78C) * M2C_FIELD(arg0, f32 *, 0x7BC))) / (var_ft1_3 * var_fs0));
        }
        temp_fv1_5 = M2C_FIELD(arg0, f32 *, 0x864) * 64.0f;
        temp_abs_b = (f32) M2C_FIELD(arg0, s8 *, 0x87B) * 0.74f;
        var_ft1_4 = temp_abs_b;
        if (!(temp_abs_b > 0.0f)) { var_ft1_4 = -var_ft1_4; }
        temp_abs_b = var_ft1_4;
        if ((temp_fv1_5 < temp_abs_b) && (M2C_FIELD(arg0, u8 *, 0x8D0) == 0)) {
            var_fs2 = 1.0f - ((temp_abs_b - temp_fv1_5) * 0.03125f);
            if (var_fs2 < 0.5f) {
                if (M2C_FIELD(arg0, u8 *, 0x8A1) == 0) {
                    M2C_FIELD(arg0, u8 *, 0x8A1) = 3U;
                    M2C_FIELD(arg0, u8 *, 0x8C8) = 0U;
                    M2C_FIELD(arg0, s8 *, 0x8C9) = (s8) (-(M2C_FIELD(arg0, s8 *, 0x87B) < 1) | 1);
                    M2C_FIELD(arg0, f32 *, 0x8CC) = 360.0f;
                    M2C_FIELD(arg0, u8 *, 0x8D0) = 0x78U;
                    func_801D7028(M2C_FIELD(arg0, u16 *, 2), 0x19);
                }
            }
        } else {
            var_fs2 = 1.0f;
        }
        if ((M2C_FIELD(arg0, u8 *, 0x8D0) != 0)) {
            if ((var_fs2 > 0.95f)) {
                M2C_FIELD(arg0, u8 *, 0x8D0) = (u8) (M2C_FIELD(arg0, u8 *, 0x8D0) - 1);
            }
        }
        temp_v0 = *(void **)((u8 *)&D_802D2B94 + (M2C_FIELD(arg0, u16 *, 0x534) * 0xC));
        temp_fv0_15 = M2C_FIELD(temp_v0, f32 *, 4);
        temp_ft0_3 = M2C_FIELD(arg0, f32 *, 0x770);
        if (temp_fv0_15 < temp_ft0_3) {
            M2C_FIELD(arg0, f32 *, 0x750) = (f32) (((temp_ft0_3 - temp_fv0_15) * M2C_FIELD(temp_v0, f32 *, 8)) + (M2C_FIELD(arg0, f32 *, 0x760) * 0.000002f));
        } else {
            M2C_FIELD(arg0, f32 *, 0x750) = (f32) (M2C_FIELD(arg0, f32 *, 0x760) * 0.000002f);
        }
        temp_v1_3 = M2C_FIELD(arg0, u8 *, 0x8A1);
        switch (temp_v1_3) {                        /* switch 1 */
        case 0:                                     /* switch 1 */
        case 1:                                     /* switch 1 */
        case 2:                                     /* switch 1 */
        case 6:                                     /* switch 1 */
        case 7:                                     /* switch 1 */
            if (M2C_FIELD(arg0, u8 *, 0x74C) == 5) {
                var_fs0_2 = 3.14f; var_fs0_2 = (arg2 * var_fs0_2) / 180.0f;
                var_fv0_2 = func_80033640(var_fs0_2) * M2C_FIELD(arg0, f32 *, 0x770);
                var_fs1 = -0.05f;
            } else {
                var_fs0_2 = 3.14f; var_fs0_2 = (arg2 * var_fs0_2) / 180.0f;
                var_fv0_2 = func_80033640(var_fs0_2) * M2C_FIELD(arg0, f32 *, 0x770);
                var_fs1 = 0.05f;
            }
            M2C_FIELD(arg0, f32 *, 0x784) = (f32) ((var_fv0_2 * var_fs1) + M2C_FIELD(arg0, f32 *, 0x7A8));
            M2C_FIELD(arg0, f32 *, 0x788) = 0.0f;
            M2C_FIELD(arg0, f32 *, 0x78C) = (f32) ((func_80032320(var_fs0_2) * M2C_FIELD(arg0, f32 *, 0x770) * var_fs1) + M2C_FIELD(arg0, f32 *, 0x7B0));
            /* fallthrough */
            break;
        case 3:
        case 4:
        case 5:
            break;
        }
        switch (M2C_FIELD(arg0, u8 *, 0x8A1)) {     /* switch 2 */
        case 0:                                     /* switch 2 */
        case 2:                                     /* switch 2 */
            M2C_FIELD(arg0, f32 *, 0x7B4) = (f32) (((M2C_FIELD(arg0, f32 *, 0x784) - M2C_FIELD(arg0, f32 *, 0x7B4)) * (M2C_FIELD(((u8 *)arg0 + (M2C_FIELD(arg0, u8 *, 0x7CC) << 4)), f32 *, 0x244) + M2C_FIELD(arg0, f32 *, 0x750)) * var_fs2) + M2C_FIELD(arg0, f32 *, 0x7B4));
            M2C_FIELD(arg0, f32 *, 0x7B8) = 0.0f;
            M2C_FIELD(arg0, f32 *, 0x7BC) = (f32) (((M2C_FIELD(arg0, f32 *, 0x78C) - M2C_FIELD(arg0, f32 *, 0x7BC)) * (M2C_FIELD(((u8 *)arg0 + (M2C_FIELD(arg0, u8 *, 0x7CC) << 4)), f32 *, 0x244) + M2C_FIELD(arg0, f32 *, 0x750)) * var_fs2) + M2C_FIELD(arg0, f32 *, 0x7BC));
            break;
        case 1:                                     /* switch 2 */
            M2C_FIELD(arg0, f32 *, 0x7B4) = (f32) (((M2C_FIELD(arg0, f32 *, 0x784) - M2C_FIELD(arg0, f32 *, 0x7B4)) * (M2C_FIELD(((u8 *)arg0 + (M2C_FIELD(arg0, u8 *, 0x7CC) << 4)), f32 *, 0x244) + M2C_FIELD(arg0, f32 *, 0x750)) * M2C_FIELD(arg0, f32 *, 0x8A4)) + M2C_FIELD(arg0, f32 *, 0x7B4));
            M2C_FIELD(arg0, f32 *, 0x7B8) = 0.0f;
            var_fv1_3 = (M2C_FIELD(arg0, f32 *, 0x78C) - M2C_FIELD(arg0, f32 *, 0x7BC)) * (M2C_FIELD(((u8 *)arg0 + (M2C_FIELD(arg0, u8 *, 0x7CC) << 4)), f32 *, 0x244) + M2C_FIELD(arg0, f32 *, 0x750)) * M2C_FIELD(arg0, f32 *, 0x8A4);
            M2C_FIELD(arg0, f32 *, 0x7BC) = (f32) (var_fv1_3 + M2C_FIELD(arg0, f32 *, 0x7BC));
            break;
        case 4:                                     /* switch 2 */
            if (M2C_FIELD(arg0, u8 *, 0x8C0) != 0) {
                temp_fa0_8 = (M2C_FIELD(arg0, f32 *, 0x7B4) * M2C_FIELD(arg0, f32 *, 0x7B4)) + (M2C_FIELD(arg0, f32 *, 0x7BC) * M2C_FIELD(arg0, f32 *, 0x7BC));
                temp_fv0_18 = sqrtf(temp_fa0_8);
                var_ft1_5 = temp_fv0_18;
                if (var_ft1_5 < 3.0f) {
                    var_ft1_5 = 3.0f;
                }
                M2C_FIELD(arg0, f32 *, 0x8BC) = (f32) (M2C_FIELD(arg0, f32 *, 0x8BC) - (var_ft1_5 * (f32) M2C_FIELD(arg0, s8 *, 0x8C1) * 3.0f));
                M2C_FIELD(arg0, f32 *, 0x8C4) = (f32) (M2C_FIELD(arg0, f32 *, 0x8C4) - (var_ft1_5 * 3.0f));
                temp_fv1_6 = M2C_FIELD(arg0, f32 *, 0x8BC);
                if (temp_fv1_6 < 0.0f) {
                    var_fv0_3 = temp_fv1_6 + 360.0f;
                    goto block_60;
                }
                temp_fv0_19 = M2C_FIELD(arg0, f32 *, 0x8BC);
                if (temp_fv0_19 > 360.0f) {
                    var_fv0_3 = temp_fv0_19 - 360.0f;
block_60:
                    M2C_FIELD(arg0, f32 *, 0x8BC) = var_fv0_3;
                }
                if (M2C_FIELD(arg0, f32 *, 0x8C4) < 0.0f) { 
                    *(f32 *)((u8 *)&D_8011F31C + (M2C_FIELD(temp_s4, u16 *, 0x14) * 0x64)) = M2C_FIELD(arg0, f32 *, 0x8BC);
                    M2C_FIELD(arg0, u8 *, 0x8A1) = 0U;
                }
            } else {
                M2C_FIELD(arg0, f32 *, 0x7B4) = (f32) (M2C_FIELD(arg0, f32 *, 0x7B4) * 0.955f);
                M2C_FIELD(arg0, f32 *, 0x7B8) = 0.0f;
                M2C_FIELD(arg0, f32 *, 0x7BC) = (f32) (M2C_FIELD(arg0, f32 *, 0x7BC) * 0.955f);
                if (M2C_FIELD(arg0, f32 *, 0x7B4) > 0.0f) {
                    if (M2C_FIELD(arg0, f32 *, 0x7B4) < 1.5f) {
                        goto block_67;
                    }
                } else if (-M2C_FIELD(arg0, f32 *, 0x7B4) < 1.5f) {
block_67:
                    if (M2C_FIELD(arg0, f32 *, 0x7BC) > 0.0f) {
                        if (M2C_FIELD(arg0, f32 *, 0x7BC) < 1.5f) goto finish_spin;
                    } else if (-M2C_FIELD(arg0, f32 *, 0x7BC) < 1.5f) {
finish_spin:            M2C_FIELD(arg0, u8 *, 0x8A1) = 0U;
                    }
                }
            }
            break;
        case 3:                                     /* switch 2 */
            if (M2C_FIELD(arg0, u8 *, 0x8C8) != 0) {
                temp_fa0_9 = (M2C_FIELD(arg0, f32 *, 0x7B4) * M2C_FIELD(arg0, f32 *, 0x7B4)) + (M2C_FIELD(arg0, f32 *, 0x7BC) * M2C_FIELD(arg0, f32 *, 0x7BC));
                temp_fv0_22 = sqrtf(temp_fa0_9);
                var_ft1_6 = temp_fv0_22;
                var_fv0_4 = 5.0f;
                if ((var_ft1_6 < 5.0f) || (var_fv0_4 = 10.0f, (var_ft1_6 > 10.0f))) {
                    var_ft1_6 = var_fv0_4;
                }
                M2C_FIELD(arg0, f32 *, 0x7B4) = (f32) (M2C_FIELD(arg0, f32 *, 0x7B4) * 0.92f);
                M2C_FIELD(arg0, f32 *, 0x7BC) = (f32) (M2C_FIELD(arg0, f32 *, 0x7BC) * 0.92f);
                M2C_FIELD(arg0, f32 *, 0x7C0) = (f32) (M2C_FIELD(arg0, f32 *, 0x7C0) * 0.92f);
                M2C_FIELD(arg0, f32 *, 0x7C4) = (f32) (M2C_FIELD(arg0, f32 *, 0x7C4) * -0.6f);
                M2C_FIELD(arg0, f32 *, 0x7C8) = (f32) (M2C_FIELD(arg0, f32 *, 0x7C8) * 0.92f);
                M2C_FIELD(arg0, f32 *, 0x748) = (f32) (M2C_FIELD(arg0, f32 *, 0x748) * 0.95f);
                M2C_FIELD(arg0, f32 *, 0x8BC) = (f32) (M2C_FIELD(arg0, f32 *, 0x8BC) - (var_ft1_6 * (f32) M2C_FIELD(arg0, s8 *, 0x8C9) * 1.5f));
                M2C_FIELD(arg0, f32 *, 0x8CC) = (f32) (M2C_FIELD(arg0, f32 *, 0x8CC) - (var_ft1_6 * 1.5f));
                temp_fv1_9 = M2C_FIELD(arg0, f32 *, 0x8BC);
                if (temp_fv1_9 < 0.0f) {
                    var_fv0_5 = temp_fv1_9 + 360.0f;
                    goto block_82;
                }
                temp_fv0_23 = M2C_FIELD(arg0, f32 *, 0x8BC);
                if (temp_fv0_23 > 360.0f) {
                    var_fv0_5 = temp_fv0_23 - 360.0f;
block_82:
                    M2C_FIELD(arg0, f32 *, 0x8BC) = var_fv0_5;
                }
                if ((M2C_FIELD(arg0, f32 *, 0x8CC) > 320.0f) || (M2C_FIELD(arg0, f32 *, 0x8CC) < 40.0f) || ((u8) M2C_FIELD(arg0, u8 *, 0x8C8) >= 4U)) {
                    *(f32 *)((u8 *)&D_8011F31C + (M2C_FIELD(temp_s4, u16 *, 0x14) * 0x64)) = M2C_FIELD(arg0, f32 *, 0x8BC);
                    M2C_FIELD(arg0, u8 *, 0x8A1) = 0U;
                }
            }
            break;
        case 7:
            break;
        }
        if ((M2C_FIELD(arg0, f32 *, 0x7E0) == 0.0f) && (M2C_FIELD(arg0, f32 *, 0x7E8) == 0.0f)) {
            M2C_FIELD(arg0, f32 *, 0x7E4) = 1.0f;
        }
        temp_fv1_11 = M2C_FIELD(arg0, f32 *, 0x7E4);
        if (temp_fv1_11 == 1.0f) goto rotate_special;
        if (temp_fv1_11 == -1.0f) goto rotate_special;
        temp_fa0_10 = 1.0f - (temp_fv1_11 * temp_fv1_11);
        var_fv0_6 = sqrtf(temp_fa0_10);
        temp_fv0_24 = (func_801F9AC0(M2C_FIELD(arg0, f32 *, 0x7E4) / var_fv0_6) * 360.0f) / 6.28f;
        func_80033280(&sp20, 90.0f - temp_fv0_24, M2C_FIELD(arg0, f32 *, 0x7E8), 0.0f, -M2C_FIELD(arg0, f32 *, 0x7E0));
        goto rotate_done;
rotate_special:
        func_80033280(&sp20, M2C_FIELD(temp_s4, f32 *, 0x28), 0.0f, 1.0f, 0.0f);
rotate_done:;
        temp_v1_4 = M2C_FIELD(arg0, u8 *, 0x8A1);
        switch (temp_v1_4) {                        /* switch 3 */
        case 0:                                     /* switch 3 */
        case 1:                                     /* switch 3 */
        case 2:                                     /* switch 3 */
        case 6:                                     /* switch 3 */
        case 7:                                     /* switch 3 */
            temp_fv1_12 = M2C_FIELD(arg0, f32 *, 0x7E4);
            if (temp_fv1_12 == 1.0f) goto vertical_case;
            if (temp_fv1_12 == -1.0f) goto vertical_case;
                func_8003DF6C(&sp20, M2C_FIELD(arg0, f32 *, 0x7B4), 0, M2C_FIELD(arg0, f32 *, 0x7BC), (f32 *)(arg0 + 0x7C0), (f32 *)(arg0 + 0x7C4), (f32 *)(arg0 + 0x7C8));
                func_8003DF6C(&sp20, M2C_FIELD(arg0, f32 *, 0x784), 0, M2C_FIELD(arg0, f32 *, 0x78C), (f32 *)(arg0 + 0x790), (f32 *)(arg0 + 0x794), (f32 *)(arg0 + 0x798));
                temp_fv1_13 = M2C_FIELD(arg0, f32 *, 0x7C4);
                if (temp_fv1_13 > 0.0f) {
                    var_fv0_7 = M2C_FIELD(arg0, f32 *, 0x760); M2C_FIELD(arg0, f32 *, 0x76C) = var_fv0_7 * temp_fv1_13 * 0.35f;
                } else {
                    var_fv0_7 = M2C_FIELD(arg0, f32 *, 0x760); M2C_FIELD(arg0, f32 *, 0x76C) = var_fv0_7 * temp_fv1_13 * 0.5f;
                }
            goto vertical_done;
vertical_case:
                M2C_FIELD(arg0, f32 *, 0x790) = (f32) M2C_FIELD(arg0, f32 *, 0x784);
                M2C_FIELD(arg0, f32 *, 0x794) = (f32) M2C_FIELD(arg0, f32 *, 0x788);
                M2C_FIELD(arg0, f32 *, 0x798) = (f32) M2C_FIELD(arg0, f32 *, 0x78C);
                M2C_FIELD(arg0, f32 *, 0x7C0) = (f32) M2C_FIELD(arg0, f32 *, 0x7B4);
                M2C_FIELD(arg0, f32 *, 0x7C4) = (f32) M2C_FIELD(arg0, f32 *, 0x7B8);
                M2C_FIELD(arg0, f32 *, 0x7C8) = (f32) M2C_FIELD(arg0, f32 *, 0x7BC);
                M2C_FIELD(arg0, f32 *, 0x76C) = 0.0f;
vertical_done:;
            M2C_FIELD(arg0, f32 *, 0x76C) = (f32) (M2C_FIELD(arg0, f32 *, 0x76C) + M2C_FIELD(((u8 *)arg0 + (M2C_FIELD(arg0, u8 *, 0x7CC) << 4)), f32 *, 0x248));
            break;
        case 4:                                     /* switch 3 */
            temp_fv1_14 = M2C_FIELD(arg0, f32 *, 0x8AC) - M2C_FIELD(temp_s4, f32 *, 0x28);
            if (temp_fv1_14 > 0.0f) { temp_abs_b = temp_fv1_14; } else { temp_abs_b = -temp_fv1_14; }
            var_ft0_2 = temp_abs_b;
            var_v0 = 1;
            if (!(var_ft0_2 > 0.0f)) {
                var_v0 = 0;
            }
            var_v1 = 1;
            if (!(var_ft0_2 < 5.0f)) {
                var_v1 = 0;
            }
            if ((var_v0 & var_v1) && (M2C_FIELD(arg0, u8 *, 0x8C0) == 0)) {
                M2C_FIELD(arg0, f32 *, 0x790) = (f32) M2C_FIELD(arg0, f32 *, 0x784);
                M2C_FIELD(arg0, f32 *, 0x794) = 0.0f;
                M2C_FIELD(arg0, f32 *, 0x798) = (f32) M2C_FIELD(arg0, f32 *, 0x78C);
                M2C_FIELD(arg0, f32 *, 0x7B4) = (f32) (M2C_FIELD(arg0, f32 *, 0x7B4) * 2.5f);
                M2C_FIELD(arg0, f32 *, 0x7BC) = (f32) (M2C_FIELD(arg0, f32 *, 0x7BC) * 2.5f);
                M2C_FIELD(arg0, f32 *, 0x7C0) = (f32) M2C_FIELD(arg0, f32 *, 0x7B4);
                M2C_FIELD(arg0, f32 *, 0x7C4) = 0.0f;
                M2C_FIELD(arg0, f32 *, 0x7C8) = (f32) M2C_FIELD(arg0, f32 *, 0x7BC);
                M2C_FIELD(arg0, f32 *, 0x76C) = 0.0f;
                M2C_FIELD(arg0, u8 *, 0x8C0) = 1U;
            }
            break;
        case 3:                                     /* switch 3 */
            if (M2C_FIELD(arg0, u8 *, 0x8C8) == 0) {
                M2C_FIELD(arg0, f32 *, 0x790) = (f32) M2C_FIELD(arg0, f32 *, 0x784);
                M2C_FIELD(arg0, f32 *, 0x794) = (f32) (M2C_FIELD(arg0, f32 *, 0x770) * 0.018f);
                M2C_FIELD(arg0, f32 *, 0x798) = (f32) M2C_FIELD(arg0, f32 *, 0x78C);
                M2C_FIELD(arg0, f32 *, 0x7C0) = (f32) M2C_FIELD(arg0, f32 *, 0x7B4);
                M2C_FIELD(arg0, f32 *, 0x7C4) = (f32) (M2C_FIELD(arg0, f32 *, 0x770) * 0.018f);
                M2C_FIELD(arg0, f32 *, 0x7C8) = (f32) M2C_FIELD(arg0, f32 *, 0x7BC);
                M2C_FIELD(arg0, f32 *, 0x76C) = 0.0f;
                M2C_FIELD(arg0, u8 *, 0x8C8) = (u8) (M2C_FIELD(arg0, u8 *, 0x8C8) + 1);
            }
            break;
        }
        M2C_FIELD(arg0, f32 *, 0x8A8) = (f32) (func_801F9D8C((s32) (M2C_FIELD(arg0, f32 *, 0x7E4) * 100.0f), (s32) (M2C_FIELD(arg0, f32 *, 0x7E8) * 100.0f)) & 0xFFFF);
        temp_fa1 = (f32) -(func_801F9D8C((s32) (M2C_FIELD(arg0, f32 *, 0x7E4) * 100.0f), (s32) (M2C_FIELD(arg0, f32 *, 0x7E0) * 100.0f)) & 0xFFFF);
        M2C_FIELD(arg0, f32 *, 0x8B0) = temp_fa1;
        M2C_FIELD(temp_s4, f32 *, 0x2C) = (f32) ((func_801F9BE8(M2C_FIELD(temp_s4, f32 *, 0x2C), temp_fa1) * 0.5f) + M2C_FIELD(temp_s4, f32 *, 0x2C));
        M2C_FIELD(temp_s4, f32 *, 0x24) = (f32) ((func_801F9BE8(M2C_FIELD(temp_s4, f32 *, 0x24), M2C_FIELD(arg0, f32 *, 0x8A8)) * 0.5f) + M2C_FIELD(temp_s4, f32 *, 0x24));
        M2C_FIELD(arg0, f32 *, 0x79C) = (f32) M2C_FIELD(temp_s4, f32 *, 0x18);
        M2C_FIELD(arg0, f32 *, 0x7A0) = (f32) M2C_FIELD(temp_s4, f32 *, 0x1C);
        M2C_FIELD(arg0, f32 *, 0x7A4) = (f32) M2C_FIELD(temp_s4, f32 *, 0x20);
        func_80129918(arg0 + 0x810, M2C_FIELD(temp_s4, f32 *, 0x18), M2C_FIELD(temp_s4, f32 *, 0x1C), M2C_FIELD(temp_s4, f32 *, 0x20), M2C_FIELD(arg0, f32 *, 0x7C0) + M2C_FIELD(arg0, f32 *, 0x854), M2C_FIELD(arg0, f32 *, 0x7C4) + M2C_FIELD(arg0, f32 *, 0x858), M2C_FIELD(arg0, f32 *, 0x7C8) + M2C_FIELD(arg0, f32 *, 0x85C));
        M2C_FIELD(arg0, u16 *, 0x7D0) = (u16) M2C_FIELD(arg0, u16 *, 0x814);
        M2C_FIELD(arg0, u16 *, 0x7D2) = (u16) M2C_FIELD(arg0, u16 *, 0x816);
        M2C_FIELD(arg0, f32 *, 0x854) = M2C_FIELD(arg0, f32 *, 0x858) = M2C_FIELD(arg0, f32 *, 0x85C) = 0.0f;
        M2C_FIELD(temp_s4, f32 *, 0x18) = (f32) M2C_FIELD(arg0, f32 *, 0x818);
        M2C_FIELD(temp_s4, f32 *, 0x1C) = (f32) M2C_FIELD(arg0, f32 *, 0x81C);
        M2C_FIELD(temp_s4, f32 *, 0x20) = (f32) M2C_FIELD(arg0, f32 *, 0x820);
        M2C_FIELD(arg0, u8 *, 0x878) = (u8) M2C_FIELD(arg0, u8 *, 0x7CC);
        func_80129BAC(arg0 + 0x7CC, M2C_FIELD(temp_s4, f32 *, 0x18), M2C_FIELD(temp_s4, f32 *, 0x1C), M2C_FIELD(temp_s4, f32 *, 0x20), -(M2C_FIELD(arg0, f32 *, 0x7E0) * 0.3f), -(M2C_FIELD(arg0, f32 *, 0x7E4) * 0.3f), -(M2C_FIELD(arg0, f32 *, 0x7E8) * 0.3f));
        if (M2C_FIELD(arg0, u8 *, 0x7CD) != 0) {
            M2C_FIELD(arg0, u8 *, 0x860) = 1U;
        } else {
block_162:
            M2C_FIELD(arg0, u8 *, 0x860) = 0U;
        }
    } else {
        temp_v1 = M2C_FIELD(arg0, u8 *, 0x8A1);
        if (temp_v1 != 3) {
            if (temp_v1 == 4) {
                temp_fa0 = M2C_FIELD(arg0, f32 *, 0x7B4);
                if ((temp_fa0 != 0.0f) && (temp_fv0 = M2C_FIELD(arg0, f32 *, 0x7BC), (temp_fv0 != 0.0f))) {
                    temp_fa0_2 = (temp_fa0 * temp_fa0) + (temp_fv0 * temp_fv0);
                    temp_fv0_2 = sqrtf(temp_fa0_2);
                    var_ft1 = temp_fv0_2;
                } else {
                    var_ft1 = 0.0f;
                }
                M2C_FIELD(arg0, f32 *, 0x8BC) = (f32) (M2C_FIELD(arg0, f32 *, 0x8BC) - (var_ft1 * (f32) M2C_FIELD(arg0, s8 *, 0x8C1) * 3.0f));
                M2C_FIELD(arg0, f32 *, 0x8C4) = (f32) (M2C_FIELD(arg0, f32 *, 0x8C4) - (var_ft1 * 3.0f));
                temp_fv1 = M2C_FIELD(arg0, f32 *, 0x8BC);
                if (temp_fv1 < 0.0f) {
                    M2C_FIELD(arg0, f32 *, 0x8BC) = (f32) (temp_fv1 + 360.0f);
                } else {
                    temp_fv0_3 = M2C_FIELD(arg0, f32 *, 0x8BC);
                    if (temp_fv0_3 > 360.0f) {
                        M2C_FIELD(arg0, f32 *, 0x8BC) = (f32) (temp_fv0_3 - 360.0f);
                    }
                }
            }
        } else {
            temp_fa0_3 = M2C_FIELD(arg0, f32 *, 0x7B4);
            if ((temp_fa0_3 != 0.0f) && (temp_fv0_4 = M2C_FIELD(arg0, f32 *, 0x7BC), (temp_fv0_4 != 0.0f))) {
                temp_fa0_4 = (temp_fa0_3 * temp_fa0_3) + (temp_fv0_4 * temp_fv0_4);
                temp_fv0_5 = sqrtf(temp_fa0_4);
                var_ft1_2 = temp_fv0_5;
                if (!(var_ft1_2 < 5.0f)) {
                    if (var_ft1_2 > 10.0f) {
                        var_ft1_2 = 10.0f;
                    }
                } else {
                    goto block_144;
                }
            } else {
block_144:
                var_ft1_2 = 5.0f;
            }
            M2C_FIELD(arg0, f32 *, 0x8BC) = (f32) (M2C_FIELD(arg0, f32 *, 0x8BC) - (var_ft1_2 * (f32) M2C_FIELD(arg0, s8 *, 0x8C9) * 1.5f));
            M2C_FIELD(arg0, f32 *, 0x8CC) = (f32) (M2C_FIELD(arg0, f32 *, 0x8CC) - (var_ft1_2 * 1.5f));
            M2C_FIELD(arg0, f32 *, 0x748) = (f32) (M2C_FIELD(arg0, f32 *, 0x748) * 0.99f);
            temp_fv1_2 = M2C_FIELD(arg0, f32 *, 0x8BC);
            if (temp_fv1_2 < 0.0f) {
                var_fv0 = temp_fv1_2 + 360.0f;
                goto block_149;
            }
            temp_fv0_6 = M2C_FIELD(arg0, f32 *, 0x8BC);
            if (temp_fv0_6 > 360.0f) {
                var_fv0 = temp_fv0_6 - 360.0f;
block_149:
                M2C_FIELD(arg0, f32 *, 0x8BC) = var_fv0;
            }
            temp_fv1_3 = M2C_FIELD(arg0, f32 *, 0x8CC);
            if (temp_fv1_3 < 0.0f) {
                M2C_FIELD(arg0, f32 *, 0x8CC) = (f32) (temp_fv1_3 + 360.0f);
                *(f32 *)((u8 *)&D_8011F31C + (M2C_FIELD(temp_s4, u16 *, 0x14) * 0x64)) = M2C_FIELD(arg0, f32 *, 0x8BC);
                M2C_FIELD(arg0, u8 *, 0x8C8) = (u8) (M2C_FIELD(arg0, u8 *, 0x8C8) + 1);
            }
        }
        M2C_FIELD(arg0, f32 *, 0x76C) = 0.0f;
        temp_fs0_2 = M2C_FIELD(arg0, f32 *, 0x76C);
        M2C_FIELD(arg0, f32 *, 0x78C) = temp_fs0_2;
        M2C_FIELD(arg0, f32 *, 0x788) = temp_fs0_2;
        M2C_FIELD(arg0, f32 *, 0x784) = temp_fs0_2;
        M2C_FIELD(arg0, f32 *, 0x798) = temp_fs0_2;
        M2C_FIELD(arg0, f32 *, 0x794) = temp_fs0_2;
        M2C_FIELD(arg0, f32 *, 0x790) = temp_fs0_2;
        M2C_FIELD(arg0, f32 *, 0x7C4) = (f32) (M2C_FIELD(arg0, f32 *, 0x7C4) - 0.1225f);
        M2C_FIELD(arg0, f32 *, 0x79C) = (f32) M2C_FIELD(temp_s4, f32 *, 0x18);
        M2C_FIELD(arg0, f32 *, 0x7A0) = (f32) M2C_FIELD(temp_s4, f32 *, 0x1C);
        M2C_FIELD(arg0, f32 *, 0x7A4) = (f32) M2C_FIELD(temp_s4, f32 *, 0x20);
        func_80129918(arg0 + 0x810, M2C_FIELD(temp_s4, f32 *, 0x18), M2C_FIELD(temp_s4, f32 *, 0x1C), M2C_FIELD(temp_s4, f32 *, 0x20), M2C_FIELD(arg0, f32 *, 0x7C0) + M2C_FIELD(arg0, f32 *, 0x854), M2C_FIELD(arg0, f32 *, 0x7C4) + M2C_FIELD(arg0, f32 *, 0x858), M2C_FIELD(arg0, f32 *, 0x7C8) + M2C_FIELD(arg0, f32 *, 0x85C));
        M2C_FIELD(arg0, u16 *, 0x7D0) = (u16) M2C_FIELD(arg0, u16 *, 0x814);
        M2C_FIELD(arg0, u16 *, 0x7D2) = (u16) M2C_FIELD(arg0, u16 *, 0x816);
        M2C_FIELD(arg0, f32 *, 0x85C) = temp_fs0_2;
        M2C_FIELD(arg0, f32 *, 0x858) = temp_fs0_2;
        M2C_FIELD(arg0, f32 *, 0x854) = temp_fs0_2;
        M2C_FIELD(temp_s4, f32 *, 0x18) = (f32) M2C_FIELD(arg0, f32 *, 0x818);
        M2C_FIELD(temp_s4, f32 *, 0x1C) = (f32) M2C_FIELD(arg0, f32 *, 0x81C);
        M2C_FIELD(temp_s4, f32 *, 0x20) = (f32) M2C_FIELD(arg0, f32 *, 0x820);
        if (M2C_FIELD(arg0, u8 *, 0x811) != 0) {
            switch (M2C_FIELD(arg0, u8 *, 0x810)) {
            case 0x11:
            case 0x28:
            case 0x29:
                func_801D7028(M2C_FIELD(arg0, u16 *, 2), 0x1A);
                break;
            default:
                if (M2C_FIELD(arg0, f32 *, 0x7C4) < -1.0f) {
                    func_801D7028(M2C_FIELD(arg0, u16 *, 2), 0x19);
                }
                break;
            }
            M2C_FIELD(arg0, u8 *, 0x878) = (u8) M2C_FIELD(arg0, u8 *, 0x7CC);
            func_80129BAC(arg0 + 0x7CC, M2C_FIELD(temp_s4, f32 *, 0x18), M2C_FIELD(temp_s4, f32 *, 0x1C), M2C_FIELD(temp_s4, f32 *, 0x20), 0.0f, -1.0f, 0.0f);
            if (M2C_FIELD(arg0, u8 *, 0x7CD) == 0) {
                M2C_FIELD(arg0, u8 *, 0x860) = 0U;
                goto finish_updates;
            }
            M2C_FIELD(arg0, u8 *, 0x860) = 1U;
            M2C_FIELD(temp_s4, f32 *, 0x18) = (f32) M2C_FIELD(arg0, f32 *, 0x7D4);
            M2C_FIELD(temp_s4, f32 *, 0x1C) = (f32) M2C_FIELD(arg0, f32 *, 0x7D8);
            M2C_FIELD(temp_s4, f32 *, 0x20) = (f32) M2C_FIELD(arg0, f32 *, 0x7DC);
            if (M2C_FIELD(arg0, u8 *, 0x8D1) == 0) {
                temp_fa0_5 = (M2C_FIELD(arg0, f32 *, 0x7C0) * M2C_FIELD(arg0, f32 *, 0x7C0)) + (M2C_FIELD(arg0, f32 *, 0x7C8) * M2C_FIELD(arg0, f32 *, 0x7C8));
                temp_fv0_9 = sqrtf(temp_fa0_5);
                var_ft0 = temp_fv0_9;
                var_fv1_2 = M2C_FIELD(arg0, f32 *, 0x770) * 0.05f;
                if (var_ft0 == 0.0f) {
                    var_ft0 = 1.0f;
                }
                if (var_fv1_2 == 0.0f) {
                    var_fv1_2 = var_ft0;
                }
                temp_ft0 = var_ft0 / var_fv1_2;
                if (M2C_FIELD(arg0, u8 *, 0x8A1) == 0) {
                    sp14 = temp_ft0 * temp_ft0; sp10 = sp14 * temp_ft0;
                    M2C_FIELD(arg0, f32 *, 0x8A4) = sp10;
                    if (sp10 < 1.0f) {
                        if (sp10 < 0.1f) {
                            M2C_FIELD(arg0, f32 *, 0x8A4) = 0.1f;
                        }
                        M2C_FIELD(arg0, u8 *, 0x8A1) = 1U;
                        M2C_FIELD(arg0, u8 *, 0x8D0) = 0x78U;
                        M2C_FIELD(arg0, f32 *, 0x748) = (f32) (temp_ft0 * M2C_FIELD(arg0, f32 *, 0x748));
                        M2C_FIELD(arg0, f32 *, 0x770) = (f32) (temp_ft0 * M2C_FIELD(arg0, f32 *, 0x770));
                    } else {
                        M2C_FIELD(arg0, f32 *, 0x8A4) = 1.0f;
                    }
                }
            }
        } else {
            goto block_162;
        }
    }
finish_updates:
    if (M2C_FIELD(temp_s4, f32 *, 0x28) != 0.0f) {
        sp10 = 0.0f;
        func_80033280(&spE0, M2C_FIELD(temp_s4, f32 *, 0x28), 0.0f, 1.0f, sp10);
    } else {
        func_80032CC0(&spE0);
    }
    if (M2C_FIELD(temp_s4, f32 *, 0x24) != 0.0f) {
        sp10 = 0.0f;
        func_80033280(&spA0, M2C_FIELD(temp_s4, f32 *, 0x24), 1.0f, 0.0f, sp10);
    } else {
        func_80032CC0(&spA0);
    }
    if (M2C_FIELD(temp_s4, f32 *, 0x2C) != 0.0f) {
        func_80033280(&sp120, M2C_FIELD(temp_s4, f32 *, 0x2C), 0.0f, 0.0f, 1.0f);
    } else {
        func_80032CC0(&sp120);
    }
    func_8003DE90(&spE0, &spA0, &spA0);
    func_8003DE90(&spA0, &sp120, &sp120);
    func_80033560(&sp60, M2C_FIELD(temp_s4, f32 *, 0x30), M2C_FIELD(temp_s4, f32 *, 0x34), M2C_FIELD(temp_s4, f32 *, 0x38));
    temp_s2 = arg0 + 0x6D4;
    func_8003DE90(&sp60, &sp120, temp_s2);
    func_8003DF6C(temp_s2, -28.0f, 0, 41.0f, (f32 *)(arg0 + 0x714), (f32 *)(arg0 + 0x718), (f32 *)(arg0 + 0x71C));
    func_8003DF6C(temp_s2, 28.0f, 0, 41.0f, (f32 *)(arg0 + 0x720), (f32 *)(arg0 + 0x724), (f32 *)(arg0 + 0x728));
    func_8003DF6C(temp_s2, -28.0f, 0, -41.0f, (f32 *)(arg0 + 0x72C), (f32 *)(arg0 + 0x730), (f32 *)(arg0 + 0x734));
    func_8003DF6C(temp_s2, 28.0f, 0, -41.0f, (f32 *)(arg0 + 0x738), (f32 *)(arg0 + 0x73C), (f32 *)(arg0 + 0x740));
    for (var_a0 = 0; var_a0 < 4; var_a0++) {
        temp_v0_2 = arg0 + (var_a0 * 0xC);
        M2C_FIELD(temp_v0_2, f32 *, 0x714) = (f32) (M2C_FIELD(temp_v0_2, f32 *, 0x714) + M2C_FIELD(temp_s4, f32 *, 0x18));
        M2C_FIELD(temp_v0_2, f32 *, 0x718) = (f32) (M2C_FIELD(temp_v0_2, f32 *, 0x718) + M2C_FIELD(temp_s4, f32 *, 0x1C));
        M2C_FIELD(temp_v0_2, f32 *, 0x71C) = (f32) (M2C_FIELD(temp_v0_2, f32 *, 0x71C) + M2C_FIELD(temp_s4, f32 *, 0x20));
    }
}
