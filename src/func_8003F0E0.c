/* identical to func_80095A90 in V-RALLY-PAL (local match library) (matched), with its names changed by decompdecomp */
s32 func_8003F0E0(s32 arg0) {
    s32 ret;

    if (*(vu32 *)0xA4040010 & 1) {
        *(vs32 *)0xA4080000 = arg0;
        ret = 0;
    } else {
        ret = -1;
    }
    return ret;
}
