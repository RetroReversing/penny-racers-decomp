extern u16 D_8018A288[];
extern u16 D_8018D140[];

s32 func_801496B0(s32 arg0, s32 arg1, s32 arg2) {
    s32 i;
    s32 j;
    s32 count;
    s32 n;
    u16 v;
    u16 *row;
    u16 mask;

    for (i = 0; i < 32; i++) {
        D_8018A288[i] = 0xFFFF;
    }
    mask = (arg1 << 8) & 0x700;
    j = 0;
    n = arg2 & 0xFF;
    count = 0;
    if (n > 0) {
        row = D_8018D140 + (arg0 & 0xFF) * 150;
        for (; j < n; j++) {
            v = row[j];
            if (((v & 0x700) == mask) && !(v & 0x1000)) {
                D_8018A288[count] = v;
                count++;
            }
        }
    }
    return count - 1;
}
