extern u8 *D_80202560[];

s32 func_801FD530(s32 arg0, s32 arg1) {
    u8 var_v0;

    var_v0 = 1;
    if (arg0 != 0) {
        var_v0 = D_80202560[arg0][arg1];
    }
    return var_v0 & 0xFF;
}
