extern u8 D_8011F2FD[];
extern u8 D_8011F308[];
extern u8 D_8011F30C[];
extern u8 D_8011F310[];
extern u8 D_8011F334[];
extern u8 D_8011F338[];

f32 __cosf(f32);
f32 __sinf(f32);

void func_8013B894(u32 arg0) {
    u32 n = arg0;
    if (*(f32 *)(D_8011F338 + (n & 0xFFFF) * 100) < *(f32 *)(D_8011F30C + (n & 0xFFFF) * 100)) {
        u32 i = (n & 0xFFFF) * 100;
        *(f32 *)(D_8011F30C + i) = *(f32 *)(D_8011F30C + i) - 0.6f;
        *(f32 *)(D_8011F334 + i) = *(f32 *)(D_8011F334 + i) + 0.02f;
        if (arg0 & 1) {
            *(f32 *)(D_8011F308 + i) = __sinf(*(f32 *)(D_8011F334 + i)) + *(f32 *)(D_8011F308 + i);
            *(f32 *)(D_8011F310 + i) = __cosf(*(f32 *)(D_8011F334 + i)) + *(f32 *)(D_8011F310 + i);
        } else {
            i = (n & 0xFFFF) * 100;
            *(f32 *)(D_8011F308 + i) = *(f32 *)(D_8011F308 + i) - __cosf(*(f32 *)(D_8011F334 + i));
            *(f32 *)(D_8011F310 + i) = *(f32 *)(D_8011F310 + i) - __sinf(*(f32 *)(D_8011F334 + i));
        }
    } else {
        *(u8 *)(D_8011F2FD + (n & 0xFFFF) * 100) = 2;
    }
}
