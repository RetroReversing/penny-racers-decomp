extern u8 D_80046837;
extern u8 D_800DB1B8[];
extern u8 D_800DE080[];
extern u8 D_801F9958[];
extern u8 func_801F9950[];
s32 func_800E1098(void *, u8, s32, u8, s32);

void func_801F97E0(s32 arg0)
{
    s32 list[4];
    s32 i;
    s32 n;
    s32 j;
    u32 *p;
    u32 c1;
    u32 c2;
    u32 c3;
    u32 c4;
    u32 c5;

    n = 0;
    for (i = 0; i < 4; i++) {
        if (*(s16 *)(D_800DB1B8 + 0x2108 + i * 0x28) != 0) {
            list[n] = i;
            n++;
        }
    }
    if (n > 0) {
        c1 = 0x80000040;
        c2 = 0x03860010;
        c3 = (u32)D_801F9958;
        c4 = 0x03880010;
        c5 = (u32)func_801F9950;
        for (j = 0; j < n; j++) {
            p = *(u32 **)(D_800DE080 + 0x64);
            *(u32 **)(D_800DE080 + 0x64) = p + 2;
            p[0] = 0xBC000002;
            p[1] = c1;
            *(u32 **)(D_800DE080 + 0x64) = p + 4;
            p[2] = c2;
            p[3] = c3;
            *(u32 **)(D_800DE080 + 0x64) = p + 6;
            p[4] = c4;
            p[5] = c5;
            func_800E1098(D_800DE080 + 0x64, D_80046837, arg0, (u8)list[j], j & 0xFF);
        }
    }
}
