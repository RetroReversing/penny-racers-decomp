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
M2C_UNK func_8013EC14(s32, f32, s32, f32);          /* extern */
extern M2C_UNK func_8011EDAC;

void func_8011893C(s32 arg0) {
    f32 temp_fv1;
    s32 temp_s2;
    void *temp_s0;
    void *temp_s1;

    temp_s2 = (arg0 & 0xFFFF) * 0x64;
    temp_s0 = temp_s2 + (&func_8011EDAC + 0x544);
    temp_s1 = M2C_FIELD(temp_s0, void **, 0x60);
    M2C_FIELD(temp_s0, u8 *, 0xC) = (u8) (M2C_FIELD(temp_s0, u8 *, 0xC) - 4);
    if ((u8) M2C_FIELD(temp_s0, u8 *, 0xC) < 5U) {
        func_8013E49C(M2C_FIELD(temp_s1, u16 *, 0x76));
        *(&func_8011EDAC + 0x551 + temp_s2) = 2;
    }
    temp_fv1 = (M2C_FIELD(temp_s1, f32 *, 8) * 0.7f) + M2C_FIELD(temp_s0, f32 *, 0x30);
    func_8013EC14(arg0 & 0xFFFF, temp_fv1, M2C_FIELD(temp_s0, s32 *, 0x34), temp_fv1);
    M2C_FIELD(temp_s0, f32 *, 0x28) = (f32) (M2C_FIELD(temp_s0, f32 *, 0x28) + 5.0f);
}
