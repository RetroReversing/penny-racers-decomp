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

extern void *D_801C7AB0;
extern s8 D_802352F4;
extern M2C_UNK D_80237470;
extern M2C_UNK D_80237471;
extern M2C_UNK D_80237472;
extern M2C_UNK D_80237473;

void func_801B09F0(void) {
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a2;
    s8 var_a1;

    var_a2 = 0;
    var_a1 = 0;
    if (M2C_FIELD(D_801C7AB0, u8 *, 2) != 0) {
        do {
            if (M2C_FIELD(D_801C7AB0, u8 *, 1) == 5) {
                temp_v1 = var_a1 & 0xFF;
                if (temp_v1 == (M2C_FIELD(D_801C7AB0, u8 *, 2) - 2)) {
                    temp_v1_2 = var_a2 & 0xFFFF;
                    *(&D_80237470 + temp_v1_2) = M2C_FIELD(D_801C7AB0, u8 *, 2) - 1;
                    *(&D_80237471 + temp_v1_2) = 0;
                    var_a1 += 1;
                } else {
                    temp_v0 = var_a2 & 0xFFFF;
                    if (temp_v1 == (M2C_FIELD(D_801C7AB0, u8 *, 2) - 1)) {
                        *(&D_80237470 + temp_v0) = 0;
                        *(&D_80237471 + temp_v0) = 1;
                        var_a1 += 1;
                    } else {
                        *(&D_80237470 + temp_v0) = var_a1 + 1;
                        *(&D_80237471 + temp_v0) = var_a1 + 2;
                        var_a1 += 1;
                    }
                }
            } else {
                if (!(var_a1 & 0xFF)) {
                    M2C_FIELD(&D_80237472, s8 *, 0) = 0;
                    M2C_FIELD(&D_80237472, s8 *, 1) = 1;
                } else {
                    temp_v1_3 = var_a2 & 0xFFFF;
                    if ((var_a1 & 0xFF) == (M2C_FIELD(D_801C7AB0, u8 *, 2) - 1)) {
                        M2C_FIELD(&D_80237470, s8 *, 0) = 0;
                        M2C_FIELD(&D_80237470, s8 *, 1) = 0;
                    } else {
                        *(&D_80237472 + temp_v1_3) = var_a1;
                        *(&D_80237473 + temp_v1_3) = var_a1 + 1;
                    }
                }
                var_a1 += 1;
            }
            var_a2 += 2;
        } while ((u32) (var_a1 & 0xFF) < (u8) M2C_FIELD(D_801C7AB0, u8 *, 2));
    }
    D_802352F4 = M2C_FIELD(D_801C7AB0, u8 *, 2) - 1;
}
