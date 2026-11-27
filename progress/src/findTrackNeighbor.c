typedef struct { u8 a; u8 b; s8 c; s8 d; u8 e; } Rec407C;
extern Rec407C trackPointTable[];
extern u8 D_801C7AD9[][24];
extern u8 *trackInfo;

/* Finds the track point that continues from pointIndex to the next cell, writing its cell and direction to the outputs (0x7F when there is none). */ void findTrackNeighbor(u8 pointIndex, s8 *outX, u8 *outY, u8 *outDir)
{
    u8 neighborIndex;
    s8 pieceKind;
    s32 cellX;
    s32 cellY;

    do {
    if (trackPointTable[pointIndex].c == 0x17) { *outX = *outY = 0x7F; return; }
    } while (0);
    cellX = trackPointTable[pointIndex].c;
    cellY = trackPointTable[pointIndex].d;
    neighborIndex = D_801C7AD9[cellY][cellX];
    if (neighborIndex == 0xFF) { *outX = *outY = 0x7F; return; }
    if (*trackInfo == 3) {
        pieceKind = trackPointTable[neighborIndex].e;
    } else {
        pieceKind = trackPointTable[neighborIndex].e - 0x2E;
    }
    if ((pieceKind >= 0 && pieceKind <= 4) || (pieceKind >= 0x1B && pieceKind <= 0x1F) || pieceKind == 0x2D) {
        if (trackPointTable[pointIndex].b == trackPointTable[neighborIndex].b) {
            *outX = trackPointTable[pointIndex].c + 1;
            *outY = trackPointTable[pointIndex].d;
            *outDir = 3;
        }
    } else if ((pieceKind >= 0xA && pieceKind <= 0xC) || (pieceKind >= 0x10 && pieceKind <= 0x12)) {
        if (trackPointTable[pointIndex].b == trackPointTable[neighborIndex].b) {
            *outX = trackPointTable[pointIndex].c + 1;
            *outY = trackPointTable[pointIndex].d;
            *outDir = 0xFF;
        }
    } else if (pieceKind >= 0x16 && pieceKind <= 0x1A) {
        if ((trackPointTable[pointIndex].b == 0x3C && trackPointTable[neighborIndex].b == 0) || (trackPointTable[pointIndex].b == 0x78 && trackPointTable[neighborIndex].b == 0x3C)) {
            *outX = trackPointTable[pointIndex].c + 1;
            *outY = trackPointTable[pointIndex].d;
            *outDir = 3;
        }
    }
}

