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

extern s16 D_80187BE0;
extern s16 D_80189DC2;
extern M2C_UNK D_8018D6C0;
extern M2C_UNK D_8018D6C8;
extern M2C_UNK D_8018D6D4;
extern M2C_UNK D_8018D736;
extern M2C_UNK D_8018D738;
extern M2C_UNK D_8018D73A;
extern s16 D_8018F5C2;

void func_8013E188(void) {
    s16 temp_v0_2;
    s16 var_a0;
    s16 var_a0_2;
    s32 temp_v0;
    s32 temp_v1_2;
    s32 var_v0;
    s32 var_v1;
    void *temp_v1;

    D_80187BE0 = 0x40;
    var_a0 = 0;
    var_v1 = 0 & 0xFFFF;
    __repair_rows: {
        temp_v0 = var_v1 * 0x7C;
        temp_v1 = temp_v0 + &D_8018D6C0;
        M2C_FIELD(temp_v1, f32 *, 0x10) = 0.0f;
        M2C_FIELD(temp_v1, f32 *, 0xC) = 0.0f;
        *(&D_8018D6C8 + temp_v0) = 0.0f;
        *(&D_8018D6D4 + temp_v0) = 0;
        *(&D_8018D736 + temp_v0) = var_a0;
        var_a0 += 1;
        var_v1 = var_a0 & 0xFFFF;
    }
if ((u32) (var_a0 & 0xFFFF) < 0x40U) goto __repair_rows;
    D_8018F5C2 = 0;
    D_80189DC2 = 0x3F;
    var_a0_2 = 1;
    var_v0 = 1 & 0xFFFF;
    do {
        temp_v1_2 = var_v0 * 0x7C;
        *(&D_8018D738 + temp_v1_2) = var_a0_2 - 1;
        temp_v0_2 = var_a0_2 + 1;
        *(&D_8018D73A + temp_v1_2) = temp_v0_2;
        var_a0_2 = temp_v0_2;
        var_v0 = var_a0_2 & 0xFFFF;
    } while ((u32) (var_a0_2 & 0xFFFF) < 0x3FU);
    M2C_FIELD(&D_8018D738, s16 *, 0) = 0xFFFF;
    M2C_FIELD(&D_8018D738, s16 *, 2) = 1;
    M2C_FIELD(&D_8018D738, s16 *, 0x1E84) = 0x3E;
    M2C_FIELD(&D_8018D738, s16 *, 0x1E86) = 0xFFFF;
}
