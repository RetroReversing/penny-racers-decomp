extern u16 D_8011F330[][50];
extern u8 D_801E9798;
extern s8 D_8021E15D;
extern s8 D_8021E15F;
extern s8 D_8021E160;
extern u8 D_8021E19E[];
extern void (*D_8021E148[])(s32);
extern s32 D_8021B664[];
extern u8 D_8021B674;
extern u8 D_8021B678;
extern u8 D_8021B06B;
extern u8 D_8021B06C;
extern s8 D_8021B06D;
extern u8 D_8021B070[];
extern u8 D_801CF4C8[];
extern u8 D_801D4390[];
extern u8 D_801E6B68[];
extern u8 D_801E7470[];
extern void *D_8021C6CC[];
extern void *D_8021C738[];
extern u8 D_8021C57C[];
extern u8 D_8021C588[];
extern u8 D_802D6898[];
extern u8 D_802D92A0[];
void gfxSetup2DState(s32);
void gfxSetPrimColor(s32, u16, u16, u16, u16);
void gfxDrawSprite(s32, s16, s16, s32, s32);
void func_801D8BD0(s32, s32, s32, s32, s32, void *, void *);
void gfxDrawText(s32, u16, u16, s32, void *, void *, s32, void *, s32, s32, s32, s32);
void func_801CAD00(s32, u16, u16, s32, void *, void *, s32, void *, s32, s32, s32, s32, s32, s32);
void func_801CA528(s32, u16, u16, s32, void *, void *);

void func_802134EC(s32 gfx, u16 id)
{
    s32 i;

    switch (D_8011F330[id][0]) {
    case 0:
        D_801E9798 = 0;
        break;
    case 2:
        D_8021E15D = 0;
        gfxSetup2DState(gfx);
        gfxSetPrimColor(gfx, 0xFF, 0xFF, 0xFF, 0xFF);
        gfxDrawSprite(gfx, 0x51, 0xD, 8, 0);
        gfxSetPrimColor(gfx, 0, 0, 0, 0x64);
        gfxDrawSprite(gfx, 0x24, 0xC6, 0xB, 0x57);
        for (i = 4; i >= 0; i--) {
            D_8021E148[i](gfx);
        }
        D_8021E148[D_8021E15F](gfx);
        gfxSetPrimColor(gfx, 0xFF, 0xFF, 0xFF, 0xFF);
        gfxDrawSprite(gfx, 0x28, 0xCB, 8, 0xF);
        gfxDrawSprite(gfx, 0xA1, 0xCB, 8, 0x10);
        gfxDrawSprite(gfx, 0x73, 0xCB, 8, D_8021B664[0] != 0 ? 0xE : 0xD);
        gfxDrawSprite(gfx, 0xEC, 0xCB, 8, D_8021B664[1] != 0 ? 0xE : 0xD);
        gfxSetPrimColor(gfx, 0xFF - D_8021E19E[0], 0xFF - D_8021E19E[0], 0xFF - D_8021E19E[0], 0xFF);
        if (D_8021E160 != 1) { gfxSetPrimColor(gfx, 0x64, 0x64, 0x64, 0xFF); }
        gfxDrawSprite(gfx, 0x54, 0xAA, 8, 0x21);
        gfxDrawSprite(gfx, 0x54, 0xBA, 8, 0x22);
        gfxDrawSprite(gfx, 0xE4, 0xAA, 8, 0x23);
        gfxDrawSprite(gfx, 0xE4, 0xBA, 8, 0x20);
        gfxDrawSprite(gfx, 0x7F, 0xAD, 8, 0xB);
        gfxSetPrimColor(gfx, 0xFF, 0xFF, 0xFF, 0xFF);
        if (D_8021B674 != 0) {
        gfxSetPrimColor(gfx, 0, 0, 0, 0xC8);
        gfxDrawSprite(gfx, 0x12, 0x4E, 0xB, 0x6E);
        gfxSetPrimColor(gfx, 0xFF, 0xFF, 0xFF, 0xFF);
        func_801D8BD0(gfx, 0x10, 0x4C, 0xA, 2, D_801E6B68, D_801E7470);
        gfxDrawText(gfx, 0x28, 0x64, 0xA, D_801D4390, D_8021C6CC[0], 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
        gfxDrawText(gfx, 0x28, 0x74, 0xA, D_801D4390, D_8021C6CC[1], 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
        gfxDrawText(gfx, 0x28, 0x84, 0xA, D_801D4390, D_8021C6CC[2], 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC);
        func_801CAD00(gfx, 0xFA, 0x78, 0xA, D_801D4390, D_8021C6CC[4], 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x15, 0xE);
        func_801CAD00(gfx, 0xFA, 0x86, 0xA, D_801D4390, D_8021C6CC[3], 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x15, 0xE);
        if (D_801E9798 < 0xF) {
        func_801CA528(gfx, 0xE2, (D_8021B678 + 2) * 14 + 0x5C, 0x11E, D_801CF4C8, D_801D4390);
        func_801CA528(gfx, 0xEC, (D_8021B678 + 2) * 14 + 0x5C, 0x11F, D_801CF4C8, D_801D4390);
        }
        }
        if (D_8021B06B == 1) {
        gfxSetPrimColor(gfx, 0xFF, 0xFF, 0xFF, 0xC8);
        gfxDrawSprite(gfx, 0x59, 0x1C, 8, 0x1D);
        gfxDrawSprite(gfx, 0x59, 0xD4, 8, 0x1E);
        gfxDrawSprite(gfx, 0xDF, 0x1C, 8, 0x1F);
        gfxDrawSprite(gfx, 0xDF, 0xD4, 8, 0x20);
        if (D_8021B06D != 9) {
        gfxSetPrimColor(gfx, 0x64, 0x64, 0x64, 0xFF);
        } else {
        gfxSetPrimColor(gfx, 0xFF - D_8021E19E[0], 0xFF - D_8021E19E[0], 0xFF - D_8021E19E[0], 0xFF);
        }
        gfxDrawSprite(gfx, 0x7B, 0xC6, 8, 0x11);
        for (i = 0; i < 9; i++) {
        gfxSetPrimColor(gfx, 0xFF, 0xFF, 0xFF, 0xFF);
        if (D_8021B070[i] == 1) {
        gfxDrawSprite(gfx, 0x4D, i * 18 + 0x23, 8, 0x14);
        }
        if (D_8021B070[i] != 1) { gfxSetPrimColor(gfx, 0x64, 0x64, 0x64, 0xFF); }
        if (D_8021B06D == i) {
        gfxSetPrimColor(gfx, D_8021E19E[0], 0xFF - D_8021E19E[0], 0xFF, 0xFF);
        }
        gfxDrawText(gfx, 0x64, i * 18 + 0x23, 0xF, D_802D92A0, D_8021C738[i], 0, D_802D6898, 0xE, 0x10, 0xE0, 0x60);
        }
        }
        if (D_8021B06C == 1) {
        gfxSetPrimColor(gfx, 0xFF, 0xFF, 0xFF, 0xC8);
        gfxDrawSprite(gfx, 0x31, 0x50, 8, 0x19);
        gfxDrawSprite(gfx, 0x31, 0xAA, 8, 0x1A);
        gfxDrawSprite(gfx, 0x107, 0x50, 8, 0x1B);
        gfxDrawSprite(gfx, 0x107, 0xAA, 8, 0x1C);
        gfxSetPrimColor(gfx, 0x5A, 0x57, 0x27, 0xFF);
        gfxDrawSprite(gfx, 0xAE, 0x5B, 0xB, 0x3E);
        gfxDrawSprite(gfx, 0x37, 0x73, 0xB, 0x3F);
        if (D_8021E15F == 4) { gfxSetPrimColor(gfx, D_8021E19E[0], 0xFF - D_8021E19E[0], 0xFF, 0xFF); }
        if (D_8021B664[2] != 0) { gfxSetPrimColor(gfx, 0x64, 0x64, 0x64, 0xFF); }
        gfxDrawText(gfx, 0x46, 0x5E, 0xF, D_802D92A0, D_8021C57C, 0, D_802D6898, 0xE, 0x10, 0xE0, 0x60);
        if (D_8021E15F == 4) { gfxSetPrimColor(gfx, 0xFF, 0xFF, 0xFF, 0xFF); }
        if (D_8021B664[0] != 0) { gfxSetPrimColor(gfx, 0x64, 0x64, 0x64, 0xFF); }
        gfxDrawSprite(gfx, 0xB0, 0x61, 8, 9);
        if (D_8021E15F == 4) { gfxSetPrimColor(gfx, 0xFF, 0xFF, 0xFF, 0xFF); }
        if (D_8021B664[0] != 1) { gfxSetPrimColor(gfx, 0x64, 0x64, 0x64, 0xFF); }
        gfxDrawSprite(gfx, 0xDD, 0x61, 8, 0xA);
        if (D_8021E15F == 4) { gfxSetPrimColor(gfx, D_8021E19E[0], 0xFF - D_8021E19E[0], 0xFF, 0xFF); }
        if (D_8021B664[2] != 1) { gfxSetPrimColor(gfx, 0x64, 0x64, 0x64, 0xFF); }
        gfxDrawText(gfx, 0x46, 0x78, 0xF, D_802D92A0, D_8021C588, 0, D_802D6898, 0xE, 0x10, 0xE0, 0x60);
        if (D_8021E15F == 4) { gfxSetPrimColor(gfx, 0xFF, 0xFF, 0xFF, 0xFF); }
        if (D_8021B664[1] != 0 || D_8021B664[0] != 0) { gfxSetPrimColor(gfx, 0x64, 0x64, 0x64, 0xFF); }
        gfxDrawSprite(gfx, 0xAF, 0x7B, 8, 9);
        if (D_8021E15F == 4) { gfxSetPrimColor(gfx, 0xFF, 0xFF, 0xFF, 0xFF); }
        if (D_8021B664[1] != 1 || D_8021B664[0] != 0) { gfxSetPrimColor(gfx, 0x64, 0x64, 0x64, 0xFF); }
        gfxDrawSprite(gfx, 0xDD, 0x7B, 8, 0xA);
        if (D_8021E15F == 4) { gfxSetPrimColor(gfx, 0xFF, 0xFF, 0xFF, 0xFF - D_8021E19E[0]); }
        if (D_8021B664[2] != 2) { gfxSetPrimColor(gfx, 0x64, 0x64, 0x64, 0xFF); }
        gfxDrawSprite(gfx, 0x7B, 0x98, 8, 0x11);
        if (D_8021E15F == 4) { gfxSetPrimColor(gfx, 0xFF, 0xFF, 0xFF, 0xFF); }
        }
        return;
    }
    D_8011F330[id][0]++;
}
