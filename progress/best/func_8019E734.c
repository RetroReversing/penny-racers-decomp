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

M2C_UNK func_8014B854(M2C_UNK);                     /* extern */
s32 func_80199EAC(s32, s32);                             /* extern */
extern s8 D_801C6BB9;
extern s8 D_801C7068;

void func_8019E734(s32 arg0) {
    s32 temp_v0;
    s32 var_v1;
    s32 var_v0;

    temp_v0 = func_80199EAC(arg0, arg0 & 0xFFFF);
    if (!(temp_v0 & 0xFF) && (D_801C6BB9 > 0)) {
        D_801C6BB9 -= 1;
        goto block_13;
    }
    var_v0 = temp_v0 & 0xFF;
    if ((temp_v0 & 0xFF) == 2) {
        if (D_801C6BB9 < 0x17) {
            D_801C6BB9 += 1;
            goto block_13;
        }
        var_v1 = temp_v0 & 0xFF;
        goto block_7;
    }
block_7:
    if ((var_v0 == 1) && (D_801C7068 > 0)) {
        var_v0 = D_801C7068 - 1;
        goto block_12;
    }
    if ((temp_v0 & 0xFF) == 3) {
        var_v0 = D_801C7068 + 1;
        if (D_801C7068 < 0x17) {
block_12:
            D_801C7068 = var_v0;
block_13:
            func_8014B854(0x3B);
        }
    }
}
