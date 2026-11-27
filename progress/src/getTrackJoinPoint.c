typedef struct { u8 a; u8 b; s8 c; s8 d; u8 e; } TrackPoint;
extern TrackPoint trackPointTable[];
extern u8 D_801C7AF0[][24];
extern u8 *trackInfo;

/* Finds the point that the track point at pointIndex joins to and writes the join's
   column, row and direction; column and row are set to 0x7F when there is none. */
void getTrackJoinPoint(u8 pointIndex, s8 *outCol, u8 *outRow, u8 *outDir)
{
    u8 n;
    s8 kind;
    s32 col;
    s32 row;

    do {
    if (trackPointTable[pointIndex].d == 0x17) { *outCol = *outRow = 0x7F; return; }
    } while (0);
    col = trackPointTable[pointIndex].c;
    row = trackPointTable[pointIndex].d;
    n = D_801C7AF0[row][col];
    if (n == 0xFF) { *outCol = *outRow = 0x7F; return; }
    if (*trackInfo == 3) {
        kind = trackPointTable[n].e;
    } else {
        kind = trackPointTable[n].e - 0x2E;
    }
    if ((kind >= 5 && kind <= 5+4) || (kind >= 0x25 && kind <= 0x25+4) || kind == 0x2B) {
        if (trackPointTable[pointIndex].b == trackPointTable[n].b) {
            *outCol = trackPointTable[pointIndex].c;
            *outRow = trackPointTable[pointIndex].d + 1;
            *outDir = 2;
        }
    } else if (kind >= 0x10 && kind <= 0x10+5) {
        if (trackPointTable[pointIndex].b == trackPointTable[n].b) {
            *outCol = trackPointTable[pointIndex].c;
            *outRow = trackPointTable[pointIndex].d + 1;
            *outDir = 0xFF;
        }
    } else if (kind >= 0x20 && kind <= 0x20+4) {
        if ((trackPointTable[pointIndex].b == 0x3C && trackPointTable[n].b == 0) || (trackPointTable[pointIndex].b == 0x78 && trackPointTable[n].b == 0x3C)) {
            *outCol = trackPointTable[pointIndex].c;
            *outRow = trackPointTable[pointIndex].d + 1;
            *outDir = 2;
        }
    }
}
