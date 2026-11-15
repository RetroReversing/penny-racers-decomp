void func_8003DE60();
void func_80230BC4(s32, s32);
extern u16 D_800DA260;
extern u8 D_800DA26A[];
extern s16 D_8021E1A6;
extern u8 D_80232CF8;
extern u8 D_80232D04;
extern u8 D_80232D10;
extern u8 D_80232D1C;
extern u8 D_80232D28;

void func_802306F0(s32 arg0) {
    u8 sp10[14];
    u8 *a;
    s32 i;
    s32 k;

    func_8003DE60(&D_80232CF8, arg0 & 0xFFFF);
    switch (D_8021E1A6) {
    case 0: a = &D_80232D04; break;
    case 1: a = &D_80232D10; break;
    case 2: a = &D_80232D1C; break;
    case 3: a = &D_80232D28; break;
    default: a = 0; break;
    }
    if (a) {
        func_8003DE60(a);
    }
    for (i = 0; i < 14; i++) {
        sp10[i] = 0;
    }
    switch (arg0 & 0xFFFF) {
    case 1:
        k = D_800DA260 + 2;
        i = 1;
        do {
            k = (k < 13) ? k : 0;
            func_80230BC4(i & 0xFFFF, k & 0xFFFF);
            D_800DA26A[0x1B + i * 0x178] = 0;
            i++;
            k++;
        } while (i < 6);
        return;
    case 2:
        sp10[D_800DA260] = 1;
        sp10[*(u16 *)(D_800DA26A + 0x16E)] = 1;
        k = D_800DA260;
        i = 2;
        do {
            while (sp10[k]) {
                k++;
                k = (k < 13) ? k : 0;
            }
            func_80230BC4(i & 0xFFFF, k & 0xFFFF);
            D_800DA26A[0x1B + i * 0x178] = 0;
            sp10[k] = 1;
            i++;
        } while (i < 4);
        k = *(u16 *)(D_800DA26A + 0x16E);
        i = 4;
        do {
            while (sp10[k]) {
                k++;
                k = (k < 13) ? k : 0;
            }
            func_80230BC4(i & 0xFFFF, k & 0xFFFF);
            D_800DA26A[0x1B + i * 0x178] = 1;
            sp10[k] = 1;
            i++;
        } while (i < 6);
        return;
    }
}
