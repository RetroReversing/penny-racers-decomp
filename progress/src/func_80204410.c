extern s8 D_8021E15F[];

extern s8 D_8021E162[];
extern u8 D_8021E19E;
void gfxSetPrimColor(s32, s32, s32, s32, s32);
void gfxDrawSprite(s32, s32, s32, s32, s32);

void func_80204410(s32 arg0)
{
    s32 v;

    if (D_8021E15F[0] == 0 && D_8021E15F[1] == 0) {
        v = (0xFF - D_8021E19E) & 0xFFFF;
        gfxSetPrimColor(arg0, v, v, v, 0xFF);
    } else {
        gfxSetPrimColor(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    gfxDrawSprite(arg0, 0x1F, 0x3E, 0xB, 0x5E);
    gfxDrawSprite(arg0, 0x1F, 0xA0, 0xB, 0x5F);
    gfxDrawSprite(arg0, 0x68, 0x3E, 0xB, 0x60);
    gfxDrawSprite(arg0, 0x68, 0xA0, 0xB, 0xD);
    gfxDrawSprite(arg0, 0x1F, 0x2F, 0x8, 0x1);
    if (D_8021E15F[0] == 0 && D_8021E15F[1] == 0) {
        gfxSetPrimColor(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if (!(D_8021E162[0] == 2 && D_8021E162[-6] == 1)) {
        gfxSetPrimColor(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    gfxDrawSprite(arg0, 0x27, 0x74, 0x8, 0x6);
    if (D_8021E15F[0] == 0 && D_8021E15F[1] == 0) {
        gfxSetPrimColor(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if (!(D_8021E162[0] == 1 && D_8021E162[-6] == D_8021E162[0])) {
        gfxSetPrimColor(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    gfxDrawSprite(arg0, 0x27, 0x5D, 0x8, 0x5);
    if (D_8021E15F[0] == 0 && D_8021E15F[1] == 0) {
        gfxSetPrimColor(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if (!(D_8021E162[0] == 0 && D_8021E162[-6] == 1)) {
        gfxSetPrimColor(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    gfxDrawSprite(arg0, 0x27, 0x46, 0x8, 0x7);
    if (D_8021E15F[0] == 0 && D_8021E15F[1] == 0) {
        gfxSetPrimColor(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    if (!(D_8021E162[0] == 3 && D_8021E162[-6] == 1)) {
        gfxSetPrimColor(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    gfxDrawSprite(arg0, 0x27, 0x8B, 0x8, 0xC);
}
