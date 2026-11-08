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

void _bnkfPatchWaveTable(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0;
    u8 temp_a3;

    if (M2C_FIELD(arg0, u8 *, 9) == 0) {
        temp_a3 = M2C_FIELD(arg0, u8 *, 8);
        M2C_FIELD(arg0, u8 *, 9) = 1U;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + arg2);
        if (temp_a3 == 0) {
            temp_v1 = M2C_FIELD(arg0, s32 *, 0xC);
            M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) + arg1);
            if (temp_v1 != 0) {
                var_v0 = temp_v1 + arg1;
                goto block_6;
            }
        } else if (temp_a3 == 1) {
            temp_v0 = M2C_FIELD(arg0, s32 *, 0xC);
            var_v0 = temp_v0 + arg1;
            if (temp_v0 != 0) {
block_6:
                M2C_FIELD(arg0, s32 *, 0xC) = var_v0;
            }
        }
    }
}
