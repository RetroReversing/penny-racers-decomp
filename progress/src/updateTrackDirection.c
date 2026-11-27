typedef struct { u8 dir; u8 unk01; u8 x; u8 y; u8 tile; } TrackPoint;
typedef struct { u8 mode; } TrackHeader;
extern TrackHeader *trackInfo;
extern TrackPoint trackPointTable[];

/* Sets the direction of track point pointIdx from its tile type and the direction of the
 * point before it (prevIdx), then outputs the cell one step ahead in that direction. */
void updateTrackDirection(u8 prevIdx, u8 pointIdx, u8 *outX, u8 *outY) {
    s8 tile;

    if (trackInfo->mode == 3) {
        tile = trackPointTable[pointIdx].tile;
    } else {
        tile = trackPointTable[pointIdx].tile - 0x2E;
    }
    if (trackPointTable[prevIdx].dir == 0) {
        if ((tile >= 5 && tile <= 9) || (tile >= 0x20 && tile <= 0x29)) {
            trackPointTable[pointIdx].dir = 0;
        } else if ((tile >= 0xA && tile <= 0xC)) {
            trackPointTable[pointIdx].dir = 1;
        } else if ((tile >= 0xD && tile <= 0xF)) {
            trackPointTable[pointIdx].dir = 3;
        } else if (tile == 0x2A) {
            trackPointTable[pointIdx].dir = 0;
        }
    } else if (trackPointTable[prevIdx].dir == 1) {
        if ((tile >= 0 && tile <= 4) || (tile >= 0x16 && tile <= 0x1F)) {
            trackPointTable[pointIdx].dir = 1;
        } else if ((tile >= 0xD && tile <= 0xF)) {
            trackPointTable[pointIdx].dir = 2;
        } else if ((tile >= 0x13 && tile <= 0x15)) {
            trackPointTable[pointIdx].dir = 0;
        } else if (tile == 0x2C) {
            trackPointTable[pointIdx].dir = 1;
        }
    } else if (trackPointTable[prevIdx].dir == 2) {
        if ((tile >= 5 && tile <= 9) || (tile >= 0x20 && tile <= 0x29)) {
            trackPointTable[pointIdx].dir = 2;
        } else if ((tile >= 0x10 && tile <= 0x12)) {
            trackPointTable[pointIdx].dir = 1;
        } else if ((tile >= 0x13 && tile <= 0x15)) {
            trackPointTable[pointIdx].dir = 3;
        } else if (tile == 0x2B) {
            trackPointTable[pointIdx].dir = 2;
        }
    } else if (trackPointTable[prevIdx].dir == 3) {
        if ((tile >= 0 && tile <= 4) || (tile >= 0x16 && tile <= 0x1F)) {
            trackPointTable[pointIdx].dir = 3;
        } else if ((tile >= 0xA && tile <= 0xC)) {
            trackPointTable[pointIdx].dir = 2;
        } else if ((tile >= 0x10 && tile <= 0x12)) {
            trackPointTable[pointIdx].dir = 0;
        } else if (tile == 0x2D) {
            trackPointTable[pointIdx].dir = 3;
        }
    }
    if (trackPointTable[pointIdx].dir == 0) {
        *outX = trackPointTable[pointIdx].x;
        *outY = trackPointTable[pointIdx].y - 1;
    } else if (trackPointTable[pointIdx].dir == 1) {
        *outX = trackPointTable[pointIdx].x - 1;
        *outY = trackPointTable[pointIdx].y;
    } else if (trackPointTable[pointIdx].dir == 2) {
        *outX = trackPointTable[pointIdx].x;
        *outY = trackPointTable[pointIdx].y + 1;
    } else if (trackPointTable[pointIdx].dir == 3) {
        *outX = trackPointTable[pointIdx].x + 1;
        *outY = trackPointTable[pointIdx].y;
    }
}
