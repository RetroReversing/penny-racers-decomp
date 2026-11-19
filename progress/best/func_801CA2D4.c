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

void func_801CA2D4(void **arg0) {
    void *temp_v0;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_12;
    void *temp_v0_13;
    void *temp_v0_14;
    void *temp_v0_15;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;

    temp_v0 = *arg0;
    temp_v0_2 = temp_v0 + 8;
    M2C_FIELD(temp_v0, s32 *, 0) = 0xE7000000;
    M2C_FIELD(temp_v0, s32 *, 4) = 0;
    temp_v0_3 = temp_v0_2 + 8;
    M2C_FIELD(temp_v0, s32 *, 8) = 0xBA001402;
    M2C_FIELD(temp_v0_2, s32 *, 4) = 0;
    temp_v0_4 = temp_v0_3 + 8;
    M2C_FIELD(temp_v0_2, s32 *, 8) = 0xB6000000;
    M2C_FIELD(temp_v0_3, s32 *, 4) = 0xF3205;
    temp_v0_5 = temp_v0_4 + 8;
    M2C_FIELD(temp_v0_3, s32 *, 8) = 0xB900031D;
    M2C_FIELD(temp_v0_4, s32 *, 4) = 0x0F0A4000;
    temp_v0_6 = temp_v0_5 + 8;
    M2C_FIELD(temp_v0_4, s32 *, 8) = 0xFC119623;
    M2C_FIELD(temp_v0_5, s32 *, 4) = 0xFF2FFFFF;
    temp_v0_7 = temp_v0_6 + 8;
    M2C_FIELD(temp_v0_5, s32 *, 8) = 0xBA001301;
    M2C_FIELD(temp_v0_6, s32 *, 4) = 0;
    temp_v0_8 = temp_v0_7 + 8;
    M2C_FIELD(temp_v0_6, s32 *, 8) = 0xBA001001;
    M2C_FIELD(temp_v0_7, s32 *, 4) = 0;
    temp_v0_9 = temp_v0_8 + 8;
    M2C_FIELD(temp_v0_7, s32 *, 8) = 0xBA000C02;
    M2C_FIELD(temp_v0_8, s32 *, 4) = 0x2000;
    temp_v0_10 = temp_v0_9 + 8;
    M2C_FIELD(temp_v0_8, s32 *, 8) = 0xBA000903;
    M2C_FIELD(temp_v0_9, s32 *, 4) = 0xC00;
    temp_v0_11 = temp_v0_10 + 8;
    M2C_FIELD(temp_v0_9, s32 *, 8) = 0xBA000E02;
    M2C_FIELD(temp_v0_10, s32 *, 4) = 0x8000;
    temp_v0_12 = temp_v0_11 + 8;
    M2C_FIELD(temp_v0_10, s32 *, 8) = 0xFA000000;
    M2C_FIELD(temp_v0_11, s32 *, 4) = -1;
    temp_v0_13 = temp_v0_12 + 8;
    M2C_FIELD(temp_v0_11, s32 *, 8) = 0xBA000602;
    M2C_FIELD(temp_v0_12, s32 *, 4) = 0xC0;
    temp_v0_14 = temp_v0_13 + 8;
    M2C_FIELD(temp_v0_12, s32 *, 8) = 0xBA000602;
    M2C_FIELD(temp_v0_13, s32 *, 4) = 0x40;
    temp_v0_15 = temp_v0_14 + 8;
    M2C_FIELD(temp_v0_13, s32 *, 8) = 0xB9000002;
    M2C_FIELD(temp_v0_14, s32 *, 4) = 0;
    M2C_FIELD(temp_v0_14, s32 *, 8) = 0xBA000402;
    M2C_FIELD(temp_v0_15, s32 *, 4) = 0x30;
    *arg0 = temp_v0_15 + 8;
}
