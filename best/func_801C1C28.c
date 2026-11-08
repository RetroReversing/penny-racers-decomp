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

void func_801C1C28(void **arg0) {
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;

    temp_v1 = *arg0;
    *arg0 = temp_v1 + 8;
    M2C_FIELD(temp_v1, s32 *, 0) = 0xE7000000;
    M2C_FIELD(temp_v1, s32 *, 4) = 0;
    temp_v1_2 = *arg0;
    *arg0 = temp_v1_2 + 8;
    M2C_FIELD(temp_v1_2, s32 *, 0) = 0xB6000000;
    M2C_FIELD(temp_v1_2, s32 *, 4) = 1;
    temp_v1_3 = *arg0;
    *arg0 = temp_v1_3 + 8;
    M2C_FIELD(temp_v1_3, s32 *, 0) = 0xB900031D;
    M2C_FIELD(temp_v1_3, s32 *, 4) = 0x504240;
    temp_v1_4 = *arg0;
    *arg0 = temp_v1_4 + 8;
    M2C_FIELD(temp_v1_4, s32 *, 0) = 0xFA000000;
    M2C_FIELD(temp_v1_4, s32 *, 4) = 0xF5FF80;
}
