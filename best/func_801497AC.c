extern u8 D_80168D20[];
extern u8 D_80168D28[];
extern u8 D_80168D30[];
extern u8 D_80189B34;
extern s16 D_8021E1A2;

u8 func_801497AC(u8 arg0) {
    s8 r = 0xFF;
    if (arg0 != 0xFF) {
        arg0 &= 7;
        if (D_80189B34 == 2) {
            if (D_8021E1A2 == 1) {
                r = D_80168D28[arg0];
            } else {
                r = D_80168D20[arg0];
            }
        } else {
            r = D_80168D30[arg0];
        }
    }
    return r;
}
