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

M2C_UNK func_80025DBC(void *);                      /* extern */
extern M2C_UNK D_800DA260;
extern M2C_UNK D_800DA262;
extern M2C_UNK D_800DA264;
extern M2C_UNK D_800DA266;
extern M2C_UNK D_800DA268;
extern M2C_UNK D_800DA26A;

void func_80231130(void) {
    s16 var_s1;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_v0;
    s32 var_v0_2;

    var_s1 = 0;
    var_v0 = 0 & 0xFFFF;
    do {
        temp_s0 = var_v0 * 0x178;
        func_80025DBC(temp_s0 + &D_800DA260);
        *(&D_800DA260 + temp_s0) = var_s1;
        *(&D_800DA262 + temp_s0) = 0;
        *(&D_800DA264 + temp_s0) = 0;
        *(&D_800DA266 + temp_s0) = 0;
        *(&D_800DA268 + temp_s0) = 0;
        *(&D_800DA26A + temp_s0) = 0;
        *(&D_800DA26A + 2 + temp_s0) = 0;
        *(&D_800DA26A + 4 + temp_s0) = 0;
        *(&D_800DA26A + 6 + temp_s0) = 0;
        *(&D_800DA26A + 0xA + temp_s0) = 0;
        *(&D_800DA26A + 0xE + temp_s0) = 0;
        *(&D_800DA26A + 0x12 + temp_s0) = 0;
        *(&D_800DA26A + 0x16 + temp_s0) = 0;
        *(&D_800DA26A + 0x1A + temp_s0) = 0;
        *(&D_800DA26A + 0x1B + temp_s0) = 0;
        var_a0 = 0;
        var_v0_2 = 0 & 0xFFFF;
loop_2:
        temp_v0 = (var_v0_2 * 8) + ((var_s1 & 0xFFFF) * 0x178);
        *(&D_800DA26A + 0x1E + temp_v0) = 0;
        *(&D_800DA26A + 0x22 + temp_v0) = 0;
        var_a0 += 1;
        var_v0_2 = var_a0 & 0xFFFF;
        if ((u32) (var_a0 & 0xFFFF) < 7U) {
            goto loop_2;
        }
        temp_v1 = (var_s1 & 0xFFFF) * 0x178;
        *(&D_800DA26A + 0x5A + temp_v1) = 0;
        *(&D_800DA26A + 0x5C + temp_v1) = 0;
        *(&D_800DA26A + 0x5E + temp_v1) = 0;
        *(&D_800DA26A + 0x60 + temp_v1) = 0;
        *(&D_800DA26A + 0x62 + temp_v1) = 0;
        var_s1 += 1;
        var_v0 = var_s1 & 0xFFFF;
    } while ((u32) (var_s1 & 0xFFFF) < 7U);
}
