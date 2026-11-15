extern u8 *D_8011F340[];
extern s32 D_8011F060;
extern u8 D_80126FF6;
extern u8 D_80200220[];

void func_801FCBEC(u32 **arg0, s32 arg1)
{
    u32 *temp_v1;
    u32 *temp_a2;
    u32 *temp_a1;

    if (*D_8011F340[(arg1 & 0xFFFF) * 25] == 1) {
        temp_v1 = *arg0;
        *arg0 = temp_v1 + 2;
        temp_v1[0] = 0x06000000;
        temp_v1[1] = (u32)D_80200220;
        temp_a2 = *arg0;
        *arg0 = temp_a2 + 2;
        temp_a1 = (u32 *)(D_80126FF6 * 0x30 + D_8011F060);
        temp_a2[0] = ((temp_a1[0x798 / 4] & 0xFFF) << 12) | ((temp_a1[0x79C / 4] & 0xFFF) | 0xF2000000);
        temp_a2[1] = ((((temp_a1[0x798 / 4] + 0x7C) & 0xFFF) << 12) | (((temp_a1[0x79C / 4] + 0x7C) & 0xFFF) | 0x01000000));
    }
}
