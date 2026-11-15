u16 func_800DE41C(s32, s32, s32, s32, s32, s32, s32, void *, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern u8 D_8011F350[];
extern u16 D_8018BC3C;
extern u8 D_801CE928[];
extern u8 D_801CEC2C[];
extern s8 D_801D59A0;

#define ENT(i) ((u8 *)D_8011F350 + (i) * 100)

void func_80231C5C(void) {
    D_8018BC3C = func_800DE41C(0, 0, 3, 0, 0xA0, 0xFF, 0, D_801CE928, D_801CEC2C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    *(void **)ENT(D_8018BC3C) = &D_801D59A0;
    D_801D59A0 = 0;
    *(s16 *)(*(u8 **)ENT(D_8018BC3C) + 2) = 0x46;
    *(s16 *)(*(u8 **)ENT(D_8018BC3C) + 4) = 0;
    *(s8 *)(*(u8 **)ENT(D_8018BC3C) + 6) = 0xFF;
    *(s8 *)(*(u8 **)ENT(D_8018BC3C) + 7) = 0xFF;
    *(s8 *)(*(u8 **)ENT(D_8018BC3C) + 8) = 0xFF;
    *(s8 *)(*(u8 **)ENT(D_8018BC3C) + 9) = 0xFF;
    *(s16 *)(*(u8 **)ENT(D_8018BC3C) + 0xA) = 0;
    *(s16 *)(*(u8 **)ENT(D_8018BC3C) + 0xC) = 0;
    *(s16 *)(*(u8 **)ENT(D_8018BC3C) + 0xE) = 0x140;
    *(s16 *)(*(u8 **)ENT(D_8018BC3C) + 0x10) = 0xF0;
}
