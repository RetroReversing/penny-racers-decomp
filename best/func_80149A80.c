extern u8 D_8011F2F0[];
extern u8 D_8011F2FC[];
extern f32 D_80221080[];
extern f32 D_80221084[];
extern f32 D_80221088[];
extern f32 D_8022108C[];
extern f32 D_80221090[];
extern f32 D_80221094[];

void func_80149A80(s32 arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    u8 *temp_a0;

    temp_v0 = (arg0 & 0xFFFF) * 0x64;
    temp_a0 = D_8011F2F0 + temp_v0;
    if (*(u16 *)(temp_a0 + 0x3E) == 0) {
        temp_v0_2 = (D_8011F2FC[(unsigned short)temp_v0] & 0xFFFF) * 0x24;
        *(f32 *)((u8 *)D_8022108C + temp_v0_2) = *(f32 *)(temp_a0 + 0x18);
        *(f32 *)((u8 *)D_80221090 + temp_v0_2) = *(f32 *)(temp_a0 + 0x1C);
        *(f32 *)((u8 *)D_80221094 + temp_v0_2) = *(f32 *)(temp_a0 + 0x20);
        *(f32 *)((u8 *)D_80221080 + temp_v0_2) = *(f32 *)(temp_a0 + 0x24);
        *(f32 *)((u8 *)D_80221084 + temp_v0_2) = *(f32 *)(temp_a0 + 0x28);
        *(f32 *)((u8 *)D_80221088 + temp_v0_2) = *(f32 *)(temp_a0 + 0x2C);
        *(u16 *)(temp_a0 + 0x3E) = 1;
    }
}
