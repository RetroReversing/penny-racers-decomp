/* adapted from similar verified C in tryBoardMove (matched), with its names changed by decompdecomp */
extern u8 D_801C5EA8[];
extern u8 D_801C5EC0[];
typedef struct { u8 f0; u8 pad[4]; } Row_D_801C7081;
extern Row_D_801C7081 glyphLine[];
typedef struct { u8 f0; u8 pad[4]; } Row_D_801C7084;
extern Row_D_801C7084 glyphCode[];
extern u8 *trackInfo;

/* Variant of tryBoardMove for the second track table: moves a piece from fromIdx to toIdx when legal and returns 1 if it moved. */ s32 tryBoardMoveAlt(s32 fromIdx, u8 toIdx, s32 piece)
{
    s32 moved;
    u8 a1;
    u8 fromCode;
    u8 toCode;

    moved = 0;
    if (toIdx == trackInfo[2]) {
        return 0;
    }
    if (trackInfo[0] == 3) {
        fromCode = glyphCode[fromIdx & 0xFF].f0;
        toCode = glyphCode[toIdx].f0;
    } else {
        fromCode = glyphCode[fromIdx & 0xFF].f0 - 0x2E;
        toCode = glyphCode[toIdx].f0 - 0x2E;
    }
    if (toCode < 5) {
        if (glyphLine[fromIdx & 0xFF].f0 == glyphLine[toIdx].f0) {
            if ((u8) fromCode < 5 || (u8) (fromCode - 0xD) < 3 || (u8) (fromCode - 0x13) < 3 || (s8) fromCode == 0x2C) {
                glyphLine[toIdx].f0 = 0x3C;
                glyphCode[toIdx].f0 = D_801C5EC0[piece & 0xFF];
 moved = 1;
 if (trackInfo[0] == 4) { glyphCode[toIdx].f0 += 0x2E; }
            }
        } else if (glyphLine[fromIdx & 0xFF].f0 == 0x3C && glyphLine[toIdx].f0 == 0x78) {
            if ((u8) (fromCode - 0x1B) < 5) {
                glyphLine[toIdx].f0 = 0x3C;
                glyphCode[toIdx].f0 = D_801C5EC0[piece & 0xFF];
 moved = 1;
 if (trackInfo[0] == 4) { glyphCode[toIdx].f0 += 0x2E; }
            }
        } else if (glyphLine[fromIdx & 0xFF].f0 == 0 && glyphLine[toIdx].f0 == 0x3C) {
            if ((u8) (fromCode - 0x1B) < 5) {
                glyphLine[toIdx].f0 = 0;
                glyphCode[toIdx].f0 = D_801C5EC0[piece & 0xFF];
 moved = 1;
 if (trackInfo[0] == 4) { glyphCode[toIdx].f0 += 0x2E; }
            }
        }
    } else if ((u8) (toCode - 0x16) < 5) {
        if (glyphLine[fromIdx & 0xFF].f0 == glyphLine[toIdx].f0) {
            if ((u8) (fromCode - 0x1B) < 5) {
                glyphCode[toIdx].f0 = D_801C5EA8[piece & 0xFF];
 moved = 1;
 if (trackInfo[0] == 4) { glyphCode[toIdx].f0 += 0x2E; }
            }
        } else if ((glyphLine[fromIdx & 0xFF].f0 == 0x78 && glyphLine[toIdx].f0 == 0x3C)
                   || (glyphLine[fromIdx & 0xFF].f0 == 0x3C && glyphLine[toIdx].f0 == 0)) {
            if ((u8) fromCode < 5 || (u8) (fromCode - 0xD) < 3 || (u8) (fromCode - 0x13) < 3 || (s8) fromCode == 0x2C) {
                glyphCode[toIdx].f0 = D_801C5EA8[piece & 0xFF];
 moved = 1;
 if (trackInfo[0] == 4) { glyphCode[toIdx].f0 += 0x2E; }
            }
        }
    }
    return moved & 0xFF;
}
