extern u8 D_800DE080[];
extern u8 D_80187BF0[];
extern s32 D_80203080[];
extern u8 D_8021B633[];
extern u8 D_8021B634[];
extern u8 D_8021B635[];
extern s8 D_8021E15F;
extern s8 D_8021E231[];
extern u8 D_8021EEC0[];
extern u8 D_8021EEC1[];
extern s16 D_8021EEC6[];
extern u32 D_8021EFA0;
extern u8 D_8021F260[];
extern u8 D_802D6898[];
extern u8 D_802D92A0[];

void func_801CA140(void);
void func_801CA468(s32, s32);
void func_801CA494(s32, u8, u8, u8, s32);
void func_801CABF4(s32, s32, s32, s32, void *, s32, s32, void *, s32, s32, s32, s32);
void func_8014A4C8(s32, s32, s32, s32, s32);

void func_802114C8(s32 arg0) {
    u8 *cur;
    s32 idx;
    s32 t;

    func_801CA140();
    cur = *(u8 **)(D_800DE080 + 0x64);
    *(u8 **)(D_800DE080 + 0x64) = cur + 8;
    *(u32 *)cur = 0xED000000;
    *(u32 *)(cur + 4) = 0x5003C0;

    idx = D_8021E15F * 0x110 + D_8021EEC0[0];
    func_801CABF4(arg0, 0x9E, 0x44, 0xE, D_802D92A0, D_80187BF0 + D_8021E231[idx] * 0x12, 0, D_802D6898, 0xE, 0x10, 0xE0, 0x60);

    if (!(*(u32 *)(D_8021EEC0 + 0xE0) & 0x4000)) {
        if ((*(u32 *)(D_8021EEC0 + 0xE0) >> 11) & 1) {
            func_8014A4C8(arg0, 0xFF, 0x21, 0xB, 0x29);
        }
        if ((D_8021EFA0 >> 11) & 2) {
            func_8014A4C8(arg0, 0x9D, 0x21, 0xB, 0x28);
        }
    } else {
        func_801CA494(arg0, D_8021F260[0], D_8021F260[1], D_8021F260[2], D_8021F260[3]);
        if (D_8021EEC1[0] < 0x55) {
            func_801CABF4(arg0, (*(u16 *)(D_8021EEC1 + 5) + 0xB) & 0xFFFF, (*(u16 *)(D_8021EEC1 + 7) + 0xA) & 0xFFFF, 0xE, D_802D92A0, D_80203080[D_8021EEC1[0] + *(u16 *)(D_8021EEC1 + 3)], 0, D_802D6898, 0xE, 0x10, 0xE0, 0x60);
        } else if (D_8021EEC1[0] != 0x5A) {
            t = (D_8021EEC1[0] - 0x55) * 6;
            func_8014A4C8(arg0, (s16)(D_8021B633[t] + *(u16 *)(D_8021EEC1 + 5)), (s16)(D_8021B634[t] + *(u16 *)(D_8021EEC1 + 7)), 9, D_8021B635[t]);
        }
        func_801CA468(arg0, 0xFF);
        func_8014A4C8(arg0, D_8021EEC6[0], D_8021EEC6[1], 0xB, 0x22);
        t = *(u8 *)((u8 *)D_8021EEC6 - 4);
        func_8014A4C8(arg0, t * 0xE + 0x9E, 0x3C, 0xB, 0x2B);
    }
}
