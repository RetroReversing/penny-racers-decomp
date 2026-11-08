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

M2C_UNK func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, s32, M2C_UNK *, f32, f32, f32, s32, s32, s32, f32, f32, f32); /* extern */
extern M2C_UNK D_8006FAF0;
extern M2C_UNK D_8013DCBC;
extern M2C_UNK D_80239644;

void func_800F5A48(void) {
    if (M2C_FIELD(&D_8006FAF0, u16 *, 0x20) == 5) {
        func_800DE41C(0, 0, 1, 0x140, 0x41, 0xFF, &D_80239644, 0, &D_8013DCBC, -400.0f, 200.0f, 400.0f, 0, 0, 0, 2.0f, 2.0f, 2.0f);
    }
}
