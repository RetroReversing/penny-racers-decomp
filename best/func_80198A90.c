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

extern M2C_UNK D_801C6BB0;
extern s8 D_801C6BB1;
extern s8 D_801C6BB9;
extern s8 D_801C7068;
extern u8 D_801C7469;

s32 func_80198A90(void) {
    s32 var_a2;
    s32 var_v0;
    s32 var_v0_2;
    s8 var_v1;

    var_a2 = 0;
    if (D_801C6BB9 < 0x17) {
        switch (D_801C7469) {                       /* irregular */
        case 0:
            if (M2C_FIELD(&D_801C6BB0, s8 *, 0) == D_801C7068) {
                var_v1 = D_801C6BB9 + 1;
                if (M2C_FIELD(&D_801C6BB0, s8 *, 1) != var_v1) {
                    var_v0 = M2C_FIELD(&D_801C6BB0, s8 *, 1) - 1;
block_16:
                    if (var_v1 != var_v0) {
                        goto block_17;
                    }
                }
            } else {
block_17:
                var_a2 = 1;
            }
            break;
        case 1:
            var_v0_2 = M2C_FIELD(&D_801C6BB0, s8 *, 0) - 1;
            if (M2C_FIELD(&D_801C6BB0, s8 *, 0) != D_801C7068) {
block_13:
                if (var_v0_2 == D_801C7068) {
                    goto block_14;
                }
                goto block_17;
            }
block_14:
            var_v1 = D_801C6BB1;
block_15:
            var_v0 = D_801C6BB9 + 1;
            goto block_16;
        case 2:
            if (M2C_FIELD(&D_801C6BB0, s8 *, 0) == D_801C7068) {
                var_v1 = M2C_FIELD(&D_801C6BB0, s8 *, 1);
                goto block_15;
            }
            goto block_17;
        case 3:
            var_v0_2 = M2C_FIELD(&D_801C6BB0, s8 *, 0) + 1;
            if (M2C_FIELD(&D_801C6BB0, s8 *, 0) != D_801C7068) {
                goto block_13;
            }
            goto block_14;
        }
    }
    return var_a2 & 0xFF;
}
