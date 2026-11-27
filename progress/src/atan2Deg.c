extern u16 atanTable[];

/* Angle of the vector (dx, dy) in whole degrees, 0-359: 0 is along +dx and 90 along +dy, read from a 64-entry atan table. */ s32 atan2Deg(f32 dx, f32 dy) {
    f32 absDx;
    f32 absDy;
    s32 angle;
    s32 mirrored;

    if (dx > 0.0f) {
        absDx = dx;
    } else {
        absDx = -dx;
    }
    if (dy > 0.0f) {
        absDy = dy;
    } else {
        absDy = -dy;
    }
    if (absDx == 0.0f) {
        if (dy > 0.0f) {
            return 0x5A;
        }
        return 0x10E;
    }
    if (absDy == 0.0f) {
        if (dx > 0.0f) {
            return 0;
        }
        return 0xB4;
    }
    if (absDx == absDy) {
        if (dx > 0.0f) {
            if (dy > 0.0f) {
                return 0x2D;
            }
            return 0x13B;
        }
        if (dy > 0.0f) {
            return 0x87;
        }
        return 0xE1;
    }
    if (absDy < absDx) {
        angle = atanTable[(s32)((absDy * 64.0f) / absDx)];
    } else {
        angle = 0x5A - atanTable[(s32)((absDx * 64.0f) / absDy)];
    }
    if (dy < 0.0f) {
        if (dx < 0.0f) {
            return (angle + 0xB4) & 0xFFFF;
        }
        mirrored = 0x168 - (angle & 0xFFFF);
        return (mirrored - (mirrored / 360) * 360) & 0xFFFF;
    }
    if (dx < 0.0f) {
        return (0xB4 - angle) & 0xFFFF;
    }
    return angle & 0xFFFF;
}
