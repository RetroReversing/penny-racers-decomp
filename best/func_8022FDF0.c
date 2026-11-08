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

M2C_UNK func_801D65BC(u8, s32);                     /* extern */
extern M2C_UNK D_80232868;

void func_8022FDF0(s32 arg0, s32 arg1) {
    s32 var_a0;
    s32 var_a1;

    var_a0 = arg0;
    var_a1 = arg1;
    if ((u32) (var_a0 & 0xFFFF) >= 0xAU) {
        var_a0 = 9;
    }
    if ((u32) (var_a1 & 0xFFFF) >= 2U) {
        var_a1 = 1;
    }
    func_801D65BC(*(&D_80232868 + ((var_a0 + ((var_a1 & 0xFFFF) * 0xA)) & 0xFFFF)), var_a1);
}
