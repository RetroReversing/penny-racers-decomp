s32 func_8012AD20(u16, void *, u8, u8);
extern u8 D_800DA260[];
extern u8 D_8011F2F0[];
extern u8 D_8011F304[];
extern u8 D_80238D24[];
extern u8 D_80238D30[];
extern u8 D_80238D34[];
extern u8 D_80238D38[];
extern u8 D_80238D3C[];
extern u8 D_80238D40[];
extern u8 D_80238D44[];

void func_8013DE3C(void *arg0)
{
    u8 *temp_v1;
    u8 *temp_a0;
    u8 *temp_a1;
    s32 var_a2;
    s32 temp_v1_2;
    u16 temp_v1_16;
    s32 off;

    temp_v1 = D_800DA260 + *(u16 *)((u8 *)arg0 + 4) * 0x178;
    *(u16 *)temp_v1 = 6;
    temp_v1[0x170] = 0;
    temp_v1_16 = *(u16 *)temp_v1;
    func_8012AD20(*(u16 *)(D_8011F304 + *(u16 *)((u8 *)arg0 + 2) * 0x64), (u8 *)arg0 + 0x210, temp_v1[1], (temp_v1 + temp_v1_16)[0x16A]);

    var_a2 = 1;
    do {
        temp_a0 = D_8011F2F0 + (*(u16 *)((u8 *)arg0 + 2) + (var_a2 & 0xFFFF)) * 0x64;
        temp_v1_2 = var_a2 & 0xFFFF;
        temp_a1 = *(u8 **)(temp_a0 + 0x50);
        off = temp_v1_2 * 0x34;
        *(s32 *)(temp_a1 + 4) = *(s32 *)(D_80238D24 + off);
        *(f32 *)(temp_a0 + 0x18) = *(f32 *)(D_80238D30 + off);
        *(f32 *)(temp_a0 + 0x1C) = *(f32 *)(D_80238D34 + off);
        *(f32 *)(temp_a0 + 0x20) = *(f32 *)(D_80238D38 + off);
        *(f32 *)(temp_a0 + 0x24) = *(f32 *)(D_80238D3C + off);
        *(f32 *)(temp_a0 + 0x28) = *(f32 *)(D_80238D40 + off);
        *(f32 *)(temp_a0 + 0x2C) = *(f32 *)(D_80238D44 + off);
        var_a2 = var_a2 + 1;
    } while ((u32)(var_a2 & 0xFFFF) < 8U);
}
