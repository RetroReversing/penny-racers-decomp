extern u8 D_8011F2F0[];
extern u8 D_8011F340[];

void func_8021999C(s32 arg0) {
    u8 *temp_a1;
    f32 temp_fv1;

    temp_a1 = D_8011F2F0 + (arg0 & 0xFFFF) * 100;
    switch (*(u16 *)(temp_a1 + 0x3E)) {
    case 0:
        *(u16 *)(temp_a1 + 0x3E) = 1;
        return;
    case 1:
        if (**(u8 **)(D_8011F340 + (u16)arg0 * 100) == 0) {
            temp_fv1 = *(f32 *)(temp_a1 + 0x28) - 0.5f;
            *(f32 *)(temp_a1 + 0x28) = temp_fv1;
            if (temp_fv1 < 0.0f) {
                *(f32 *)(temp_a1 + 0x28) = temp_fv1 + 360.0f;
            }
        }
        return;
    }
}
