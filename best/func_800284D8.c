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

s32 func_800339C0();
extern void *D_800DDE88;

void func_800284D8(void *arg0, s32 arg1, s16 arg2) {
    s32 temp_v0;

    temp_v0 = func_800339C0(1);
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s16 *, 8) = arg2;
    M2C_FIELD(arg0, void **, 0) = (void *) D_800DDE88;
    D_800DDE88 = arg0;
    func_800339C0(temp_v0, &D_800DDE88);
}
