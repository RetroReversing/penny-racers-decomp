f32 __sinf(f32);
s32 liftCopyFlags(s32);
extern u8 sPrimColorB[];
extern u8 playerSlots[];
extern u8 D_8011F33C[];
extern f32 D_8016D8CC;
extern f64 D_80183850;
extern f64 D_80183858;
extern f64 D_80183860;

void func_80157CF4(s32 arg0) {
    f32 temp_fv0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v1;

    temp_s0 = arg0 & 0xFFFF;
    liftCopyFlags(temp_s0);
    temp_v1 = temp_s0 * 0x64;
    if (*(u16 *)(playerSlots + temp_v1) == 0) {
        *(f32 *)(D_8011F33C + temp_v1) = *(f32 *)(sPrimColorB + temp_v1);
        *(u16 *)(playerSlots + temp_v1) = 1;
    }
    temp_fv0 = (f32)(((f64)D_8016D8CC) + D_80183850);
    D_8016D8CC = temp_fv0;
    if (temp_fv0 > 360.0f) {
        D_8016D8CC = temp_fv0 - 360.0f;
    }
    temp_s0_2 = (arg0 & 0xFFFF) * 0x64;
    *(f32 *)(sPrimColorB + temp_s0_2) = (__sinf((f32)((((f64)D_8016D8CC) * D_80183858) / D_80183860)) * 100.0f) + *(f32 *)(D_8011F33C + temp_s0_2);
}
