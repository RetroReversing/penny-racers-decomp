extern f32 D_801C6BCC;
extern s8 D_801E995A[];
extern s8 D_801E995B[];
extern u8 D_801E9980[];
extern u8 D_801E9984[];
extern u8 D_801E9988[];
extern u8 D_801E998C[];

s32 func_80199AB0(s32 arg0)
{
    s32 a1;

    a1 = 4;
    if (D_801E995B[(arg0 & 0xFFFF) * 0x70] >= 0x3D && *(s32 *)(D_801E9988 + (arg0 & 0xFFFF) * 0x70) == 1) {
        if (D_801C6BCC == 0.0f || D_801C6BCC == 360.0f) {
            a1 = 0;
        } else if (D_801C6BCC == 90.0f) {
            a1 = 1;
        } else if (D_801C6BCC == 180.0f) {
            a1 = 2;
        } else if (D_801C6BCC == 270.0f) {
            a1 = 3;
        }
    } else if (D_801E995B[(arg0 & 0xFFFF) * 0x70] < -0x3C && *(s32 *)(D_801E998C + (arg0 & 0xFFFF) * 0x70) == 1) {
        if (D_801C6BCC == 0.0f || D_801C6BCC == 360.0f) {
            a1 = 2;
        } else if (D_801C6BCC == 90.0f) {
            a1 = 3;
        } else if (D_801C6BCC == 180.0f) {
            a1 = 0;
        } else if (D_801C6BCC == 270.0f) {
            a1 = 1;
        }
    } else if (D_801E995A[(arg0 & 0xFFFF) * 0x70] < -0x3C && *(s32 *)(D_801E9984 + (arg0 & 0xFFFF) * 0x70) == 1) {
        if (D_801C6BCC == 0.0f || D_801C6BCC == 360.0f) {
            a1 = 1;
        } else if (D_801C6BCC == 90.0f) {
            a1 = 2;
        } else if (D_801C6BCC == 180.0f) {
            a1 = 3;
        } else if (D_801C6BCC == 270.0f) {
            a1 = 0;
        }
    } else if (D_801E995A[(arg0 & 0xFFFF) * 0x70] >= 0x3D && *(s32 *)(D_801E9980 + (arg0 & 0xFFFF) * 0x70) == 1) {
        if (D_801C6BCC == 0.0f || D_801C6BCC == 360.0f) {
            a1 = 3;
        } else if (D_801C6BCC == 90.0f) {
            a1 = 0;
        } else if (D_801C6BCC == 180.0f) {
            a1 = 1;
        } else if (D_801C6BCC == 270.0f) {
            a1 = 2;
        }
    }
    return a1 & 0xFF;
}
