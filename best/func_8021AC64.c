extern u16 func_800DE41C(s32, s32, s32, s32, s32, s32, s32, void *, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern u8 D_800DB1B8[];
extern u8 D_8011F350[];
extern u16 D_80190CB4;
extern u8 D_801CE928[];
extern u8 D_801CEC2C[];
extern u8 D_801D59B2[];

#define ENT (*(u8 **)(D_8011F350 + *p * 0x64))

void func_8021AC64(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4)
{
    u16 *p = &D_80190CB4;

    *p = func_800DE41C(0, 0, 3, 0, (s32) arg4, 0xFF, 0, D_801CE928, D_801CEC2C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    *(u8 **)(D_8011F350 + *p * 0x64) = D_801D59B2;
    ENT[0] = 0;
    *(u16 *)(ENT + 2) = 0x46;
    *(u16 *)(ENT + 4) = 0;
    ENT[6] = arg0;
    ENT[7] = arg1;
    ENT[8] = arg2;
    ENT[9] = arg3;
    *(u16 *)(ENT + 0xA) = *(u16 *)(D_800DB1B8 + 0x2110);
    *(u16 *)(ENT + 0xC) = *(u16 *)(D_800DB1B8 + 0x2112);
    *(u16 *)(ENT + 0xE) = *(u16 *)(D_800DB1B8 + 0x2114);
    *(u16 *)(ENT + 0x10) = *(u16 *)(D_800DB1B8 + 0x2116);
}
