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

extern unsigned short D_800DD2F0;
s32 osVirtualToPhysical();
extern s32 D_8006F9D0;
extern s32 D_800DB1B0;
extern char D_800DB1B8[];

void func_801B7678(void **arg0) {
    void *temp_a1;
    void *temp_a2;
    void *temp_a3;
    void *temp_s0;
    void *temp_v0;
    void *temp_v0_2;
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
    M2C_FIELD(temp_v1_2, s32 *, 0) = 0xB900031D;
    M2C_FIELD(temp_v1_2, s32 *, 4) = 0x550208;
    temp_v1_3 = *arg0;
    *arg0 = temp_v1_3 + 8;
    M2C_FIELD(temp_v1_3, s32 *, 0) = 0xBA001402;
    M2C_FIELD(temp_v1_3, s32 *, 4) = 0x300000;
    temp_a1 = *arg0;
    *arg0 = temp_a1 + 8;
    M2C_FIELD(temp_a1, s32 *, 0) = 0xFF10013F;
    M2C_FIELD(temp_a1, s32 *, 4) = (s32) (D_8006F9D0 - 0x80000000);
    temp_v1_4 = *arg0;
    *arg0 = temp_v1_4 + 8;
    M2C_FIELD(temp_v1_4, s32 *, 0) = 0xF7000000;
    M2C_FIELD(temp_v1_4, s32 *, 4) = 0xFFFCFFFC;
    temp_a3 = *arg0;
    *arg0 = temp_a3 + 8;
    temp_a2 = D_800DB1B8 + 0x2138;
    M2C_FIELD(temp_a3, s32 *, 0) = (s32) (((((D_800DD2F0 + M2C_FIELD(temp_a2, u16 *, 4)) - 1) & 0x3FF) << 0xE) | (((((M2C_FIELD(temp_a2, u16 *, 2) + M2C_FIELD(temp_a2, u16 *, 6)) - 1) & 0x3FF) * 4) | 0xF6000000));
    M2C_FIELD(temp_a3, s32 *, 4) = (s32) (((D_800DD2F0 & 0x3FF) << 0xE) | ((M2C_FIELD(temp_a2, u16 *, 2) & 0x3FF) * 4));
    temp_v0 = *arg0;
    *arg0 = temp_v0 + 8;
    M2C_FIELD(temp_v0, s32 *, 0) = 0xE7000000;
    M2C_FIELD(temp_v0, s32 *, 4) = 0;
    temp_v0_2 = *arg0;
    *arg0 = temp_v0_2 + 8;
    M2C_FIELD(temp_v0_2, s32 *, 0) = 0xBA001402;
    M2C_FIELD(temp_v0_2, s32 *, 4) = 0;
    temp_s0 = *arg0;
    *arg0 = temp_s0 + 8;
    M2C_FIELD(temp_s0, s32 *, 0) = 0xFF10013F;
    M2C_FIELD(temp_s0, s32 *, 4) = osVirtualToPhysical(D_800DB1B0, 0xF6000000, temp_a2, temp_a3);
}
