extern s16 D_8006FAF0[];
extern s16 D_800DA260[];
extern s16 D_8021E1A2;
extern u8 D_8021E1A3;
extern s8 D_8021DDE0[];
extern s8 D_8021E22F[];
extern s8 D_8021E231[];
extern s8 D_8021E251[];
extern s8 D_8021E273[];
extern s8 D_8021E295[];
extern s8 D_8021E2B7[];
extern s8 D_8021E2D9[];
extern s8 D_8021E2FB[];
extern s8 D_8021E31D[];
extern s8 D_8021E31F[];
extern u8 D_8021F048[];
extern u8 D_80232820;
extern s32 D_80168BB0;

s32 func_8003DE60(void *a, s16 b);
s32 func_80149F40(u16 a, s32 b, s8 c);
void func_80211F14(s32 a, void *b, void *c);

void func_80211FD0(void) {
    s32 i;
    s32 j;
    s32 k;
    s32 off;
    s32 k2;

    D_80168BB0 = 0x16;
    if ((D_8021E1A2 < 2) && (*(s16 *)((u8 *)&D_8021E1A2 - 0x16) < 9)) {
        *(s16 *)((u8 *)D_8006FAF0 + 0x20) = (s16)(*(s16 *)((u8 *)&D_8021E1A2 - 0x16) + 1);
    } else {
        *(s16 *)((u8 *)D_8006FAF0 + 0x20) = 0;
    }
    D_80232820 = D_8021E1A3 + 1;
    k2 = 0;
    func_8003DE60(D_8021DDE0, D_8021E1A2);
    i = 0;
    if (D_8021E1A2 >= 0) {
        do {
            off = k2 * 0x110;
            j = (((i + k2) * 0x10) - k2) * 8;
            *(u8 *)((u8 *)D_800DA260 + j) = func_80149F40(*(u16 *)((u8 *)D_800DA260 + j), 0, *(s8 *)(off + *(s8 *)(D_8021E22F + off) + D_8021E231)) & 0xFF;
            k2 = k2;
            i = i;
        } while (D_8021E1A2 >= k2);
    }
}
