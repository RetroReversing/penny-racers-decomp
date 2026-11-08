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

extern M2C_UNK D_801FB230;

s32 func_801F9D8C(s32 arg0, s32 arg1) {
    f32 var_fv0;
    f32 var_fv0_2;
    f32 var_fv1;
    f32 var_fv1_2;
    s32 temp_a3;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    u16 var_v1;

    var_fv1 = (f32) arg0;
    if (var_fv1 > 0.0f) {
        if (var_fv1 >= 2.1474836e9f) {
            var_fv0 = var_fv1 - 2.1474836e9f;
            goto block_7;
        }
        goto block_6;
    }
    var_fv1 = -(f32) arg0;
    if (var_fv1 >= 2.1474836e9f) {
        var_fv0 = var_fv1 - 2.1474836e9f;
block_7:
        var_a2 = (s32) var_fv0 | 0x80000000;
    } else {
block_6:
        var_a2 = (s32) var_fv1;
    }
    var_fv1_2 = (f32) arg1;
    temp_a3 = var_a2 & 0xFFFF;
    if (var_fv1_2 > 0.0f) {
        if (var_fv1_2 >= 2.1474836e9f) {
            var_fv0_2 = var_fv1_2 - 2.1474836e9f;
            goto block_15;
        }
        goto block_14;
    }
    var_fv1_2 = -(f32) arg1;
    if (var_fv1_2 >= 2.1474836e9f) {
        var_fv0_2 = var_fv1_2 - 2.1474836e9f;
block_15:
        var_a2_2 = (s32) var_fv0_2 | 0x80000000;
    } else {
block_14:
        var_a2_2 = (s32) var_fv1_2;
    }
    temp_v1 = var_a2_2 & 0xFFFF;
    if (temp_a3 == 0) {
        var_v0 = 0x10E;
        if (arg1 > 0) {
            return 0x5A;
        }
        /* Duplicate return node #40. Try simplifying control flow for better match */
        return var_v0;
    }
    if (temp_v1 == 0) {
        return -(arg0 < 1) & 0xB4;
    }
    if (temp_a3 == temp_v1) {
        if (arg0 > 0) {
            var_v0 = 0x13B;
            if (arg1 > 0) {
                return 0x2D;
            }
            /* Duplicate return node #40. Try simplifying control flow for better match */
            return var_v0;
        }
        var_v0 = 0xE1;
        if (arg1 > 0) {
            return 0x87;
        }
        /* Duplicate return node #40. Try simplifying control flow for better match */
        return var_v0;
    }
    if (temp_v1 < temp_a3) {
        var_v1 = *(&D_801FB230 + (((s32) (temp_v1 << 6) / temp_a3) * 2));
    } else {
        var_v1 = 0x5A - *(&D_801FB230 + (((s32) (temp_a3 << 6) / temp_v1) * 2));
    }
    if (arg1 < 0) {
        if (arg0 >= 0) {
            temp_v1_2 = var_v1 & 0xFFFF;
            var_v0_2 = 0x168 - temp_v1_2;
            var_v1 = ((0x168 - temp_v1_2) / 360) * 0x168;
            goto block_38;
        }
        var_v0_3 = var_v1 + 0xB4;
        goto block_39;
    }
    var_v0 = var_v1 & 0xFFFF;
    if (arg0 < 0) {
        var_v0_2 = 0xB4;
block_38:
        var_v0_3 = var_v0_2 - var_v1;
block_39:
        var_v0 = var_v0_3 & 0xFFFF;
    }
    return var_v0;
}
