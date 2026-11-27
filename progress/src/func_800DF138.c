extern u8 sNodeFlags[];

void func_800DF138(s32 arg0) {
    s32 off;

    off = (arg0 & 0xFFFF) * 100;
    *(u16 *)(sNodeFlags + off) = *(u16 *)(sNodeFlags + off) & 0xFFEF;
}
