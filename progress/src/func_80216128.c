typedef struct {
    u8 pad[0x40];
    u16 state;
    u8 rest[0x22];
} Slot;

void gfxDrawSprite(s32, s32, s32, s32, s32);
void gfxSetup2DState(s32 arg0, s32);
void gfxSetPrimAlpha(s32, u16);
void gfxDrawText(s32, s32, s32, s32, void *, s32, s32, void *, s32, s32, s32, s32);

extern Slot D_8011F2F0[];
extern u8 D_80190C9E;
extern u8 D_801C5EA0;
extern s32 D_802030B0[];
extern u16 sFadeLevel;
extern u8 menuArrowAlpha;
extern s32 D_802D6898;
extern s32 D_802D92A0;

void func_80216128(s32 arg0, s32 arg1) {
    Slot *slot;

    slot = &D_8011F2F0[arg1 & 0xFFFF];
    gfxSetup2DState(arg0, arg1 & 0xFFFF);
    gfxSetPrimAlpha(arg0, sFadeLevel);
    switch (slot->state) {
    case 0:
        slot->state = (u32)0x10;
        return;
    case 16:
    case 32:
        gfxDrawSprite(arg0, 0x4F, 0x67, 0xA, 0x20);
        gfxDrawSprite(arg0, 0x4F, 0x7F, 0xA, 0x20);
        gfxDrawText(arg0, 0x8B, 0x69, 0xD, &D_802D92A0, D_802030B0[0], 0, &D_802D6898, 0xE, 0x10, 0xE0, 0x60);
        gfxDrawText(arg0, 0x85, 0x81, 0xD, &D_802D92A0, D_802030B0[1], 0, &D_802D6898, 0xE, 0x10, 0xE0, 0x60);
        if (D_801C5EA0) {
            gfxDrawSprite(arg0, 0x4F, 0x97, 0xA, 0x20);
            gfxDrawText(arg0, 0x6B, 0x99, 0xD, &D_802D92A0, D_802030B0[3], 0, &D_802D6898, 0xE, 0x10, 0xE0, 0x60);
        }
        if (slot->state != (u32)0x20) {
            gfxSetPrimAlpha(arg0, menuArrowAlpha);
            do { gfxDrawSprite(arg0, 0x58, (D_80190C9E * 0x18) + 0x66, 0xA, 0x15); } while (0);
            gfxDrawSprite(arg0, 0xD5, (D_80190C9E * 0x18) + 0x66, 0xA, 0x16);
        }
        return;
    }
}
