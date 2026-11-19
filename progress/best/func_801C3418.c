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

extern s8 D_801C6BB9;
extern s8 D_801C7068;
extern u16 D_801C7078;
extern M2C_UNK D_801C7082;
extern M2C_UNK D_801C7083;
extern void *D_801C7AB0;
extern M2C_UNK D_801C7AD8;

u8 func_801C3418(void) {
    s32 temp_v1;
    s32 var_a0;
    s32 var_v0_2;
    u8 var_v0;

    if (*(&D_801C7AD8 + D_801C7078) == 0xFF) {
        return M2C_FIELD(D_801C7AB0, u8 *, 2);
    }
    var_a0 = 0;
    if (M2C_FIELD(D_801C7AB0, u8 *, 2) != 0) {
        var_v0_2 = 0 & 0xFF;
loop_4:
        temp_v1 = var_v0_2 * 5;
        if ((D_801C7068 != *(&D_801C7082 + temp_v1)) || (var_v0 = var_a0 & 0xFF, (D_801C6BB9 != *(&D_801C7083 + temp_v1)))) {
            var_a0 += 1;
            var_v0_2 = var_a0 & 0xFF;
            if ((u32) (var_a0 & 0xFF) >= (u8) M2C_FIELD(D_801C7AB0, u8 *, 2)) {
                goto block_7;
            }
            goto loop_4;
        }
    } else {
block_7:
        var_v0 = var_a0 & 0xFF;
    }
    return var_v0;
}
