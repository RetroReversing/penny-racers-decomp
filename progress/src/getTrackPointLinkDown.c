typedef struct { u8 a; u8 b; s8 c; s8 d; u8 e; } Rec407C;
extern Rec407C trackPointTable[];
extern u8 D_801C7AF0[][24];
extern u8 *trackInfo;

/* Row-direction counterpart of getTrackPointLink: finds the track point one row below pointIdx and writes its cell and link flag, or 0x7F when there is none. */ void getTrackPointLinkDown(u8 pointIdx, s8 *outCol, u8 *outRow, u8 *outFlag)
{
    u8 nextPoint;
    s8 pointKind;
    s32 cellCol;
    s32 cellRow;

    do {
    if (trackPointTable[pointIdx].d == 0x17) { *outCol = *outRow = 0x7F; return; }
    } while (0);
    cellCol = trackPointTable[pointIdx].c;
    cellRow = trackPointTable[pointIdx].d;
    nextPoint = D_801C7AF0[cellRow][cellCol];
    if (nextPoint == 0xFF) { *outCol = *outRow = 0x7F; return; }
    if (*trackInfo == 3) {
        pointKind = trackPointTable[nextPoint].e;
    } else {
        pointKind = trackPointTable[nextPoint].e - 0x2E;
    }
    if ((pointKind >= 5 && pointKind <= 5+4) || (pointKind >= 0x25 && pointKind <= 0x25+4) || pointKind == 0x2B) {
        if ((trackPointTable[pointIdx].b == 0 && trackPointTable[nextPoint].b == 0x3C) || (trackPointTable[pointIdx].b == 0x3C && trackPointTable[nextPoint].b == 0x78)) {
            *outCol = trackPointTable[pointIdx].c;
            *outRow = trackPointTable[pointIdx].d + 1;
            *outFlag = 2;
        }
    } else if (pointKind >= 0x10 && pointKind <= 0x10+5) {
        if ((trackPointTable[pointIdx].b == 0 && trackPointTable[nextPoint].b == 0x3C) || (trackPointTable[pointIdx].b == 0x3C && trackPointTable[nextPoint].b == 0x78)) {
            *outCol = trackPointTable[pointIdx].c;
            *outRow = trackPointTable[pointIdx].d + 1;
            *outFlag = 0xFF;
        }
    } else if (pointKind >= 0x20 && pointKind <= 0x20+4) {
        if (trackPointTable[pointIdx].b == trackPointTable[nextPoint].b) {
            *outCol = trackPointTable[pointIdx].c;
            *outRow = trackPointTable[pointIdx].d + 1;
            *outFlag = 2;
        }
    }
}

