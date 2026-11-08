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

f32 __cosf(f32);                                    /* extern */
f32 __sinf(f32);                                    /* extern */
f32 func_80032310(f32, void *);                     /* extern */
M2C_UNK func_8003DE90(M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_8003DF6C(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_80129C88(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
f32 func_801F9C8C(f32, f32);                        /* extern */
M2C_UNK guRotateF(M2C_UNK *, f32, f32 *, f32 *);    /* extern */
extern u16 D_8022A772;
extern M2C_UNK D_8022AF3C;
extern u16 D_8022B062;
extern M2C_UNK func_8011EDAC;
extern M2C_UNK func_8021C010;
extern M2C_UNK func_80220E94;

void func_8021E4B8(s32 arg0) {
    f32 *sp10;
    f32 *sp14;
    f32 *sp18;
    M2C_UNK sp20;
    M2C_UNK sp60;
    M2C_UNK spA0;
    M2C_UNK spE0;
    f32 sp120;
    f32 sp124;
    f32 sp128;
    f32 temp_fa0;
    f32 temp_fa0_2;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
    f32 temp_fs0_4;
    f32 temp_fs1;
    f32 temp_fs1_2;
    f32 temp_fs1_3;
    f32 temp_fs2;
    f32 temp_fs4;
    f32 temp_ft0;
    f32 temp_ft0_2;
    f32 temp_ft0_3;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 temp_fv1_4;
    f32 var_fv0;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1_2;
    u8 temp_s4;
    void *temp_a0;
    void *temp_a1;
    void *temp_v0;
    void *temp_v1;

    temp_a1 = &func_8011EDAC + 0x544;
    temp_v0 = (D_8022A772 * 0x64) + temp_a1;
    temp_v1 = (D_8022B062 * 0x64) + temp_a1;
    M2C_FIELD(&func_80220E94, f32 *, 0x210) = (f32) M2C_FIELD(temp_v0, f32 *, 0x18);
    M2C_FIELD(&func_80220E94, f32 *, 0x214) = (f32) (M2C_FIELD(temp_v0, f32 *, 0x1C) + 30.0f);
    M2C_FIELD(&func_80220E94, f32 *, 0x218) = (f32) M2C_FIELD(temp_v0, f32 *, 0x20);
    M2C_FIELD(&func_80220E94, f32 *, 0x21C) = (f32) M2C_FIELD(temp_v1, f32 *, 0x18);
    M2C_FIELD(&func_80220E94, f32 *, 0x220) = (f32) (M2C_FIELD(temp_v1, f32 *, 0x1C) + 15.0f);
    M2C_FIELD(&func_80220E94, f32 *, 0x224) = (f32) M2C_FIELD(temp_v1, f32 *, 0x20);
    M2C_FIELD(&func_80220E94, f32 *, 0x228) = 0.0f;
    M2C_FIELD(&func_80220E94, f32 *, 0x22C) = 1.0f;
    M2C_FIELD(&func_80220E94, f32 *, 0x230) = 0.0f;
    func_80129C88(&D_8022AF3C, 4, 0);
    temp_s4 = *(&func_8011EDAC + 0x550 + ((arg0 & 0xFFFF) * 0x64));
    temp_s2 = temp_s4 & 0xFFFF;
    temp_v0_2 = *(&D_8022A772 + ((((temp_s4 & 0xFFFF) / 3) & 0xFFFF) * 0x8F0)) * 0x64;
    temp_fs0 = *(&func_8011EDAC + 0x56C + temp_v0_2);
    temp_fs2 = *(&func_8011EDAC + 0x570 + temp_v0_2);
    sp10 = NULL;
    guRotateF(&sp60, *(&func_8011EDAC + 0x568 + temp_v0_2), (f32 *)0x3F800000, sp10);
    sp10 = NULL;
    guRotateF(&sp20, temp_fs0, sp10, (f32 *)0x3F800000);
    sp10 = (f32 *)0x3F800000;
    guRotateF(&spA0, temp_fs2, NULL, NULL);
    func_8003DE90(&sp20, &sp60, &spE0);
    func_8003DE90(&spE0, &spA0, &spE0);
    sp10 = &sp120;
    sp14 = &sp124;
    sp18 = &sp128;
    func_8003DF6C(&spE0, 0, 0x3F800000, 0);
    temp_v1_2 = (temp_s2 - 1) * 0x24;
    temp_v0_3 = temp_s2 * 0x24;
    temp_a0 = temp_v0_3 + (&func_80220E94 + 0x1EC);
    temp_ft0 = *(&func_80220E94 + 0x204 + temp_v0_3);
    temp_fv1 = (f32) ((f64) temp_ft0 + ((f64) (sp120 - temp_ft0) * M2C_FIELD(&func_8021C010, f64 *, 0x1EF8)));
    M2C_FIELD(temp_a0, f32 *, 0x18) = temp_fv1;
    *(&func_80220E94 + 0x204 + temp_v1_2) = temp_fv1;
    temp_ft0_2 = *(&func_80220E94 + 0x208 + temp_v0_3);
    temp_fv1_2 = (f32) ((f64) temp_ft0_2 + ((f64) (sp124 - temp_ft0_2) * M2C_FIELD(&func_8021C010, f64 *, 0x1EF8)));
    M2C_FIELD(temp_a0, f32 *, 0x1C) = temp_fv1_2;
    *(&func_80220E94 + 0x204 + temp_v1_2) = temp_fv1_2;
    temp_ft0_3 = *(&func_80220E94 + 0x20C + temp_v0_3);
    temp_fv1_3 = (f32) ((f64) temp_ft0_3 + ((f64) (sp128 - temp_ft0_3) * M2C_FIELD(&func_8021C010, f64 *, 0x1EF8)));
    M2C_FIELD(temp_a0, f32 *, 0x20) = temp_fv1_3;
    *(&func_80220E94 + 0x204 + temp_v1_2) = temp_fv1_3;
    temp_fs1 = *(&func_80220E94 + 0x1F8 + temp_v0_3) - *(&func_80220E94 + 0x1EC + temp_v0_3);
    temp_fv1_4 = *(&func_80220E94 + 0x1FC + temp_v0_3) - *(&func_80220E94 + 0x1F0 + temp_v0_3);
    temp_fs0_2 = *(&func_80220E94 + 0x200 + temp_v0_3) - *(&func_80220E94 + 0x1F4 + temp_v0_3);
    temp_fa0 = (temp_fs1 * temp_fs1) + (temp_fv1_4 * temp_fv1_4) + (temp_fs0_2 * temp_fs0_2);
    var_fv0 = sqrtf(temp_fa0);
    if (var_fv0 != var_fv0) {
        var_fv0 = func_80032310(temp_fa0, temp_a0);
    }
    temp_fa0_2 = 1.0f / var_fv0;
    temp_fs4 = func_801F9C8C(temp_fs0_2 * temp_fa0_2, -(temp_fs1 * temp_fa0_2));
    temp_s0 = ((temp_s4 & 0xFFFF) - 1) * 0x24;
    *(&func_80220E94 + 0x1EC + temp_s0) = 0.0f;
    *(&func_80220E94 + 0x1F0 + temp_s0) = 0.0f;
    *(&func_80220E94 + 0x1F4 + temp_s0) = 0.0f;
    temp_fs1_2 = __sinf(temp_fs4) * 400.0f;
    temp_fs0_3 = __sinf(temp_fs4);
    *(&func_80220E94 + 0x1F8 + temp_s0) = temp_fs1_2 - (temp_fs0_3 * __sinf(0.0f) * 400.0f);
    *(&func_80220E94 + 0x1FC + temp_s0) = __sinf(0.0f) * 400.0f;
    temp_fs1_3 = __cosf(temp_fs4) * 400.0f;
    temp_fs0_4 = __cosf(temp_fs4);
    *(&func_80220E94 + 0x200 + temp_s0) = temp_fs1_3 - (temp_fs0_4 * __sinf(0.0f) * 400.0f);
}
