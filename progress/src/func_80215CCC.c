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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8014A4C8();
s32 func_801CA140();
s32 func_801CA468();
s32 func_801CA494();
s32 func_801CCE7C();
extern char D_802E66D8[];
extern char D_802F92E0[];

void func_80215CCC(s32 arg0) {
    func_801CA140();
    func_801CA468(arg0, 0xFF);
    func_801CA494(arg0, 0x78, 0x78, 0x78, 0xFF);
    func_801CCE7C(arg0, 0, 0, 0, 0, 0x140, 0xF0, 0x140, 0xF0, 0x40, 0x20, 0, 0, 0x13F, 0xEF, &D_802E66D8, &D_802F92E0);
    func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    func_8014A4C8(arg0, 0x50, 0x18, 0xA, 0x1F);
    func_8014A4C8(arg0, 0x61, 0x1A, 0xA, 6);
}
