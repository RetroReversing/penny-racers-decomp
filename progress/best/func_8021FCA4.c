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

extern M2C_UNK D_800DB1B8;
extern f32 D_80220E40;
extern M2C_UNK D_80220FB0;
extern M2C_UNK D_80220FB4;
extern M2C_UNK D_80220FB8;
extern M2C_UNK D_80220FBC;
extern M2C_UNK D_80220FC0;
extern M2C_UNK D_80220FC4;
extern M2C_UNK D_80220FC8;
extern M2C_UNK D_80220FCC;

void func_8021FCA4(void) {
    s16 temp_v1;
    s32 temp_a0;
    s32 temp_a1;
    s32 var_a2;

    D_80220E40 = 65.0f;
    var_a2 = 0;
    __repair_rows: {
        temp_a0 = var_a2 * 0x28;
        *(&D_800DB1B8 + 0x2108 + temp_a0) = 0;
        temp_a1 = var_a2 * 2;
        temp_v1 = var_a2 * 3;
        *(&D_800DB1B8 + 0x210A + temp_a0) = temp_v1;
        *(&D_800DB1B8 + 0x210C + temp_a0) = temp_v1 + 1;
        *(&D_800DB1B8 + 0x210E + temp_a0) = temp_v1 + 2;
        *(&D_800DB1B8 + 0x2110 + temp_a0) = *(temp_a1 + &D_80220FB0);
        *(&D_800DB1B8 + 0x2112 + temp_a0) = *(temp_a1 + &D_80220FB4);
        *(&D_800DB1B8 + 0x2114 + temp_a0) = *(temp_a1 + &D_80220FB8);
        *(&D_800DB1B8 + 0x2116 + temp_a0) = *(temp_a1 + &D_80220FBC);
        *(&D_800DB1B8 + 0x2128 + temp_a0) = *(temp_a1 + &D_80220FC0);
        *(&D_800DB1B8 + 0x212A + temp_a0) = *(temp_a1 + &D_80220FC4);
        *(&D_800DB1B8 + 0x212C + temp_a0) = *(temp_a1 + &D_80220FC8);
        *(&D_800DB1B8 + 0x212E + temp_a0) = *(temp_a1 + &D_80220FCC);
        var_a2 += 1;
    }
if (var_a2 < 4) goto __repair_rows;
    M2C_FIELD(&D_800DB1B8, s16 *, 0x2108) = 1;
}
