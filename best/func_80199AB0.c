extern f32 D_801C6BCC;
extern s8 D_801E995A[];
extern s8 D_801E995B[];
extern s8 D_801E9980[];
extern s8 D_801E9984[];
extern s8 D_801E9988[];
extern s8 D_801E998C[];

s32 func_80199AB0(s32 arg0) {
    s32 var_a1 = 4;
    s32 idx = (arg0 & 0xFFFF) * 0x70;

    if (*(s8 *)(D_801E995B + idx) >= 0x3D && *(s8 *)(D_801E9988 + idx) == 1) {
        if (D_801C6BCC == 0.0f) var_a1 = 0;
        else if (D_801C6BCC == 180.0f) var_a1 = 0;
        else if (D_801C6BCC == 90.0f) var_a1 = 1;
        else if (D_801C6BCC == 270.0f) var_a1 = 3;
    } else if (*(s8 *)(D_801E995B + ((arg0 & 0xFFFF) * 0x70)) < -0x3C && *(s8 *)(D_801E998C + ((arg0 & 0xFFFF) * 0x70)) == 1) {
        if (D_801C6BCC == 90.0f) var_a1 = 3;
        else if (D_801C6BCC == 180.0f) var_a1 = 0;
        else if (D_801C6BCC == 270.0f) var_a1 = 1;
    } else if (*(s8 *)(D_801E995A + ((arg0 & 0xFFFF) * 0x70)) < -0x3C && *(s8 *)(D_801E9984 + ((arg0 & 0xFFFF) * 0x70)) == 1) {
        if (D_801C6BCC == 0.0f) var_a1 = 1;
        else if (D_801C6BCC == 180.0f) var_a1 = 1;
        else if (D_801C6BCC == 180.0f) var_a1 = 3;
        else if (D_801C6BCC == 270.0f) var_a1 = 0;
    } else if (*(s8 *)(D_801E995A + ((arg0 & 0xFFFF) * 0x70)) >= 0x3D && *(s8 *)(D_801E9980 + ((arg0 & 0xFFFF) * 0x70)) == 1) {
        if (D_801C6BCC == 0.0f) var_a1 = 3;
        else if (D_801C6BCC == 180.0f) var_a1 = 3;
        else if (D_801C6BCC == 90.0f) var_a1 = 0;
        else if (D_801C6BCC == 180.0f) var_a1 = 1;
        else if (D_801C6BCC == 270.0f) var_a1 = 2;
    }
    return var_a1 & 0xFF;
}
