typedef struct { u8 type; u8 y; s8 x; s8 z; s8 pad; } Point;
typedef struct { u8 a; u8 b; u8 count; } Info;
typedef struct { f32 x; f32 y; f32 z; f32 rot; } Out;
extern Info *trackInfo;

/* Fills slotCount edge slots per track point: world position and facing angle for each facing type (0..3). */ void placeEdgeObjects(Point *points, Out *slots, u8 slotCount, f32 x, f32 z) {
    u8 index;

    for (index = 0; index < slotCount; index++, slots++) {
        if (points->type == 0) {
            if (slotCount == 1) {
                slots->x = points->x * 400.0f + 75.0f + (x - 75.0f);
            } else if (slotCount == 2) {
                slots->x = points->x * 400.0f + (f32) (index + 1) * 50.0f + (x - 75.0f);
            } else if (slotCount == 3) {
                slots->x = points->x * 400.0f + (f32) index * 75.0f + (x - 75.0f);
            } else if (slotCount == 4) {
                slots->x = points->x * 400.0f + (f32) index * 50.0f + (x - 75.0f);
            }
            if (trackInfo->b == 5) {
                slots->y = points[trackInfo->count - 1].y;
                slots->z = (points->z + 1) * 400.0f + (z - 180.0f);
            } else {
                slots->y = points->y;
                slots->z = points->z * 400.0f + (z - 180.0f);
            }
            slots->rot = 180.0f;
        } else if (points->type == 1) {
            if (trackInfo->b == 5) {
                slots->x = (points->x + 1) * 400.0f + (x - 170.0f);
                slots->y = points[trackInfo->count - 1].y;
            } else {
                slots->x = points->x * 400.0f + (x - 170.0f);
                slots->y = points->y;
            }
            if (slotCount == 1) {
                slots->z = points->z * 400.0f + 75.0f + (z - 75.0f);
            } else if (slotCount == 2) {
                slots->z = points->z * 400.0f + (f32) (index + 1) * 50.0f + (z - 75.0f);
            } else if (slotCount == 3) {
                slots->z = points->z * 400.0f + (f32) index * 75.0f + (z - 75.0f);
            } else if (slotCount == 4) {
                slots->z = points->z * 400.0f + (f32) index * 50.0f + (z - 75.0f);
            }
            slots->rot = 270.0f;
        } else if (points->type == 2) {
            if (slotCount == 1) {
                slots->x = points->x * 400.0f + 75.0f + (x - 75.0f);
            } else if (slotCount == 2) {
                slots->x = points->x * 400.0f + (f32) (index + 1) * 50.0f + (x - 75.0f);
            } else if (slotCount == 3) {
                slots->x = points->x * 400.0f + (f32) index * 75.0f + (x - 75.0f);
            } else if (slotCount == 4) {
                slots->x = points->x * 400.0f + (f32) index * 50.0f + (x - 75.0f);
            }
            if (trackInfo->b == 5) {
                slots->y = points[trackInfo->count - 1].y;
                slots->z = (points->z - 1) * 400.0f + (z + 180.0f);
            } else {
                slots->y = points->y;
                slots->z = points->z * 400.0f + (z + 180.0f);
            }
            slots->rot = 0.0f;
        } else if (points->type == 3) {
            if (trackInfo->b == 5) {
                slots->x = (points->x - 1) * 400.0f + (x + 170.0f);
                slots->y = points[trackInfo->count - 1].y;
            } else {
                slots->x = points->x * 400.0f + (x + 170.0f);
                slots->y = points->y;
            }
            if (slotCount == 1) {
                slots->z = points->z * 400.0f + 75.0f + (z - 75.0f);
            } else if (slotCount == 2) {
                slots->z = points->z * 400.0f + (f32) (index + 1) * 50.0f + (z - 75.0f);
            } else if (slotCount == 3) {
                slots->z = points->z * 400.0f + (f32) index * 75.0f + (z - 75.0f);
            } else if (slotCount == 4) {
                slots->z = points->z * 400.0f + (f32) index * 50.0f + (z - 75.0f);
            }
            slots->rot = 90.0f;
        }
    }
}
