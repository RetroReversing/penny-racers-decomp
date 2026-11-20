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

void func_801CA494(void **arg0, s32 arg1, s32 arg2, s32 arg3, s8 arg4) {
    void *temp_v1;

    temp_v1 = *arg0;
    M2C_FIELD(temp_v1, s32 *, 0) = 0xFA000000;
    M2C_FIELD(temp_v1, s32 *, 4) = (s32) ((arg1 << 0x18) | ((arg2 & 0xFF) << 0x10) | ((arg3 & 0xFF) << 8) | (arg4 & 0xFF));
    *arg0 = temp_v1 + 8;
}
