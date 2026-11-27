typedef struct { u8 dir; u8 unk01; u8 x; u8 y; u8 tile; } TrackPoint;
typedef struct { u8 mode; } TrackHeader;
extern TrackHeader *trackInfo;
extern TrackPoint trackPoints[];

/* Sets the direction of track point pointIdx from its tile type and the direction of the
 * point before it (prevIdx), then outputs the cell one step ahead in that direction. */
void updateTrackDirection(u8 prevIdx, u8 pointIdx, u8 *outX, u8 *outY) {
    s8 tile;

    if (trackInfo->mode == 3) {
        tile = trackPoints[pointIdx].tile;
    } else {
        tile = trackPoints[pointIdx].tile - 0x2E;
    }
    if (trackPoints[prevIdx].dir == 0) {
        if ((tile >= 5 && tile <= 9) || (tile >= 0x20 && tile <= 0x29)) {
            trackPoints[pointIdx].dir = 0;
        } else if ((tile >= 0xA && tile <= 0xC)) {
            trackPoints[pointIdx].dir = 1;
        } else if ((tile >= 0xD && tile <= 0xF)) {
            trackPoints[pointIdx].dir = 3;
        } else if (tile == 0x2A) {
            trackPoints[pointIdx].dir = 0;
        }
    } else if (trackPoints[prevIdx].dir == 1) {
        if ((tile >= 0 && tile <= 4) || (tile >= 0x16 && tile <= 0x1F)) {
            trackPoints[pointIdx].dir = 1;
        } else if ((tile >= 0xD && tile <= 0xF)) {
            trackPoints[pointIdx].dir = 2;
        } else if ((tile >= 0x13 && tile <= 0x15)) {
            trackPoints[pointIdx].dir = 0;
        } else if (tile == 0x2C) {
            trackPoints[pointIdx].dir = 1;
        }
    } else if (trackPoints[prevIdx].dir == 2) {
        if ((tile >= 5 && tile <= 9) || (tile >= 0x20 && tile <= 0x29)) {
            trackPoints[pointIdx].dir = 2;
        } else if ((tile >= 0x10 && tile <= 0x12)) {
            trackPoints[pointIdx].dir = 1;
        } else if ((tile >= 0x13 && tile <= 0x15)) {
            trackPoints[pointIdx].dir = 3;
        } else if (tile == 0x2B) {
            trackPoints[pointIdx].dir = 2;
        }
    } else if (trackPoints[prevIdx].dir == 3) {
        if ((tile >= 0 && tile <= 4) || (tile >= 0x16 && tile <= 0x1F)) {
            trackPoints[pointIdx].dir = 3;
        } else if ((tile >= 0xA && tile <= 0xC)) {
            trackPoints[pointIdx].dir = 2;
        } else if ((tile >= 0x10 && tile <= 0x12)) {
            trackPoints[pointIdx].dir = 0;
        } else if (tile == 0x2D) {
            trackPoints[pointIdx].dir = 3;
        }
    }
    if (trackPoints[pointIdx].dir == 0) {
        *outX = trackPoints[pointIdx].x;
        *outY = trackPoints[pointIdx].y - 1;
    } else if (trackPoints[pointIdx].dir == 1) {
        *outX = trackPoints[pointIdx].x - 1;
        *outY = trackPoints[pointIdx].y;
    } else if (trackPoints[pointIdx].dir == 2) {
        *outX = trackPoints[pointIdx].x;
        *outY = trackPoints[pointIdx].y + 1;
    } else if (trackPoints[pointIdx].dir == 3) {
        *outX = trackPoints[pointIdx].x + 1;
        *outY = trackPoints[pointIdx].y;
    }
}
