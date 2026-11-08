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

extern M2C_UNK D_80221080;
extern M2C_UNK D_80221084;
extern M2C_UNK D_80221088;
extern M2C_UNK D_8022108C;
extern M2C_UNK D_80221090;
extern M2C_UNK D_80221094;
extern M2C_UNK D_80221098;
extern M2C_UNK D_8022109C;
extern M2C_UNK D_802210A0;

void func_80209AEC(void) {
    s32 temp_v0;
    s32 var_v1;

    var_v1 = 0;
    __repair_rows: {
        temp_v0 = var_v1 * 0x24;
        *(&D_80221080 + temp_v0) = 0;
        *(&D_80221084 + temp_v0) = 0;
        *(&D_80221088 + temp_v0) = 50.0f;
        *(&D_8022108C + temp_v0) = 0;
        *(&D_80221090 + temp_v0) = 0;
        *(&D_80221094 + temp_v0) = 0;
        *(&D_80221098 + temp_v0) = 0;
        *(&D_8022109C + temp_v0) = 1.0f;
        *(&D_802210A0 + temp_v0) = 0;
        var_v1 += 1;
    }
if (var_v1 < 0xC) goto __repair_rows;
}
