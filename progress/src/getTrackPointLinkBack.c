typedef struct { u8 a; u8 b; s8 c; s8 d; u8 e; } Rec407C;
extern Rec407C trackPointTable[];
extern u8 D_801C7AD7[][24];
extern u8 *trackInfo;

/* Backward counterpart of getTrackPointLink: finds the track point one cell behind pointIdx and writes its cell and link flag, or 0x7F when there is none. */ void getTrackPointLinkBack(u8 pointIdx, s8 *outCol, u8 *outRow, u8 *outFlag)
{
    u8 nextPoint;
    s8 pointKind;
    s32 cellCol;
    s32 cellRow;

    do {
    if (trackPointTable[pointIdx].c == 0) { *outCol = *outRow = 0x7F; return; }
    } while (0);
    cellCol = trackPointTable[pointIdx].c;
    cellRow = trackPointTable[pointIdx].d;
    nextPoint = D_801C7AD7[cellRow][cellCol];
    if (nextPoint == 0xFF) { *outCol = *outRow = 0x7F; return; }
    if (*trackInfo == 3) {
        pointKind = trackPointTable[nextPoint].e;
    } else {
        pointKind = trackPointTable[nextPoint].e - 0x2E;
    }
    if ((pointKind >= 0 && pointKind <= 4) || (pointKind >= 0x16 && pointKind <= 0x1A) || pointKind == 0x2C) {
        if ((trackPointTable[pointIdx].b == 0 && trackPointTable[nextPoint].b == 0x3C) || (trackPointTable[pointIdx].b == 0x3C && trackPointTable[nextPoint].b == 0x78)) {
            *outCol = trackPointTable[pointIdx].c - 1;
            *outRow = trackPointTable[pointIdx].d;
            *outFlag = 1;
        }
    } else if ((pointKind >= 0xD && pointKind <= 0xF) || (pointKind >= 0x13 && pointKind <= 0x15)) {
        if ((trackPointTable[pointIdx].b == 0 && trackPointTable[nextPoint].b == 0x3C) || (trackPointTable[pointIdx].b == 0x3C && trackPointTable[nextPoint].b == 0x78)) {
            *outCol = trackPointTable[pointIdx].c - 1;
            *outRow = trackPointTable[pointIdx].d;
            *outFlag = 0xFF;
        }
    } else if (pointKind >= 0x1B && pointKind <= 0x1F) {
        if (trackPointTable[pointIdx].b == trackPointTable[nextPoint].b) {
            *outCol = trackPointTable[pointIdx].c - 1;
            *outRow = trackPointTable[pointIdx].d;
            *outFlag = 1;
        }
    }
}

