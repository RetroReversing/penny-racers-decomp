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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 queueObjEvent();
f32 func_801F9BE8();
s32 angleFromDelta();
f32 intersectEdgeParam(f32, f32, void *, void *, f32, f32, f32, f32, f32, f32); /* extern */
s32 func_80221AD0();
f32 sqrtf(f32);                                     /* extern */
extern u16 gameState;
extern char D_8011F2F0[];
extern char D_8011F308[];
extern s32 sPathOffsetZ;
extern char D_8011F318[];
extern char D_801FAB10[];
extern char D_801FACA0[];
extern f32 D_802038D4;
extern char sGroupSortValues[];
extern s32 sCars;
extern u16 slotObjIds;
extern char sGroupSortKeys[];
extern s32 func_801FA980;

void func_80226BA0(s32 arg0, void *arg1) {
    u8 *__base_D_8022E620;
    s32 __index_D_8022E620;
    u8 *__base_D_8011F2F0;
    s32 __index_D_8011F2F0;
    f32 __repair_pin_0;
    f32 __repair_pin_1;
    f32 __repair_pin_2;
    f32 __repair_pin_3;
    f32 __repair_pin_4;
    f32 __repair_pin_5;
    f32 __repair_pin_6;
    f32 __repair_pin_7;
    f32 __repair_pin_8;
    s32 sp26 ;
    f32 temp_fa0;
    f32 temp_fa1;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
    f32 temp_fs0_4;
    f32 temp_fs0_5;
    f32 temp_fs1;
    f32 temp_fs1_2;
    f32 temp_fs1_3;
    f32 temp_fs3;
    f32 temp_fs4;
    f32 temp_fs5;
    f32 temp_ft0;
    f32 temp_ft0_2;
    f32 temp_ft0_3;
    f32 temp_ft0_4;
    f32 temp_ft1;
    f32 temp_ft1_2;
    f32 temp_ft3;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1_4;
    f32 temp_fv1_5;
    f32 temp_fv1_6;
    f32 temp_fv1_7;
    f32 temp_fv1_8;
    f32 temp_fv1_9;
    f32 temp_s2;
    f32 var_fs0;
    f32 var_fs2;
    f32 var_fs2_2;
    f32 var_fs3;
    f32 var_fs5;
    f32 var_ft0;
    f32 var_ft1;
    f32 var_fv0;
    f32 var_fv0_2;
    f32 var_fv0_3;
    f32 var_fv0_4;
    f32 var_fv1;
    f32 var_fv1_2;
    f32 var_fv1_3;
    f32 var_fv1_4;
    f32 var_fv1_5;
    f32 var_s2;
    f32 var_s4;
    f32 var_s7;
    s16 temp_a0_2;
    s16 temp_a0_3;
    s16 temp_a0_4;
    s16 temp_a0_5;
    s16 temp_s2_2;
    s16 temp_s5;
    s16 var_a0_2;
    s32 temp_a0;
    s32 temp_a0_10;
    s32 temp_a0_11;
    s32 temp_a0_13;
    s32 temp_a0_14;
    s32 temp_a0_15;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a1;
    s32 temp_cond;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1_3;
    s32 temp_v1_5;
    s32 temp_v1_7;
    s32 temp_v1_8;
    s32 var_a0_3;
    s32 var_condition_bit;
    s32 var_condition_bit_2;
    s32 var_condition_bit_3;
    u16 var_s0;
    s32 var_s0_2 ;
    s32 var_v0;
    u16 var_v0_2;
    s32 var_v0_4;
    s32 var_v0_6;
    s32 var_v0_9;
    s32 var_v1;
    s32 temp_a0_8 ;
    s32 temp_v0_4 ;
    s32 temp_v0_5 ;
    s32 temp_v1 ;
    s32 temp_v1_2 ;
    s32 temp_v1_4 ;
    s32 temp_v1_6 ;
    s32 var_s5 ;
    u8 temp_a0_12;
    u8 var_a3;
    u8 var_t1;
    u8 var_v0_3;
    void *temp_a0_9;
    void *temp_a2;
    void *temp_a3;
    void *temp_s3;
    void *temp_s3_2;
    void *temp_s7;
    void *temp_t0;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;
    void *var_a0;
    void *var_a1;
    void *var_v0_5;
    void *var_v0_7;
    void *var_v0_8;

    __base_D_8011F2F0 = 0;

    temp_v1 = M2C_FIELD(arg1, u16 *, 0x8E4);
    temp_a1 = M2C_FIELD(arg1, s32 *, 0x8DC);
    temp_a2 = (temp_v1 * 0x6C) + temp_a1;
    temp_a0 = M2C_FIELD(arg1, s32 *, 0x8E0);
    temp_a3 = (temp_v1 * 0xC) + temp_a0;
    temp_v1_2 = M2C_FIELD(arg1, u16 *, 0x8E6);
    temp_t0 = (temp_v1_2 * 0x6C) + temp_a1;
    temp_ft0 = M2C_FIELD(temp_a3, f32 *, 0);
    var_s7 = M2C_FIELD(temp_a3, f32 *, 4);
    var_t1 = 0;
    if (M2C_FIELD(arg1, f32 *, 0x774) > 60.0f) {
        var_t1 = M2C_FIELD(temp_a3, u8 *, 9);
    }
    temp_v1_3 = M2C_FIELD(temp_a3, u8 *, 8) & 0xFFFF;
    sp26 = M2C_FIELD(arg1, u16 *, 0x8E6);
    switch (temp_v1_3) {                            /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        var_s5 = M2C_FIELD(temp_a2, u16 *, 0x22);
        temp_a0_2 = (s16) M2C_FIELD(temp_a2, u16 *, 0x22);
        var_a1 = (temp_a0_2 * 0xC) + M2C_FIELD(arg1, s32 *, 0x8E0);
        var_a0 = (temp_a0_2 * 0x6C) + M2C_FIELD(arg1, s32 *, 0x8DC);
        var_a3 = M2C_FIELD(var_a1, u8 *, 8);
        var_ft1 = M2C_FIELD(var_a1, f32 *, 0);
        var_s4 = (temp_ft0 * M2C_FIELD(temp_a2, f32 *, 0x38)) + M2C_FIELD(temp_a2, f32 *, 8);
        var_fv1 = M2C_FIELD(temp_a2, f32 *, 0xC);
        var_fv0 = temp_ft0 * M2C_FIELD(temp_a2, f32 *, 0x3C);
        break;
    case 2:                                         /* switch 1 */
        var_s5 = M2C_FIELD(temp_a2, u16 *, 0x24);
        temp_a0_3 = (s16) M2C_FIELD(temp_a2, u16 *, 0x24);
        var_a1 = (temp_a0_3 * 0xC) + M2C_FIELD(arg1, s32 *, 0x8E0);
        var_a0 = (temp_a0_3 * 0x6C) + M2C_FIELD(arg1, s32 *, 0x8DC);
        var_a3 = M2C_FIELD(var_a1, u8 *, 8);
        var_ft1 = M2C_FIELD(var_a1, f32 *, 0);
        var_s4 = (temp_ft0 * M2C_FIELD(temp_a2, f32 *, 0x48)) + M2C_FIELD(temp_a2, f32 *, 0x10);
        var_fv1 = M2C_FIELD(temp_a2, f32 *, 0x14);
        var_fv0 = temp_ft0 * M2C_FIELD(temp_a2, f32 *, 0x4C);
        break;
    case 3:                                         /* switch 1 */
        var_s5 = M2C_FIELD(temp_a2, u16 *, 0x26);
        temp_a0_4 = (s16) M2C_FIELD(temp_a2, u16 *, 0x26);
        var_a1 = (temp_a0_4 * 0xC) + M2C_FIELD(arg1, s32 *, 0x8E0);
        var_a0 = (temp_a0_4 * 0x6C) + M2C_FIELD(arg1, s32 *, 0x8DC);
        var_a3 = M2C_FIELD(var_a1, u8 *, 8);
        var_ft1 = M2C_FIELD(var_a1, f32 *, 0);
        var_s4 = (temp_ft0 * M2C_FIELD(temp_a2, f32 *, 0x58)) + M2C_FIELD(temp_a2, f32 *, 0x18);
        var_fv1 = M2C_FIELD(temp_a2, f32 *, 0x1C);
        var_fv0 = temp_ft0 * M2C_FIELD(temp_a2, f32 *, 0x5C);
        break;
    default:                                        /* switch 1 */
        var_s5 = M2C_FIELD(temp_a2, u16 *, 0x20);
        temp_a0_5 = (s16) M2C_FIELD(temp_a2, u16 *, 0x20);
        var_a1 = (temp_a0_5 * 0xC) + M2C_FIELD(arg1, s32 *, 0x8E0);
        var_a0 = (temp_a0_5 * 0x6C) + M2C_FIELD(arg1, s32 *, 0x8DC);
        var_a3 = M2C_FIELD(var_a1, u8 *, 8);
        var_ft1 = M2C_FIELD(var_a1, f32 *, 0);
        var_s4 = (temp_ft0 * M2C_FIELD(temp_a2, f32 *, 0x28)) + M2C_FIELD(temp_a2, f32 *, 0);
        var_fv0 = temp_ft0 * M2C_FIELD(temp_a2, f32 *, 0x2C);
        var_fv1 = M2C_FIELD(temp_a2, f32 *, 4);
        break;
    }
    temp_fv0 = var_fv0 + var_fv1;
    temp_ft0_2 = *(s32 *)((temp_v1_2 * 0xC) + temp_a0);
    temp_v1_2 = M2C_FIELD(arg1, u16 *, 0x8E8);
    switch (temp_v1_2) {                            /* switch 2; irregular */
    case 0:                                         /* switch 2 */
        var_s2 = (temp_ft0_2 * M2C_FIELD(temp_t0, f32 *, 0x28)) + M2C_FIELD(temp_t0, f32 *, 0);
        var_fs5 = (temp_ft0_2 * M2C_FIELD(temp_t0, f32 *, 0x2C)) + M2C_FIELD(temp_t0, f32 *, 4);
        break;
    case 1:                                         /* switch 2 */
        var_s2 = (temp_ft0_2 * M2C_FIELD(temp_t0, f32 *, 0x38)) + M2C_FIELD(temp_t0, f32 *, 8);
        var_fs5 = (temp_ft0_2 * M2C_FIELD(temp_t0, f32 *, 0x3C)) + M2C_FIELD(temp_t0, f32 *, 0xC);
        break;
    case 2:                                         /* switch 2 */
        var_s2 = (temp_ft0_2 * M2C_FIELD(temp_t0, f32 *, 0x48)) + M2C_FIELD(temp_t0, f32 *, 0x10);
        var_fs5 = (temp_ft0_2 * M2C_FIELD(temp_t0, f32 *, 0x4C)) + M2C_FIELD(temp_t0, f32 *, 0x14);
        break;
    case 3:                                         /* switch 2 */
        var_s2 = (temp_ft0_2 * M2C_FIELD(temp_t0, f32 *, 0x58)) + M2C_FIELD(temp_t0, f32 *, 0x18);
        var_fs5 = (temp_ft0_2 * M2C_FIELD(temp_t0, f32 *, 0x5C)) + M2C_FIELD(temp_t0, f32 *, 0x1C);
        break;
    default:                                        /* switch 2 */
        var_fs5 = 0.0f;
        var_s2 = 0.0f;
        break;
    }
    var_s0 = 0;
    if (var_t1 != 0) {
        var_v1 = var_a3 & 0xFFFF;
        do {
            switch (var_v1) {                       /* switch 3; irregular */
            case 1:                                 /* switch 3 */
                var_a0_2 = M2C_FIELD(var_a0, s16 *, 0x22);
                var_v0 = var_a0_2 * 2;
                break;
            case 2:                                 /* switch 3 */
                var_a0_2 = M2C_FIELD(var_a0, s16 *, 0x24);
                var_v0 = var_a0_2 * 2;
                break;
            case 3:                                 /* switch 3 */
                var_a0_2 = M2C_FIELD(var_a0, s16 *, 0x26);
                var_v0 = var_a0_2 * 2;
                break;
            default:                                /* switch 3 */
                var_a0_2 = M2C_FIELD(var_a0, s16 *, 0x20);
                var_v0 = var_a0_2 * 2;
                break;
            }
            var_a1 = ((var_v0 + var_a0_2) * 4) + M2C_FIELD(arg1, s32 *, 0x8E0);
            var_a0 = (var_a0_2 * 0x6C) + M2C_FIELD(arg1, s32 *, 0x8DC);
            var_a3 = M2C_FIELD(var_a1, u8 *, 8);
            var_ft1 = M2C_FIELD(var_a1, f32 *, 0);
            var_s0 += 1;
            var_v1 = var_a3 & 0xFFFF;
        } while ((u32) (var_s0 & 0xFFFF) < (u32) (var_t1 & 0xFFFF));
    }
    temp_v1_5 = var_a3 & 0xFFFF;
    switch (temp_v1_5) {                            /* switch 4; irregular */
    case 0:                                         /* switch 4 */
        var_fs3 = (var_ft1 * M2C_FIELD(var_a0, f32 *, 0x28)) + M2C_FIELD(var_a0, f32 *, 0);
        var_fs2 = (var_ft1 * M2C_FIELD(var_a0, f32 *, 0x2C)) + M2C_FIELD(var_a0, f32 *, 4);
        break;
    case 1:                                         /* switch 4 */
        var_fs3 = (var_ft1 * M2C_FIELD(var_a0, f32 *, 0x38)) + M2C_FIELD(var_a0, f32 *, 8);
        var_fs2 = (var_ft1 * M2C_FIELD(var_a0, f32 *, 0x3C)) + M2C_FIELD(var_a0, f32 *, 0xC);
        break;
    case 2:                                         /* switch 4 */
        var_fs3 = (var_ft1 * M2C_FIELD(var_a0, f32 *, 0x48)) + M2C_FIELD(var_a0, f32 *, 0x10);
        var_fs2 = (var_ft1 * M2C_FIELD(var_a0, f32 *, 0x4C)) + M2C_FIELD(var_a0, f32 *, 0x14);
        break;
    case 3:                                         /* switch 4 */
        var_fs3 = (var_ft1 * M2C_FIELD(var_a0, f32 *, 0x58)) + M2C_FIELD(var_a0, f32 *, 0x18);
        var_fs2 = (var_ft1 * M2C_FIELD(var_a0, f32 *, 0x5C)) + M2C_FIELD(var_a0, f32 *, 0x1C);
        break;
    default:                                        /* switch 4 */
        var_fs2 = 0.0f;
        var_fs3 = 0.0f;
        break;
    }
    temp_ft3 = var_s4 - var_s2;
    temp_fs1 = temp_fv0 - var_fs5;
    temp_v0 = (arg0 & 0xFFFF) * 0x64;
    temp_fv0_2 = intersectEdgeParam(var_s2, var_fs5, var_a0, var_a1, var_s4, temp_fv0, *((s32 *)((s8 *)D_8011F308 + temp_v0)), *((s32 *)((s8 *)&sPathOffsetZ + temp_v0)), temp_fs1, -temp_ft3);
    var_fv1_2 = temp_fv0_2 * 100.0f;
    var_fv0_2 = 99.0f;
    if ((var_fv1_2 > 99.0f) || (var_fv0_2 = 0.0f, (var_fv1_2 < 0.0f))) {
        var_fv1_2 = var_fv0_2;
    }
    temp_v0_2 = (s32) var_fv1_2 * 4;
    temp_ft1 = *((s32 *)((s8 *)&func_801FA980 + temp_v0_2));
    temp_fv1 = *((s32 *)((s8 *)D_801FAB10 + temp_v0_2));
    temp_ft0_3 = *((s32 *)((s8 *)D_801FACA0 + temp_v0_2));
    temp_fs4 = (var_s2 * temp_ft1) + (var_s4 * temp_fv1) + (var_fs3 * temp_ft0_3);
    temp_fs1_2 = (temp_ft3 * temp_fv0_2) + var_s2;
    temp_fs0 = (temp_fs1 * temp_fv0_2) + var_fs5;
    temp_v0_3 = (arg0 & 0xFFFF) * 0x64;
    temp_fv0_3 = *((s32 *)((s8 *)D_8011F308 + temp_v0_3));
    temp_fv1_2 = *((s32 *)((s8 *)&sPathOffsetZ + temp_v0_3));
    temp_fs1_3 = temp_fv0_3 - temp_fs1_2;
    temp_fs0_2 = temp_fv1_2 - temp_fs0;
    temp_fa0 = (temp_fs1_3 * temp_fs1_3) + (temp_fs0_2 * temp_fs0_2);
    var_fv1_3 = sqrtf(temp_fa0);
    temp_fs3 = (var_fs5 * temp_ft1) + (temp_fv0 * temp_fv1) + (var_fs2 * temp_ft0_3);
    if (var_fv1_3 != var_fv1_3) {
        var_fv1_3 = sqrtf(temp_fa0);
    }
    var_fs2_2 = var_fv1_3 * 0.01f;
    if (var_fs2_2 < 1.0f) {
        var_fs2_2 = 0.0f;
    }
    temp_s0 = (arg0 & 0xFFFF) * 0x64;
    temp_fs5 = *((s32 *)((s8 *)D_8011F318 + temp_s0));
    temp_s2 = (f32) (angleFromDelta((s32) (temp_fs0 - temp_fv1_2), (s32) (temp_fs1_2 - temp_fv0_3)) & 0xFFFF);
    temp_fa1 = (f32) (angleFromDelta((s32) (((f32) (s32) temp_fs3 - *((s32 *)((s8 *)&sPathOffsetZ + temp_s0))) - (temp_fs0_2 * var_fs2_2)), (s32) (((f32) (s32) temp_fs4 - *((s32 *)((s8 *)D_8011F308 + temp_s0))) - (temp_fs1_3 * var_fs2_2))) & 0xFFFF);
    temp_a0_6 = var_s5 & 0xFFFF;
    if (((sp26 == M2C_FIELD(arg1, u16 *, 0x8E4)) | (sp26 == temp_a0_6)) != 0) {
        temp_fs0_3 = func_801F9BE8(temp_fs5, temp_s2, temp_a0_6) * 0.16f;
        var_fv1_4 = -1.0f;
        if (temp_fs0_3 > 0.0f) {
            var_fv1_4 = 1.0f;
        }
        if (temp_fs0_3 > 0.0f) {
            var_fv0_3 = temp_fs0_3 + var_fs2_2;
        } else {
            var_fv0_4 = -temp_fs0_3;
            goto block_79;
        }
    } else {
        temp_fs0_4 = func_801F9BE8(temp_fs5, temp_fa1, temp_a0_6) * 0.6f;
        if (!(temp_fs0_4 > 0.0f)) {
            if (-temp_fs0_4 < 5.0f) {
                goto block_71;
            }
            goto block_72;
        }
        if (temp_fs0_4 < 5.0f) {
block_71:
            var_condition_bit = func_801F9BE8(temp_fs5, temp_s2) > 0.0f;
        } else {
block_72:
            var_condition_bit = temp_fs0_4 > 0.0f;
        }
        var_fv1_4 = -1.0f;
        if (var_condition_bit) {
            var_fv1_4 = 1.0f;
        }
        if (!(temp_fs0_4 > 0.0f)) {
            var_fv0_4 = -temp_fs0_4;
block_79:
            var_fv0_3 = var_fv0_4 + var_fs2_2;
        } else {
            var_fv0_3 = temp_fs0_4 + var_fs2_2;
        }
    }
    var_fs0 = var_fv0_3;
    if (var_fs0 > 15.0f) {
        var_fs0 = 15.0f;
    }
    temp_ft0_4 = (f32) -M2C_FIELD((((s32) var_fs0 * 2) + arg1), s16 *, 0x53C) * var_fv1_4;
    if (M2C_FIELD(arg1, u16 *, 0x8EA) != 0) {
        temp_v1_6 = M2C_FIELD(arg1, u16 *, 0x8EC);
        M2C_FIELD(arg1, u16 *, 0x8EC) = (u16) (temp_v1_6 - 1);
        if (temp_v1_6 == 0) {
            M2C_FIELD(arg1, u16 *, 0x8EA) = 0U;
        }
        if (M2C_FIELD(arg1, u8 *, 0x8A1) == 1) {
            M2C_FIELD(arg1, u16 *, 0x8EA) = 0U;
            M2C_FIELD(arg1, u16 *, 0x8EC) = 0U;
        } else if (!(M2C_FIELD(arg1, f32 *, 0x86C) < 103.0f)) {
            M2C_FIELD(arg1, s32 *, 0x894) = 0;
            do { M2C_FIELD(arg1, s32 *, 0x890) += 1; } while (0);
            M2C_FIELD(arg1, s8 *, 0x87B) = (s8) (s32) temp_ft0_4;
        } else {
            M2C_FIELD(arg1, s32 *, 0x894) += 1;
            M2C_FIELD(arg1, s32 *, 0x890) = 0;
            M2C_FIELD(arg1, s8 *, 0x87B) = 0;
        }
    } else {
        M2C_FIELD(arg1, s8 *, 0x87B) = (s8) (s32) temp_ft0_4;
        temp_s3 = (M2C_FIELD(arg1, u8 *, 0x5F2) * 0x8F0) + &sCars;
        if ((u16) M2C_FIELD(arg1, u16 *, 4) < 6U) {
            temp_a0_7 = M2C_FIELD(temp_s3, s32 *, 0x59C);
            temp_v1_7 = M2C_FIELD(arg1, s32 *, 0x59C);
            if ((temp_v1_7 < (temp_a0_7 + 0x64)) && (temp_a0_7 < temp_v1_7)) {
                temp_fv0_4 = (100.0f - (f32) (temp_v1_7 - temp_a0_7)) * 0.01f * M2C_FIELD(temp_s3, f32 *, 0x774);
                temp_fv1_3 = var_s7 * M2C_FIELD(arg1, f32 *, 0x5AC);
                var_s7 = temp_fv0_4;
                temp_cond = temp_fv0_4 < temp_fv1_3;
                if (temp_cond) {
                    var_s7 = temp_fv1_3;
                }
            } else if ((M2C_FIELD(arg1, s32 *, 0x59C) < M2C_FIELD(temp_s3, s32 *, 0x59C)) && (((gameState & 0xFFFF) != 9) || (var_fs0 < 4.0f))) {
                var_s7 = 999.0f;
            }
        }
        if (!(M2C_FIELD(arg1, f32 *, 0x770) < var_s7)) {
            M2C_FIELD(arg1, s32 *, 0x890) = 0;
        } else {
            M2C_FIELD(arg1, s32 *, 0x890) += 1;
        }
        M2C_FIELD(arg1, s32 *, 0x894) = 0;
    }
    if ((u8) M2C_FIELD(arg1, u8 *, 0x74C) < 5U) {
        M2C_FIELD(arg1, s32 *, 0x89C) = 0;
    }
    if (slotObjIds == (arg0 & 0xFFFF)) {
        D_802038D4 = (f32) M2C_FIELD(arg1, s8 *, 0x87B);
    }
    if ((M2C_FIELD(arg1, u16 *, 4) == 6) && (M2C_FIELD(arg1, u8 *, 0x778) == 0)) {
        queueObjEvent(arg0 & 0xFFFF, 0x38);
    }
    M2C_FIELD(arg1, s32 *, 0x898) = 0;
    temp_s7 = (M2C_FIELD(arg1, u16 *, 2) * 0x64) + D_8011F2F0;
    var_s0_2 = 0;
    temp_s5 = M2C_FIELD(arg1, u16 *, 0x59E) - (M2C_FIELD(arg1, s16 *, 0x594) * 0x64);
    var_v0_2 = 0 & 0xFFFF;
    do {
        temp_v1_8 = var_v0_2 * 0x8F0;
        temp_a0_8 = *(s32 *)(slotObjIds + temp_v1_8);
        if ((temp_a0_8 != 0xFFFF) && (temp_a0_8 != M2C_FIELD(arg1, u16 *, 2)) && (M2C_FIELD(arg1, u8 *, 0x8A1) == 0) && (M2C_FIELD(arg1, u8 *, 0x860) != 0)) {
            temp_s3_2 = temp_v1_8 + &sCars;
            __index_D_8011F2F0 = M2C_FIELD(temp_s3_2, u16 *, 2) * 0x64;
            __base_D_8011F2F0 = D_8011F2F0;
            temp_a0_9 = __base_D_8011F2F0 + __index_D_8011F2F0;
            temp_s2_2 = M2C_FIELD(temp_s3_2, u16 *, 0x59E) - (M2C_FIELD(temp_s3_2, s16 *, 0x594) * 0x64);
            temp_fs0_5 = M2C_FIELD(temp_s7, f32 *, 0x28) - (f32) (angleFromDelta((s32) (M2C_FIELD(temp_a0_9, f32 *, 0x20) - M2C_FIELD(temp_s7, f32 *, 0x20)), (s32) (M2C_FIELD(temp_a0_9, f32 *, 0x18) - M2C_FIELD(temp_s7, f32 *, 0x18))) & 0xFFFF);
            var_fv1_5 = temp_fs0_5;
            if (!(temp_fs0_5 > (__repair_pin_0 = 0.0f))) {
                var_fv1_5 = -temp_fs0_5;
            }
            temp_a0_10 = var_s0_2 & 0xFFFF;
            __index_D_8022E620 = M2C_FIELD(arg1, u16 *, 4) * 0x18;
            __base_D_8022E620 = sGroupSortKeys;
            if ((*(s32 *)((temp_a0_10 * 4) + (__base_D_8022E620 + __index_D_8022E620)) < (__repair_pin_1 = 200.0f)) && (temp_s5 < temp_s2_2) && (var_fv1_5 < (__repair_pin_2 = 20.0f)) && (M2C_FIELD((arg1 + (temp_a0_10 * 8)), f32 *, 0x5B4) > (__repair_pin_3 = func_801FA980)) && !(M2C_FIELD(arg1, u8 *, 0x778) & 0x1F)) {
                queueObjEvent(arg0 & 0xFFFF, 0x37);
            }
            if (M2C_FIELD(arg1, s16 *, 0x55E) != 0) {
                temp_v0_4 = M2C_FIELD(arg1, u16 *, 0x53A);
                switch (temp_v0_4) {                /* switch 5 */
                case 1:                             /* switch 5 */
                    var_a0_3 = var_s0_2 & 0xFFFF;
                    temp_fv1_4 = *(s32 *)((var_a0_3 * 4) + ((M2C_FIELD(arg1, u16 *, 4) * 0x18) + sGroupSortKeys));
                    if ((temp_fv1_4 < (__repair_pin_4 = 300.0f)) && (temp_fv1_4 > (__repair_pin_5 = 100.0f)) && (temp_s5 < temp_s2_2) && (var_fv1_5 < (__repair_pin_2 = 20.0f))) {
                        var_v0_3 = M2C_FIELD(arg1, u8 *, 0x778) & 0x3F;
block_136:
                        if (var_v0_3 == 0) {
                            var_v0_4 = var_a0_3 * 8;
block_138:
                            var_v0_5 = arg1 + var_v0_4;
                            if (!(M2C_FIELD(var_v0_5, f32 *, 0x5B4) > (__repair_pin_6 = 0.3f))) {
                                var_v0_6 = var_s0_2 & 0xFFFF;
block_184:
                                var_v0_7 = arg1 + (var_v0_6 * 8);
                                var_condition_bit_2 = M2C_FIELD(var_v0_7, f32 *, 0x5B8) > (__repair_pin_6 = 0.3f);
block_185:
                                if (var_condition_bit_2) {
                                    M2C_FIELD(arg1, s32 *, 0x898) = 1;
                                    M2C_FIELD(var_v0_7, s32 *, 0x5B8) = 0;
                                }
                            } else {
block_183:
                                M2C_FIELD(arg1, s32 *, 0x898) = 1;
                                M2C_FIELD(var_v0_5, f32 *, 0x5B4) = (f32) (M2C_FIELD(var_v0_5, f32 *, 0x5B4) * M2C_FIELD(arg1, f32 *, 0x5A4));
                            }
                        }
                    }
                    goto block_209;
                case 2:                             /* switch 5 */
                    temp_a0_11 = var_s0_2 & 0xFFFF;
                    if (*(s32 *)((temp_a0_11 * 4) + ((M2C_FIELD(arg1, u16 *, 4) * 0x18) + sGroupSortKeys)) < (__repair_pin_5 = 100.0f)) {
                        var_v0_4 = temp_a0_11 * 8;
                        goto block_138;
                    }
                    goto block_209;
                case 3:                             /* switch 5 */
                    temp_ft1_2 = M2C_FIELD(arg1, f32 *, 0x864) * 64.0f;
                    temp_fv1_5 = (f32) M2C_FIELD(arg1, s8 *, 0x87B) * 0.74f;
                    var_ft0 = temp_fv1_5;
                    if (!(temp_fv1_5 > (__repair_pin_0 = 0.0f))) {
                        var_ft0 = -temp_fv1_5;
                    }
                    if ((temp_ft1_2 < var_ft0) && (M2C_FIELD(arg1, u8 *, 0x8D0) == 0) && ((1.0f - ((var_ft0 - temp_ft1_2) * 0.03125f)) < (__repair_pin_7 = 0.6f))) {
                        if (M2C_FIELD(arg1, u8 *, 0x8A1) == 0) {
                            M2C_FIELD(arg1, s32 *, 0x898) = 1;
                            goto block_209;
                        }
                        var_s0_2 += 1;
                    } else {
                        goto block_209;
                    }
                    break;
                case 4:                             /* switch 5 */
                case 5:                             /* switch 5 */
                    temp_v0_5 = M2C_FIELD(arg1, u16 *, 4);
                    temp_a0_12 = *((u8 *)((s8 *)sGroupSortValues + (temp_v0_5 * 6)));
                    if ((temp_a0_12 == (var_s0_2 & 0xFFFF)) && (*(s32 *)((temp_a0_12 * 4) + ((temp_v0_5 * 0x18) + sGroupSortKeys)) < 90.0f)) {
                        temp_v0_6 = arg1 + (temp_a0_12 * 8);
                        if (!(M2C_FIELD(temp_v0_6, f32 *, 0x5B4) > (__repair_pin_3 = 0.5f))) {
                            var_v0_8 = arg1 + ((var_s0_2 & 0xFFFF) * 8);
                            var_condition_bit_3 = M2C_FIELD(var_v0_8, f32 *, 0x5B8) > (__repair_pin_3 = 0.5f);
block_206:
                            if (var_condition_bit_3) {
                                M2C_FIELD(arg1, s32 *, 0x898) = 1;
                                M2C_FIELD(var_v0_8, s32 *, 0x5B8) = 0;
                                goto block_208;
                            }
                        } else {
                            M2C_FIELD(arg1, s32 *, 0x898) = 1;
                            M2C_FIELD(temp_v0_6, f32 *, 0x5B4) = (f32) (M2C_FIELD(temp_v0_6, f32 *, 0x5B4) * M2C_FIELD(arg1, f32 *, 0x5A4));
block_208:
                            M2C_FIELD(arg1, u16 *, 6) |= 0x20;
                        }
                    }
                    goto block_209;
                case 6:                             /* switch 5 */
                case 12:                            /* switch 5 */
                    temp_a0_13 = var_s0_2 & 0xFFFF;
                    if ((*(s32 *)((temp_a0_13 * 4) + ((M2C_FIELD(arg1, u16 *, 4) * 0x18) + sGroupSortKeys)) < 800.0f) && (temp_s5 < temp_s2_2) && (var_fv1_5 < (__repair_pin_2 = 20.0f)) && (M2C_FIELD(arg1, u8 *, 0x778) == 0)) {
                        temp_v0_7 = arg1 + (temp_a0_13 * 8);
                        if (!(M2C_FIELD(temp_v0_7, f32 *, 0x5B4) > (__repair_pin_6 = 0.3f))) {
                            var_v0_9 = var_s0_2 & 0xFFFF;
block_205:
                            var_v0_8 = arg1 + (var_v0_9 * 8);
                            var_condition_bit_3 = M2C_FIELD(var_v0_8, f32 *, 0x5B8) > (__repair_pin_6 = 0.3f);
                            goto block_206;
                        }
                        M2C_FIELD(arg1, s32 *, 0x898) = 1;
                        M2C_FIELD(temp_v0_7, f32 *, 0x5B4) = (f32) (M2C_FIELD(temp_v0_7, f32 *, 0x5B4) * M2C_FIELD(arg1, f32 *, 0x5A4));
                        goto block_208;
                    }
                    goto block_209;
                case 7:                             /* switch 5 */
                    var_a0_3 = var_s0_2 & 0xFFFF;
                    temp_fv1_6 = *(s32 *)((var_a0_3 * 4) + ((M2C_FIELD(arg1, u16 *, 4) * 0x18) + sGroupSortKeys));
                    if ((temp_fv1_6 < (__repair_pin_8 = 500.0f)) && (temp_fv1_6 > (__repair_pin_1 = 200.0f)) && (temp_s2_2 < temp_s5)) {
                        var_v0_3 = M2C_FIELD(arg1, u8 *, 0x778) & 0x1F;
                        goto block_136;
                    }
                    goto block_209;
                case 8:                             /* switch 5 */
                case 9:                             /* switch 5 */
                case 10:                            /* switch 5 */
                    var_a0_3 = var_s0_2 & 0xFFFF;
                    temp_fv1_7 = *(s32 *)((var_a0_3 * 4) + ((M2C_FIELD(arg1, u16 *, 4) * 0x18) + sGroupSortKeys));
                    if (!(temp_fv1_7 < (__repair_pin_8 = 500.0f))) {
                        var_v0_7 = arg1 + ((var_s0_2 & 0xFFFF) * 8);
                        var_condition_bit_2 = M2C_FIELD(var_v0_7, f32 *, 0x5B8) > (__repair_pin_7 = 0.6f);
                        goto block_185;
                    }
                    if ((temp_fv1_7 > (__repair_pin_1 = 200.0f)) && (M2C_FIELD(arg1, f32 *, 0x770) > (__repair_pin_5 = 100.0f)) && (temp_s2_2 < temp_s5)) {
                        var_v0_3 = M2C_FIELD(arg1, u8 *, 0x778);
                        goto block_136;
                    }
                    goto block_209;
                case 11:                            /* switch 5 */
                    if ((M2C_FIELD(temp_s3_2, s8 *, 0x596) < 4) && (M2C_FIELD(arg1, u8 *, 0x778) == 0)) {
                        var_v0_5 = arg1 + ((var_s0_2 & 0xFFFF) * 8);
                        if (!(M2C_FIELD(var_v0_5, f32 *, 0x5B4) > (__repair_pin_6 = 0.3f))) {
                            var_v0_6 = var_s0_2 & 0xFFFF;
                            goto block_184;
                        }
                        goto block_183;
                    }
                    goto block_209;
                case 13:                            /* switch 5 */
                case 14:                            /* switch 5 */
                    temp_a0_14 = var_s0_2 & 0xFFFF;
                    temp_fv1_8 = *(s32 *)((temp_a0_14 * 4) + ((M2C_FIELD(arg1, u16 *, 4) * 0x18) + sGroupSortKeys));
                    if ((temp_fv1_8 < (__repair_pin_4 = 300.0f)) && (temp_fv1_8 > (__repair_pin_5 = 100.0f)) && (temp_s5 < temp_s2_2) && (var_fv1_5 < (__repair_pin_2 = 20.0f)) && !(M2C_FIELD(arg1, u8 *, 0x778) & 0x3F)) {
                        temp_v0_8 = arg1 + (temp_a0_14 * 8);
                        if (!(M2C_FIELD(temp_v0_8, f32 *, 0x5B4) > (__repair_pin_6 = 0.3f))) {
                            var_v0_9 = var_s0_2 & 0xFFFF;
                            goto block_205;
                        }
                        M2C_FIELD(arg1, s32 *, 0x898) = 1;
                        M2C_FIELD(temp_v0_8, f32 *, 0x5B4) = (f32) (M2C_FIELD(temp_v0_8, f32 *, 0x5B4) * M2C_FIELD(arg1, f32 *, 0x5A4));
                        goto block_208;
                    }
                    goto block_209;
                case 15:                            /* switch 5 */
                    temp_a0_15 = var_s0_2 & 0xFFFF;
                    temp_fv1_9 = *(s32 *)((temp_a0_15 * 4) + ((M2C_FIELD(arg1, u16 *, 4) * 0x18) + sGroupSortKeys));
                    if ((temp_fv1_9 < 900.0f) && (temp_fv1_9 > (__repair_pin_1 = 200.0f)) && (temp_s5 < temp_s2_2) && (var_fv1_5 < 50.0f) && !(M2C_FIELD(arg1, u8 *, 0x778) & 0xF)) {
                        temp_v0_9 = arg1 + (temp_a0_15 * 8);
                        if (!(M2C_FIELD(temp_v0_9, f32 *, 0x5B4) > (__repair_pin_6 = 0.3f))) {
                            var_v0_9 = var_s0_2 & 0xFFFF;
                            goto block_205;
                        }
                        M2C_FIELD(arg1, s32 *, 0x898) = 1;
                        M2C_FIELD(temp_v0_9, f32 *, 0x5B4) = (f32) (M2C_FIELD(temp_v0_9, f32 *, 0x5B4) * M2C_FIELD(arg1, f32 *, 0x5A4));
                        goto block_208;
                    }
                    goto block_209;
                }
            } else {
                goto block_209;
            }
        } else {
block_209:
            var_s0_2 += 1;
        }
        var_v0_2 = var_s0_2 & 0xFFFF;
    } while ((u32) (var_s0_2 & 0xFFFF) < 7U);
    func_80221AD0(arg1);
}
