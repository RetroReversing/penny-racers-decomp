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

s16 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, M2C_UNK *, M2C_UNK *, s32, s32, s32, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_801D87FC();                            /* extern */
M2C_UNK func_80209AEC();                            /* extern */
M2C_UNK func_8021FCA4();                            /* extern */
extern M2C_UNK D_801D5A90;
extern M2C_UNK D_801D6670;
extern s16 D_8021EFFA;
extern s16 D_8021F00E;
extern M2C_UNK D_8021FE04;
extern M2C_UNK D_8022026C;

void func_80143DCC(void) {
    func_801D87FC();
    func_80209AEC();
    func_8021FCA4();
    D_8021EFFA = func_800DE41C(0, 0, 3, 0, 0x50, 0xFF, 0, NULL, &D_8021FE04, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    D_8021F00E = func_800DE41C(0, 0, 3, 0, 0x50, 0xFF, 0, NULL, &D_8022026C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0xFF, 3, 0, 0x7F, 0, 0, &D_801D5A90, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0xFF, 3, 0, 0x7F, 0, 0, &D_801D6670, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}
