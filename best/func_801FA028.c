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

s32 func_801FA028(f32 arg0, f32 arg1) {
    f32 var_ft0;
    f32 var_fv1;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    u16 var_v1;

    var_ft0 = arg0;
    if (!(arg0 > 0.0f)) {
        var_ft0 = -arg0;
    }
    var_fv1 = arg1;
    if (!(arg1 > 0.0f)) {
        var_fv1 = -arg1;
    }
    if (var_ft0 == 0.0f) {
        var_v0 = 0x10E;
        if (arg1 > 0.0f) {
            return 0x5A;
        }
        /* Duplicate return node #26. Try simplifying control flow for better match */
        return var_v0;
    }
    if (var_fv1 == 0.0f) {
        var_v0 = 0xB4;
        if (arg0 > 0.0f) {
            return 0;
        }
        /* Duplicate return node #26. Try simplifying control flow for better match */
        return var_v0;
    }
    if (var_ft0 == var_fv1) {
        if (arg0 > 0.0f) {
            var_v0 = 0x13B;
            if (arg1 > 0.0f) {
                return 0x2D;
            }
            /* Duplicate return node #26. Try simplifying control flow for better match */
            return var_v0;
        }
        var_v0 = 0xE1;
        if (arg1 > 0.0f) {
            return 0x87;
        }
        /* Duplicate return node #26. Try simplifying control flow for better match */
        return var_v0;
    }
    if (var_fv1 < var_ft0) {
        var_v1 = *(&D_801FB230 + ((s32) ((var_fv1 * 64.0f) / var_ft0) * 2));
    } else {
        var_v1 = 0x5A - *(&D_801FB230 + ((s32) ((var_ft0 * 64.0f) / var_fv1) * 2));
    }
    if (arg1 < 0.0f) {
        var_v0_2 = var_v1 + 0xB4;
        if (!(arg0 < 0.0f)) {
            temp_v1 = var_v1 & 0xFFFF;
            var_v0_3 = 0x168 - temp_v1;
            var_v1 = ((0x168 - temp_v1) / 360) * 0x168;
            goto block_24;
        }
        goto block_25;
    }
    var_v0_3 = 0xB4;
    if (!(arg0 < 0.0f)) {
        return var_v1 & 0xFFFF;
    }
block_24:
    var_v0_2 = var_v0_3 - var_v1;
block_25:
    var_v0 = var_v0_2 & 0xFFFF;
    return var_v0;
}
