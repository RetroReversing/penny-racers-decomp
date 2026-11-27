extern u8 D_80168D20[];
extern u8 D_80168D28[];
extern u8 D_80168D30[];
extern u8 D_80189B34;
extern s16 skipFirstRowFlag;

u8 func_801497AC(u8 arg0) {
    u8 var_a1;
    u8 temp_a0;

    var_a1 = 0xFF;
    if (arg0 != 0xFF) {
        temp_a0 = arg0 & 7;
        if (D_80189B34 == 2) {
            if (skipFirstRowFlag == 1) {
                var_a1 = D_80168D28[temp_a0];
            } else {
                var_a1 = D_80168D20[temp_a0];
            }
        } else {
            var_a1 = D_80168D30[temp_a0];
        }
    }
    return var_a1;
}
