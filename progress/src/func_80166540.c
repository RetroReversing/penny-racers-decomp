extern u8 D_8011F2F0[];
extern u8 D_8011F2FD[];

void func_80166540(s32 arg0) {
    f32 temp_fv0;
    f32 temp_fv0_2;
    s32 temp_a2;
    u8 *temp_a1;
    u8 *temp_v0;

    temp_a2 = (arg0 & 0xFFFF) * 0x64;
    temp_a1 = D_8011F2F0 + temp_a2;
    temp_v0 = D_8011F2F0 + (*(u8 *)temp_a1 * 0x64);
    *(f32 *)(temp_a1 + 0x28) = *(f32 *)(temp_a1 + 0x28) + 20.0f;
    *(f32 *)(temp_a1 + 0x18) = *(f32 *)(temp_v0 + 0x18);
    *(f32 *)(temp_a1 + 0x1C) = *(f32 *)(temp_v0 + 0x1C);
    *(f32 *)(temp_a1 + 0x20) = *(f32 *)(temp_v0 + 0x20);
    *(u8 *)(temp_a1 + 0xC) = *(u8 *)(temp_a1 + 0xC) - 5;
    if (*(u8 *)(temp_a1 + 0xC) < 6U) {
        D_8011F2FD[temp_a2] = 2;
    }
    switch (*(u16 *)(temp_a1 + 0x3E)) {
    case 0:
        temp_fv0 = *(f32 *)(temp_a1 + 0x34) + 0.2f;
        *(f32 *)(temp_a1 + 0x34) = temp_fv0;
        if (temp_fv0 > 1.6f) {
            *(u16 *)(temp_a1 + 0x3E) = 1;
            return;
        }
        return;
    case 1:
        *(f32 *)(temp_a1 + 0x34) = *(f32 *)(temp_a1 + 0x34) * 0.4f;
        temp_fv0_2 = *(f32 *)(temp_a1 + 0x30) + 0.02f;
        *(f32 *)(temp_a1 + 0x30) = temp_fv0_2;
        *(f32 *)(temp_a1 + 0x38) = temp_fv0_2;
        if (*(f32 *)(temp_a1 + 0x30) > 0.3f) {
            *(u16 *)(temp_a1 + 0x3E) = 2;
            return;
        }
        break;
    case 2:
        *(f32 *)(temp_a1 + 0x38) = 0.16f;
        *(f32 *)(temp_a1 + 0x34) = 0.16f;
        *(f32 *)(temp_a1 + 0x30) = 0.16f;
        break;
    }
}
