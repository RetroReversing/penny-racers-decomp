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

f32 func_80221230();

void func_80224410(void *arg0) {
    f32 temp_fv1;
    u8 temp_v0;

    if ((M2C_FIELD(arg0, s32 *, 0x890) != 0) && (M2C_FIELD(arg0, s32 *, 0x894) == 0)) {
        M2C_FIELD(arg0, f32 *, 0x77C) = func_80221230(arg0, M2C_FIELD(arg0, u8 *, 0x74C), M2C_FIELD(arg0, s32 *, 0x770));
        if ((M2C_FIELD(arg0, u8 *, 0x860) == 0) && (M2C_FIELD(arg0, u8 *, 0x8A1) != 3)) {
            M2C_FIELD(arg0, f32 *, 0x77C) = 2000.0f;
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0x77C) = -500.0f;
        M2C_FIELD(arg0, f32 *, 0x748) = (f32) (M2C_FIELD(arg0, f32 *, 0x748) * 0.9998f);
    }
    temp_fv1 = M2C_FIELD(arg0, f32 *, 0x77C) - M2C_FIELD(arg0, f32 *, 0x780);
    M2C_FIELD(arg0, f32 *, 0x744) = temp_fv1;
    temp_v0 = M2C_FIELD(arg0, u8 *, 0x74C);
    if ((((temp_v0 == 0) | (temp_v0 == 5)) != 0) && (M2C_FIELD(arg0, s32 *, 0x890) != 0) && (temp_fv1 < 400.0f)) {
        M2C_FIELD(arg0, f32 *, 0x744) = 400.0f;
    }
}
