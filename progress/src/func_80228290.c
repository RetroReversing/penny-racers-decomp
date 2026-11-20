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

s32 func_80221AD0();
extern f64 D_80229AF0;

void func_80228290(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, f32 *, 0x748) = (f32) ((f64) M2C_FIELD(arg1, f32 *, 0x748) * D_80229AF0);
    M2C_FIELD(arg1, s8 *, 0x8D0) = 0x78;
    M2C_FIELD(arg1, s8 *, 0x87B) = 0;
    M2C_FIELD(arg1, s8 *, 0x87C) = 0;
    M2C_FIELD(arg1, s32 *, 0x894) = 1;
    M2C_FIELD(arg1, s32 *, 0x89C) = 0;
    M2C_FIELD(arg1, s32 *, 0x898) = 0;
    func_80221AD0(arg1);
}
