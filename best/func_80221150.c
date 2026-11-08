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

extern u16 func_800E1850;
extern M2C_UNK func_801153C8;
extern M2C_UNK func_8018B030;

void func_80221150(s32 arg0) {
    s32 temp_v1;
    s32 var_v0;
    s32 var_v1;

    var_v0 = func_800E1850 & 0xFFFF;
    if ((func_800E1850 & 0xFFFF) != 0xFFFF) {
        var_v1 = var_v0 * 2;
        __repair_rows: {
            temp_v1 = (((var_v1 + var_v0) * 8) + var_v0) * 4;
            *(&func_801153C8 + 0x9F35 + temp_v1) = 4;
            var_v0 = *(&func_801153C8 + 0x9F38 + temp_v1) & 0xFFFF;
            var_v1 = var_v0 * 2;
        }
if (var_v0 != 0xFFFF) goto __repair_rows;
    }
    *(&func_801153C8 + 0x9F35 + (M2C_FIELD(&func_8018B030, u16 *, 0xC0C) * 0x64)) = 0;
    *(&func_801153C8 + 0x9F35 + ((arg0 & 0xFFFF) * 0x64)) = 0;
}
