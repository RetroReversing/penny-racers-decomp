extern f32 D_801FAE30[];

f32 func_801F99F0(s32 arg0) {
    s32 v0;

    if (arg0 < 0) {
        do {
            arg0 += 0x100;
        } while (arg0 < 0);
    }
    v0 = arg0 + 0x5A;
    return D_801FAE30[v0 & 0xFF];
}
