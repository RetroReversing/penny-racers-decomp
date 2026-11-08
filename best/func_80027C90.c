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

M2C_UNK func_800294A0(s32, s32, s32);               /* extern */
extern M2C_UNK D_8006FCAC;
extern M2C_UNK D_8006FCB0;
extern s32 D_8006FF00;

void func_80027C90(s32 arg0, s32 arg1) {
    s32 temp_a2;
    s32 temp_v0;
    void *temp_v1;

    temp_v0 = arg0 * 0x184;
    *(&D_8006FCB0 + temp_v0) = arg1;
    temp_v1 = D_8006FF00 + (arg1 * 8);
    temp_a2 = M2C_FIELD(temp_v1, s32 *, 8);
    func_800294A0(M2C_FIELD(temp_v1, s32 *, 4), *(&D_8006FCAC + temp_v0), temp_a2 + (temp_a2 & 1));
}
