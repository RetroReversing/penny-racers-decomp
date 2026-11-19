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

M2C_UNK func_8002D030(s32);                         /* extern */
M2C_UNK n_alSndpStop();                             /* extern */
extern M2C_UNK D_801D7DF0;
extern M2C_UNK D_801D7DF1;
extern M2C_UNK D_801D7DF2;
extern M2C_UNK D_801D7DF4;
extern M2C_UNK D_801D7DF8;
extern M2C_UNK D_801D7DFC;
extern M2C_UNK D_801D7E00;
extern M2C_UNK D_801D7E04;
extern M2C_UNK D_801D7E06;
extern M2C_UNK D_801D7E08;
extern M2C_UNK D_801D7E09;
extern M2C_UNK D_801D7E16;
extern M2C_UNK D_801D7E18;

void func_801D63F4(void) {
    s32 temp_v1;
    s32 var_a0;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_v0;

    var_s0 = 0;
    var_v0 = 0 & 0xFFFF;
    __repair_rows: {
        temp_v1 = var_v0 * 0x2C;
        *(&D_801D7DF0 + temp_v1) = 0;
        *(&D_801D7DF1 + temp_v1) = 0;
        *(&D_801D7DF2 + temp_v1) = 0;
        *(&D_801D7DF4 + temp_v1) = -1;
        *(&D_801D7DF8 + temp_v1) = 0;
        *(&D_801D7DFC + temp_v1) = 0;
        *(&D_801D7E00 + temp_v1) = 1.0f;
        *(&D_801D7E04 + temp_v1) = 0;
        *(&D_801D7E06 + temp_v1) = 0x7FFF;
        *(&D_801D7E08 + temp_v1) = 0x40;
        *(&D_801D7E16 + temp_v1) = 0xFF;
        *(&D_801D7E09 + temp_v1) = 0;
        *(&D_801D7E18 + temp_v1) = 0;
        var_s0 += 1;
        var_v0 = var_s0 & 0xFFFF;
    }
if ((u32) (var_s0 & 0xFFFF) < 8U) goto __repair_rows;
    var_s0_2 = 0;
    var_a0 = 0 << 0x10;
    do {
        func_8002D030(var_a0 >> 0x10);
        var_s0_2 += 1;
        n_alSndpStop();
        var_a0 = var_s0_2 << 0x10;
    } while ((u32) (var_s0_2 & 0xFFFF) < 8U);
}
