extern void gfxSetup2DState(void);
extern void gfxSetPrimAlpha(s32, s32);
extern void gfxSetPrimColor(s32, s32, s32, s32, s32);
extern void gfxDrawSprite(s32, s32, s32, s32, s32);
extern u8 D_8011F330[];
extern f32 D_8011F30C[];
extern f32 D_8011F308[];
extern u8 D_80189C9A;
extern u16 D_80190CB4;

void func_8014ADA4(s32 arg0, u32 arg1)
{
    u8 a1;
    u8 a2;
    u8 a3;
    s16 s1;
    u16 st;
    u16 temp;

    gfxSetup2DState();
    gfxSetPrimAlpha(arg0, 0xFF);
    st = *(u16 *)(D_8011F330 + D_80190CB4 * 100);
    switch (st) {
    case 0x20:
        gfxSetPrimColor(arg0, 0xE2, 0x38, 0x73, 0xFF);
        gfxDrawSprite(arg0, 0x8E, (s16)(D_80189C9A * 37 + 0x58), 7, 0x1A);
        break;
    case 0x30:
    case 0x40:
    case 0x50:
    {
        a1 = 0xE2;
        a2 = 0x38;
        a3 = 0x73;
        s1 = 0x7C;
        temp = *(u16 *)(D_8011F330 + D_80190CB4 * 100);
        if (temp == 0x40 || temp == 0x50) {
            gfxSetPrimColor(arg0, 0xE2, 0x38, 0x73, 0xFF);
            gfxDrawSprite(arg0, (s16)D_8011F30C[(arg1 & 0xFFFF) * 25], 0x8E, 7, 0x1B);
            a1 = 0x71;
            a2 = 0;
            a3 = 0x38;
            s1 = 0x70;
        }
        gfxSetPrimColor(arg0, a1 & 0xFF, a2 & 0xFF, a3 & 0xFF, 0xFF);
        gfxDrawSprite(arg0, (s16)D_8011F308[(arg1 & 0xFFFF) * 25], s1, 7, 0x1A);
    }
        break;
    default:
        break;
    }
}

