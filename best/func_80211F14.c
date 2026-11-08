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

extern M2C_UNK D_800DA26A;
extern M2C_UNK D_8021F270;

void func_80211F14(s32 arg0) {
    s32 temp_t1;
    s32 var_a1;
    s32 var_a2;
    s32 var_v0;

    var_a2 = 0;
    temp_t1 = arg0 * 0x178;
    do {
        var_a1 = 0;
        var_v0 = 0 * 2;
loop_2:
        *(var_v0 + ((var_a2 * 0x12) + (temp_t1 + (&D_800DA26A + 0x64)))) = *(var_v0 + ((var_a2 * 0x10) + ((arg0 * 0xE0) + &D_8021F270)));
        var_a1 += 1;
        var_v0 = var_a1 * 2;
        if (var_a1 < 8) {
            goto loop_2;
        }
        *(&D_800DA26A + 0x74 + ((var_a2 * 0x12) + temp_t1)) = 0xFFFF;
        var_a2 += 1;
    } while (var_a2 < 0xE);
}
