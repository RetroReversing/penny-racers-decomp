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

extern M2C_UNK D_802E6320;
extern M2C_UNK func_801153C8;

void func_80110CBC(void **arg0, s32 arg1) {
    s32 temp_a3;
    void *temp_a2;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_7;
    void *temp_v1_8;
    void *temp_v1_9;

    temp_v1 = *arg0;
    *arg0 = temp_v1 + 8;
    M2C_FIELD(temp_v1, s32 *, 0) = 0xB6000000;
    M2C_FIELD(temp_v1, s32 *, 4) = 0x2000;
    temp_a2 = *arg0;
    *arg0 = temp_a2 + 8;
    M2C_FIELD(temp_a2, s32 *, 0) = 0xFA000000;
    temp_a3 = (arg1 & 0xFFFF) * 0x64;
    M2C_FIELD(temp_a2, s32 *, 4) = (s32) (*(&func_801153C8 + 0x9F34 + temp_a3) | 0x5CC7BF00);
    temp_v1_2 = *arg0;
    *arg0 = temp_v1_2 + 8;
    M2C_FIELD(temp_v1_2, s32 *, 0) = 0xFD88001F;
    M2C_FIELD(temp_v1_2, s32 *, 4) = (s32) &D_802E6320;
    temp_v1_3 = *arg0;
    *arg0 = temp_v1_3 + 8;
    M2C_FIELD(temp_v1_3, s32 *, 0) = 0xF5880800;
    M2C_FIELD(temp_v1_3, s32 *, 4) = 0x07018050;
    temp_v1_4 = *arg0;
    *arg0 = temp_v1_4 + 8;
    M2C_FIELD(temp_v1_4, s32 *, 0) = 0xE6000000;
    M2C_FIELD(temp_v1_4, s32 *, 4) = 0;
    temp_v1_5 = *arg0;
    *arg0 = temp_v1_5 + 8;
    M2C_FIELD(temp_v1_5, s32 *, 0) = 0xF4000000;
    M2C_FIELD(temp_v1_5, s32 *, 4) = 0x0707C0FC;
    temp_v1_6 = *arg0;
    *arg0 = temp_v1_6 + 8;
    M2C_FIELD(temp_v1_6, s32 *, 0) = 0xE7000000;
    M2C_FIELD(temp_v1_6, s32 *, 4) = 0;
    temp_v1_7 = *arg0;
    *arg0 = temp_v1_7 + 8;
    M2C_FIELD(temp_v1_7, s32 *, 0) = 0xF5880800;
    M2C_FIELD(temp_v1_7, s32 *, 4) = 0x18050;
    temp_v1_8 = *arg0;
    *arg0 = temp_v1_8 + 8;
    M2C_FIELD(temp_v1_8, s32 *, 0) = 0xF2000000;
    M2C_FIELD(temp_v1_8, s32 *, 4) = 0x7C0FC;
    temp_v1_9 = *arg0;
    *arg0 = temp_v1_9 + 8;
    M2C_FIELD(temp_v1_9, s32 *, 0) = (s32) ((*(&func_801153C8 + 0x9F66 + temp_a3) & 0xFFF) | 0xF2000000);
    M2C_FIELD(temp_v1_9, s32 *, 4) = 0x7C0FC;
}
