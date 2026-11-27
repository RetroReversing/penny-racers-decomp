extern u8 glyphTableA[];
extern u8 glyphTableB[];
typedef struct { u8 f0; u8 pad[4]; } Row_D_801C7081;
extern Row_D_801C7081 glyphLine[];
typedef struct { u8 f0; u8 pad[4]; } Row_D_801C7084;
extern Row_D_801C7084 glyphCode[];
extern u8 *trackInfo;

/* Rewrites the glyph at dstIndex from a lookup table when its neighbour at srcIndex and the line/code rules match; returns 1 if it changed. */ s32 tryReplaceGlyph(u8 srcIndex, u8 dstIndex, s32 tableIndex)
{
    s32 changed;
    u8 unusedA1;
    u8 srcCode;
    u8 dstCode;

    changed = 0;
    if (dstIndex == trackInfo[2]) {
        return 0;
    }
    if (trackInfo[0] == 3) {
        srcCode = glyphCode[srcIndex].f0;
        dstCode = glyphCode[dstIndex].f0;
    } else {
        srcCode = glyphCode[srcIndex].f0 - 0x2E;
        dstCode = glyphCode[dstIndex].f0 - 0x2E;
    }
    if ((u8) (dstCode - 5) < 5) {
        if (glyphLine[srcIndex].f0 == glyphLine[dstIndex].f0) {
            if ((u8) (srcCode - 5) < 5 || (u8) (srcCode - 0x10) < 6 || (s8) srcCode == 0x2B) {
                glyphLine[dstIndex].f0 = 0x3C;
                glyphCode[dstIndex].f0 = glyphTableB[tableIndex & 0xFF];
 changed = 1;
 if (trackInfo[0] == 4) { glyphCode[dstIndex].f0 += 0x2E; }
            }
        } else if (glyphLine[srcIndex].f0 == 0x3C && glyphLine[dstIndex].f0 == 0x78) {
            if ((u8) (srcCode - 0x20) < 5) {
                glyphLine[dstIndex].f0 = 0x3C;
                glyphCode[dstIndex].f0 = glyphTableB[tableIndex & 0xFF];
 changed = 1;
 if (trackInfo[0] == 4) { glyphCode[dstIndex].f0 += 0x2E; }
            }
        } else if (glyphLine[srcIndex].f0 == 0 && glyphLine[dstIndex].f0 == 0x3C) {
            if ((u8) (srcCode - 0x20) < 5) {
                glyphLine[dstIndex].f0 = 0;
                glyphCode[dstIndex].f0 = glyphTableB[tableIndex & 0xFF];
 changed = 1;
 if (trackInfo[0] == 4) { glyphCode[dstIndex].f0 += 0x2E; }
            }
        }
    } else if ((u8) (dstCode - 0x25) < 5) {
        if (glyphLine[srcIndex].f0 == glyphLine[dstIndex].f0) {
            if ((u8) (srcCode - 0x20) < 5) {
                glyphCode[dstIndex].f0 = glyphTableA[tableIndex & 0xFF];
 changed = 1;
 if (trackInfo[0] == 4) { glyphCode[dstIndex].f0 += 0x2E; }
            }
        } else if ((glyphLine[srcIndex].f0 == 0x78 && glyphLine[dstIndex].f0 == 0x3C)
                   || (glyphLine[srcIndex].f0 == 0x3C && glyphLine[dstIndex].f0 == 0)) {
            if ((u8) (srcCode - 5) < 5 || (u8) (srcCode - 0x10) < 6 || (s8) srcCode == 0x2B) {
                glyphCode[dstIndex].f0 = glyphTableA[tableIndex & 0xFF];
 changed = 1;
 if (trackInfo[0] == 4) { glyphCode[dstIndex].f0 += 0x2E; }
            }
        }
    }
    return changed & 0xFF;
}
