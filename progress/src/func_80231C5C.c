extern u16 objCreate(s32, s32, s32, s32, s32, s32, s32, void *, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern u8 D_8011F350[];
extern u16 D_8018BC3C;
extern u8 D_801CE928[];
extern u8 D_801CEC2C[];
extern u8 D_801D59A0;

void func_80231C5C(void)
{
    D_8018BC3C = objCreate(0, 0, 3, 0, 0xA0, 0xFF, 0, D_801CE928, D_801CEC2C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    {
        s32 off = D_8018BC3C * 100;
        u8 *p = &D_801D59A0;
        *(u8 **)(D_8011F350 + off) = p;
        *p = 0;
        *(u16 *)(*(u8 **)(D_8011F350 + off) + 2) = 0x46;
        *(u16 *)(*(u8 **)(D_8011F350 + off) + 4) = 0;
        *(u8 *)(*(u8 **)(D_8011F350 + off) + 6) = 0xFF;
    }
    {
        s32 off = D_8018BC3C * 100;
        *(u8 *)(*(u8 **)(D_8011F350 + off) + 7) = 0xFF;
    }
    {
        s32 off = D_8018BC3C * 100;
        *(u8 *)(*(u8 **)(D_8011F350 + off) + 8) = 0xFF;
    }
    {
        s32 off = D_8018BC3C * 100;
        *(u8 *)(*(u8 **)(D_8011F350 + off) + 9) = 0xFF;
    }
    {
        s32 off = D_8018BC3C * 100;
        *(u16 *)(*(u8 **)(D_8011F350 + off) + 10) = 0;
        *(u16 *)(*(u8 **)(D_8011F350 + off) + 12) = 0;
        *(u16 *)(*(u8 **)(D_8011F350 + off) + 14) = 0x140;
        *(u16 *)(*(u8 **)(D_8011F350 + off) + 16) = 0xF0;
    }
}
