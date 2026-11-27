extern f32 sCameraYaw;
extern s8 stickY[];
extern s8 stickX[];
extern u8 D_801E9980[];
extern u8 D_801E9984[];
extern u8 D_801E9988[];
extern u8 D_801E998C[];

/* Returns the 0-3 facing for piece pieceIndex: the side whose neighbour flag is set (or the default 4) rotated by the camera yaw. */ s32 getPieceFacing(s32 pieceIndex)
{
    s32 facing;

    facing = 4;
    if (stickX[(pieceIndex & 0xFFFF) * 0x70] >= 0x3D && *(s32 *)(D_801E9988 + (pieceIndex & 0xFFFF) * 0x70) == 1) {
        if (sCameraYaw == 0.0f || sCameraYaw == 360.0f) {
            facing = 0;
        } else if (sCameraYaw == 90.0f) {
            facing = 1;
        } else if (sCameraYaw == 180.0f) {
            facing = 2;
        } else if (sCameraYaw == 270.0f) {
            facing = 3;
        }
    } else if (stickX[(pieceIndex & 0xFFFF) * 0x70] < -0x3C && *(s32 *)(D_801E998C + (pieceIndex & 0xFFFF) * 0x70) == 1) {
        if (sCameraYaw == 0.0f || sCameraYaw == 360.0f) {
            facing = 2;
        } else if (sCameraYaw == 90.0f) {
            facing = 3;
        } else if (sCameraYaw == 180.0f) {
            facing = 0;
        } else if (sCameraYaw == 270.0f) {
            facing = 1;
        }
    } else if (stickY[(pieceIndex & 0xFFFF) * 0x70] < -0x3C && *(s32 *)(D_801E9984 + (pieceIndex & 0xFFFF) * 0x70) == 1) {
        if (sCameraYaw == 0.0f || sCameraYaw == 360.0f) {
            facing = 1;
        } else if (sCameraYaw == 90.0f) {
            facing = 2;
        } else if (sCameraYaw == 180.0f) {
            facing = 3;
        } else if (sCameraYaw == 270.0f) {
            facing = 0;
        }
    } else if (stickY[(pieceIndex & 0xFFFF) * 0x70] >= 0x3D && *(s32 *)(D_801E9980 + (pieceIndex & 0xFFFF) * 0x70) == 1) {
        if (sCameraYaw == 0.0f || sCameraYaw == 360.0f) {
            facing = 3;
        } else if (sCameraYaw == 90.0f) {
            facing = 0;
        } else if (sCameraYaw == 180.0f) {
            facing = 1;
        } else if (sCameraYaw == 270.0f) {
            facing = 2;
        }
    }
    return facing & 0xFF;
}
