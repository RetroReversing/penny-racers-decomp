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

extern M2C_UNK D_8018D3A0;
extern M2C_UNK D_8018D3A4;
extern M2C_UNK D_8018D3B0;
extern M2C_UNK D_8018D3B4;
extern M2C_UNK D_8018D3B8;
extern M2C_UNK D_8018D3BC;

s32 func_8014BB30(s32 arg0) {
    s32 var_a1;

    var_a1 = 0;
    if (*(&D_8018D3A0 + ((arg0 & 0xFF) << 5)) & 0x2000) {
        var_a1 = 0x800;
    }
    if (*(&D_8018D3A4 + ((arg0 & 0xFF) << 5)) & 0x200000) {
        var_a1 |= 1;
    }
    if (*(&D_8018D3A4 + ((arg0 & 0xFF) << 5)) & 0x400000) {
        var_a1 |= 2;
    }
    if (*(&D_8018D3A4 + ((arg0 & 0xFF) << 5)) & 0x800000) {
        var_a1 |= 4;
    }
    if (*(&D_8018D3A4 + ((arg0 & 0xFF) << 5)) & 0x01000000) {
        var_a1 |= 8;
    }
    if (*(&D_8018D3B0 + ((arg0 & 0xFF) << 5)) & 0x200) {
        var_a1 |= 0x10;
    }
    if (*(&D_8018D3B4 + ((arg0 & 0xFF) << 5)) & 0x40) {
        var_a1 |= 0x20;
    }
    if (*(&D_8018D3B4 + ((arg0 & 0xFF) << 5)) & 0x80) {
        var_a1 |= 0x40;
    }
    if (*(&D_8018D3B8 + ((arg0 & 0xFF) << 5)) & 0x40000) {
        var_a1 |= 0x80;
    }
    if (*(&D_8018D3B8 + ((arg0 & 0xFF) << 5)) & 0x80000) {
        var_a1 |= 0x100;
    }
    if (*(&D_8018D3B8 + ((arg0 & 0xFF) << 5)) & 0x100000) {
        var_a1 |= 0x200;
    }
    if (*(&D_8018D3BC + ((arg0 & 0xFF) << 5)) & 0x4000) {
        var_a1 |= 0x400;
    }
    return var_a1 & 0xFFFF;
}
