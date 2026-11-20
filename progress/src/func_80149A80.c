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
    u8 *e;
    u16 idx;

    temp_v0 = (arg0 & 0xFFFF) * 0x64;
    e = D_8011F2F0 + temp_v0;
    idx = D_8011F2FC[temp_v0];
    if (*(u16 *)(e + 0x3E) == 0) {
        temp_v0_2 = idx * 0x24;
        *(f32 *)((u8 *)D_8022108C + temp_v0_2) = *(f32 *)(e + 0x18);
        *(f32 *)((u8 *)D_80221090 + temp_v0_2) = *(f32 *)(e + 0x1C);
        *(f32 *)((u8 *)D_80221094 + temp_v0_2) = *(f32 *)(e + 0x20);
        *(f32 *)((u8 *)D_80221080 + temp_v0_2) = *(f32 *)(e + 0x24);
        *(f32 *)((u8 *)D_80221084 + temp_v0_2) = *(f32 *)(e + 0x28);
        *(f32 *)((u8 *)D_80221088 + temp_v0_2) = *(f32 *)(e + 0x2C);
        *(u16 *)(e + 0x3E) = 1;
    }
}
