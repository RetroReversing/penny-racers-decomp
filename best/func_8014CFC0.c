extern u8 D_8011F2FC[];
extern u8 D_80126FF7;

void func_8014CFC0(s32 **arg0, s32 arg1) {
    s32 *temp_a2;
    s32 *temp_v1;

    temp_v1 = *arg0;
    *arg0 = temp_v1 + 2;
    temp_v1[0] = 0xB6000000;
    temp_v1[1] = 0x2000;
    temp_a2 = *arg0;
    *arg0 = temp_a2 + 2;
    temp_a2[0] = 0xFA000000;
    temp_a2[1] = D_8011F2FC[(arg1 & 0xFFFF) * 100] | 0xFA5000;
    D_80126FF7 = 0xFF;
}
