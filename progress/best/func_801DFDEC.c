typedef struct { u8 pad0[0x40]; u16 unk40; u8 pad42[0x22]; } R;
extern R D_8011F2F0[];
extern u8 D_801E9B18, D_801E9B19, D_801E977C;
extern u8 D_801E9D70[], D_801E87CC[];
extern u16 D_80046820;
extern u8 **D_801E86E4[], **D_801E86EC[];
extern u8 D_801E8750[], D_801CF4C8[], D_801E8710[], D_801D4390[];
void gfxSetup2DState(void *);
void drawWrappedText(void *, u16, u16, s32, void *, void *, s32, void *, s32, s32, s32, s32, s32, s32);
void drawGlyphCell(void *, u16, u16, s32, void *, void *);
void func_801DFDEC(void *arg0, u16 arg1)
{
    s32 i;
    s32 x;
    s32 y;
    s32 row;

    switch (D_8011F2F0[arg1].unk40) {
    case 0:
        break;
    case 1:
        i = 0;
        if (D_801E9B19 == 1) {
            D_8011F2F0[arg1].unk40 = 2;
            break;
        }
        do {
            i++;
        } while (i < 4);
        gfxSetup2DState(arg0);
        x = 0x10;
        y = 0x4E;
        {
            s32 i_1;
            for (i_1 = 0; i_1 < 1; i_1++) {
                    if (D_801E9D70[i_1] < 2) { continue; }
                    if (D_801E9D70[i_1] == 2) { drawWrappedText(arg0, x + 0x14, y + i_1 * 42 - 4, 9, D_801E8750, D_801E86E4[D_80046820][D_801E87CC[D_801E9D70[i_1]]], 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0x10); }
                    do { if (D_801E9D70[i_1] == 3) {
                        row = y + i_1 * 42;
                        drawWrappedText(arg0, x + 0x14, row - 4, 9, D_801E8750, D_801E86E4[D_80046820][D_801E87CC[D_801E9D70[i_1]]], 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0x10);
                        row += 0xC;
                        drawWrappedText(arg0, x + 0x14, row, 9, D_801E8750, D_801E86EC[D_80046820][1], 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0x10);
                    } } while (0);
                    if (D_801E9D70[i_1] == 4) {
                        row = y + i_1 * 42;
                        drawWrappedText(arg0, x + 0x14, row - 4, 9, D_801E8750, D_801E86E4[D_80046820][D_801E87CC[D_801E9D70[i_1]]], 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0x10);
                        row += 0xC;
                        drawWrappedText(arg0, x + 0x14, row, 9, D_801E8750, D_801E86EC[D_80046820][2], 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0x10);
                    }
                    if (D_801E9D70[i_1] == 5) {
                        row = y + i_1 * 42;
                        drawWrappedText(arg0, x + 0x14, row - 4, 9, D_801E8750, D_801E86E4[D_80046820][D_801E87CC[D_801E9D70[i_1]]], 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0x10);
                        row += 0x1C;
                        drawWrappedText(arg0, x + 0x14, row, 9, D_801E8750, D_801E86EC[D_80046820][2], 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0x10);
                    }
                    if (D_801E9D70[i_1] < 2) { continue; }
                    if (D_801E9D70[i_1] == 2) { drawWrappedText(arg0, x + 0x12, y + i_1 * 42 - 6, 9, D_801E8710, D_801E86E4[D_80046820][D_801E87CC[D_801E9D70[i_1]]], 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0x10); }
                    if (D_801E9D70[i_1] == 3) {
                        row = y + i_1 * 42;
                        drawWrappedText(arg0, x + 0x12, row - 6, 9, D_801E8710, D_801E86E4[D_80046820][D_801E87CC[D_801E9D70[i_1]]], 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0x10);
                        row += 0xA;
                        drawWrappedText(arg0, x + 0x12, row, 9, D_801E8710, D_801E86EC[D_80046820][1], 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0x10);
                    }
                    if (D_801E9D70[i_1] == 4) {
                        row = y + i_1 * 42;
                        drawWrappedText(arg0, x + 0x12, row - 6, 9, D_801E8710, D_801E86E4[D_80046820][D_801E87CC[D_801E9D70[i_1]]], 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0x10);
                        row += 0xA;
                        drawWrappedText(arg0, x + 0x12, row, 9, D_801E8710, D_801E86EC[D_80046820][2], 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0x10);
                    }
                    if (D_801E9D70[i_1] == 5) {
                        row = y + i_1 * 42;
                        drawWrappedText(arg0, x + 0x12, row - 6, 9, D_801E8710, D_801E86E4[D_80046820][D_801E87CC[D_801E9D70[i_1]]], 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0x10);
                        row += 0x1A;
                        drawWrappedText(arg0, x + 0x12, row, 9, D_801E8710, D_801E86EC[D_80046820][2], 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0x10);
                    }
            }
        }
        drawWrappedText(arg0, 0x42, 0xC6, 0xA, D_801E8750, D_801E86EC[D_80046820][5], 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0xE);
        drawWrappedText(arg0, 0x40, 0xC4, 0xA, D_801D4390, D_801E86EC[D_80046820][5], 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0xE);
        do { do { do { drawWrappedText(arg0, 0x42, 0xD4, 0xA, D_801E8750, D_801E86EC[D_80046820][4], 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0xE); } while (0); } while (0); } while (0);
        do { do { do { drawWrappedText(arg0, 0x40, 0xD2, 0xA, D_801D4390, D_801E86EC[D_80046820][4], 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0xE); } while (0); } while (0); } while (0);
        if (D_801E977C < 0xF) {
            do { do { do { drawGlyphCell(arg0, 0x2C, (D_801E9B18 + 0xA) * 14 + 0x3A, 0x11E, D_801CF4C8, D_801E8750); } while (0); } while (0); } while (0);
            do { do { drawGlyphCell(arg0, 0x36, (D_801E9B18 + 0xA) * 14 + 0x3A, 0x11F, D_801CF4C8, D_801E8750); } while (0); } while (0);
            do { do { drawGlyphCell(arg0, 0x2A, (D_801E9B18 + 0xA) * 14 + 0x38, 0x11E, D_801CF4C8, D_801D4390); } while (0); } while (0);
            do { do { drawGlyphCell(arg0, 0x34, (D_801E9B18 + 0xA) * 14 + 0x38, 0x11F, D_801CF4C8, D_801D4390); } while (0); } while (0);
        }
        break;
    case 2:
        if (D_801E977C >= 0xB) {
            do { do { gfxSetup2DState(arg0); } while (0); } while (0);
            do { do { drawWrappedText(arg0, 0x2A, 0x73, 0xA, D_801E8750, D_801E86EC[D_80046820][3], 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0xE); } while (0); } while (0);
            do { do { drawWrappedText(arg0, 0x28, 0x71, 0xA, D_801E8710, D_801E86EC[D_80046820][3], 0, D_801CF4C8, 0xA, 0xE, 0xA0, 0xFC, 0x1E, 0xE); } while (0); } while (0);
        }
        break;
    }
}
