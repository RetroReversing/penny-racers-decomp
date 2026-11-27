extern s8 D_8021E15F[];
extern s8 D_8021E162[];
extern u8 D_8021E19E;
void gfxSetPrimColor(s32, s32, s32, s32, s32);
void gfxDrawSprite(s32, s32, s32, s32, s32);

void func_80204AC8(s32 arg0)
{
    s32 v;

    if (D_8021E15F[0] == 2 && D_8021E15F[1] == 0) {
        v = (0xFF - D_8021E19E) & 0xFFFF;
        gfxSetPrimColor(arg0, v, v, v, 0xFF);
    } else {
        gfxSetPrimColor(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    gfxDrawSprite(arg0, 0x77, 0x3A, 0xB, 0x61);
    gfxDrawSprite(arg0, 0x77, 0x9C, 0xB, 0x62);
    gfxDrawSprite(arg0, 0xC0, 0x3A, 0xB, 0x63);
    gfxDrawSprite(arg0, 0xC0, 0x9C, 0xB, 0x11);
    gfxDrawSprite(arg0, 0x77, 0x2B, 0x8, 0x3);
    if (D_8021E15F[0] == 2 && D_8021E15F[1] == 0) {
        gfxSetPrimColor(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if (!(D_8021E162[0] == 2 && D_8021E162[-6] == 1)) {
        gfxSetPrimColor(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    gfxDrawSprite(arg0, 0x7F, 0x70, 0x8, 0x6);
    if (D_8021E15F[0] == 2 && D_8021E15F[1] == 0) {
        gfxSetPrimColor(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if (!(D_8021E162[0] == 1 && D_8021E162[-6] == D_8021E162[0])) {
        gfxSetPrimColor(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    gfxDrawSprite(arg0, 0x7F, 0x59, 0x8, 0x5);
    if (D_8021E15F[0] == 2 && D_8021E15F[1] == 0) {
        gfxSetPrimColor(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if (!(D_8021E162[0] == 0 && D_8021E162[-6] == 1)) {
        gfxSetPrimColor(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    gfxDrawSprite(arg0, 0x7F, 0x42, 0x8, 0x7);
    if (D_8021E15F[0] == 2 && D_8021E15F[1] == 0) {
        gfxSetPrimColor(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if (!(D_8021E162[0] == 3 && D_8021E162[-6] == 1)) {
        gfxSetPrimColor(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    gfxDrawSprite(arg0, 0x7F, 0x87, 0x8, 0xC);
}
