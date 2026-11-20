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

void func_80224508(void *arg0) {
    f32 temp_fv0;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 var_fv0;
    f32 var_fv1;

    if (M2C_FIELD(arg0, u8 *, 0x8A1) == 2) {
        var_fv0 = M2C_FIELD(arg0, f32 *, 0x744) * 0.02f;
    } else {
        var_fv0 = M2C_FIELD(arg0, f32 *, 0x744) * 0.04f;
    }
    M2C_FIELD(arg0, f32 *, 0x748) = (f32) (var_fv0 + M2C_FIELD(arg0, f32 *, 0x748));
    if (M2C_FIELD(arg0, u8 *, 0x74D) != 0) {
        M2C_FIELD(arg0, u8 *, 0x74D) -= 1;
        temp_fv1 = M2C_FIELD(arg0, f32 *, 0x748);
        temp_fv1_2 = temp_fv1 - ((temp_fv1 - (M2C_FIELD(arg0, f32 *, 0x770) * *(s32 *)((M2C_FIELD(arg0, u8 *, 0x74C) * 4) + M2C_FIELD(arg0, s32 *, 0x238)))) * 0.9f);
        M2C_FIELD(arg0, f32 *, 0x748) = temp_fv1_2;
        M2C_FIELD(arg0, f32 *, 0x770) = (f32) (temp_fv1_2 / *(s32 *)((M2C_FIELD(arg0, u8 *, 0x74C) * 4) + M2C_FIELD(arg0, s32 *, 0x238)));
    }
    temp_fv1_3 = M2C_FIELD(arg0, f32 *, 0x754);
    if (temp_fv1_3 > 0.0f) {
        temp_fv0 = temp_fv1_3 * 0.8f;
        M2C_FIELD(arg0, f32 *, 0x754) = temp_fv0;
        M2C_FIELD(arg0, f32 *, 0x748) = (f32) ((temp_fv0 * 0.5f) + M2C_FIELD(arg0, f32 *, 0x748));
        if (M2C_FIELD(arg0, f32 *, 0x754) < 50.0f) {
            M2C_FIELD(arg0, f32 *, 0x754) = 0.0f;
        }
    }
    var_fv1 = 7000.0f;
    if ((M2C_FIELD(arg0, f32 *, 0x748) > 7000.0f) || (var_fv1 = 1000.0f, (M2C_FIELD(arg0, f32 *, 0x748) < 1000.0f))) {
        M2C_FIELD(arg0, f32 *, 0x748) = var_fv1;
    }
}
