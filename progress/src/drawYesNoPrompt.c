/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

M2C_UNK gfxDrawSprite(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK gfxSetup2DState();                            /* extern */
M2C_UNK gfxSetPrimAlpha(s32, M2C_UNK);                /* extern */
M2C_UNK gfxSetPrimColor(s32, s32, s32, s32, s32);     /* extern */
M2C_UNK gfxDrawText(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, s32, s32, M2C_UNK *, s32, s32, s32, s32); /* extern */
extern u16 D_80189CC6;
extern M2C_UNK D_802033FC;
extern M2C_UNK D_802D6898;
extern M2C_UNK D_802D92A0;

/* Draws the yes/no prompt box: corner sprites, the two choices, with the selected one highlighted from the flag word. */ void drawYesNoPrompt(s32 gfxPtr) {
    s32 colorA;
    s32 colorB;
    s32 choiceColorA;
    s32 choiceColorB;

    gfxSetup2DState();
    gfxSetPrimAlpha(gfxPtr, 0xC0);
    gfxDrawSprite(gfxPtr, 0x58, 0x52, 0xB, 0x4B);
    gfxDrawSprite(gfxPtr, 0x58, 0x8A, 0xB, 0x4C);
    gfxDrawSprite(gfxPtr, 0xE0, 0x52, 0xB, 0x4D);
    gfxDrawSprite(gfxPtr, 0xE0, 0x8A, 0xB, 0x4E);
    choiceColorA = 0x5F;
    choiceColorB = 0xFF;
    if (!(D_80189CC6 & 0x8000)) {
        choiceColorA = 0xFF;
        choiceColorB = 0x5F;
    }
    colorA = choiceColorA & 0xFFFF;
    gfxSetPrimColor(gfxPtr, colorA, colorA, colorA, 0xFF);
    gfxDrawText(gfxPtr, 0x73, 0x74, 0xF, &D_802D92A0, M2C_FIELD(&D_802033FC, s32 *, 0), 0, &D_802D6898, 0xE, 0x10, 0xE0, 0x60);
    colorB = choiceColorB & 0xFFFF;
    gfxSetPrimColor(gfxPtr, colorB, colorB, colorB, 0xFF);
    gfxDrawText(gfxPtr, 0xAF, 0x74, 0xF, &D_802D92A0, M2C_FIELD(&D_802033FC, s32 *, 4), 0, &D_802D6898, 0xE, 0x10, 0xE0, 0x60);
    gfxSetPrimAlpha(gfxPtr, 0xFF);
    gfxDrawText(gfxPtr, 0x64, 0x5E, 0xF, &D_802D92A0, M2C_FIELD(&D_802033FC, s32 *, -0x344), 0, &D_802D6898, 0xE, 0x10, 0xE0, 0x60);
}
