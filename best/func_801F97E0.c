extern u8 D_80046837;
extern s16 D_800DB1B8[];
extern u32 D_800DE080[];
extern s32 D_801F9958[];
extern s32 func_801F9950[];
extern s32 func_800E1098(void *, u8, s32, u8, s32);

void func_801F97E0(s32 arg0) {
int __repair_literal;

    s32 sp18[4];
    s32 i;
    s32 n;
    s32 j;
    u32 *w;

    n = 0;
    i = 0;
    __repair_rows: {
        if (*(s16 *)((u8 *)D_800DB1B8 + 0x2108 + i * 0x28) != 0) {
            sp18[n] = i;
            n += 1;
        }
        i += 1;
    }
if (i < 4) goto __repair_rows;
    j = 0;
__repair_literal = 0;

    if (n > __repair_literal) {
        do {
            w = (u32 *)*(u32 *)((u8 *)D_800DE080 + 0x64);
            *(u32 *)((u8 *)D_800DE080 + 0x64) = (u32)w + 8;
            w[0] = 0xBC000002;
            w[1] = 0x80000040;
            *(u32 *)((u8 *)D_800DE080 + 0x64) = (u32)w + 0x10;
            w[2] = 0x03860010;
            w[3] = (u32)D_801F9958;
            *(u32 *)((u8 *)D_800DE080 + 0x64) = (u32)w + 0x18;
            w[4] = 0x03880010;
            w[5] = (u32)func_801F9950;
            func_800E1098((u8 *)D_800DE080 + 0x64, D_80046837, arg0, sp18[j], j);
            j += 1;
        } while (j < n);
    }
}
