extern u16 D_8018A288[];
extern u16 pickLists[][150];

s32 func_801496B0(u8 arg0, u16 arg1, u8 arg2) {
    s32 i;
    s32 count;
    u16 v;

    for (i = 0; i < 32; i++) {
        D_8018A288[i] = 0xFFFF;
    }
    arg1 = (arg1 << 8) & 0x700;
    count = 0;
    for (i = 0; i < arg2; i++) {
        v = pickLists[arg0][i];
        if (((v & 0x700) == arg1) && !(v & 0x1000)) {
            D_8018A288[count] = v;
            count++;
        }
    }
    return count - 1;
}
