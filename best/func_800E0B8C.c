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

f32 func_80032310(f32, void *);                     /* extern */
M2C_UNK func_800E08B4(s32, s32, M2C_UNK *);         /* extern */
M2C_UNK func_800E0A00(M2C_UNK, s32, M2C_UNK *, s32); /* extern */
extern M2C_UNK D_800E1EE0;
extern M2C_UNK D_800E23E0;
extern M2C_UNK D_8011F068;
extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8011F2FA;
extern u8 D_80126FF6;
extern u16 func_800E1850;

void func_800E0B8C(f32 arg0, f32 arg1, f32 arg2) {
    f32 *temp_s1;
    f32 temp_fa0;
    f32 temp_fa0_2;
    f32 var_ft0;
    f32 var_ft0_2;
    f32 var_ft1;
    f32 var_ft1_2;
    f32 var_fv0;
    f32 var_fv0_2;
    f32 var_fv1;
    f32 var_fv1_2;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_6;
    s32 temp_a0_8;
    s32 temp_a1;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_a3;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_6;
    s32 var_v0_7;
    s32 var_v1;
    u16 temp_a2;
    u16 temp_v1_2;
    u16 var_a2;
    u8 temp_a1_2;
    void *temp_a0;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a0_7;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    var_s1 = 0;
    var_a2 = func_800E1850;
    temp_a3 = D_80126FF6 * 2;
    var_v0 = var_a2 & 0xFFFF;
    var_v1 = var_v0 * 2;
loop_1:
    temp_a0 = ((((var_v1 + var_v0) * 8) + var_v0) * 4) + &D_8011F2F0;
    if (M2C_FIELD(temp_a0, u16 *, 0x3C) == 0xFFFF) {
        goto block_5;
    }
    if (M2C_FIELD((temp_a3 + temp_a0), u16 *, 2) & 8) {
        goto block_5;
    }
    if (M2C_FIELD(temp_a0, u8 *, 0xD) != 0) {
        goto block_5;
    }
    *(((var_s1 & 0xFFFF) * 2) + &D_8011F068) = var_a2;
    var_s1 += 1;
block_5:
    var_a2 = M2C_FIELD(temp_a0, u16 *, 0x10);
    var_v0 = var_a2 & 0xFFFF;
    var_v1 = var_v0 * 2;
    if (var_v0 != 0xFFFF) {
        goto loop_1;
    }
    temp_a0_2 = var_s1 & 0xFFFF;
    temp_v1 = temp_a0_2 * 2;
    *(&D_8011F068 + temp_v1) = 0xFFFF;
    *(&D_800E23E0 + temp_v1) = 0xFFFF;
    temp_a1 = temp_a0_2 - 1;
    var_s1_2 = 0;
    if (temp_a1 <= 0) {
        goto block_8;
    }
    func_800E0A00(0, temp_a1, &D_8011F068, temp_a3);
    var_s1_2 = 0;
block_8:
loop_9:
    var_v0_2 = var_s1_2 & 0xFFFF;
loop_10:
    temp_v1_2 = *((var_v0_2 * 2) + &D_8011F068);
    var_a0 = var_s1_2;
    if (temp_v1_2 == 0xFFFF) {
        goto block_47;
    }
    var_v0_3 = var_a0 & 0xFFFF;
loop_12:
    var_s3 = var_a0;
    if (*(&D_8011F2FA + (temp_v1_2 * 0x64)) != *(&D_8011F2FA + (*((var_v0_3 * 2) + &D_8011F068) * 0x64))) {
        goto block_15;
    }
    var_a0 += 1;
    var_v0_3 = var_a0 & 0xFFFF;
    if (*(((var_a0 & 0xFFFF) * 2) + &D_8011F068) != 0xFFFF) {
        goto loop_12;
    }
    var_s3 = var_a0;
block_15:
    temp_v1_3 = var_s1_2 & 0xFFFF;
    temp_a0_3 = var_s3 & 0xFFFF;
    var_s2 = var_s1_2;
    if (temp_v1_3 >= (temp_a0_3 - 1)) {
        goto block_46;
    }
    var_s0 = temp_v1_3;
    var_a3 = var_s3 - 1;
    if (var_s0 >= temp_a0_3) {
        goto block_26;
    }
    var_v0_4 = var_s0 * 2;
loop_18:
    temp_a2 = *(var_v0_4 + &D_8011F068);
    temp_a0_4 = ((temp_a2 & 0xFFFF) * 0x64) + &D_8011F2F0;
    temp_a1_2 = M2C_FIELD(temp_a0_4, u8 *, 0xB);
    var_v0_5 = var_a3 & 0xFFFF;
    if ((u32) (temp_a1_2 - 0xB) < 2U) {
        goto block_24;
    }
    temp_v0 = temp_a1_2 & 0xFF;
    if (!((temp_v0 != 5) & (temp_v0 != 8))) {
        goto block_23;
    }
    var_v0_5 = var_a3 & 0xFFFF;
    if ((u32) (temp_a1_2 - 0xD) < 2U) {
        goto block_24;
    }
    var_v0_5 = var_a3 & 0xFFFF;
    if (M2C_FIELD(temp_a0_4, u8 *, 0xC) != 0xFF) {
        goto block_24;
    }
    *(((var_s2 & 0xFFFF) * 2) + &D_800E23E0) = temp_a2;
    var_s2 += 1;
    goto block_25;
block_23:
    var_v0_5 = var_a3 & 0xFFFF;
block_24:
    *((var_v0_5 * 2) + &D_800E23E0) = *((var_s0 * 2) + &D_8011F068);
    var_a3 -= 1;
block_25:
    var_s0 += 1;
    var_v0_4 = var_s0 * 2;
    if (var_s0 < (var_s3 & 0xFFFF)) {
        goto loop_18;
    }
block_26:
    var_s0_2 = var_s1_2 & 0xFFFF;
    goto loop_33;
block_27:
    temp_a0_5 = (*((var_s0_2 * 2) + &D_800E23E0) * 0x64) + &D_8011F2F0;
    if (M2C_FIELD(temp_a0_5, u8 *, 1) != 2) {
        goto block_29;
    }
    var_fv1 = M2C_FIELD(temp_a0_5, f32 *, 0x44) - arg0;
    var_ft1 = M2C_FIELD(temp_a0_5, f32 *, 0x48) - arg1;
    var_ft0 = M2C_FIELD(temp_a0_5, f32 *, 0x4C) - arg2;
    goto block_30;
block_29:
    var_fv1 = M2C_FIELD(temp_a0_5, f32 *, 0x18) - arg0;
    var_ft1 = M2C_FIELD(temp_a0_5, f32 *, 0x1C) - arg1;
    var_ft0 = M2C_FIELD(temp_a0_5, f32 *, 0x20) - arg2;
block_30:
    temp_fa0 = (var_fv1 * var_fv1) + (var_ft1 * var_ft1) + (var_ft0 * var_ft0);
    var_fv0 = sqrtf(temp_fa0);
    var_v0_6 = var_s0_2 * 2;
    if (var_fv0 == var_fv0) {
        goto block_32;
    }
    var_fv0 = func_80032310(temp_fa0, temp_a0_5);
    var_v0_6 = var_s0_2 * 2;
block_32:
    *((*(var_v0_6 + &D_800E23E0) * 4) + &D_800E1EE0) = var_fv0;
    var_s0_2 += 1;
loop_33:
    if (var_s0_2 < (var_s2 & 0xFFFF)) {
        goto block_27;
    }
    temp_a0_6 = var_s1_2 & 0xFFFF;
    temp_a1_3 = (var_s2 & 0xFFFF) - 1;
    var_s0_3 = var_s2 & 0xFFFF;
    if (temp_a0_6 >= temp_a1_3) {
        goto block_42;
    }
    func_800E08B4(temp_a0_6, temp_a1_3, &D_800E23E0);
    var_v0_7 = var_s3 & 0xFFFF;
    goto block_43;
block_36:
    temp_a0_7 = (*((var_s0_3 * 2) + &D_800E23E0) * 0x64) + &D_8011F2F0;
    if (M2C_FIELD(temp_a0_7, u8 *, 1) != 2) {
        goto block_38;
    }
    var_fv1_2 = M2C_FIELD(temp_a0_7, f32 *, 0x44) - arg0;
    var_ft1_2 = M2C_FIELD(temp_a0_7, f32 *, 0x48) - arg1;
    var_ft0_2 = M2C_FIELD(temp_a0_7, f32 *, 0x4C) - arg2;
    goto block_39;
block_38:
    var_fv1_2 = M2C_FIELD(temp_a0_7, f32 *, 0x18) - arg0;
    var_ft1_2 = M2C_FIELD(temp_a0_7, f32 *, 0x1C) - arg1;
    var_ft0_2 = M2C_FIELD(temp_a0_7, f32 *, 0x20) - arg2;
block_39:
    temp_fa0_2 = (var_fv1_2 * var_fv1_2) + (var_ft1_2 * var_ft1_2) + (var_ft0_2 * var_ft0_2);
    var_fv0_2 = sqrtf(temp_fa0_2);
    temp_s1 = (*((var_s0_3 * 2) + &D_800E23E0) * 4) + &D_800E1EE0;
    if (var_fv0_2 == var_fv0_2) {
        goto block_41;
    }
    var_fv0_2 = func_80032310(temp_fa0_2, temp_a0_7);
block_41:
    *temp_s1 = -var_fv0_2;
    var_s0_3 += 1;
block_42:
    var_v0_7 = var_s3 & 0xFFFF;
block_43:
    if (var_s0_3 < var_v0_7) {
        goto block_36;
    }
    temp_a0_8 = var_s2 & 0xFFFF;
    temp_a1_4 = (var_s3 & 0xFFFF) - 1;
    var_s1_2 = var_s3;
    if (temp_a0_8 >= temp_a1_4) {
        goto loop_9;
    }
    func_800E08B4(temp_a0_8, temp_a1_4, &D_800E23E0);
    var_v0_2 = var_s1_2 & 0xFFFF;
    goto loop_10;
block_46:
    temp_v0_2 = (var_s1_2 & 0xFFFF) * 2;
    *(temp_v0_2 + &D_800E23E0) = *(temp_v0_2 + &D_8011F068);
    var_s1_2 = var_s3;
    var_v0_2 = var_s1_2 & 0xFFFF;
    goto loop_10;
block_47:
    return;
}
