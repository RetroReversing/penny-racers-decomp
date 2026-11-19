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

M2C_UNK guLookAt(s32, s32, s32, M2C_UNK, s32, s32, s32, s32, f32); /* extern */
M2C_UNK guPerspective(s32, u16 *, s32, M2C_UNK);    /* extern */
extern M2C_UNK D_800DB1B8;
extern s32 D_8011F060;
extern u8 D_80126FF6;
extern s32 D_80220E40;

void func_80220A50(void **arg0) {
    s32 sp24;
    u16 sp28;
    M2C_UNK var_a3;
    s16 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_v0;
    s32 var_a0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_v0 = D_80126FF6 * 0x28;
    temp_s0 = *(&D_800DB1B8 + 0x210A + temp_v0);
    if (*(&D_800DB1B8 + 0x2108 + temp_v0) == 2) {
        var_a0 = (temp_s0 << 6) + D_8011F060;
        var_a3 = 0x402AAAAB;
    } else {
        var_a0 = (temp_s0 << 6) + D_8011F060;
        var_a3 = 0x3FAAAAAB;
    }
    temp_s0_2 = temp_s0 << 6;
    guPerspective(var_a0, &sp28, D_80220E40, var_a3);
    temp_v1 = *arg0;
    *arg0 = temp_v1 + 8;
    M2C_FIELD(temp_v1, s32 *, 0) = 0xBC00000E;
    M2C_FIELD(temp_v1, s32 *, 4) = (s32) sp28;
    temp_v1_2 = *arg0;
    *arg0 = temp_v1_2 + 8;
    M2C_FIELD(temp_v1_2, s32 *, 0) = 0x01030040;
    M2C_FIELD(temp_v1_2, s32 *, 4) = (s32) (temp_s0_2 + D_8011F060);
    temp_s0_3 = temp_s0_2 + 0x300;
    sp24 = 0;
    guLookAt(temp_s0_3 + D_8011F060, sp24, sp24, 0x42480000, 0, 0, 0, 0, 1.0f);
    temp_v1_3 = *arg0;
    *arg0 = temp_v1_3 + 8;
    M2C_FIELD(temp_v1_3, s32 *, 0) = 0x01010040;
    M2C_FIELD(temp_v1_3, s32 *, 4) = (s32) (temp_s0_3 + D_8011F060);
}
