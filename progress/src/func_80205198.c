#define E15F (*(s8 *)&D_8021E15F)
#define E160 (*(s8 *)((u8 *)&D_8021E15F + 1))
#define E162M6 (((s8 *)&D_8021E162)[-6])
extern void gfxDrawSprite(s32, s32, s32, s32, s32);
extern void gfxSetPrimColor(s32, s32, s32, s32, s32);
extern u8 D_8021B06B;
extern u8 D_8021B06C;
extern u8 D_8021E15F;
extern s8 D_8021E162;
extern u8 D_8021E19E;

void func_80205198(s32 arg0)
{
    s32 v;

    if (E15F == 4 && D_8021B06B == 0 && D_8021B06C == 0 && E160 == 0) {
        v = (0xFF - D_8021E19E) & 0xFFFF;
        gfxSetPrimColor(arg0, v, v, v, 0xFF);
    } else {
        gfxSetPrimColor(arg0, 0x64, 0x64, 0x64, 0xFF);
    }
    gfxDrawSprite(arg0, 0xCF, 0x36, 0xB, 0x6A);
    gfxDrawSprite(arg0, 0xCF, 0x98, 0xB, 0x6B);
    gfxDrawSprite(arg0, 0x118, 0x36, 0xB, 0x6C);
    gfxDrawSprite(arg0, 0x118, 0x98, 0xB, 0x1D);
    gfxDrawSprite(arg0, 0xCF, 0x27, 0x8, 0x8);
    if (E15F == 4 && E160 == 0) {
        gfxSetPrimColor(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    {
        s8 *p = (s8 *)&D_8021E162;
        if (*p != 0) {
            gfxSetPrimColor(arg0, 0x64, 0x64, 0x64, 0xFF);
        } else if (p[-6] != 1) {
            gfxSetPrimColor(arg0, 0x64, 0x64, 0x64, 0xFF);
        }
    }
    gfxDrawSprite(arg0, 0xD7, 0x42, 0x8, 0x15);
    gfxDrawSprite(arg0, 0xD7, 0x60, 0x8, 0x16);
    gfxDrawSprite(arg0, 0x110, 0x42, 0x8, 0x17);
    gfxDrawSprite(arg0, 0x110, 0x60, 0x8, 0x18);
    gfxDrawSprite(arg0, 0xD9, 0x46, 0x8, 0x12);
    if (E15F == 4 && E160 == 0) {
        gfxSetPrimColor(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
    }
    {
        s8 *p = (s8 *)&D_8021E162;
        s32 e = *p;
        if (e != 1) {
            gfxSetPrimColor(arg0, 0x64, 0x64, 0x64, 0xFF);
        } else if (p[-6] != e) {
            gfxSetPrimColor(arg0, 0x64, 0x64, 0x64, 0xFF);
        }
    }
    gfxDrawSprite(arg0, 0xD7, 0x6E, 0x8, 0x15);
    gfxDrawSprite(arg0, 0xD7, 0x8C, 0x8, 0x16);
    gfxDrawSprite(arg0, 0x110, 0x6E, 0x8, 0x17);
    gfxDrawSprite(arg0, 0x110, 0x8C, 0x8, 0x18);
    gfxDrawSprite(arg0, 0xD9, 0x71, 0x8, 0x13);
}

