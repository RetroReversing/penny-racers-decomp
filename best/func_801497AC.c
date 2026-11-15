extern u8 D_80168D20[];
extern u8 D_80168D28[];
extern u8 D_80168D30[];
extern u8 D_80189B34;
extern s16 D_8021E1A2;

s32 func_801497AC(s32 arg0)
{
    u8 var_a1;

    var_a1 = 0xFF;
    if ((arg0 & 0xFF) != 0xFF) {
        if (D_80189B34 == 2) {
            if (D_8021E1A2 == 1) {
                var_a1 = D_80168D28[arg0 & 7];
            } else {
                var_a1 = D_80168D20[arg0 & 7];
            }
        } else {
            var_a1 = D_80168D30[arg0 & 7];
        }
    }
    return var_a1;
}
