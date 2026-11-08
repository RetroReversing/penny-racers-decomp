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

M2C_UNK func_80149CC4(M2C_UNK);                     /* extern */
extern M2C_UNK D_8018D3A0;
extern M2C_UNK D_8018D3A4;
extern M2C_UNK D_8018D3A8;
extern M2C_UNK D_8018D3AC;
extern M2C_UNK D_8018D3B0;
extern M2C_UNK D_8018D3B4;
extern M2C_UNK D_8018D3B8;
extern M2C_UNK D_8018D3BC;

void func_80203CB0(s32 arg0) {
    s32 temp_v1;

    temp_v1 = arg0 << 5;
    *(&D_8018D3A0 + temp_v1) = 0x1FFF;
    *(&D_8018D3A4 + temp_v1) = 0x01FFFFFF;
    *(&D_8018D3A8 + temp_v1) = 0xFFF;
    *(&D_8018D3AC + temp_v1) = 0x1FF;
    *(&D_8018D3B0 + temp_v1) = 0x3FF;
    *(&D_8018D3B4 + temp_v1) = 0xFF;
    *(&D_8018D3B8 + temp_v1) = 0x1FFFFF;
    *(&D_8018D3BC + temp_v1) = 0x7FFF;
    func_80149CC4(0);
}
