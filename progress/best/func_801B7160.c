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

s32 func_8014A4C8();
s32 func_801CA468();

void func_801B7160(s32 arg0) {
    func_801CA468(arg0, 0xA0);
    func_8014A4C8(arg0, 0x11, 0xB1, 0xD, 0x27);
    func_8014A4C8(arg0, 0x11, 0xDA, 0xD, 0x28);
    func_8014A4C8(arg0, 0xE7, 0xB1, 0xD, 0x29);
    func_8014A4C8(arg0, 0xE7, 0xDA, 0xD, 0xB);
    func_801CA468(arg0, 0xFF);
}
