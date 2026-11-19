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

f32 func_80221230(void *arg0, s32 arg1, f32 arg2) {
    f32 temp_fa0;
    f32 temp_ft0;
    f32 temp_ft1;
    f32 temp_ft3;
    f32 temp_fv0;
    f32 var_ft2;
    f32 var_fv1;
    s32 var_a1;
    void *temp_v0;

    var_a1 = arg1;
    var_ft2 = arg2;
    if ((u32) (var_a1 & 0xFFFF) >= 5U) {
        var_a1 = 4;
    }
    if (var_ft2 < 10.0f) {
        var_ft2 = 10.0f;
    }
    temp_v0 = ((((var_a1 & 0xFFFF) * 6) & 0xFFFF) * 4) + M2C_FIELD(arg0, s32 *, 0x23C);
    temp_ft3 = M2C_FIELD(temp_v0, f32 *, 4);
    temp_fa0 = M2C_FIELD(temp_v0, f32 *, 0xC);
    var_fv1 = M2C_FIELD(temp_v0, f32 *, 0x14);
    temp_ft0 = M2C_FIELD(temp_v0, f32 *, 0);
    temp_ft1 = M2C_FIELD(temp_v0, f32 *, 8);
    temp_fv0 = M2C_FIELD(temp_v0, f32 *, 0x10);
    if (var_ft2 < temp_ft0) {
        var_fv1 = temp_ft3 / (temp_ft0 - var_ft2);
        if (temp_ft3 < var_fv1) {
            var_fv1 = temp_ft3;
        }
    } else if (var_ft2 < temp_ft1) {
        var_fv1 = (((temp_fa0 - temp_ft3) / (temp_ft1 - temp_ft0)) * (var_ft2 - temp_ft0)) + temp_ft3;
    } else if (var_ft2 < temp_fv0) {
        var_fv1 = (((var_fv1 - temp_fa0) / (temp_fv0 - temp_ft1)) * (var_ft2 - temp_ft1)) + temp_fa0;
    }
    return var_fv1;
}
