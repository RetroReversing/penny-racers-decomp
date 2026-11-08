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

extern M2C_UNK D_800DE080;
extern u8 D_80126FF6;
extern u8 D_80168166;
extern M2C_UNK D_80183BE0;

void func_80210F70(void **arg0) {
    void *temp_a2;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_7;

    temp_a2 = *arg0;
    *arg0 = temp_a2 + 8;
    M2C_FIELD(temp_a2, s32 *, 0) = 0xFD100000;
    M2C_FIELD(temp_a2, void **, 4) = (void *) ((D_80126FF6 << 0xC) + ((D_80168166 << 0xB) + &D_80183BE0));
    temp_v1 = *arg0;
    *arg0 = temp_v1 + 8;
    M2C_FIELD(temp_v1, s32 *, 0) = 0xF5100000;
    M2C_FIELD(temp_v1, void **, 4) = (void *)0x07014050;
    temp_v1_2 = *arg0;
    *arg0 = temp_v1_2 + 8;
    M2C_FIELD(temp_v1_2, s32 *, 0) = 0xE6000000;
    M2C_FIELD(temp_v1_2, void **, 4) = NULL;
    temp_v1_3 = *arg0;
    *arg0 = temp_v1_3 + 8;
    M2C_FIELD(temp_v1_3, s32 *, 0) = 0xF3000000;
    M2C_FIELD(temp_v1_3, void **, 4) = (void *)0x073FF100;
    temp_v1_4 = *arg0;
    *arg0 = temp_v1_4 + 8;
    M2C_FIELD(temp_v1_4, s32 *, 0) = 0xE7000000;
    M2C_FIELD(temp_v1_4, void **, 4) = NULL;
    temp_v1_5 = *arg0;
    *arg0 = temp_v1_5 + 8;
    M2C_FIELD(temp_v1_5, s32 *, 0) = 0xF5101000;
    M2C_FIELD(temp_v1_5, void **, 4) = (void *)0x14050;
    temp_v1_6 = *arg0;
    *arg0 = temp_v1_6 + 8;
    M2C_FIELD(temp_v1_6, s32 *, 0) = 0xF2000000;
    M2C_FIELD(temp_v1_6, void **, 4) = (void *)0x7C07C;
    temp_v1_7 = M2C_FIELD(&D_800DE080, void **, 0x64);
    M2C_FIELD(&D_800DE080, void **, 0x64) = (void *) (temp_v1_7 + 8);
    M2C_FIELD(temp_v1_7, s32 *, 0) = 0xED210040;
    M2C_FIELD(temp_v1_7, s32 *, 4) = 0x49C104;
}
