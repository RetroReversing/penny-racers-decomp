s32 func_800E1098(void *, u8, s32, u8, s32);
extern u8 D_80046837;
extern s16 D_800DD2C0[];
extern u32 * volatile D_800DE0E4;
extern u8 D_801F9958[];
extern u8 func_801F9950[];

void func_801F97E0(s32 arg0)
{
int __repair_constant_index;
    s32 sp18[4];
    register u32 *dl;
    s32 j;
    s32 n;
    s32 i;

    n = 0;
    i = 0;
    do {
        if (D_800DD2C0[i * 20] != 0) {
            sp18[n] = (int)i;
            n += 1;
        }
        i += 1;
    } while (i < 4);
    j = 0;
    if (n > 0) {
        do {
            dl = D_800DE0E4;
            D_800DE0E4 = dl + 2;
            {__repair_constant_index=0;dl[__repair_constant_index] = 0xBC000002;}
            dl[2] = 0x03860010;
            dl[1] = 0x80000040;
            dl[3] = (u32) D_801F9958;
            D_800DE0E4 = dl + 4;
            D_800DE0E4 = dl + 6;
            dl[4] = 0x03880010;
            dl[5] = (u32) func_801F9950;
            func_800E1098((void *)&D_800DE0E4, D_80046837, arg0, (u8) sp18[j], j & 0xFF);
            ++j;
        } while (j < n);
    }
}
