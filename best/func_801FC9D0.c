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

extern M2C_UNK D_8011F2F0;
extern M2C_UNK D_8011F330;
extern M2C_UNK D_801FFD6C;

void func_801FC9D0(void **arg0, s32 arg1) {
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_hi;
    s32 temp_t0;
    u16 temp_v1;
    u32 temp_a1;
    u8 *temp_a0;
    u8 temp_a0_2;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_7;
    void *temp_v1_8;
    void *temp_v1_9;

    temp_v1 = *(&D_8011F330 + ((arg1 & 0xFFFF) * 0x64));
    switch (temp_v1) {                              /* irregular */
    case 0:
        *(&D_8011F330 + ((arg1 & 0xFFFF) * 0x64)) = 1;
        return;
    case 1:
        temp_a0 = &D_8011F2F0 + ((arg1 & 0xFFFF) * 0x64);
        temp_a0_2 = *temp_a0;
        temp_hi = *temp_a0 / 7;
        temp_a1 = (u32) (temp_hi + ((u32) (temp_a0_2 - temp_hi) >> 1)) >> 2;
        temp_a0_3 = (temp_a0_2 - (temp_a1 * 7)) & 0xFF;
        temp_a1_2 = temp_a1 & 0xFF;
        temp_v1_2 = *arg0;
        *arg0 = temp_v1_2 + 8;
        M2C_FIELD(temp_v1_2, s32 *, 0) = 0xFD4800EF;
        M2C_FIELD(temp_v1_2, M2C_UNK **, 4) = &D_801FFD6C;
        temp_v1_3 = *arg0;
        *arg0 = temp_v1_3 + 8;
        temp_a3 = (temp_a0_3 << 5) + 0x20;
        temp_a0_4 = temp_a0_3 << 5;
        temp_a2 = ((((s32) ((temp_a3 - (temp_a0_4 + 1)) + 8) >> 3) & 0x1FF) << 9) | 0xF5480000;
        M2C_FIELD(temp_v1_3, s32 *, 0) = temp_a2;
        M2C_FIELD(temp_v1_3, M2C_UNK **, 4) = (M2C_UNK *)0x07080200;
        temp_v1_4 = *arg0;
        *arg0 = temp_v1_4 + 8;
        M2C_FIELD(temp_v1_4, s32 *, 0) = 0xE6000000;
        M2C_FIELD(temp_v1_4, M2C_UNK **, 4) = NULL;
        temp_v1_5 = *arg0;
        *arg0 = temp_v1_5 + 8;
        temp_a0_5 = ((temp_a0_4 * 4) & 0xFFF) << 0xC;
        temp_t0 = (temp_a1_2 << 7) & 0xFFF;
        M2C_FIELD(temp_v1_5, s32 *, 0) = (s32) (temp_a0_5 | (temp_t0 | 0xF4000000));
        temp_a3_2 = (((temp_a3 - 1) * 4) & 0xFFF) << 0xC;
        temp_a1_3 = ((temp_a1_2 << 7) | 0x7C) & 0xFFF;
        M2C_FIELD(temp_v1_5, M2C_UNK **, 4) = (M2C_UNK *) (temp_a3_2 | (temp_a1_3 | 0x07000000));
        temp_v1_6 = *arg0;
        *arg0 = temp_v1_6 + 8;
        M2C_FIELD(temp_v1_6, s32 *, 0) = 0xE7000000;
        M2C_FIELD(temp_v1_6, M2C_UNK **, 4) = NULL;
        temp_v1_7 = *arg0;
        *arg0 = temp_v1_7 + 8;
        M2C_FIELD(temp_v1_7, s32 *, 0) = temp_a2;
        M2C_FIELD(temp_v1_7, M2C_UNK **, 4) = (M2C_UNK *)0x80200;
        temp_v1_8 = *arg0;
        *arg0 = temp_v1_8 + 8;
        M2C_FIELD(temp_v1_8, s32 *, 0) = (s32) (temp_a0_5 | (temp_t0 | 0xF2000000));
        M2C_FIELD(temp_v1_8, M2C_UNK **, 4) = (M2C_UNK *) (temp_a3_2 | temp_a1_3);
        temp_v1_9 = *arg0;
        *arg0 = temp_v1_9 + 8;
        M2C_FIELD(temp_v1_9, s32 *, 0) = 0xF2000000;
        M2C_FIELD(temp_v1_9, M2C_UNK **, 4) = (M2C_UNK *)0x7C07C;
        return;
    }
}
