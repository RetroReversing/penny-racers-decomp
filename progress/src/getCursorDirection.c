extern f32 sCameraYaw;
extern s8 D_801E995A[];
extern s8 D_801E995B[];
extern u8 D_801E9980[];
extern u8 D_801E9984[];
extern u8 D_801E9988[];
extern u8 D_801E998C[];

/* Maps one object's stick input to a direction from 0 to 3 (4 when there is none), turned by the camera yaw. */ s32 getCursorDirection(s32 objIndex)
{
    s32 dir;

    dir = 4;
    if (D_801E995B[(objIndex & 0xFFFF) * 0x70] >= 0x3D && *(u32 *)(D_801E9988 + (objIndex & 0xFFFF) * 0x70) % 15 == 1) {
        if (sCameraYaw == 0.0f || sCameraYaw == 360.0f) dir = 0;
        else if (sCameraYaw == 90.0f) dir = 1;
        else if (sCameraYaw == 180.0f) dir = 2;
        else if (sCameraYaw == 270.0f) dir = 3;
    } else if (D_801E995B[(objIndex & 0xFFFF) * 0x70] < -0x3C && *(u32 *)(D_801E998C + (objIndex & 0xFFFF) * 0x70) % 15 == 1) {
        if (sCameraYaw == 0.0f || sCameraYaw == 360.0f) dir = 2;
        else if (sCameraYaw == 90.0f) dir = 3;
        else if (sCameraYaw == 180.0f) dir = 0;
        else if (sCameraYaw == 270.0f) dir = 1;
    } else if (D_801E995A[(objIndex & 0xFFFF) * 0x70] < -0x3C && *(u32 *)(D_801E9984 + (objIndex & 0xFFFF) * 0x70) % 15 == 1) {
        if (sCameraYaw == 0.0f || sCameraYaw == 360.0f) dir = 1;
        else if (sCameraYaw == 90.0f) dir = 2;
        else if (sCameraYaw == 180.0f) dir = 3;
        else if (sCameraYaw == 270.0f) dir = 0;
    } else if (D_801E995A[(objIndex & 0xFFFF) * 0x70] >= 0x3D && *(u32 *)(D_801E9980 + (objIndex & 0xFFFF) * 0x70) % 15 == 1) {
        if (sCameraYaw == 0.0f || sCameraYaw == 360.0f) dir = 3;
        else if (sCameraYaw == 90.0f) dir = 0;
        else if (sCameraYaw == 180.0f) dir = 1;
        else if (sCameraYaw == 270.0f) dir = 2;
    }
    return dir & 0xFF;
}
