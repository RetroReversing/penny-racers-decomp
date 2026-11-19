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

extern unsigned short D_8006FB10;
extern short D_800DD2C0;
f32 __cosf();
f32 __sinf();
u16 func_800DE41C();
s32 func_800DF1E0();
s32 func_80129C88();
s32 func_80129FD4();
s32 func_8012AD20();
s32 func_801D65BC();
s32 func_801D663C();
f32 func_801F9C8C();
s32 func_8021F6A0();
s32 func_80232360();
s32 guMtxCatF();
s32 guMtxXFMF();
s32 guRotateF();
f32 sqrtf();
extern char D_8006FAF0[];
extern char D_800DB1B8[];
extern char D_8011F2F2[];
extern char D_8011F2FC[];
extern char D_8011F2FD[];
extern char D_8011F304[];
extern char D_8011F308[];
extern char D_8011F30C[];
extern char D_8011F310[];
extern char D_8011F314[];
extern char D_8011F318[];
extern char D_8011F31C[];
extern char D_8011F32E[];
extern char D_8011F340[];
extern u16 D_80167E60;
extern u8 D_80167E61;
extern u16 D_80167E62;
extern char D_80183AF0[];
extern char D_80183AF4[];
extern char D_80183AF8[];
extern f32 D_80183AFC;
extern f32 D_80183B00;
extern f32 D_80183B04;
extern char D_80183B08[];
extern char D_80183B18[];
extern char D_80183B28[];
extern char D_80183B38[];
extern char D_80189C84[];
extern u16 D_80189C96;
extern u8 D_80189CC8;
extern char D_8018A264[];
extern char D_8018A26E[];
extern u16 D_8018BC30;
extern u16 D_80190C90;
extern void *D_801C7AB0;
extern u16 D_801E975A;
extern char D_801E9998[];
extern char D_801E999C[];
extern char D_801E99A0[];
extern char D_801E99A4[];
extern char D_801E99A8[];
extern char D_801E99AC[];
extern char D_801E99B0[];
extern char D_801E99B4[];
extern char D_801E99B8[];
extern char D_801E99BC[];
extern char D_801E99C4[];
extern char D_80221080[];
extern char D_80221084[];
extern char D_80221088[];
extern char D_8022108C[];
extern char D_80221090[];
extern char D_80221094[];
extern char D_80221098[];
extern char D_8022109C[];
extern char D_802210A0[];
extern char D_8022A772[];
extern char D_8022A980[];
extern char D_8022AD04[];
extern char D_8022AD64[];
extern char D_8022AF3C[];
extern char D_8022AFE0[];
extern char D_8022AFE9[];
extern char D_80237740[];
extern char D_80237D18[];
extern char D_80237FC8[];
extern char D_80237FCC[];
extern char D_80237FD0[];
extern char D_80237FD4[];
extern char D_802387D8[];
extern s32 func_8012FFF0;
extern s32 func_80135544;
extern s32 func_80135C64;
extern s32 func_80136A28;

void func_8012E4DC(u16 arg0) {
    f32 *sp10;
    f32 *sp14;                                      /* compiler-managed */
    f32 *sp18;
    s32 *sp1C;
    s32 *sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp88;
    s32 spC8;
    s32 sp108;
    f32 sp148;
    f32 sp14C;
    f32 sp150;
    f32 sp158;
    f32 sp15C;
    f32 sp160;
    u16 sp16E;
    s32 var_a0_4;
    f32 *temp_s0_2;
    f32 *temp_s1;
    f32 *temp_v0;
    f32 *temp_v0_17;
    f32 *temp_v0_19;
    f32 *temp_v0_2;
    f32 *temp_v0_3;
    f32 *temp_v0_4;
    f32 *temp_v0_5;
    f32 *temp_v0_6;
    f32 *temp_v1_4;
    f32 *temp_v1_6;
    f32 temp_fa0;
    f32 temp_fa0_2;
    f32 temp_fa0_3;
    f32 temp_fa0_4;
    f32 temp_fa0_5;
    f32 temp_fa0_6;
    f32 temp_fa1;
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
    f32 temp_fs2;
    f32 temp_fs2_2;
    f32 temp_fs2_3;
    f32 temp_fs3;
    f32 temp_fs3_2;
    f32 temp_fs3_3;
    f32 temp_fs4;
    f32 temp_fs4_2;
    f32 temp_ft0;
    f32 temp_ft1;
    f32 temp_fv0;
    f32 temp_fv0_10;
    f32 temp_fv0_11;
    f32 temp_fv0_12;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0_5;
    f32 temp_fv0_6;
    f32 temp_fv0_7;
    f32 temp_fv0_8;
    f32 temp_fv0_9;
    f32 temp_fv1;
    f32 temp_fv1_10;
    f32 temp_fv1_11;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1_4;
    f32 temp_fv1_5;
    f32 temp_fv1_6;
    f32 temp_fv1_7;
    f32 temp_fv1_8;
    f32 temp_fv1_9;
    f32 temp_s2;
    f32 temp_s5;
    f32 temp_s6;
    f32 temp_s7;
    f32 var_fs5;
    f32 var_ft0;
    f32 var_ft0_2;
    f32 var_fv1;
    f32 var_fv1_2;
    s16 temp_a0_5;
    s16 temp_a0_9;
    s32 temp_a0;
    s32 temp_a0_10;
    s32 temp_a0_11;
    s32 temp_a0_12;
    s32 temp_a0_13;
    s32 temp_a0_14;
    s32 temp_a0_15;
    s32 temp_a0_16;
    s32 temp_a0_17;
    s32 temp_a0_2;
    s32 temp_a0_4;
    s32 temp_a0_6;
    s32 temp_a0_8;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_s0;
    s32 temp_s0_3;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s3;
    s32 temp_v0_10;
    s32 temp_v0_11;
    s32 temp_v0_12;
    s32 temp_v0_13;
    s32 temp_v0_14;
    s32 temp_v0_15;
    s32 temp_v0_20;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 temp_v1_10;
    s32 temp_v1_11;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_5;
    s32 temp_v1_7;
    s32 temp_v1_9;
    s32 var_a0;
    s32 var_a0_3;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s32 var_v1_7;
    s32 var_v1_8;
    s8 var_s0_3;
    u16 *temp_a0_7;
    u16 *temp_s0_5;
    u16 temp_fp;
    u16 temp_v1;
    u32 temp_a0_3;
    u32 temp_s0_4;
    u32 temp_v0_16;
    u32 temp_v0_18;
    u32 var_a0_2;
    u8 temp_s4;
    void *temp_v1_8;

    sp16E = arg0;
    temp_a0 = sp16E * 0x64;
    temp_s4 = *(D_8011F2FC + temp_a0);
    temp_s3 = (temp_s4 & 0xFFFF) / 3;
    temp_fp = *(D_8022A772 + ((temp_s3 & 0xFFFF) * 0x8F0));
    temp_v1 = *(D_8011F32E + temp_a0);
    if (temp_v1 != 0) {
        temp_a0_2 = temp_s3 & 0xFFFF;
        if (temp_v1 != 1) {
            return;
        }
        if (*(D_801E99A8 + (temp_a0_2 * 0x70)) != 0) {
            temp_v0 = (temp_a0_2 * 4) + D_80183B28;
            temp_fv0 = *temp_v0 + 1.0f;
            *temp_v0 = temp_fv0;
            if (temp_fv0 >= 360.0f) {
                *temp_v0 = temp_fv0 - 360.0f;
            }
        }
        var_a0 = temp_s3 & 0xFFFF;
        if (*(D_801E99AC + (var_a0 * 0x70)) != 0) {
            temp_v0_2 = (var_a0 * 4) + D_80183B28;
            temp_fv1 = *temp_v0_2 - 1.0f;
            *temp_v0_2 = temp_fv1;
            if (temp_fv1 < 0.0f) {
                *temp_v0_2 = temp_fv1 + 360.0f;
                var_a0 = temp_s3 & 0xFFFF;
            }
        }
        temp_v1_2 = var_a0 * 0x70;
        if (*(D_801E99C4 + temp_v1_2) == 0) {
            temp_v1_3 = temp_s3 & 0xFFFF;
            temp_a0_3 = *(D_801E99A0 + (temp_v1_3 * 0x70));
            if (temp_a0_3 != 0) {
                temp_v1_4 = (temp_v1_3 * 4) + D_80183B18;
                temp_fv1_2 = *temp_v1_4;
                if (temp_fv1_2 > 2.0f) {
                    if (temp_a0_3 >= 0x10U) {
                        *temp_v1_4 = temp_fv1_2 - 4.0f;
                    } else {
                        temp_v0_3 = ((temp_s3 & 0xFFFF) * 4) + D_80183B18;
                        *temp_v0_3 -= 1.0f;
                    }
                }
            }
            temp_v1_5 = temp_s3 & 0xFFFF;
            var_a0_2 = *(D_801E99A4 + (temp_v1_5 * 0x70));
            if (var_a0_2 != 0) {
                temp_v1_6 = (temp_v1_5 * 4) + D_80183B18;
                temp_fv1_3 = *temp_v1_6;
                if (temp_fv1_3 < 5000.0f) {
                    if (var_a0_2 >= 0x10U) {
                        *temp_v1_6 = temp_fv1_3 + 4.0f;
                    } else {
                        temp_v0_4 = ((temp_s3 & 0xFFFF) * 4) + D_80183B18;
                        *temp_v0_4 += 1.0f;
                    }
                }
            }
        } else {
            if (*(D_801E99A0 + temp_v1_2) != 0) {
                temp_v0_5 = (var_a0 * 4) + D_80183B38;
                temp_fv0_2 = *temp_v0_5 + 1.0f;
                *temp_v0_5 = temp_fv0_2;
                if (temp_fv0_2 > 85.0f) {
                    *temp_v0_5 = 85.0f;
                }
            }
            var_a0_2 = temp_s3 & 0xFFFF;
            if (*(D_801E99A4 + (var_a0_2 * 0x70)) != 0) {
                temp_v0_6 = (var_a0_2 * 4) + D_80183B38;
                temp_fv0_3 = *temp_v0_6 - 1.0f;
                *temp_v0_6 = temp_fv0_3;
                if (temp_fv0_3 < 0.0f) {
                    *temp_v0_6 = 0.0f;
                }
            }
        }
        temp_v0_7 = (temp_fp & 0xFFFF) * 0x64;
        temp_s7 = *(D_8011F308 + temp_v0_7);
        temp_s0 = (temp_s3 & 0xFFFF) * 4;
        temp_s5 = *(D_8011F30C + temp_v0_7) + *(D_80183B08 + temp_s0);
        temp_s6 = *(D_8011F310 + temp_v0_7);
        temp_fa0 = *(D_8011F318 + temp_v0_7) + *(D_80183B28 + temp_s0);
        D_80183AFC = temp_fa0;
        temp_s1 = temp_s0 + D_80183B18;
        temp_fs4 = __sinf((temp_fa0 * 3.14f) / 180.0f, var_a0_2) * *temp_s1;
        temp_fs0 = __sinf((D_80183AFC * 3.14f) / 180.0f);
        temp_s0_2 = temp_s0 + D_80183B38;
        temp_fs4_2 = (temp_fs4 - (temp_fs0 * __sinf((*temp_s0_2 * 3.14f) / 180.0f) * *temp_s1)) + temp_s7;
        temp_s2 = (__sinf((*temp_s0_2 * 3.14f) / 180.0f) * *temp_s1) + temp_s5;
        temp_fs3 = __cosf((D_80183AFC * 3.14f) / 180.0f) * *temp_s1;
        temp_fs0_2 = __cosf((D_80183AFC * 3.14f) / 180.0f);
        temp_fs3_2 = (temp_fs3 - (temp_fs0_2 * __sinf((*temp_s0_2 * 3.14f) / 180.0f) * *temp_s1)) + temp_s6;
        temp_v0_8 = (temp_s4 & 0xFFFF) * 0x24;
        temp_ft0 = temp_s7 - *(D_80221080 + temp_v0_8);
        temp_fv0_4 = temp_s5 - *(D_80221084 + temp_v0_8);
        temp_fv1_4 = temp_s6 - *(D_80221088 + temp_v0_8);
        temp_fa0_2 = (temp_ft0 * temp_ft0) + (temp_fv0_4 * temp_fv0_4) + (temp_fv1_4 * temp_fv1_4);
        temp_fv0_5 = sqrtf(temp_fa0_2);
        var_fs5 = temp_fv0_5;
        if (temp_fv0_5 != temp_fv0_5) {
            var_fs5 = sqrtf(temp_fa0_2);
        }
        temp_fs0_3 = temp_s7 - temp_fs4_2;
        temp_fs1 = temp_s5 - temp_s2;
        temp_fs2 = temp_s6 - temp_fs3_2;
        temp_fv0_6 = sqrtf((temp_fs0_3 * temp_fs0_3) + (temp_fs1 * temp_fs1) + (temp_fs2 * temp_fs2));
        if (var_fs5 < temp_fv0_6) {
            temp_fv1_5 = (var_fs5 - temp_fv0_6) / temp_fv0_6;
            if (*(D_8022AFE0 + ((temp_s3 & 0xFFFF) * 0x8F0)) == 0) {
                temp_v0_9 = (temp_s4 & 0xFFFF) * 0x24;
                *(D_80221080 + temp_v0_9) = (temp_fs0_3 * temp_fv1_5) + *(D_80221080 + temp_v0_9);
                *(D_80221084 + temp_v0_9) = (temp_fs1 * temp_fv1_5) + *(D_80221084 + temp_v0_9);
                *(D_80221088 + temp_v0_9) = (temp_fs2 * temp_fv1_5) + *(D_80221088 + temp_v0_9);
            }
        }
        var_v1 = temp_s4 & 0xFFFF;
        if (*(D_8022AFE0 + ((temp_s3 & 0xFFFF) * 0x8F0)) == 0) {
            temp_v0_10 = var_v1 * 0x24;
            temp_fs0_4 = temp_fs4_2 - *(D_80221080 + temp_v0_10);
            temp_fs1_2 = temp_s2 - *(D_80221084 + temp_v0_10);
            temp_fs2_2 = temp_fs3_2 - *(D_80221088 + temp_v0_10);
            temp_fa0_3 = (temp_fs0_4 * temp_fs0_4) + (temp_fs1_2 * temp_fs1_2) + (temp_fs2_2 * temp_fs2_2);
            temp_fv0_7 = sqrtf(temp_fa0_3);
            var_ft0 = temp_fv0_7;
            if (temp_fv0_7 != temp_fv0_7) {
                var_ft0 = sqrtf(temp_fa0_3);
            }
            if (D_80183B00 < var_ft0) {
                var_fv1 = var_ft0 - D_80183B00;
                goto block_43;
            }
            var_v1 = temp_s4 & 0xFFFF;
            if (var_ft0 > 1.0f) {
                var_fv1 = (var_ft0 - D_80183B00) * 0.001f;
block_43:
                temp_fv1_6 = var_fv1 / var_ft0;
                temp_v0_11 = (temp_s4 & 0xFFFF) * 0x24;
                *(D_80221080 + temp_v0_11) = (temp_fs0_4 * temp_fv1_6) + *(D_80221080 + temp_v0_11);
                *(D_80221084 + temp_v0_11) = (temp_fs1_2 * temp_fv1_6) + *(D_80221084 + temp_v0_11);
                *(D_80221088 + temp_v0_11) = (temp_fs2_2 * temp_fv1_6) + *(D_80221088 + temp_v0_11);
                var_v1 = temp_s4 & 0xFFFF;
            }
        }
        temp_v0_12 = var_v1 * 0x24;
        temp_fs0_5 = temp_s7 - *(D_8022108C + temp_v0_12);
        temp_fs1_3 = temp_s5 - *(D_80221090 + temp_v0_12);
        temp_fs2_3 = temp_s6 - *(D_80221094 + temp_v0_12);
        temp_fa0_4 = (temp_fs0_5 * temp_fs0_5) + (temp_fs1_3 * temp_fs1_3) + (temp_fs2_3 * temp_fs2_3);
        temp_fv0_8 = sqrtf(temp_fa0_4);
        var_ft0_2 = temp_fv0_8;
        if (temp_fv0_8 != temp_fv0_8) {
            var_ft0_2 = sqrtf(temp_fa0_4);
        }
        if (D_80183B04 < var_ft0_2) {
            var_fv1_2 = var_ft0_2 - D_80183B04;
            goto block_50;
        }
        if (var_ft0_2 > 1.0f) {
            var_fv1_2 = (var_ft0_2 - D_80183B04) * 0.001f;
block_50:
            temp_fv1_7 = var_fv1_2 / var_ft0_2;
            temp_v0_13 = (temp_s4 & 0xFFFF) * 0x24;
            *(D_8022108C + temp_v0_13) = (temp_fs0_5 * temp_fv1_7) + *(D_8022108C + temp_v0_13);
            *(D_80221090 + temp_v0_13) = (temp_fs1_3 * temp_fv1_7) + *(D_80221090 + temp_v0_13);
            *(D_80221094 + temp_v0_13) = (temp_fs2_3 * temp_fv1_7) + *(D_80221094 + temp_v0_13);
        }
        var_v0 = temp_s3 & 0xFFFF;
        if ((D_8006FB10 == 0) && (var_v0 = temp_s3 & 0xFFFF, (M2C_FIELD(D_801C7AB0, u8 *, 1) == 6))) {
            func_80129FD4((var_v0 * 0x8F0) + D_8022AF3C, 4, temp_s3 & 0xFF);
            var_v1_2 = temp_fp & 0xFFFF;
        } else {
            func_80129C88((var_v0 * 0x8F0) + D_8022AF3C, 4, temp_s3 & 0xFF);
            var_v1_2 = temp_fp & 0xFFFF;
        }
        temp_v0_14 = var_v1_2 * 0x64;
        temp_fs0_6 = *(D_8011F318 + temp_v0_14);
        temp_fs1_4 = *(D_8011F31C + temp_v0_14);
        sp10 = NULL;
        guRotateF(&sp88, *(D_8011F314 + temp_v0_14), (f32 *)0x3F800000, sp10);
        sp10 = NULL;
        guRotateF(&sp48, temp_fs0_6, sp10, (f32 *)0x3F800000);
        sp10 = (f32 *)0x3F800000;
        guRotateF(&spC8, temp_fs1_4, NULL, NULL);
        guMtxCatF(&sp48, &sp88, &sp108);
        guMtxCatF(&sp108, &spC8, &sp108);
        sp10 = &sp158;
        sp14 = &sp15C;
        sp18 = &sp160;
        guMtxXFMF(&sp108, 0, 0x3F800000, 0);
        temp_v1_7 = temp_s4 & 0xFFFF;
        temp_a0_4 = (temp_v1_7 - 1) * 0x24;
        temp_v0_15 = temp_v1_7 * 0x24;
        temp_v1_8 = temp_v0_15 + D_80221080;
        temp_fv1_8 = *(D_80221098 + temp_v0_15);
        temp_fv0_9 = ((sp158 - temp_fv1_8) * 0.05f) + temp_fv1_8;
        M2C_FIELD(temp_v1_8, f32 *, 0x18) = temp_fv0_9;
        *(D_80221098 + temp_a0_4) = temp_fv0_9;
        temp_fv1_9 = *(D_8022109C + temp_v0_15);
        temp_fv0_10 = ((sp15C - temp_fv1_9) * 0.05f) + temp_fv1_9;
        M2C_FIELD(temp_v1_8, f32 *, 0x1C) = temp_fv0_10;
        *(D_80221098 + temp_a0_4) = temp_fv0_10;
        temp_fv1_10 = *(D_802210A0 + temp_v0_15);
        temp_fv0_11 = ((sp160 - temp_fv1_10) * 0.05f) + temp_fv1_10;
        M2C_FIELD(temp_v1_8, f32 *, 0x20) = temp_fv0_11;
        *(D_80221098 + temp_a0_4) = temp_fv0_11;
        temp_ft1 = *(D_8022108C + temp_v0_15) - *(D_80221080 + temp_v0_15);
        sp148 = temp_ft1;
        temp_fv1_11 = *(D_80221090 + temp_v0_15) - *(D_80221084 + temp_v0_15);
        sp14C = temp_fv1_11;
        temp_fv0_12 = *(D_80221094 + temp_v0_15) - *(D_80221088 + temp_v0_15);
        sp150 = temp_fv0_12;
        temp_fa0_5 = 1.0f / sqrtf((temp_ft1 * temp_ft1) + (temp_fv1_11 * temp_fv1_11) + (temp_fv0_12 * temp_fv0_12));
        temp_fa1 = temp_fa0_5 * sp148;
        sp148 = temp_fa1;
        sp14C *= temp_fa0_5;
        temp_fa0_6 = temp_fa0_5 * temp_fv0_12;
        sp150 = temp_fa0_6;
        temp_fs3_3 = func_801F9C8C(temp_fa0_6, -temp_fa1);
        temp_s0_3 = ((temp_s4 & 0xFFFF) - 1) * 0x24;
        *(D_80221080 + temp_s0_3) = 0.0f;
        *(D_80221084 + temp_s0_3) = 0.0f;
        *(D_80221088 + temp_s0_3) = 0.0f;
        temp_fs1_5 = __sinf(temp_fs3_3) * 400.0f;
        temp_fs0_7 = __sinf(temp_fs3_3);
        *(D_8022108C + temp_s0_3) = temp_fs1_5 - (temp_fs0_7 * __sinf(0.0f) * 400.0f);
        *(D_80221090 + temp_s0_3) = __sinf(0.0f) * 400.0f;
        temp_fs1_6 = __cosf(temp_fs3_3) * 400.0f;
        temp_fs0_8 = __cosf(temp_fs3_3);
        *(D_80221094 + temp_s0_3) = temp_fs1_6 - (temp_fs0_8 * __sinf(0.0f) * 400.0f);
        temp_a0_5 = *(D_8022AD04 + ((temp_s3 & 0xFFFF) * 0x8F0));
        if (temp_a0_5 < 4) {
            if ((D_80189CC8 == 3) && (M2C_FIELD(D_801C7AB0, u8 *, 1) == 6)) {
                var_a0_3 = temp_s3 & 0xFFFF;
                if (temp_a0_5 >= 2) {
                    goto block_59;
                }
            } else {
                goto block_85;
            }
        } else {
block_59:
            D_80167E60 += 1;
            temp_v1_9 = temp_s3 & 0xFFFF;
            *(D_80189C84 + temp_v1_9) = D_80167E61;
            temp_a0_6 = temp_s3 & 0xFFFF;
            if (*(D_8022AFE9 + (temp_v1_9 * 0x8F0)) == 5) {
                D_80167E62 += 1;
            }
            *(D_8018A264 + temp_a0_6) = 0;
            temp_a0_7 = (temp_a0_6 * 2) + ((((temp_fp & 0xFFFF) + 1) * 0x64) + D_8011F2F2);
            *temp_a0_7 &= 0xFFF7;
            if (D_800DD2C0 == 1) {
                *(D_8011F2FD + (D_8018BC30 * 0x64)) = 2;
            }
            *(D_8011F2FD + (sp16E * 0x64)) = 1;
            sp10 = (f32 *)0x80;
            sp14 = temp_s4 & 0xFF;
            sp18 = NULL;
            sp1C = &func_8012FFF0;
            sp20 = NULL;
            sp24 = 0;
            sp28 = 0;
            sp2C = 0;
            sp30 = 0;
            sp34 = 0;
            sp38 = 0;
            sp3C = 0;
            sp40 = 0;
            sp44 = 0;
            func_800DE41C(0, 0, 3, 0);
            if (D_80189CC8 != 3) {
                temp_a0_8 = temp_s3 & 0xFFFF;
                temp_a1 = temp_a0_8 * 0x8F0;
                if (*(D_8022AFE9 + temp_a1) != 5) {
                    *(D_8022AFE9 + temp_a1) = 1;
                    func_80232360(temp_a0_8, 0);
                }
                temp_s0_4 = temp_s3 & 0xFFFF;
                if (D_80189CC8 == 0) {
                    *(D_8011F2FC + (D_801E975A * 0x64)) = 0;
                }
                if (temp_s0_4 < 2U) {
                    sp10 = (f32 *)0x81;
                    sp14 = NULL;
                    sp18 = NULL;
                    sp1C = &func_80135544;
                    sp20 = NULL;
                    sp24 = 0;
                    sp28 = 0;
                    sp2C = 0;
                    sp30 = 0;
                    sp34 = 0;
                    sp38 = 0;
                    sp3C = 0;
                    sp40 = 0;
                    sp44 = 0;
                    func_800DE41C(0, temp_s3 & 0xFF, 3, 0);
                    if (*(D_8022AFE9 + (temp_s0_4 * 0x8F0)) != 5) {
                        func_801D65BC(0x10);
                        var_a0_3 = temp_s3 & 0xFFFF;
                    } else {
                        func_801D65BC(0x11);
                        var_a0_3 = temp_s3 & 0xFFFF;
                    }
                } else {
                    goto block_85;
                }
            } else {
                var_a0_4 = 0x11;
                if (*(D_8022AFE9 + ((temp_s3 & 0xFFFF) * 0x8F0)) != 5) {
                    var_a0_4 = 0x10;
                }
                func_801D65BC(var_a0_4);
                var_s0 = 0;
                if (D_800DD2C0 == D_80167E60) {
                    func_801D65BC(5);
                    var_s0 = 0;
                }
                temp_s1_2 = (temp_s3 & 0xFFFF) * 0x8F0;
                var_v1_3 = 0 & 0xFFFF;
                do {
                    temp_a0_9 = *(D_8022AD64 + ((var_v1_3 * 0x38) + temp_s1_2));
                    var_v0_2 = var_s0 & 0xFFFF;
                    if (temp_a0_9 != -1) {
                        func_801D663C(temp_a0_9);
                        var_v0_2 = var_s0 & 0xFFFF;
                    }
                    *(D_8022AD64 + ((var_v0_2 * 0x38) + temp_s1_2)) = -1;
                    var_s0 += 1;
                    var_v1_3 = var_s0 & 0xFFFF;
                } while ((u32) (var_s0 & 0xFFFF) < 4U);
                temp_a0_10 = (temp_s3 & 0xFFFF) * 0x8F0;
                if (*(D_8022AFE9 + temp_a0_10) != 5) {
                    *(D_8022AFE9 + temp_a0_10) = 4;
                }
                temp_s0_5 = ((temp_s3 & 0xFFFF) * 2) + D_8018A26E;
                *(D_8011F2FD + (*temp_s0_5 * 0x64)) = 2;
                sp10 = (f32 *)0x80;
                sp14 = NULL;
                sp18 = NULL;
                sp1C = &func_80135C64;
                sp20 = &func_80136A28;
                sp24 = 0;
                sp28 = 0;
                sp2C = 0;
                sp30 = 0;
                sp34 = 0;
                sp38 = 0;
                sp3C = 0;
                sp40 = 0;
                sp44 = 0;
                *temp_s0_5 = func_800DE41C(0, temp_s3 & 0xFF, 3, 0);
                if (D_80167E60 == D_800DD2C0) {
                    *(D_8011F2FD + (D_80190C90 * 0x64)) = 2;
                    *(D_8011F2FD + (D_80189C96 * 0x64)) = 2;
                    var_a0_3 = temp_s3 & 0xFFFF;
                    if (D_800DD2C0 == 1) {
                        *(D_8011F2FD + (D_8018BC30 * 0x64)) = 2;
                        goto block_85;
                    }
                } else {
block_85:
                    var_a0_3 = temp_s3 & 0xFFFF;
                }
            }
        }
        temp_v1_10 = var_a0_3 * 0x70;
        if (*(D_801E99C4 + temp_v1_10) != 0) {
            temp_a0_11 = temp_s3 & 0xFFFF;
            temp_v0_16 = *(D_801E9998 + (temp_a0_11 * 0x70));
            if (((temp_v0_16 == 1) | (temp_v0_16 >= 0xBU)) != 0) {
                temp_v0_17 = (temp_a0_11 * 4) + D_80183B08;
                *temp_v0_17 -= 1.0f;
            }
            temp_a0_12 = temp_s3 & 0xFFFF;
            temp_v0_18 = *(D_801E999C + (temp_a0_12 * 0x70));
            if (((temp_v0_18 == 1) | (temp_v0_18 >= 0xBU)) != 0) {
                temp_v0_19 = (temp_a0_12 * 4) + D_80183B08;
                *temp_v0_19 += 1.0f;
            }
            var_v1_4 = temp_s3 & 0xFFFF;
        } else {
            if (*(D_801E9998 + temp_v1_10) == 1) {
                if ((u8) *(D_80183AF0 + var_a0_3) < 0xDU) {
                    *(D_80183AF0 + var_a0_3) = *(D_80183AF0 + var_a0_3) + 1;
                    var_s0_2 = temp_fp & 0xFFFF;
                } else {
                    *(D_80183AF0 + (temp_s3 & 0xFFFF)) = 0;
                    var_s0_2 = temp_fp & 0xFFFF;
                }
                temp_a0_13 = var_s0_2 * 0x64;
                temp_s1_3 = temp_s3 & 0xFFFF;
                M2C_FIELD(*(D_8011F340 + (*(D_8011F304 + temp_a0_13) * 0x64)), void **, 4) = (void *) ((*(D_80183AF0 + temp_s1_3) * 0xC) + D_80237D18);
                func_800DF1E0(*(D_8011F304 + temp_a0_13), (temp_s1_3 * 0x8F0) + D_8022A980);
                temp_a0_14 = (var_s0_2 + 5) * 0x64;
                *(D_8011F308 + temp_a0_14) = *(D_80237FC8 + (*((*(D_80183AF4 + temp_s1_3) * 0x10) + D_802387D8 + *(D_80183AF0 + temp_s1_3)) * 0x10));
                *(D_8011F30C + temp_a0_14) = *(D_80237FCC + (*((*(D_80183AF4 + temp_s1_3) * 0x10) + D_802387D8 + *(D_80183AF0 + temp_s1_3)) * 0x10));
                *(D_8011F310 + temp_a0_14) = *(D_80237FD0 + (*((*(D_80183AF4 + temp_s1_3) * 0x10) + D_802387D8 + *(D_80183AF0 + temp_s1_3)) * 0x10));
                *(D_8011F314 + temp_a0_14) = *(D_80237FD4 + (*((*(D_80183AF4 + temp_s1_3) * 0x10) + D_802387D8 + *(D_80183AF0 + temp_s1_3)) * 0x10));
            }
            temp_a0_15 = temp_s3 & 0xFFFF;
            if (*(D_801E999C + (temp_a0_15 * 0x70)) == 1) {
                if ((u8) *(D_80183AF8 + temp_a0_15) < 9U) {
                    *(D_80183AF8 + temp_a0_15) = *(D_80183AF8 + temp_a0_15) + 1;
                    var_v1_5 = temp_fp & 0xFFFF;
                } else {
                    *(D_80183AF8 + (temp_s3 & 0xFFFF)) = 0;
                    var_v1_5 = temp_fp & 0xFFFF;
                }
                temp_v1_11 = temp_s3 & 0xFFFF;
                func_8012AD20(*(D_8011F304 + (var_v1_5 * 0x64)), (temp_v1_11 * 0x8F0) + D_8022A980, *(D_80183AF0 + temp_v1_11), *(D_80183AF8 + temp_v1_11));
            }
            temp_a0_16 = temp_s3 & 0xFFFF;
            var_v1_4 = temp_s3 & 0xFFFF;
            if (*(D_801E999C + (temp_a0_16 * 0x70)) == 1) {
                if ((u8) *(D_80183AF4 + temp_a0_16) < 0x2EU) {
                    *(D_80183AF4 + temp_a0_16) = *(D_80183AF4 + temp_a0_16) + 1;
                    var_v0_3 = temp_fp & 0xFFFF;
                } else {
                    *(D_80183AF4 + var_v1_4) = 3;
                    var_v0_3 = temp_fp & 0xFFFF;
                }
                temp_a0_17 = (var_v0_3 + 5) * 0x64;
                temp_a1_2 = temp_s3 & 0xFFFF;
                M2C_FIELD(*(D_8011F340 + temp_a0_17), void **, 4) = (void *) ((*(D_80183AF4 + temp_a1_2) * 0xC) + D_80237740);
                *(D_8011F308 + temp_a0_17) = *(D_80237FC8 + (*((*(D_80183AF4 + temp_a1_2) * 0x10) + D_802387D8 + *(D_80183AF0 + temp_a1_2)) * 0x10));
                *(D_8011F30C + temp_a0_17) = *(D_80237FCC + (*((*(D_80183AF4 + temp_a1_2) * 0x10) + D_802387D8 + *(D_80183AF0 + temp_a1_2)) * 0x10));
                *(D_8011F310 + temp_a0_17) = *(D_80237FD0 + (*((*(D_80183AF4 + temp_a1_2) * 0x10) + D_802387D8 + *(D_80183AF0 + temp_a1_2)) * 0x10));
                *(D_8011F314 + temp_a0_17) = *(D_80237FD4 + (*((*(D_80183AF4 + temp_a1_2) * 0x10) + D_802387D8 + *(D_80183AF0 + temp_a1_2)) * 0x10));
                var_v1_4 = temp_s3 & 0xFFFF;
            }
        }
        var_v1_6 = temp_s3 & 0xFFFF;
        if (*(D_801E99B0 + (var_v1_4 * 0x70)) == 1) {
            func_8021F6A0(1);
            var_v1_6 = temp_s3 & 0xFFFF;
        }
        var_v1_7 = temp_s3 & 0xFFFF;
        if (*(D_801E99B8 + (var_v1_6 * 0x70)) == 1) {
            func_8021F6A0(2);
            var_v1_7 = temp_s3 & 0xFFFF;
        }
        var_v1_8 = temp_s3 & 0xFFFF;
        if (*(D_801E99BC + (var_v1_7 * 0x70)) == 1) {
            func_8021F6A0(3);
            var_v1_8 = temp_s3 & 0xFFFF;
        }
        if (*(D_801E99B4 + (var_v1_8 * 0x70)) == 1) {
            func_8021F6A0(4);
        }
        return;
    }
    D_80183B00 = 8.0f;
    D_80183B04 = 10.0f;
    temp_v0_20 = (temp_s3 & 0xFFFF) * 4;
    *(D_80183B08 + temp_v0_20) = 16.0f;
    *(D_80183B18 + temp_v0_20) = 47.0f;
    *(D_80183B28 + temp_v0_20) = 180.0f;
    *(D_80183B38 + temp_v0_20) = 9.0f;
    var_s0_3 = 0;
    var_v0_4 = 0 & 0xFFFF;
    do {
        *(D_80183AF0 + var_v0_4) = var_s0_3;
        *(D_80183AF4 + var_v0_4) = 3;
        *(D_80183AF8 + var_v0_4) = 0;
        var_s0_3 += 1;
        var_v0_4 = var_s0_3 & 0xFFFF;
    } while ((u32) (var_s0_3 & 0xFFFF) < 4U);
    *(D_8011F32E + (sp16E * 0x64)) = 1;
}
