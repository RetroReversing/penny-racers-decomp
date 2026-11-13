extern f32 D_801C6BCC;
extern u8 D_801E995A[];
extern s32 D_801E995B;
extern s32 D_801E9980;
extern s32 D_801E9984;
extern s32 D_801E9988;
extern s32 D_801E998C;

s32 func_80199EAC(s32 arg0) {
int __repair_constant;

    s32 var_a1 = 4;
    s32 idx = (arg0 & 0xFFFF) * 0x70;
    f32 f = D_801C6BCC;
__repair_constant = 3;

    if ((*(s32 *)((u8 *)&D_801E995B + idx) >= 0x3D) && (((*(s32 *)((u8 *)&D_801E9988 + idx) / 15) * 0xF) == (*(s32 *)((u8 *)&D_801E9988 + idx) - 1))) {
        if (f == 0.0f) var_a1 = 0;
        else if (f == 180.0f) var_a1 = 0;
        else if (f == 90.0f) var_a1 = 1;
        else if (f == 270.0f) var_a1 = __repair_constant;
    } else if (*(s32 *)((u8 *)&D_801E995B + ((arg0 & 0xFFFF) * 0x70)) < -0x3C) {
        s32 t = *(s32 *)((u8 *)&D_801E998C + idx);
        if (((t / 15) * 0xF) == (t - 1)) {
            if (f == 90.0f) var_a1 = __repair_constant;
            else if (f == 180.0f) var_a1 = 0;
            else if (f == 270.0f) var_a1 = 1;
        }
    } else if (*(s32 *)((u8 *)D_801E995A + idx) < -0x3C) {
        s32 t = *(s32 *)((u8 *)&D_801E9984 + idx);
        if (((t / 15) * 0xF) == (t - 1)) {
            if (f == 0.0f) var_a1 = 1;
            else if (f == 180.0f) var_a1 = 1;
            else if (f == 90.0f) var_a1 = __repair_constant;
            else if (f == 270.0f) var_a1 = 0;
        }
    } else if (*(s32 *)((u8 *)D_801E995A + idx) >= 0x3D) {
        s32 t = *(s32 *)((u8 *)&D_801E9980 + idx);
        if (((t / 15) * 0xF) == (t - 1)) {
            if (f == 0.0f) var_a1 = __repair_constant;
            else if (f == 180.0f) var_a1 = __repair_constant;
            else if (f == 90.0f) var_a1 = 0;
            else if (f == 270.0f) var_a1 = 1;
            else var_a1 = 2;
        }
    }
    return var_a1 & 0xFF;
}
