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

M2C_UNK func_801D651C(M2C_UNK, M2C_UNK, s32);       /* extern */
extern M2C_UNK D_80190C9E;
extern M2C_UNK D_80190CAA;
extern u8 D_80190CAC;

void func_802174DC(s32 arg0, s8 arg1, u8 arg2) {
    s32 var_a1;
    s32 var_a2;
    s32 var_v0;
    s32 var_v0_2;
    s8 var_s0;
    u8 var_s1;

    var_s0 = arg1;
    var_s1 = arg2;
    var_a2 = D_80190CAC - 1;
    var_a1 = 0;
    if ((u32) (var_a2 & 0xFF) >= 5U) {
        var_a2 = 4;
    }
    if (arg0 & 1) {
        if (var_s0 & 0xFF) {
            var_s0 -= 1;
            goto block_7;
        }
        var_v0 = arg0 & 2;
        if (var_s1 & 0xFF) {
            var_s1 -= 1;
block_7:
            var_a1 = 1;
            goto block_8;
        }
    } else {
block_8:
        var_v0 = arg0 & 2;
    }
    if (var_v0 != 0) {
        if ((var_s0 & 0xFF) != (var_a2 & 0xFF)) {
            var_s0 += 1;
            goto block_14;
        }
        var_v0_2 = var_a1 & 0xFF;
        if ((var_s1 & 0xFF) < (D_80190CAC - 5)) {
            var_s1 += 1;
block_14:
            var_a1 = 1;
            goto block_15;
        }
    } else {
block_15:
        var_v0_2 = var_a1 & 0xFF;
    }
    if (var_v0_2 != 0) {
        func_801D651C(7, 0x3B, var_a2);
    }
    M2C_FIELD(&D_80190C9E, s8 *, 0) = var_s0;
    M2C_FIELD(&D_80190C9E, u8 *, 0xC) = var_s1;
    M2C_FIELD(&D_80190C9E, s8 *, 0x10) = 0;
    if ((u8) M2C_FIELD(&D_80190C9E, u8 *, 0xE) >= 6U) {
        if ((M2C_FIELD(&D_80190C9E, u8 *, 0xC) + 5) != M2C_FIELD(&D_80190C9E, u8 *, 0xE)) {
            M2C_FIELD(&D_80190C9E, s8 *, 0x10) = 0xF;
        }
        if (M2C_FIELD(&D_80190CAA, u8 *, 0) != 0) {
            M2C_FIELD(&D_80190CAA, u8 *, 4) = (u8) (M2C_FIELD(&D_80190CAA, u8 *, 4) | 0xF0);
        }
    }
}
