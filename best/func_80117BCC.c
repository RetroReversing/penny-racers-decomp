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

M2C_UNK func_8013E49C(u16);                         /* extern */
M2C_UNK func_8013EDFC(s32, void *);                 /* extern */
extern M2C_UNK func_8011EDAC;

void func_80117BCC(s32 arg0) {
    s32 temp_s1;
    s32 var_a0;
    u16 temp_v0;
    void *temp_s0;

    temp_s1 = (arg0 & 0xFFFF) * 0x64;
    temp_s0 = *(&func_8011EDAC + 0x5A4 + temp_s1);
    M2C_FIELD(temp_s0, f32 *, 0x70) = (f32) (M2C_FIELD(temp_s0, f32 *, 0x70) + 15.0f);
    temp_v0 = M2C_FIELD(temp_s0, u16 *, 0x14) - 1;
    M2C_FIELD(temp_s0, u16 *, 0x14) = temp_v0;
    var_a0 = arg0 & 0xFFFF;
    if (temp_v0 & 0x8000) {
        func_8013E49C(M2C_FIELD(temp_s0, u16 *, 0x76));
        *(&func_8011EDAC + 0x551 + temp_s1) = 2;
        var_a0 = arg0 & 0xFFFF;
    }
    func_8013EDFC(var_a0, temp_s0);
}
