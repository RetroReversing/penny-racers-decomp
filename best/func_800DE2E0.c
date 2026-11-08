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

extern M2C_UNK D_80126F9C;
extern s16 D_80126FF0;
extern s16 D_80126FF4;
extern s16 func_800E1850;
extern M2C_UNK func_801153C8;

void func_800DE2E0(void) {
    s16 temp_v1;
    s16 var_a0;
    s32 temp_v0_2;
    s32 var_v0;
    void *temp_v0;

    D_80126FF0 = 0x140;
    D_80126FF4 = 0;
    func_800E1850 = 0xFFFF;
    temp_v0 = &func_801153C8 + 0x9F38;
    M2C_FIELD(&func_801153C8, s16 *, 0x9F38) = 0xFFFF;
    M2C_FIELD(temp_v0, s16 *, 2) = 1;
    M2C_FIELD(temp_v0, s8 *, -0xF) = 0;
    var_a0 = 1;
    var_v0 = 1 * 2;
    __repair_rows: {
        temp_v0_2 = (((var_v0 + var_a0) * 8) + var_a0) * 4;
        *(&func_801153C8 + 0x9F38 + temp_v0_2) = var_a0 - 1;
        var_v0 = (s16)(var_a0 + 1);
        *(&func_801153C8 + 0x9F3A + temp_v0_2) = var_v0;
        *(&func_801153C8 + 0x9F29 + temp_v0_2) = 0;
        var_a0 = var_v0;
        var_v0 = var_a0 * 2;
    }
if (var_a0 < 0x13F) goto __repair_rows;
    M2C_FIELD(&D_80126F9C, s16 *, 0) = 0x13E;
    M2C_FIELD(&D_80126F9C, s16 *, 2) = 0xFFFF;
    M2C_FIELD(&D_80126F9C, s8 *, -0xF) = 0;
}
