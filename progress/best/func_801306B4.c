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

f32 func_801F99A8(s32, s32);                        /* extern */
M2C_UNK guMtxCatL(void *, M2C_UNK *, void *);       /* extern */
M2C_UNK guRotate(void *, f32, M2C_UNK, M2C_UNK, f32); /* extern */
M2C_UNK guTranslate(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern s32 D_80046834;
extern M2C_UNK D_8011F2FC;
extern M2C_UNK D_80167ED8;
extern M2C_UNK D_8018D460;
extern M2C_UNK D_8022AEB8;
extern M2C_UNK D_8022AEE8;

void func_801306B4(void **arg0, s32 arg1) {
    M2C_UNK sp18;
    f32 temp_fs0;
    s32 temp_a1;
    s32 temp_s0;
    u8 temp_s2;
    void *temp_a0;
    void *temp_a2;
    void *temp_s2_2;
    void *temp_v1;
    void *temp_v1_10;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;
    void *temp_v1_6;
    void *temp_v1_7;
    void *temp_v1_8;
    void *temp_v1_9;

    temp_a1 = arg1 & 0xFFFF;
    temp_s2 = *(&D_8011F2FC + (temp_a1 * 0x64));
    temp_s0 = temp_s2 * 0x8F0;
    temp_fs0 = 102.0f - (((func_801F99A8(*(&D_8022AEE8 + temp_s0) * 0xA, temp_a1) * 100.0f) + *(&D_8022AEB8 + temp_s0)) * 0.019f);
    guTranslate(&sp18, 0x43EC0000, 0xC39F0000, 0xC41F4000);
    temp_s2_2 = (temp_s2 << 6) + &D_8018D460;
    guRotate((D_80046834 << 8) + temp_s2_2, temp_fs0, 0, 0, 1.0f);
    temp_a2 = (D_80046834 << 8) + temp_s2_2;
    guMtxCatL(temp_a2, &sp18, temp_a2);
    temp_v1 = *arg0;
    *arg0 = temp_v1 + 8;
    M2C_FIELD(temp_v1, s32 *, 0) = 0xE7000000;
    M2C_FIELD(temp_v1, M2C_UNK **, 4) = NULL;
    temp_a0 = *arg0;
    *arg0 = temp_a0 + 8;
    M2C_FIELD(temp_a0, s32 *, 0) = 0x01020040;
    M2C_FIELD(temp_a0, M2C_UNK **, 4) = (M2C_UNK *) (((D_80046834 << 8) + temp_s2_2) - 0x80000000);
    temp_v1_2 = *arg0;
    *arg0 = temp_v1_2 + 8;
    M2C_FIELD(temp_v1_2, s32 *, 0) = 0xB6000000;
    M2C_FIELD(temp_v1_2, M2C_UNK **, 4) = (M2C_UNK *)0xF3205;
    temp_v1_3 = *arg0;
    *arg0 = temp_v1_3 + 8;
    M2C_FIELD(temp_v1_3, s32 *, 0) = 0xB7000000;
    M2C_FIELD(temp_v1_3, M2C_UNK **, 4) = (M2C_UNK *)0x204;
    temp_v1_4 = *arg0;
    *arg0 = temp_v1_4 + 8;
    M2C_FIELD(temp_v1_4, s32 *, 0) = 0xFCFFFFFF;
    M2C_FIELD(temp_v1_4, M2C_UNK **, 4) = (M2C_UNK *)0xFFFE793C;
    temp_v1_5 = *arg0;
    *arg0 = temp_v1_5 + 8;
    M2C_FIELD(temp_v1_5, s32 *, 0) = 0xB900031D;
    M2C_FIELD(temp_v1_5, M2C_UNK **, 4) = (M2C_UNK *)0x552048;
    temp_v1_6 = *arg0;
    *arg0 = temp_v1_6 + 8;
    M2C_FIELD(temp_v1_6, s32 *, 0) = 0xBA000E02;
    M2C_FIELD(temp_v1_6, M2C_UNK **, 4) = (M2C_UNK *)0x8000;
    temp_v1_7 = *arg0;
    *arg0 = temp_v1_7 + 8;
    M2C_FIELD(temp_v1_7, s32 *, 0) = 0xB9000002;
    M2C_FIELD(temp_v1_7, M2C_UNK **, 4) = NULL;
    temp_v1_8 = *arg0;
    *arg0 = temp_v1_8 + 8;
    M2C_FIELD(temp_v1_8, s32 *, 0) = 0xFA000000;
    M2C_FIELD(temp_v1_8, M2C_UNK **, 4) = (M2C_UNK *)-1;
    temp_v1_9 = *arg0;
    *arg0 = temp_v1_9 + 8;
    M2C_FIELD(temp_v1_9, s32 *, 0) = 0x04000C2F;
    M2C_FIELD(temp_v1_9, M2C_UNK **, 4) = &D_80167ED8;
    temp_v1_10 = *arg0;
    *arg0 = temp_v1_10 + 8;
    M2C_FIELD(temp_v1_10, s32 *, 0) = 0xBF000000;
    M2C_FIELD(temp_v1_10, M2C_UNK **, 4) = (M2C_UNK *)0x204;
}
