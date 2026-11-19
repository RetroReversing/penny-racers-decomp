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

f32 func_801F9BE8(f32, f32, u16);                   /* extern */
f32 func_801FA4B0(M2C_UNK, M2C_UNK, f32, f32, f32, f32, f32, f32); /* extern */
f32 sqrtf(f32);                                     /* extern */
extern M2C_UNK D_8006FAF0;
extern M2C_UNK D_8011F2F0;
extern void *D_801C7AB0;
extern M2C_UNK D_802352CC;
extern M2C_UNK D_802352F4;
extern M2C_UNK D_80235C60;

void func_8022312C(void *arg0) {
    f32 temp_fa0;
    f32 temp_fa0_2;
    f32 temp_fa0_3;
    f32 temp_fa0_4;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
    f32 temp_fs0_4;
    f32 temp_fs0_5;
    f32 temp_fs0_6;
    f32 temp_fs0_7;
    f32 temp_fs0_8;
    f32 temp_fs1;
    f32 temp_fs1_2;
    f32 temp_fs1_3;
    f32 temp_fs1_4;
    f32 temp_fs1_5;
    f32 temp_fs1_6;
    f32 temp_fs1_7;
    f32 temp_fs1_8;
    f32 temp_ft1;
    f32 temp_ft1_10;
    f32 temp_ft1_11;
    f32 temp_ft1_12;
    f32 temp_ft1_2;
    f32 temp_ft1_3;
    f32 temp_ft1_4;
    f32 temp_ft1_5;
    f32 temp_ft1_6;
    f32 temp_ft1_7;
    f32 temp_ft1_8;
    f32 temp_ft1_9;
    f32 temp_ft2;
    f32 temp_ft2_2;
    f32 temp_ft2_3;
    f32 temp_ft2_4;
    f32 temp_ft2_5;
    f32 temp_ft2_6;
    f32 temp_ft2_7;
    f32 temp_ft2_8;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0_5;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1_4;
    f32 var_ft0;
    f32 var_ft0_2;
    f32 var_ft0_3;
    f32 var_ft0_4;
    f32 var_ft0_5;
    s16 var_v0_3;
    s32 temp_s5;
    s32 var_v0_2;
    u16 temp_a0;
    u16 var_v0;
    u8 temp_a0_2;
    u8 temp_a1;
    u8 temp_s4;
    u8 var_a0;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a1_2;
    void *temp_s1;
    void *temp_s2;
    void *temp_s3;

    temp_s2 = (M2C_FIELD(arg0, u16 *, 2) * 0x64) + &D_8011F2F0;
    temp_s5 = *(&D_802352CC + (M2C_FIELD(&D_8006FAF0, u16 *, 0x20) * 4));
    temp_s4 = *(&D_802352F4 + M2C_FIELD(&D_8006FAF0, u16 *, 0x20));
    temp_a0 = M2C_FIELD(arg0, u16 *, 0x8E4);
    temp_s1 = (temp_a0 * 0x6C) + M2C_FIELD(arg0, s32 *, 0x8DC);
    temp_s3 = (temp_a0 * 0xC) + M2C_FIELD(arg0, s32 *, 0x8E0);
    temp_fv0 = func_801F9BE8(M2C_FIELD(temp_s2, f32 *, 0x28), *(&D_80235C60 + (M2C_FIELD(arg0, u8 *, 0x597) * 4)), temp_a0);
    var_ft0 = temp_fv0;
    if (!(temp_fv0 > 0.0f)) {
        var_ft0 = -temp_fv0;
    }
    if ((var_ft0 > 120.0f) && (M2C_FIELD(arg0, u8 *, 0x8A1) == 0) && (M2C_FIELD(arg0, u8 *, 0x870) == 0) && (M2C_FIELD(arg0, u8 *, 0x879) == 0)) {
        var_v0 = M2C_FIELD(arg0, u16 *, 6) | 2;
    } else {
        var_v0 = M2C_FIELD(arg0, u16 *, 6) & 0xFFFD;
    }
    M2C_FIELD(arg0, u16 *, 6) = var_v0;
    temp_ft2 = M2C_FIELD(temp_s2, f32 *, 0x18) - M2C_FIELD(temp_s1, f32 *, 0);
    temp_ft1 = M2C_FIELD(temp_s2, f32 *, 0x20) - M2C_FIELD(temp_s1, f32 *, 4);
    if (((temp_ft2 * M2C_FIELD(temp_s1, f32 *, 0x30)) + (temp_ft1 * M2C_FIELD(temp_s1, f32 *, 0x34))) > 0.0f) {
        if (M2C_FIELD(temp_s1, s16 *, 0x20) != -1) {
            if (M2C_FIELD(arg0, u8 *, 0x879) == 0) {
                M2C_FIELD(temp_s3, f32 *, 0) = (f32) (func_801FA4B0(0, 0, M2C_FIELD(temp_s1, f32 *, 0x28) * 100.0f, M2C_FIELD(temp_s1, f32 *, 0x2C) * 100.0f, temp_ft2, temp_ft1, M2C_FIELD(arg0, f32 *, 0x7B4), M2C_FIELD(arg0, f32 *, 0x7BC)) * 100.0f);
                M2C_FIELD(temp_s3, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x770);
                M2C_FIELD(temp_s3, s8 *, 8) = 0;
            }
            M2C_FIELD(arg0, u16 *, 0x8E6) = (u16) M2C_FIELD(arg0, u16 *, 0x8E4);
            M2C_FIELD(arg0, u16 *, 0x8E4) = (u16) M2C_FIELD(temp_s1, s16 *, 0x20);
            M2C_FIELD(arg0, s16 *, 0x8E8) = 0;
            if (((M2C_FIELD(&D_8006FAF0, u16 *, 0x20) == 0) && (M2C_FIELD(D_801C7AB0, u8 *, 1) == 6) && (temp_a0_2 = M2C_FIELD(D_801C7AB0, u8 *, 2), (M2C_FIELD(arg0, u16 *, 0x8E6) == (temp_a0_2 - 2))) && (M2C_FIELD(arg0, u16 *, 0x8E4) == (temp_a0_2 - 1))) || ((s32) M2C_FIELD(arg0, u16 *, 0x8E4) == 0x10000)) {
                M2C_FIELD(arg0, u16 *, 0x594) = (u16) (M2C_FIELD(arg0, u16 *, 0x594) + 1);
            }
            temp_a0_3 = (M2C_FIELD(arg0, u8 *, 0x597) * 2) + temp_s5;
            if (M2C_FIELD(arg0, u16 *, 0x8E6) == M2C_FIELD(temp_a0_3, u8 *, 0)) {
                var_v0_2 = temp_s4 & 0xFF;
                if (M2C_FIELD(arg0, u16 *, 0x8E4) == M2C_FIELD(temp_a0_3, u8 *, 1)) {
                    goto block_20;
                }
            }
            goto block_24;
        }
        temp_ft1_2 = func_801FA4B0(0, 0, M2C_FIELD(temp_s1, f32 *, 0x28) * 100.0f, M2C_FIELD(temp_s1, f32 *, 0x2C) * 100.0f, temp_ft2, temp_ft1, M2C_FIELD(arg0, f32 *, 0x7B4), M2C_FIELD(arg0, f32 *, 0x7BC)) * 100.0f;
        M2C_FIELD(arg0, f32 *, 0x854) = (f32) (M2C_FIELD(arg0, f32 *, 0x854) - (((temp_ft1_2 * M2C_FIELD(temp_s1, f32 *, 0x28)) + M2C_FIELD(temp_s1, f32 *, 0) + (M2C_FIELD(temp_s1, f32 *, 0x30) * 40.0f)) - M2C_FIELD(temp_s2, f32 *, 0x18)));
        M2C_FIELD(arg0, f32 *, 0x85C) = (f32) (M2C_FIELD(arg0, f32 *, 0x85C) - (((temp_ft1_2 * M2C_FIELD(temp_s1, f32 *, 0x2C)) + M2C_FIELD(temp_s1, f32 *, 4) + (M2C_FIELD(temp_s1, f32 *, 0x34) * 40.0f)) - M2C_FIELD(temp_s2, f32 *, 0x20)));
        temp_fs0 = M2C_FIELD(arg0, f32 *, 0x7C0);
        temp_fs1 = M2C_FIELD(arg0, f32 *, 0x7C8);
        temp_fa0 = (temp_fs0 * temp_fs0) + (temp_fs1 * temp_fs1);
        temp_fv0_2 = sqrtf(temp_fa0);
        var_ft0_2 = temp_fv0_2;
        if (temp_fv0_2 != temp_fv0_2) {
            var_ft0_2 = sqrtf(temp_fa0);
        }
        temp_ft1_3 = M2C_FIELD(temp_s1, f32 *, 0x30);
        temp_ft2_2 = M2C_FIELD(temp_s1, f32 *, 0x34);
        if (var_ft0_2 != 0.0f) {
            temp_fv1 = (((temp_fs0 * temp_ft1_3) + (temp_fs1 * temp_ft2_2)) / var_ft0_2) * var_ft0_2 * -1.3f;
            temp_fs0_2 = temp_fs0 + (temp_ft1_3 * temp_fv1);
            temp_fs1_2 = temp_fs1 + (temp_ft2_2 * temp_fv1);
            M2C_FIELD(arg0, f32 *, 0x7B4) = temp_fs0_2;
            M2C_FIELD(arg0, f32 *, 0x7BC) = temp_fs1_2;
            M2C_FIELD(arg0, f32 *, 0x7C0) = temp_fs0_2;
            M2C_FIELD(arg0, f32 *, 0x7C8) = temp_fs1_2;
            M2C_FIELD(arg0, f32 *, 0x7C4) = 3.0f;
            M2C_FIELD(arg0, s8 *, 0x8D0) = 0x78;
        }
        goto block_30;
    }
block_30:
    temp_ft2_3 = M2C_FIELD(temp_s2, f32 *, 0x18) - M2C_FIELD(temp_s1, f32 *, 8);
    temp_ft1_4 = M2C_FIELD(temp_s2, f32 *, 0x20) - M2C_FIELD(temp_s1, f32 *, 0xC);
    if (((temp_ft2_3 * M2C_FIELD(temp_s1, f32 *, 0x40)) + (temp_ft1_4 * M2C_FIELD(temp_s1, f32 *, 0x44))) > 0.0f) {
        if (M2C_FIELD(temp_s1, s16 *, 0x22) != -1) {
            if (M2C_FIELD(arg0, u8 *, 0x879) == 0) {
                M2C_FIELD(temp_s3, f32 *, 0) = (f32) (func_801FA4B0(0, 0, M2C_FIELD(temp_s1, f32 *, 0x38) * 100.0f, M2C_FIELD(temp_s1, f32 *, 0x3C) * 100.0f, temp_ft2_3, temp_ft1_4, M2C_FIELD(arg0, f32 *, 0x7B4), M2C_FIELD(arg0, f32 *, 0x7BC)) * 100.0f);
                M2C_FIELD(temp_s3, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x770);
                M2C_FIELD(temp_s3, s8 *, 8) = 1;
            }
            M2C_FIELD(arg0, u16 *, 0x8E6) = (u16) M2C_FIELD(arg0, u16 *, 0x8E4);
            M2C_FIELD(arg0, u16 *, 0x8E4) = (u16) M2C_FIELD(temp_s1, s16 *, 0x22);
            var_v0_3 = 1;
            goto block_44;
        }
        temp_ft1_5 = func_801FA4B0(0, 0, M2C_FIELD(temp_s1, f32 *, 0x38) * 100.0f, M2C_FIELD(temp_s1, f32 *, 0x3C) * 100.0f, temp_ft2_3, temp_ft1_4, M2C_FIELD(arg0, f32 *, 0x7B4), M2C_FIELD(arg0, f32 *, 0x7BC)) * 100.0f;
        M2C_FIELD(arg0, f32 *, 0x854) = (f32) (M2C_FIELD(arg0, f32 *, 0x854) - (((temp_ft1_5 * M2C_FIELD(temp_s1, f32 *, 0x38)) + M2C_FIELD(temp_s1, f32 *, 8) + (M2C_FIELD(temp_s1, f32 *, 0x40) * 40.0f)) - M2C_FIELD(temp_s2, f32 *, 0x18)));
        M2C_FIELD(arg0, f32 *, 0x85C) = (f32) (M2C_FIELD(arg0, f32 *, 0x85C) - (((temp_ft1_5 * M2C_FIELD(temp_s1, f32 *, 0x3C)) + M2C_FIELD(temp_s1, f32 *, 0xC) + (M2C_FIELD(temp_s1, f32 *, 0x44) * 40.0f)) - M2C_FIELD(temp_s2, f32 *, 0x20)));
        temp_fs0_3 = M2C_FIELD(arg0, f32 *, 0x7C0);
        temp_fs1_3 = M2C_FIELD(arg0, f32 *, 0x7C8);
        temp_fa0_2 = (temp_fs0_3 * temp_fs0_3) + (temp_fs1_3 * temp_fs1_3);
        temp_fv0_3 = sqrtf(temp_fa0_2);
        var_ft0_3 = temp_fv0_3;
        if (temp_fv0_3 != temp_fv0_3) {
            var_ft0_3 = sqrtf(temp_fa0_2);
        }
        temp_ft1_6 = M2C_FIELD(temp_s1, f32 *, 0x40);
        temp_ft2_4 = M2C_FIELD(temp_s1, f32 *, 0x44);
        if (var_ft0_3 != 0.0f) {
            temp_fv1_2 = (((temp_fs0_3 * temp_ft1_6) + (temp_fs1_3 * temp_ft2_4)) / var_ft0_3) * var_ft0_3 * -1.3f;
            temp_fs0_4 = temp_fs0_3 + (temp_ft1_6 * temp_fv1_2);
            temp_fs1_4 = temp_fs1_3 + (temp_ft2_4 * temp_fv1_2);
            M2C_FIELD(arg0, f32 *, 0x7B4) = temp_fs0_4;
            M2C_FIELD(arg0, f32 *, 0x7BC) = temp_fs1_4;
            M2C_FIELD(arg0, f32 *, 0x7C0) = temp_fs0_4;
            M2C_FIELD(arg0, f32 *, 0x7C8) = temp_fs1_4;
            M2C_FIELD(arg0, f32 *, 0x7C4) = 3.0f;
            M2C_FIELD(arg0, s8 *, 0x8D0) = 0x78;
        }
        goto block_39;
    }
block_39:
    temp_ft2_5 = M2C_FIELD(temp_s2, f32 *, 0x18) - M2C_FIELD(temp_s1, f32 *, 0x10);
    temp_ft1_7 = M2C_FIELD(temp_s2, f32 *, 0x20) - M2C_FIELD(temp_s1, f32 *, 0x14);
    if (((temp_ft2_5 * M2C_FIELD(temp_s1, f32 *, 0x50)) + (temp_ft1_7 * M2C_FIELD(temp_s1, f32 *, 0x54))) > 0.0f) {
        if (M2C_FIELD(temp_s1, s16 *, 0x24) != -1) {
            if (M2C_FIELD(arg0, u8 *, 0x879) == 0) {
                M2C_FIELD(temp_s3, f32 *, 0) = (f32) (func_801FA4B0(0, 0, M2C_FIELD(temp_s1, f32 *, 0x48) * 100.0f, M2C_FIELD(temp_s1, f32 *, 0x4C) * 100.0f, temp_ft2_5, temp_ft1_7, M2C_FIELD(arg0, f32 *, 0x7B4), M2C_FIELD(arg0, f32 *, 0x7BC)) * 100.0f);
                M2C_FIELD(temp_s3, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x770);
                M2C_FIELD(temp_s3, s8 *, 8) = 2;
            }
            M2C_FIELD(arg0, u16 *, 0x8E6) = (u16) M2C_FIELD(arg0, u16 *, 0x8E4);
            M2C_FIELD(arg0, u16 *, 0x8E4) = (u16) M2C_FIELD(temp_s1, s16 *, 0x24);
            var_v0_3 = 2;
block_44:
            M2C_FIELD(arg0, s16 *, 0x8E8) = var_v0_3;
            if ((s32) M2C_FIELD(arg0, u16 *, 0x8E4) == 1) {
                M2C_FIELD(arg0, u16 *, 0x594) = (u16) (M2C_FIELD(arg0, u16 *, 0x594) - 1);
            }
            temp_a0_4 = (M2C_FIELD(arg0, u8 *, 0x597) * 2) + temp_s5;
            if (M2C_FIELD(arg0, u16 *, 0x8E6) == M2C_FIELD(temp_a0_4, u8 *, 0)) {
                var_v0_2 = temp_s4 & 0xFF;
                if (M2C_FIELD(arg0, u16 *, 0x8E4) != M2C_FIELD(temp_a0_4, u8 *, 1)) {
                    goto block_24;
                }
block_20:
                if (M2C_FIELD(arg0, u8 *, 0x597) == var_v0_2) {
                    M2C_FIELD(arg0, u8 *, 0x597) = 0U;
                    return;
                }
                goto block_63;
            }
block_24:
            var_a0 = temp_s4;
            if (M2C_FIELD(arg0, u8 *, 0x597) != 0) {
                goto block_65;
            }
            goto block_66;
        }
        temp_ft1_8 = func_801FA4B0(0, 0, M2C_FIELD(temp_s1, f32 *, 0x48) * 100.0f, M2C_FIELD(temp_s1, f32 *, 0x4C) * 100.0f, temp_ft2_5, temp_ft1_7, M2C_FIELD(arg0, f32 *, 0x7B4), M2C_FIELD(arg0, f32 *, 0x7BC)) * 100.0f;
        M2C_FIELD(arg0, f32 *, 0x854) = (f32) (M2C_FIELD(arg0, f32 *, 0x854) - (((temp_ft1_8 * M2C_FIELD(temp_s1, f32 *, 0x48)) + M2C_FIELD(temp_s1, f32 *, 0x10) + (M2C_FIELD(temp_s1, f32 *, 0x50) * 40.0f)) - M2C_FIELD(temp_s2, f32 *, 0x18)));
        M2C_FIELD(arg0, f32 *, 0x85C) = (f32) (M2C_FIELD(arg0, f32 *, 0x85C) - (((temp_ft1_8 * M2C_FIELD(temp_s1, f32 *, 0x4C)) + M2C_FIELD(temp_s1, f32 *, 0x14) + (M2C_FIELD(temp_s1, f32 *, 0x54) * 40.0f)) - M2C_FIELD(temp_s2, f32 *, 0x20)));
        temp_fs0_5 = M2C_FIELD(arg0, f32 *, 0x7C0);
        temp_fs1_5 = M2C_FIELD(arg0, f32 *, 0x7C8);
        temp_fa0_3 = (temp_fs0_5 * temp_fs0_5) + (temp_fs1_5 * temp_fs1_5);
        temp_fv0_4 = sqrtf(temp_fa0_3);
        var_ft0_4 = temp_fv0_4;
        if (temp_fv0_4 != temp_fv0_4) {
            var_ft0_4 = sqrtf(temp_fa0_3);
        }
        temp_ft1_9 = M2C_FIELD(temp_s1, f32 *, 0x50);
        temp_ft2_6 = M2C_FIELD(temp_s1, f32 *, 0x54);
        if (var_ft0_4 != 0.0f) {
            temp_fv1_3 = (((temp_fs0_5 * temp_ft1_9) + (temp_fs1_5 * temp_ft2_6)) / var_ft0_4) * var_ft0_4 * -1.3f;
            temp_fs0_6 = temp_fs0_5 + (temp_ft1_9 * temp_fv1_3);
            temp_fs1_6 = temp_fs1_5 + (temp_ft2_6 * temp_fv1_3);
            M2C_FIELD(arg0, f32 *, 0x7B4) = temp_fs0_6;
            M2C_FIELD(arg0, f32 *, 0x7BC) = temp_fs1_6;
            M2C_FIELD(arg0, f32 *, 0x7C0) = temp_fs0_6;
            M2C_FIELD(arg0, f32 *, 0x7C8) = temp_fs1_6;
            M2C_FIELD(arg0, f32 *, 0x7C4) = 3.0f;
            M2C_FIELD(arg0, s8 *, 0x8D0) = 0x78;
        }
        goto block_53;
    }
block_53:
    temp_ft2_7 = M2C_FIELD(temp_s2, f32 *, 0x18) - M2C_FIELD(temp_s1, f32 *, 0x18);
    temp_ft1_10 = M2C_FIELD(temp_s2, f32 *, 0x20) - M2C_FIELD(temp_s1, f32 *, 0x1C);
    if (((temp_ft2_7 * M2C_FIELD(temp_s1, f32 *, 0x60)) + (temp_ft1_10 * M2C_FIELD(temp_s1, f32 *, 0x64))) > 0.0f) {
        if (M2C_FIELD(temp_s1, s16 *, 0x26) != -1) {
            if (M2C_FIELD(arg0, u8 *, 0x879) == 0) {
                M2C_FIELD(temp_s3, f32 *, 0) = (f32) (func_801FA4B0(0, 0, M2C_FIELD(temp_s1, f32 *, 0x58) * 100.0f, M2C_FIELD(temp_s1, f32 *, 0x5C) * 100.0f, temp_ft2_7, temp_ft1_10, M2C_FIELD(arg0, f32 *, 0x7B4), M2C_FIELD(arg0, f32 *, 0x7BC)) * 100.0f);
                M2C_FIELD(temp_s3, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 0x770);
                M2C_FIELD(temp_s3, s8 *, 8) = 3;
            }
            M2C_FIELD(arg0, u16 *, 0x8E6) = (u16) M2C_FIELD(arg0, u16 *, 0x8E4);
            M2C_FIELD(arg0, u16 *, 0x8E4) = (u16) M2C_FIELD(temp_s1, s16 *, 0x26);
            M2C_FIELD(arg0, s16 *, 0x8E8) = 3;
            if ((s32) M2C_FIELD(arg0, u16 *, 0x8E4) == 1) {
                M2C_FIELD(arg0, u16 *, 0x594) = (u16) (M2C_FIELD(arg0, u16 *, 0x594) - 1);
            }
            temp_a1 = M2C_FIELD(arg0, u8 *, 0x597);
            temp_a0_5 = (temp_a1 * 2) + temp_s5;
            if ((M2C_FIELD(arg0, u16 *, 0x8E6) == M2C_FIELD(temp_a0_5, u8 *, 0)) && (M2C_FIELD(arg0, u16 *, 0x8E4) == M2C_FIELD(temp_a0_5, u8 *, 1))) {
                if (temp_a1 == (temp_s4 & 0xFF)) {
                    M2C_FIELD(arg0, u8 *, 0x597) = 0U;
                    return;
                }
block_63:
                M2C_FIELD(arg0, u8 *, 0x597) = (u8) (M2C_FIELD(arg0, u8 *, 0x597) + 1);
                return;
            }
            var_a0 = temp_s4;
            if (M2C_FIELD(arg0, u8 *, 0x597) != 0) {
block_65:
                var_a0 = M2C_FIELD(arg0, u8 *, 0x597) - 1;
            }
block_66:
            temp_a1_2 = ((var_a0 & 0xFF) * 2) + temp_s5;
            if (M2C_FIELD(arg0, u16 *, 0x8E6) == M2C_FIELD(temp_a1_2, u8 *, 1)) {
                if (M2C_FIELD(arg0, u16 *, 0x8E4) == M2C_FIELD(temp_a1_2, u8 *, 0)) {
                    M2C_FIELD(arg0, u8 *, 0x597) = var_a0;
                }
            }
        } else {
            temp_ft1_11 = func_801FA4B0(0, 0, M2C_FIELD(temp_s1, f32 *, 0x58) * 100.0f, M2C_FIELD(temp_s1, f32 *, 0x5C) * 100.0f, temp_ft2_7, temp_ft1_10, M2C_FIELD(arg0, f32 *, 0x7B4), M2C_FIELD(arg0, f32 *, 0x7BC)) * 100.0f;
            M2C_FIELD(arg0, f32 *, 0x854) = (f32) (M2C_FIELD(arg0, f32 *, 0x854) - (((temp_ft1_11 * M2C_FIELD(temp_s1, f32 *, 0x58)) + M2C_FIELD(temp_s1, f32 *, 0x18) + (M2C_FIELD(temp_s1, f32 *, 0x60) * 40.0f)) - M2C_FIELD(temp_s2, f32 *, 0x18)));
            M2C_FIELD(arg0, f32 *, 0x85C) = (f32) (M2C_FIELD(arg0, f32 *, 0x85C) - (((temp_ft1_11 * M2C_FIELD(temp_s1, f32 *, 0x5C)) + M2C_FIELD(temp_s1, f32 *, 0x1C) + (M2C_FIELD(temp_s1, f32 *, 0x64) * 40.0f)) - M2C_FIELD(temp_s2, f32 *, 0x20)));
            temp_fs0_7 = M2C_FIELD(arg0, f32 *, 0x7C0);
            temp_fs1_7 = M2C_FIELD(arg0, f32 *, 0x7C8);
            temp_fa0_4 = (temp_fs0_7 * temp_fs0_7) + (temp_fs1_7 * temp_fs1_7);
            temp_fv0_5 = sqrtf(temp_fa0_4);
            var_ft0_5 = temp_fv0_5;
            if (temp_fv0_5 != temp_fv0_5) {
                var_ft0_5 = sqrtf(temp_fa0_4);
            }
            temp_ft1_12 = M2C_FIELD(temp_s1, f32 *, 0x60);
            temp_ft2_8 = M2C_FIELD(temp_s1, f32 *, 0x64);
            if (var_ft0_5 != 0.0f) {
                temp_fv1_4 = (((temp_fs0_7 * temp_ft1_12) + (temp_fs1_7 * temp_ft2_8)) / var_ft0_5) * var_ft0_5 * -1.3f;
                temp_fs0_8 = temp_fs0_7 + (temp_ft1_12 * temp_fv1_4);
                temp_fs1_8 = temp_fs1_7 + (temp_ft2_8 * temp_fv1_4);
                M2C_FIELD(arg0, f32 *, 0x7B4) = temp_fs0_8;
                M2C_FIELD(arg0, f32 *, 0x7BC) = temp_fs1_8;
                M2C_FIELD(arg0, f32 *, 0x7C0) = temp_fs0_8;
                M2C_FIELD(arg0, f32 *, 0x7C8) = temp_fs1_8;
                M2C_FIELD(arg0, f32 *, 0x7C4) = 3.0f;
                M2C_FIELD(arg0, s8 *, 0x8D0) = 0x78;
            }
        }
    }
}
