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
extern unsigned char D_80183BD3;
extern unsigned short D_80183BD4;
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern char D_80189CB7[];
extern char D_80189CBF[];
extern char D_8018D140[];

void func_80148688(s32 arg0, s32 arg1) {
    s32 *var_a2;
    u16 temp_v0;
    u8 *var_a3;
    u8 var_v0;

    var_a2 = D_80189CBF;
    var_a3 = D_80189CBF + 1;
    if (!(arg1 & 0xFF)) {
        var_a2 = D_80189CB7;
        var_a3 = D_80189CB7 + 1;
    }
    if (arg0 & 1) {
        if (M2C_FIELD(var_a2, u8 *, 0) != 0) {
            var_v0 = M2C_FIELD(var_a2, u8 *, 0) - 1;
        } else {
            var_v0 = *var_a3 - 1;
        }
        M2C_FIELD(var_a2, u8 *, 0) = var_v0;
    }
    if (arg0 & 2) {
        if (M2C_FIELD(var_a2, u8 *, 0) != (*var_a3 - 1)) {
            M2C_FIELD(var_a2, u8 *, 0) += 1;
        } else {
            M2C_FIELD(var_a2, u8 *, 0) = 0U;
        }
    }
    D_80183BD3 = (u8) M2C_FIELD(var_a2, u8 *, 0);
    temp_v0 = M2C_FIELD(((D_80183BD3 * 2) + (((arg1 & 0xFF) * 0x12C) + D_8018D140)), u16 *, 6);
    M2C_FIELD(var_a2, u16 *, 5) = temp_v0;
    D_80183BD4 = temp_v0;
}
