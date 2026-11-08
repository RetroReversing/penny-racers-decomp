/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O1, tried by autopilot */
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

extern s16 D_80126FF2;
extern M2C_UNK func_800E1EB0;
extern M2C_UNK func_800E22DC;
extern M2C_UNK func_801153C8;

void func_800DE38C(void) {
    s16 temp_v1;
    s16 var_a0;
    s32 temp_v0;
    s32 var_v0;

    M2C_FIELD(&func_800E1EB0, s16 *, 0x20) = 0x140;
    D_80126FF2 = 0;
    M2C_FIELD(&func_800E22DC, s16 *, 0x384) = 0xFFFF;
    M2C_FIELD((&func_800E22DC + 0x384), s16 *, 2) = 1;
    var_a0 = 1;
    var_v0 = 1 * 2;
    __repair_rows: {
        temp_v0 = (((var_v0 + var_a0) << 5) + var_a0) * 8;
        *(&func_800E22DC + 0x384 + temp_v0) = var_a0 - 1;
        temp_v1 = var_a0 + 1;
        *(&func_800E22DC + 0x386 + temp_v0) = temp_v1;
        var_a0 = temp_v1;
        var_v0 = var_a0 * 2;
    }
if (var_a0 < 0x13F) goto __repair_rows;
    M2C_FIELD(&func_801153C8, s16 *, 0x9990) = 0x13E;
    M2C_FIELD((&func_801153C8 + 0x9990), s16 *, 2) = 0xFFFF;
}
