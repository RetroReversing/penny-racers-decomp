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

void *func_8002EB30();
s32 func_80034640();
extern f64 D_8004A460;

void *func_8002F250(s16 *arg0, u16 *arg1, s32 arg2) {
    s16 sp10;
    f32 temp_ft0;
    f32 temp_fv1;
    s32 temp_fv0;
    s32 temp_s0;
    void *temp_s2;
    void *temp_v0;
    void *var_s2;

    sp10 = 0x170;
    if (M2C_FIELD(arg0, s32 *, 0x48) != 0) {
        temp_v0 = func_8002EB30(arg0, &sp10, (s16 *)0xB8, arg2);
        M2C_FIELD(temp_v0, s32 *, 0) = (s32) ((sp10 & 0xFFFFFF) | 0x0A000000);
        var_s2 = temp_v0 + 8;
        M2C_FIELD(temp_v0, s32 *, 4) = (s32) ((*arg1 << 0x10) | 0x170);
    } else {
        if (D_8004A460 < (f64) M2C_FIELD(arg0, f32 *, 0x44)) {
            M2C_FIELD(arg0, f32 *, 0x44) = 1.99996f;
        }
        temp_ft0 = (f32) (s32) (M2C_FIELD(arg0, f32 *, 0x44) * 32768.0f) / 32768.0f;
        temp_fv1 = M2C_FIELD(arg0, f32 *, 0x4C) + (temp_ft0 * 184.0f);
        temp_fv0 = (s32) temp_fv1;
        M2C_FIELD(arg0, f32 *, 0x44) = temp_ft0;
        M2C_FIELD(arg0, f32 *, 0x4C) = (f32) (temp_fv1 - (f32) temp_fv0);
        temp_s2 = func_8002EB30(arg0, &sp10, temp_fv0, arg2);
        temp_s0 = (s32) (M2C_FIELD(arg0, f32 *, 0x44) * 32768.0f) & 0xFFFF;
        M2C_FIELD(temp_s2, s32 *, 0) = (s32) ((func_80034640(M2C_FIELD(arg0, s32 *, 0x40)) & 0xFFFFFF) | 0x05000000);
        var_s2 = temp_s2 + 8;
        M2C_FIELD(temp_s2, s32 *, 4) = (s32) ((M2C_FIELD(arg0, s32 *, 0x50) << 0x1E) | (temp_s0 << 0xE) | (((u16) sp10 & 0xFFF) * 4));
        M2C_FIELD(arg0, s32 *, 0x50) = 0;
    }
    return var_s2;
}
