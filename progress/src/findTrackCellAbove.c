typedef struct { u8 a; u8 b; s8 c; s8 d; u8 e; } Rec407C;
extern Rec407C trackPointTable[];
extern u8 D_801C7AC0[][24];
extern u8 *trackInfo;

/* Finds the track cell above a track point's neighbour and reports it through the out params; the flag is 0 or 0xFF for the side it lies on, or 0x7F when there is no cell. */
void findTrackCellAbove(u8 pointIndex, s8 *outCol, u8 *outRow, u8 *outFlag)
{
    u8 neighbour;
    s8 kind;
    s32 col;
    s32 row;

    do {
    if (trackPointTable[pointIndex].d == 0) { *outCol = *outRow = 0x7F; return; }
    } while (0);
    col = trackPointTable[pointIndex].c;
    row = trackPointTable[pointIndex].d;
    neighbour = D_801C7AC0[row][col];
    if (neighbour == 0xFF) { *outCol = *outRow = 0x7F; return; }
    if (*trackInfo == 3) {
        kind = trackPointTable[neighbour].e;
    } else {
        kind = trackPointTable[neighbour].e - 0x2E;
    }
    if ((kind >= 5 && kind <= 5+4) || (kind >= 0x20 && kind <= 0x20+4) || kind == 0x2A) {
        if (trackPointTable[pointIndex].b == trackPointTable[neighbour].b) {
            *outCol = trackPointTable[pointIndex].c;
            *outRow = trackPointTable[pointIndex].d - 1;
            *outFlag = 0;
        }
    } else if (kind >= 0xA && kind <= 0xA+5) {
        if (trackPointTable[pointIndex].b == trackPointTable[neighbour].b) {
            *outCol = trackPointTable[pointIndex].c;
            *outRow = trackPointTable[pointIndex].d - 1;
            *outFlag = 0xFF;
        }
    } else if (kind >= 0x25 && kind <= 0x25+4) {
        if ((trackPointTable[pointIndex].b == 0x3C && trackPointTable[neighbour].b == 0) || (trackPointTable[pointIndex].b == 0x78 && trackPointTable[neighbour].b == 0x3C)) {
            *outCol = trackPointTable[pointIndex].c;
            *outRow = trackPointTable[pointIndex].d - 1;
            *outFlag = 0;
        }
    }
}
