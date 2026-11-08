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

M2C_UNK func_80127AB0(void *, M2C_UNK, M2C_UNK, s32, s32, f32, f32, f32, s32); /* extern */
extern M2C_UNK D_8011F2F0;

void func_80129BAC(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    func_80127AB0((M2C_FIELD(arg0, u16 *, 4) * 0x64) + &D_8011F2F0, 0x41400000, arg1, arg2, arg3, arg4, arg5, arg6, 0);
}
