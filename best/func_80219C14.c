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

M2C_UNK func_8014A4C8(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_801CA140();                            /* extern */
M2C_UNK func_801CCE7C(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, M2C_UNK *, M2C_UNK *); /* extern */
extern s16 D_8021E1A6;
extern M2C_UNK D_80301DE8;
extern M2C_UNK D_80303310;

void func_80219C14(s32 arg0) {
    func_801CA140();
    func_801CCE7C(arg0, 0x3A, 0x2B, 0, 0, 0xD0, 0x1A, 0xD0, 0x1A, 0x40, 0x20, 0, 0, 0x13F, 0xEF, &D_80301DE8, &D_80303310);
    func_8014A4C8(arg0, 0xDC, 0xB4, 0xB, D_8021E1A6 + 0x43);
}
