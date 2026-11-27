s32 drawViewObjects();
extern u8 D_80046837;
extern s16 sRowBoard[];
extern u32 *D_800DE0E4;
extern u8 D_801F9958[];
extern u8 func_801F9950[];

void func_801F97E0(u32 arg0)
{
    s32 sp18[6];
    s32 n;
    s32 i;
    u32 *dl;
    s32 *slot;

    n = 0;
    i = 0;
    slot = sp18;
loop_scan:
    if (sRowBoard[4228 + i * 20] != 0) {
        slot[n] = i;
        n++;
    }
    i++;
    if (i < 4) {
        goto loop_scan;
    }
    if (n > 0) {
        i = 0;
        do {
            dl = D_800DE0E4;
            D_800DE0E4 = dl + 2;
            dl[0] = 0xBC000002;
            dl[1] = 0x80000040;
            D_800DE0E4 = dl + 4;
            dl[2] = 0x03860010;
            dl[3] = (u32)D_801F9958;
            D_800DE0E4 = dl + 6;
            dl[4] = 0x03880010;
            dl[5] = (u32)func_801F9950;
            drawViewObjects((void *)&D_800DE0E4, D_80046837, arg0, (u8)sp18[i], i & 0xFF);
            i++;
        } while (i < n);
    }
}
