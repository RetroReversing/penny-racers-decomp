/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
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

f32 __cosf(f32);                                    /* extern */
f32 __sinf();                     /* extern */
u16 objCreate(M2C_UNK, s32, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_80129C88(void *, M2C_UNK, s32);        /* extern */
M2C_UNK racerUpdateTrackWindow(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_801D65BC(M2C_UNK);                     /* extern */
M2C_UNK stopStageSound(s16);                         /* extern */
M2C_UNK func_80232360(s32, M2C_UNK);                /* extern */
M2C_UNK guMtxCatF(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK guMtxXFMF(M2C_UNK *, f32, f32, f32 *);      /* extern */
M2C_UNK guRotateF(M2C_UNK *, f32, f32 *, f32 *);    /* extern */
f32 sqrtf(f32);                                     /* extern */
extern M2C_UNK D_8006FAF0;
extern M2C_UNK sRowBoard;
extern M2C_UNK D_8011F2F2;
extern M2C_UNK D_8011F2FC;
extern M2C_UNK D_8011F2FD;
extern M2C_UNK D_8011F304;
extern M2C_UNK D_8011F308;
extern M2C_UNK D_8011F30C;
extern M2C_UNK D_8011F310;
extern M2C_UNK D_8011F314;
extern M2C_UNK D_8011F318;
extern M2C_UNK D_8011F31C;
extern M2C_UNK playerSlots;
extern u16 D_80167E60;
extern u8 D_80167E61;
extern u16 D_80167E62;
extern M2C_UNK D_80167E68;
extern M2C_UNK D_80167E74;
extern M2C_UNK D_80167E80;
extern M2C_UNK D_80167E8C;
extern M2C_UNK D_80167E98;
extern f32 D_80183A88;
extern M2C_UNK D_80183A90;
extern M2C_UNK D_80183AA0;
extern M2C_UNK D_80183AB0;
extern M2C_UNK D_80183AC0;
extern M2C_UNK D_80183AD0;
extern M2C_UNK D_80183AE0;
extern M2C_UNK D_80189B30;
extern M2C_UNK D_80189C84;
extern u16 D_80189C96[];
extern u8 D_80189CC8;
extern M2C_UNK D_8018A264;
extern M2C_UNK D_8018A26E;
extern M2C_UNK D_8018B520;
extern u16 D_8018BC30;
extern u8 D_8018BC33;
extern u16 D_80190C90;
extern void *trackInfo;
extern u16 D_801E975A;
extern M2C_UNK D_801E99A0;
extern M2C_UNK D_801E99A4;
extern M2C_UNK D_801E99A8;
extern M2C_UNK D_80221080;
extern M2C_UNK D_80221084;
extern M2C_UNK D_80221088;
extern M2C_UNK D_8022108C;
extern M2C_UNK D_80221090;
extern M2C_UNK D_80221094;
extern M2C_UNK D_80221098;
extern M2C_UNK D_8022109C;
extern M2C_UNK D_802210A0;
extern M2C_UNK D_8022A772;
extern M2C_UNK D_8022AD04;
extern M2C_UNK D_8022AD64;
extern M2C_UNK D_8022AF3C;
extern M2C_UNK D_8022AFE0;
extern M2C_UNK D_8022AFE9;
extern M2C_UNK D_8022B011;
extern M2C_UNK func_8012FFF0;
extern M2C_UNK func_80135544;
extern M2C_UNK func_80135C64;
extern M2C_UNK func_80136A28;

void func_8012C4F4(u16 arg0) {
    f32 *sp10;
    f32 *sp14;                                      /* compiler-managed */
    f32 **sp18;
    M2C_UNK *sp1C;
    M2C_UNK *sp20;
    s32 sp24;
    s32 sp28;
    s32 sp2C;
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s32 sp40;
    s32 sp44;
    M2C_UNK sp48;
    M2C_UNK sp88;
    M2C_UNK spC8;
    M2C_UNK sp108;
    f32 sp158;
    f32 sp15C;
    f32 *sp160;
    f32 sp164;
    f32 sp168;
    f32 *sp16C;
    f32 sp170;
    f32 sp174;
    f32 *sp178;
    f32 sp17C;
    f32 sp180;
    f32 *sp184;
    u16 sp18E;
    f32 sp194;
    u16 sp19E;
    u16 sp1A6;
    M2C_UNK *var_a0;
    M2C_UNK *var_s0;
    M2C_UNK var_a0_2;
    f32 *temp_a1_3;
    f32 *temp_a1_4;
    f32 *temp_s0_2;
    f32 *temp_s0_4;
    f32 *temp_s0_5;
    f32 *temp_s1_2;
    f32 *temp_s1_4;
    f32 *temp_s1_5;
    f32 *temp_v1_8;
    f32 *temp_v1_9;
    f32 temp_fa0;
    f32 temp_fa0_2;
    f32 temp_fa0_3;
    f32 temp_fa0_4;
    f32 temp_fa0_5;
    f32 temp_fs0;
    f32 temp_fs0_10;
    f32 temp_fs0_11;
    f32 temp_fs0_12;
    f32 temp_fs0_13;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
    f32 temp_fs0_4;
    f32 temp_fs0_5;
    f32 temp_fs0_6;
    f32 temp_fs0_7;
    f32 temp_fs0_8;
    f32 temp_fs0_9;
    f32 temp_fs1;
    f32 temp_fs1_2;
    f32 temp_fs1_3;
    f32 temp_fs1_4;
    f32 temp_fs1_5;
    f32 temp_fs2;
    f32 temp_fs2_2;
    f32 temp_fs2_3;
    f32 temp_fs3;
    f32 temp_fs3_2;
    f32 temp_fs3_3;
    f32 temp_fs3_4;
    f32 temp_fs3_5;
    f32 temp_fs3_6;
    f32 temp_fs4;
    f32 temp_fs4_2;
    f32 temp_fs4_3;
    f32 temp_fs5;
    f32 temp_fs5_2;
    f32 temp_fs5_3;
    f32 temp_fs5_4;
    f32 temp_fs5_5;
    f32 temp_fs5_6;
    f32 temp_ft0;
    f32 temp_fv0;
    f32 temp_fv0_10;
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
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1_4;
    f32 temp_fv1_5;
    f32 temp_fv1_6;
    f32 temp_fv1_7;
    f32 temp_fv1_8;
    f32 temp_fv1_9;
    f32 temp_s4;
    f32 temp_s4_2;
    f32 var_a1;
    f32 var_a2;
    f32 var_a3;
    f32 var_fp;
    f32 var_fs0;
    f32 var_fs1;
    f32 var_fs2;
    f32 var_ft0;
    f32 var_ft0_2;
    f32 var_fv1;
    f32 var_s4;
    f32 var_s7;
    s16 temp_a0_11;
    s16 temp_a0_7;
    s16 var_v1_3;
    s16 var_v1_4;
    s32 temp_a0;
    s32 temp_a0_10;
    s32 temp_a0_12;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_8;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a1_5;
    s32 temp_a1_6;
    s32 temp_a2;
    s32 temp_s0;
    s32 temp_s0_3;
    s32 temp_s1;
    s32 temp_s1_3;
    s32 temp_s1_6;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_s3;
    s32 temp_s5;
    s32 temp_v0;
    s32 temp_v0_10;
    s32 temp_v0_11;
    s32 temp_v0_12;
    s32 temp_v0_13;
    s32 temp_v0_15;
    s32 temp_v0_17;
    s32 temp_v0_18;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v0_8;
    s32 temp_v0_9;
    s32 temp_v1;
    s32 temp_v1_10;
    s32 temp_v1_16;
    s32 temp_v1_17;
    s32 temp_v1_7;
    s32 var_s0_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_5;
    s8 temp_v0_14;
    s8 temp_v0_16;
    u16 *temp_a0_9;
    u16 *temp_s0_7;
    u16 *temp_v1_12;
    u16 *temp_v1_13;
    u16 *temp_v1_14;
    u16 *temp_v1_15;
    u16 *temp_v1_2;
    u16 *temp_v1_3;
    u16 temp_v1_4;
    u32 temp_s0_6;
    u8 temp_s6;
    u8 temp_v1_5;
    void *temp_v1_11;
    void *temp_v1_6;

    sp18E = arg0;
    temp_v1 = sp18E * 0x64;
    sp1A6 = *(&playerSlots + temp_v1);
    temp_s6 = *(&D_8011F2FC + temp_v1);
    temp_s5 = (temp_s6 & 0xFFFF) / 3;
    temp_a0 = temp_s5 & 0xFFFF;
    sp19E = *(&D_8022A772 + (temp_a0 * 0x8F0));
    temp_a1 = temp_s5 & 0xFFFF;
    if (*(&playerSlots + temp_v1) != 0) {
        temp_v0 = sp19E * 0x64;
        var_fp = *(&D_8011F308 + temp_v0);
        var_s4 = *(&D_8011F30C + temp_v0) + *(&D_80183AE0 + (temp_a0 * 4));
        var_s7 = *(&D_8011F310 + temp_v0);
        sp194 = *(&D_8011F318 + temp_v0);
    }
    if ((*(&D_8022AFE0 + (temp_a1 * 0x8F0)) == 1) && (*(&D_8018B520 + temp_a1) == 0)) {
        *(&D_80189B30 + temp_a1) = 1;
        temp_v1_2 = (temp_a1 * 2) + (((sp19E + 1) * 0x64) + &D_8011F2F2);
        *temp_v1_2 &= 0xFFF7;
        *(&playerSlots + (sp18E * 0x64)) = 1;
    }
    temp_a1_2 = temp_s5 & 0xFFFF;
    temp_v0_2 = temp_a1_2 * 4;
    if (*(&D_8022AFE0 + (temp_a1_2 * 0x8F0)) == 0x78) {
        *(&D_80183A90 + temp_v0_2) = 1.0f;
        *(&D_80183AA0 + temp_v0_2) = 1.0f;
        if (*(&D_8018B520 + temp_a1_2) == 0) {
            temp_v1_3 = (temp_a1_2 * 2) + (((sp19E + 1) * 0x64) + &D_8011F2F2);
            *temp_v1_3 |= 8;
            *(&D_80189B30 + temp_a1_2) = 0;
            *(&playerSlots + (sp18E * 0x64)) = 2;
        }
    }
    temp_v1_4 = *(&playerSlots + (sp18E * 0x64));
    if (temp_v1_4 != 1) {
        if ((s32) temp_v1_4 >= 2) {
            if (temp_v1_4 != 2) {

            } else {
                temp_v0_3 = (temp_s6 & 0xFFFF) * 0x24;
                *(&D_80221080 + temp_v0_3) = var_fp;
                *(&D_80221084 + temp_v0_3) = var_s4;
                *(&D_80221088 + temp_v0_3) = var_s7;
                temp_s0 = (temp_s5 & 0xFFFF) * 0x8F0;
                temp_v0_4 = *(&D_8022A772 + temp_s0) * 0x64;
                temp_fs0 = *(&D_8011F318 + temp_v0_4);
                temp_fs1 = *(&D_8011F31C + temp_v0_4);
                sp10 = NULL;
                guRotateF(&sp88, *(&D_8011F314 + temp_v0_4), (f32 *)0x3F800000, sp10);
                sp10 = NULL;
                guRotateF(&sp48, temp_fs0, sp10, (f32 *)0x3F800000);
                sp10 = (f32 *)0x3F800000;
                guRotateF(&spC8, temp_fs1, NULL, NULL);
                guMtxCatF(&sp48, &sp88, &sp108);
                guMtxCatF(&sp108, &spC8, &sp108);
                sp10 = &sp158;
                sp14 = &sp15C;
                sp18 = &sp160;
                guMtxXFMF(&sp108, 0.0f, 0.0f, (f32 *)0x42C80000);
                sp10 = &sp164;
                sp14 = &sp168;
                sp18 = &sp16C;
                guMtxXFMF(&sp108, 0.0f, 1.0f, NULL);
                temp_v1_5 = *(&D_8022B011 + temp_s0);
                if (temp_v1_5 != 2) {
                    if ((s32) temp_v1_5 >= 3) {
                        var_v1 = temp_s5 & 0xFFFF;
                        if ((s32) temp_v1_5 < 5) {
                            goto block_46;
                        }
                        goto block_49;
                    }
                    var_v1 = temp_s5 & 0xFFFF;
                    if (temp_v1_5 != 0) {
                        var_v1_2 = temp_s6 & 0xFFFF;
                    } else {
block_46:
                        temp_fs0_2 = *(&D_8011F31C + (*(&D_8011F304 + (*(&D_8022A772 + (var_v1 * 0x8F0)) * 0x64)) * 0x64));
                        sp10 = &sp170;
                        sp14 = &sp174;
                        sp18 = &sp178;
                        guMtxXFMF(&sp108, 0.0f, 0.0f, (f32 *)0x3F800000);
                        var_s0 = &spC8;
                        sp10 = sp178;
                        var_a1 = temp_fs0_2;
                        var_a2 = sp170;
                        var_a3 = sp174;
                        var_a0 = var_s0;
                        goto block_48;
                    }
                } else {
                    temp_fs0_3 = *(&D_8011F314 + (*(&D_8011F304 + (*(&D_8022A772 + ((temp_s5 & 0xFFFF) * 0x8F0)) * 0x64)) * 0x64));
                    sp10 = &sp17C;
                    sp14 = &sp180;
                    sp18 = &sp184;
                    guMtxXFMF(&sp108, 1.0f, 0.0f, NULL);
                    var_s0 = &sp88;
                    sp10 = sp184;
                    var_a0 = var_s0;
                    var_a1 = temp_fs0_3;
                    var_a2 = sp17C;
                    var_a3 = sp180;
block_48:
                    guRotateF(var_a0, var_a1, M2C_PTR_FROM_F32(f32 *, var_a2), M2C_PTR_FROM_F32(f32 *, var_a3));
                    sp10 = &sp158;
                    sp14 = &sp15C;
                    sp18 = &sp160;
                    guMtxXFMF(var_s0, sp158, sp15C, sp160);
                    sp10 = &sp164;
                    sp14 = &sp168;
                    sp18 = &sp16C;
                    guMtxXFMF(var_s0, sp164, sp168, sp16C);
block_49:
                    var_v1_2 = temp_s6 & 0xFFFF;
                }
                temp_a0_2 = var_v1_2 * 0x24;
                *(&D_8022108C + temp_a0_2) = var_fp + sp158;
                *(&D_80221090 + temp_a0_2) = var_s4 + sp15C;
                *(&D_80221094 + temp_a0_2) = var_s7 + M2C_BITS_F32(sp160);
                temp_v0_5 = (var_v1_2 - 1) * 0x24;
                temp_v1_6 = temp_v0_5 + &D_80221080;
                M2C_FIELD(temp_v1_6, f32 *, 0x18) = sp164;
                *(&D_80221098 + temp_a0_2) = sp164;
                M2C_FIELD(temp_v1_6, f32 *, 0x1C) = sp168;
                *(&D_8022109C + temp_a0_2) = sp168;
                M2C_FIELD(temp_v1_6, f32 **, 0x20) = sp16C;
                *(&D_802210A0 + temp_a0_2) = sp16C;
                *(&D_8022108C + temp_v0_5) = sp158;
                *(&D_80221090 + temp_v0_5) = sp15C;
                *(&D_80221094 + temp_v0_5) = sp160;
            }
        } else {
            temp_v1_7 = temp_s5 & 0xFFFF;
            if (temp_v1_4 != 0) {

            } else {
                *(&D_80189B30 + temp_v1_7) = 1;
                *(&D_8018B520 + temp_v1_7) = 1;
                temp_a0_3 = temp_v1_7 * 4;
                *(&D_80183A90 + temp_a0_3) = *(&D_80167E8C + (*(&D_80189B30 + temp_v1_7) * 4));
                *(&D_80183AA0 + temp_a0_3) = *(&D_80167E98 + (*(&D_80189B30 + temp_v1_7) * 4));
                *(&D_80183AE0 + temp_a0_3) = *(&D_80167E80 + (*(&D_80189B30 + temp_v1_7) * 4));
                *(&D_80183AB0 + temp_a0_3) = *(&D_80167E68 + (*(&D_80189B30 + temp_v1_7) * 4));
                *(&D_80183AC0 + temp_a0_3) = 180.0f;
                *(&D_80183AD0 + temp_a0_3) = *(&D_80167E74 + (*(&D_80189B30 + temp_v1_7) * 4));
                temp_v0_6 = ((temp_s6 & 0xFFFF) - 1) * 0x24;
                *(&D_80221080 + temp_v0_6) = 0;
                *(&D_80221084 + temp_v0_6) = 0;
                *(&D_80221088 + temp_v0_6) = 0;
                *(&playerSlots + (sp18E * 0x64)) = 1;
            }
        }
    } else {
        temp_a0_4 = temp_s5 & 0xFFFF;
        temp_v1_8 = (temp_a0_4 * 4) + &D_80183A90;
        temp_fv1 = *temp_v1_8;
        if (temp_fv1 < *(&D_80167E8C + (*(&D_80189B30 + temp_a0_4) * 4))) {
            *temp_v1_8 = temp_fv1 + 0.1f;
        }
        temp_v1_9 = (temp_a0_4 * 4) + &D_80183AA0;
        temp_fv1_2 = *temp_v1_9;
        temp_s2 = temp_s5 & 0xFFFF;
        if (temp_fv1_2 < *(&D_80167E98 + (*(&D_80189B30 + temp_a0_4) * 4))) {
            *temp_v1_9 = temp_fv1_2 + 0.1f;
        }
        temp_s1 = temp_s2 * 4;
        temp_fa0 = sp194 + *(&D_80183AC0 + temp_s1);
        D_80183A88 = temp_fa0;
        temp_s0_2 = temp_s1 + &D_80183AB0;
        temp_fs5 = __sinf((temp_fa0 * 3.14f) / 180.0f, temp_a0_4, temp_a1_2) * *temp_s0_2;
        temp_fs0_4 = __sinf((D_80183A88 * 3.14f) / 180.0f);
        temp_s1_2 = temp_s1 + &D_80183AD0;
        temp_fs5_2 = (temp_fs5 - (temp_fs0_4 * __sinf((*temp_s1_2 * 3.14f) / 180.0f) * *temp_s0_2)) + var_fp;
        temp_fs4 = (__sinf((*temp_s1_2 * 3.14f) / 180.0f) * *temp_s0_2) + var_s4;
        temp_fs3 = __cosf((D_80183A88 * 3.14f) / 180.0f) * *temp_s0_2;
        temp_fs0_5 = __cosf((D_80183A88 * 3.14f) / 180.0f);
        temp_fs3_2 = (temp_fs3 - (temp_fs0_5 * __sinf((*temp_s1_2 * 3.14f) / 180.0f) * *temp_s0_2)) + var_s7;
        if (*(&D_8022AFE0 + (temp_s2 * 0x8F0)) == 0) {
            temp_v0_7 = (temp_s6 & 0xFFFF) * 0x24;
            temp_ft0 = var_fp - *(&D_80221080 + temp_v0_7);
            temp_fv0 = var_s4 - *(&D_80221084 + temp_v0_7);
            temp_fv1_3 = var_s7 - *(&D_80221088 + temp_v0_7);
            temp_fv0_2 = sqrtf((temp_ft0 * temp_ft0) + (temp_fv0 * temp_fv0) + (temp_fv1_3 * temp_fv1_3));
            temp_fs0_6 = var_fp - temp_fs5_2;
            temp_fs1_2 = var_s4 - temp_fs4;
            temp_fs2 = var_s7 - temp_fs3_2;
            temp_fv0_3 = sqrtf((temp_fs0_6 * temp_fs0_6) + (temp_fs1_2 * temp_fs1_2) + (temp_fs2 * temp_fs2));
            if (temp_fv0_2 < temp_fv0_3) {
                temp_fv1_4 = (temp_fv0_2 - temp_fv0_3) / temp_fv0_3;
                temp_v0_8 = (temp_s6 & 0xFFFF) * 0x24;
                *(&D_80221080 + temp_v0_8) = (temp_fs0_6 * temp_fv1_4) + *(&D_80221080 + temp_v0_8);
                *(&D_80221084 + temp_v0_8) = (temp_fs1_2 * temp_fv1_4) + *(&D_80221084 + temp_v0_8);
                *(&D_80221088 + temp_v0_8) = (temp_fs2 * temp_fv1_4) + *(&D_80221088 + temp_v0_8);
            }
            temp_v0_9 = (temp_s6 & 0xFFFF) * 0x24;
            temp_fs0_7 = temp_fs5_2 - *(&D_80221080 + temp_v0_9);
            temp_fs1_3 = temp_fs4 - *(&D_80221084 + temp_v0_9);
            temp_fs2_2 = temp_fs3_2 - *(&D_80221088 + temp_v0_9);
            temp_fa0_2 = (temp_fs0_7 * temp_fs0_7) + (temp_fs1_3 * temp_fs1_3) + (temp_fs2_2 * temp_fs2_2);
            temp_fv0_4 = sqrtf(temp_fa0_2);
            var_ft0 = temp_fv0_4;
            if (temp_fv0_4 != temp_fv0_4) {
                var_ft0 = sqrtf(temp_fa0_2);
            }
            temp_fv0_5 = *(&D_80183A90 + ((temp_s5 & 0xFFFF) * 4));
            if (temp_fv0_5 < var_ft0) {
                temp_fv1_5 = (var_ft0 - temp_fv0_5) / var_ft0;
                var_fs0 = temp_fs0_7 * temp_fv1_5;
                var_fs1 = temp_fs1_3 * temp_fv1_5;
                var_fs2 = temp_fs2_2 * temp_fv1_5;
                goto block_30;
            }
            temp_v1_10 = temp_s5 & 0xFFFF;
            if (var_ft0 > 1.0f) {
                temp_fv1_6 = ((var_ft0 - *(&D_80183A90 + (temp_v1_10 * 4))) * 0.001f) / var_ft0;
                var_fs0 = temp_fs0_7 * temp_fv1_6;
                var_fs1 = temp_fs1_3 * temp_fv1_6;
                var_fs2 = temp_fs2_2 * temp_fv1_6;
                if (*(&D_8022AFE0 + (temp_v1_10 * 0x8F0)) == 0) {
block_30:
                    temp_v0_10 = (temp_s6 & 0xFFFF) * 0x24;
                    *(&D_80221080 + temp_v0_10) = var_fs0 + *(&D_80221080 + temp_v0_10);
                    *(&D_80221084 + temp_v0_10) = var_fs1 + *(&D_80221084 + temp_v0_10);
                    *(&D_80221088 + temp_v0_10) = var_fs2 + *(&D_80221088 + temp_v0_10);
                }
            }
        }
        temp_v0_11 = (temp_s6 & 0xFFFF) * 0x24;
        temp_fs0_8 = var_fp - *(&D_8022108C + temp_v0_11);
        temp_fs1_4 = var_s4 - *(&D_80221090 + temp_v0_11);
        temp_fs2_3 = var_s7 - *(&D_80221094 + temp_v0_11);
        temp_fa0_3 = (temp_fs0_8 * temp_fs0_8) + (temp_fs1_4 * temp_fs1_4) + (temp_fs2_3 * temp_fs2_3);
        temp_fv0_6 = sqrtf(temp_fa0_3);
        var_ft0_2 = temp_fv0_6;
        if (temp_fv0_6 != temp_fv0_6) {
            var_ft0_2 = sqrtf(temp_fa0_3);
        }
        temp_fv0_7 = *(&D_80183AA0 + ((temp_s5 & 0xFFFF) * 4));
        if (temp_fv0_7 < var_ft0_2) {
            var_fv1 = var_ft0_2 - temp_fv0_7;
            goto block_37;
        }
        if (var_ft0_2 > 1.0f) {
            var_fv1 = (var_ft0_2 - *(&D_80183AA0 + ((temp_s5 & 0xFFFF) * 4))) * 0.001f;
block_37:
            temp_fv1_7 = var_fv1 / var_ft0_2;
            temp_v0_12 = (temp_s6 & 0xFFFF) * 0x24;
            *(&D_8022108C + temp_v0_12) = (temp_fs0_8 * temp_fv1_7) + *(&D_8022108C + temp_v0_12);
            *(&D_80221090 + temp_v0_12) = (temp_fs1_4 * temp_fv1_7) + *(&D_80221090 + temp_v0_12);
            *(&D_80221094 + temp_v0_12) = (temp_fs2_3 * temp_fv1_7) + *(&D_80221094 + temp_v0_12);
        }
        temp_s0_3 = sp19E * 0x64;
        sp10 = NULL;
        guRotateF(&sp48, *(&D_8011F318 + temp_s0_3), sp10, (f32 *)0x3F800000);
        sp10 = &sp158;
        sp14 = &sp15C;
        sp18 = &sp160;
        guMtxXFMF(&sp48, 0.0f, 0.0f, (f32 *)0x43C80000);
        temp_s3 = temp_s6 & 0xFFFF;
        temp_s1_3 = (temp_s3 - 1) * 0x24;
        *(&D_8022108C + temp_s1_3) = sp158;
        *(&D_80221090 + temp_s1_3) = sp15C;
        *(&D_80221094 + temp_s1_3) = sp160;
        temp_fs0_9 = *(&D_8011F318 + temp_s0_3);
        temp_fs1_5 = *(&D_8011F31C + temp_s0_3);
        sp10 = NULL;
        guRotateF(&sp88, *(&D_8011F314 + temp_s0_3), (f32 *)0x3F800000, sp10);
        sp10 = NULL;
        guRotateF(&sp48, temp_fs0_9, sp10, (f32 *)0x3F800000);
        sp10 = (f32 *)0x3F800000;
        guRotateF(&spC8, temp_fs1_5, NULL, NULL);
        guMtxCatF(&sp48, &sp88, &sp108);
        guMtxCatF(&sp108, &spC8, &sp108);
        sp10 = &sp164;
        sp14 = &sp168;
        sp18 = &sp16C;
        guMtxXFMF(&sp108, 0.0f, 1.0f, NULL);
        temp_v0_13 = temp_s3 * 0x24;
        temp_v1_11 = temp_v0_13 + &D_80221080;
        temp_fv1_8 = *(&D_80221098 + temp_v0_13);
        temp_fv0_8 = ((sp164 - temp_fv1_8) * 0.05f) + temp_fv1_8;
        M2C_FIELD(temp_v1_11, f32 *, 0x18) = temp_fv0_8;
        *(&D_80221098 + temp_s1_3) = temp_fv0_8;
        temp_fv1_9 = *(&D_8022109C + temp_v0_13);
        temp_fv0_9 = ((sp168 - temp_fv1_9) * 0.05f) + temp_fv1_9;
        M2C_FIELD(temp_v1_11, f32 *, 0x1C) = temp_fv0_9;
        *(&D_80221098 + temp_s1_3) = temp_fv0_9;
        temp_fv1_10 = *(&D_802210A0 + temp_v0_13);
        temp_fv0_10 = ((M2C_BITS_F32(sp16C) - temp_fv1_10) * 0.05f) + temp_fv1_10;
        M2C_FIELD(temp_v1_11, f32 *, 0x20) = temp_fv0_10;
        *(&D_80221098 + temp_s1_3) = temp_fv0_10;
    }
    var_v0 = temp_s5 & 0xFFFF;
    if ((M2C_FIELD(&D_8006FAF0, u16 *, 0x20) == 0) && (var_v0 = temp_s5 & 0xFFFF, (M2C_FIELD(trackInfo, u8 *, 1) == 6))) {
        racerUpdateTrackWindow((var_v0 * 0x8F0) + &D_8022AF3C, 4, temp_s5 & 0xFF);
    } else {
        func_80129C88((var_v0 * 0x8F0) + &D_8022AF3C, 4, temp_s5 & 0xFF);
    }
    temp_s2_2 = temp_s5 & 0xFFFF;
    if (sp1A6 != 0) {
        if (*(&D_8022AFE0 + (temp_s2_2 * 0x8F0)) == 0) {
            if (*(&D_801E99A0 + (temp_s2_2 * 0x70)) == 1) {
                temp_a0_5 = temp_s2_2 * 4;
                if ((*(&D_80189B30 + temp_s2_2) == 0) || (temp_v0_14 = *(&D_80189B30 + temp_s2_2) - 1, *(&D_80189B30 + temp_s2_2) = temp_v0_14, *(&D_8018B520 + temp_s2_2) = temp_v0_14, temp_a1_3 = temp_a0_5 + &D_80183AE0, *temp_a1_3 = *(&D_80167E80 + (*(&D_80189B30 + temp_s2_2) * 4)), temp_s0_4 = temp_a0_5 + &D_80183AB0, *temp_s0_4 = *(&D_80167E68 + (*(&D_80189B30 + temp_s2_2) * 4)), temp_s1_4 = temp_a0_5 + &D_80183AD0, *temp_s1_4 = *(&D_80167E74 + (*(&D_80189B30 + temp_s2_2) * 4)), *(&D_80183A90 + temp_a0_5) = 1.0f, *(&D_80183AA0 + temp_a0_5) = 1.0f, temp_s4 = *(&D_8011F30C + (sp19E * 0x64)) + *temp_a1_3, temp_fa0_4 = sp194 + *(&D_80183AC0 + temp_a0_5), D_80183A88 = temp_fa0_4, temp_fs5_3 = __sinf((temp_fa0_4 * 3.14f) / 180.0f, temp_a0_5, (s32) temp_a1_3) * *temp_s0_4, temp_fs0_10 = __sinf((D_80183A88 * 3.14f) / 180.0f), temp_fs5_4 = (temp_fs5_3 - (temp_fs0_10 * __sinf((*temp_s1_4 * 3.14f) / 180.0f) * *temp_s0_4)) + var_fp, temp_fs4_2 = (__sinf((*temp_s1_4 * 3.14f) / 180.0f) * *temp_s0_4) + temp_s4, temp_fs3_3 = __cosf((D_80183A88 * 3.14f) / 180.0f) * *temp_s0_4, temp_fs0_11 = __cosf((D_80183A88 * 3.14f) / 180.0f), temp_fs3_4 = (temp_fs3_3 - (temp_fs0_11 * __sinf((*temp_s1_4 * 3.14f) / 180.0f) * *temp_s0_4)) + var_s7, temp_v0_15 = (temp_s6 & 0xFFFF) * 0x24, *(&D_80221080 + temp_v0_15) = temp_fs5_4, *(&D_80221084 + temp_v0_15) = temp_fs4_2, *(&D_80221088 + temp_v0_15) = temp_fs3_4, *(&D_8022108C + temp_v0_15) = var_fp, *(&D_80221090 + temp_v0_15) = temp_s4, *(&D_80221094 + temp_v0_15) = var_s7, (*(&D_80189B30 + temp_s2_2) == 0))) {
                    temp_v1_12 = ((temp_s5 & 0xFFFF) * 2) + (((sp19E + 1) * 0x64) + &D_8011F2F2);
                    *temp_v1_12 |= 8;
                    var_v0_2 = sp18E * 0x64;
                    var_v1_3 = 2;
                } else {
                    temp_v1_13 = ((temp_s5 & 0xFFFF) * 2) + (((sp19E + 1) * 0x64) + &D_8011F2F2);
                    *temp_v1_13 &= 0xFFF7;
                    var_v0_2 = sp18E * 0x64;
                    var_v1_3 = 1;
                }
                *(&playerSlots + var_v0_2) = var_v1_3;
            }
            temp_a2 = temp_s5 & 0xFFFF;
            if (*(&D_801E99A4 + (temp_a2 * 0x70)) == 1) {
                temp_a0_6 = temp_a2 * 4;
                if ((u8) *(&D_80189B30 + temp_a2) < 2U) {
                    temp_v0_16 = *(&D_80189B30 + temp_a2) + 1;
                    *(&D_80189B30 + temp_a2) = temp_v0_16;
                    *(&D_8018B520 + temp_a2) = temp_v0_16;
                    temp_a1_4 = temp_a0_6 + &D_80183AE0;
                    *temp_a1_4 = *(&D_80167E80 + (*(&D_80189B30 + temp_a2) * 4));
                    temp_s0_5 = temp_a0_6 + &D_80183AB0;
                    *temp_s0_5 = *(&D_80167E68 + (*(&D_80189B30 + temp_a2) * 4));
                    temp_s1_5 = temp_a0_6 + &D_80183AD0;
                    *temp_s1_5 = *(&D_80167E74 + (*(&D_80189B30 + temp_a2) * 4));
                    *(&D_80183A90 + temp_a0_6) = 1.0f;
                    *(&D_80183AA0 + temp_a0_6) = 1.0f;
                    temp_s4_2 = *(&D_8011F30C + (sp19E * 0x64)) + *temp_a1_4;
                    temp_fa0_5 = sp194 + *(&D_80183AC0 + temp_a0_6);
                    D_80183A88 = temp_fa0_5;
                    temp_fs5_5 = __sinf((temp_fa0_5 * 3.14f) / 180.0f, temp_a0_6, (s32) temp_a1_4, temp_a2) * *temp_s0_5;
                    temp_fs0_12 = __sinf((D_80183A88 * 3.14f) / 180.0f);
                    temp_fs5_6 = (temp_fs5_5 - (temp_fs0_12 * __sinf((*temp_s1_5 * 3.14f) / 180.0f) * *temp_s0_5)) + var_fp;
                    temp_fs4_3 = (__sinf((*temp_s1_5 * 3.14f) / 180.0f) * *temp_s0_5) + temp_s4_2;
                    temp_fs3_5 = __cosf((D_80183A88 * 3.14f) / 180.0f) * *temp_s0_5;
                    temp_fs0_13 = __cosf((D_80183A88 * 3.14f) / 180.0f);
                    temp_fs3_6 = (temp_fs3_5 - (temp_fs0_13 * __sinf((*temp_s1_5 * 3.14f) / 180.0f) * *temp_s0_5)) + var_s7;
                    temp_v0_17 = (temp_s6 & 0xFFFF) * 0x24;
                    *(&D_80221080 + temp_v0_17) = temp_fs5_6;
                    *(&D_80221084 + temp_v0_17) = temp_fs4_3;
                    *(&D_80221088 + temp_v0_17) = temp_fs3_6;
                    *(&D_8022108C + temp_v0_17) = var_fp;
                    *(&D_80221090 + temp_v0_17) = temp_s4_2;
                    *(&D_80221094 + temp_v0_17) = var_s7;
                }
                temp_a1_5 = temp_s5 & 0xFFFF;
                if (*(&D_80189B30 + temp_a1_5) == 0) {
                    temp_v1_14 = (temp_a1_5 * 2) + (((sp19E + 1) * 0x64) + &D_8011F2F2);
                    *temp_v1_14 |= 8;
                    var_v0_3 = sp18E * 0x64;
                    var_v1_4 = 2;
                } else {
                    temp_v1_15 = ((temp_s5 & 0xFFFF) * 2) + (((sp19E + 1) * 0x64) + &D_8011F2F2);
                    *temp_v1_15 &= 0xFFF7;
                    var_v0_3 = sp18E * 0x64;
                    var_v1_4 = 1;
                }
                *(&playerSlots + var_v0_3) = var_v1_4;
            }
        }
        var_v0_4 = temp_s5 & 0xFFFF;
        if (M2C_FIELD(&sRowBoard, s16 *, 0x2108) == 1) {
            if (D_80189CC8 != 3) {
                var_v0_4 = temp_s5 & 0xFFFF;
                if (*(&D_801E99A8 + ((temp_s5 & 0xFFFF) * 0x70)) == M2C_FIELD(&sRowBoard, s16 *, 0x2108)) {
                    if (D_8018BC33 == 0) {
                        temp_v0_18 = D_8018BC30 * 0x64;
                        *(&D_8011F2F2 + temp_v0_18) = *(&D_8011F2F2 + temp_v0_18) | 8;
                        D_8018BC33 = 1;
                        var_v0_4 = temp_s5 & 0xFFFF;
                    } else {
                        temp_v1_16 = D_8018BC30 * 0x64;
                        *(&D_8011F2F2 + temp_v1_16) = *(&D_8011F2F2 + temp_v1_16) & 0xFFF7;
                        D_8018BC33 = 0;
                        goto block_76;
                    }
                }
            } else {
block_76:
                var_v0_4 = temp_s5 & 0xFFFF;
            }
        }
        temp_a0_7 = *(&D_8022AD04 + (var_v0_4 * 0x8F0));
        if ((temp_a0_7 >= 4) || ((D_80189CC8 == 3) && (M2C_FIELD(trackInfo, u8 *, 1) == 6) && (temp_a0_7 >= 2))) {
            D_80167E60 += 1;
            temp_v1_17 = temp_s5 & 0xFFFF;
            *(&D_80189C84 + temp_v1_17) = D_80167E61;
            temp_a0_8 = temp_s5 & 0xFFFF;
            if (*(&D_8022AFE9 + (temp_v1_17 * 0x8F0)) == 5) {
                D_80167E62 += 1;
            }
            *(&D_8018A264 + temp_a0_8) = 0;
            temp_a0_9 = (temp_a0_8 * 2) + (((sp19E + 1) * 0x64) + &D_8011F2F2);
            *temp_a0_9 &= 0xFFF7;
            if (M2C_FIELD(&sRowBoard, s16 *, 0x2108) == 1) {
                *(&D_8011F2FD + (D_8018BC30 * 0x64)) = 2;
            }
            *(&D_8011F2FD + (sp18E * 0x64)) = 1;
            sp10 = (f32 *)0x80;
            sp14 = temp_s6 & 0xFF;
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
            objCreate(0, 0, 3, 0);
            temp_a0_10 = temp_s5 & 0xFFFF;
            if (D_80189CC8 != 3) {
                temp_a1_6 = temp_a0_10 * 0x8F0;
                if (*(&D_8022AFE9 + temp_a1_6) != 5) {
                    *(&D_8022AFE9 + temp_a1_6) = 1;
                    func_80232360(temp_a0_10, 0);
                }
                temp_s0_6 = temp_s5 & 0xFFFF;
                if (D_80189CC8 == 0) {
                    *(&D_8011F2FC + (D_801E975A * 0x64)) = 0;
                }
                if (temp_s0_6 < 2U) {
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
                    objCreate(0, temp_s5 & 0xFF, 3, 0);
                    if (*(&D_8022AFE9 + (temp_s0_6 * 0x8F0)) != 5) {
                        func_801D65BC(0x10);
                        return;
                    }
                    func_801D65BC(0x11);
                }
            } else {
                if (*(&D_8022AFE9 + ((temp_s5 & 0xFFFF) * 0x8F0)) == 5) {
                    var_a0_2 = 0x11;
                } else {
                    var_a0_2 = 0x10;
                    if (M2C_FIELD(&sRowBoard, s16 *, 0x2108) == D_80167E60) {
                        var_a0_2 = 5;
                    }
                }
                var_s0_2 = 0;
                func_801D65BC(var_a0_2);
                temp_s1_6 = (temp_s5 & 0xFFFF) * 0x8F0;
                var_v1_5 = 0 & 0xFFFF;
                do {
                    temp_a0_11 = *(&D_8022AD64 + ((var_v1_5 * 0x38) + temp_s1_6));
                    var_v0_5 = var_s0_2 & 0xFFFF;
                    if (temp_a0_11 != -1) {
                        stopStageSound(temp_a0_11);
                        var_v0_5 = var_s0_2 & 0xFFFF;
                    }
                    *(&D_8022AD64 + ((var_v0_5 * 0x38) + temp_s1_6)) = -1;
                    var_s0_2 += 1;
                    var_v1_5 = var_s0_2 & 0xFFFF;
                } while ((u32) (var_s0_2 & 0xFFFF) < 4U);
                temp_a0_12 = (temp_s5 & 0xFFFF) * 0x8F0;
                if (*(&D_8022AFE9 + temp_a0_12) != 5) {
                    *(&D_8022AFE9 + temp_a0_12) = 4;
                }
                temp_s0_7 = ((temp_s5 & 0xFFFF) * 2) + &D_8018A26E;
                *(&D_8011F2FD + (*temp_s0_7 * 0x64)) = 2;
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
                *temp_s0_7 = objCreate(0, temp_s5 & 0xFF, 3, 0);
                if (D_80167E60 == M2C_FIELD(&sRowBoard, s16 *, 0x2108)) {
                    *(&D_8011F2FD + (D_80190C90 * 0x64)) = 2;
                    *(&D_8011F2FD + (D_80189C96[0] * 0x64)) = 2;
                    if (M2C_FIELD(&sRowBoard, s16 *, 0x2108) == 1) {
                        *(&D_8011F2FD + (D_8018BC30 * 0x64)) = 2;
                    }
                }
            }
        }
    }
}
