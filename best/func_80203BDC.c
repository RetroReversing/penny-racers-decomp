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

M2C_UNK func_80149CC4(s32, M2C_UNK);                /* extern */
s32 func_8014A030(s32, s32, M2C_UNK);               /* extern */
extern M2C_UNK D_8018D3A0;
extern M2C_UNK D_8018D3A4;
extern M2C_UNK D_8018D3A8;
extern M2C_UNK D_8018D3AC;
extern M2C_UNK D_8018D3B0;
extern M2C_UNK D_8018D3B4;
extern M2C_UNK D_8018D3B8;
extern M2C_UNK D_8018D3BC;
extern M2C_UNK D_8021AFFC;

void func_80203BDC(s32 arg0) {
    s32 temp_s0;

    temp_s0 = arg0 << 5;
    *(&D_8018D3A0 + temp_s0) = 0;
    *(&D_8018D3A4 + temp_s0) = 0x4081;
    *(&D_8018D3A8 + temp_s0) = 1;
    *(&D_8018D3AC + temp_s0) = 1;
    *(&D_8018D3B0 + temp_s0) = 1;
    *(&D_8018D3B4 + temp_s0) = 0;
    *(&D_8018D3B8 + temp_s0) = 0;
    *(&D_8018D3BC + temp_s0) = 8;
    *(&D_8018D3A0 + temp_s0) = func_8014A030(*(&D_8018D3A0 + temp_s0), *(&D_8021AFFC + (arg0 * 4)), 1);
    func_80149CC4(arg0, 0);
}
