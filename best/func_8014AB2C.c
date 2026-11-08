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

extern M2C_UNK D_8018D3A4;
extern M2C_UNK D_8018D3A8;
extern M2C_UNK D_8018D3AC;
extern M2C_UNK D_8018D3B0;
extern M2C_UNK D_8018D3B4;
extern M2C_UNK D_8018D3B8;
extern M2C_UNK D_8018D3BC;

s32 func_8014AB2C(s32 arg0, s32 arg1) {
    s32 temp_a0;

    temp_a0 = (arg0 & 0xFF) << 5;
    return (((*(&D_8018D3A4 + temp_a0) & ~0x4081) | (*(&D_8018D3A8 + temp_a0) & ~1) | (*(&D_8018D3AC + temp_a0) & ~1) | (*(&D_8018D3B0 + temp_a0) & ~1) | *(&D_8018D3B4 + temp_a0) | *(&D_8018D3B8 + temp_a0) | (*(&D_8018D3BC + temp_a0) & ~8)) == 0) & ((arg1 & 0xFF) == 1);
}
