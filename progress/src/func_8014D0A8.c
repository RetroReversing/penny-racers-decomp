extern u8 D_8011F2FC[];
extern u8 D_80126FF7;

void func_8014D0A8(u32 **arg0, u16 arg1)
{
    u32 *temp_a2;
    u32 *temp_v1;
    u32 off;

    temp_v1 = *arg0;
    *arg0 = temp_v1 + 2;
    temp_v1[0] = 0xB6000000;
    temp_v1[1] = 0x2000;
    temp_a2 = *arg0;
    *arg0 = temp_a2 + 2;
    temp_a2[0] = 0xFA000000;
    off = (arg1 & 0xFFFF) * 100;
    temp_a2[1] = D_8011F2FC[off] | 0xFFFF6400;
    D_80126FF7 = 0xFF;
}
