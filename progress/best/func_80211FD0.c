#define LH(sym, off) (*(s16 *)((u8 *)(sym) + (off)))
#define SB(p) (*(s8 *)(p))

extern u8 D_8006FAF0[];
extern u8 D_800DA260[];
extern u8 D_8021DDE0[];
extern u8 D_8021E1A2[];
extern u8 D_8021E1A3[];
extern u8 D_8021E22F[];
extern u8 D_8021E231[];
extern u8 D_8021E251[];
extern u8 D_8021E273[];
extern u8 D_8021E295[];
extern u8 D_8021E2B7[];
extern u8 D_8021E2D9[];
extern u8 D_8021E2FB[];
extern u8 D_8021E31D[];
extern u8 D_8021E31F[];
extern u8 D_8021F048[];
extern u8 D_80232820[];
extern s32 D_80168BB0;

s32 func_8003DE60(void *, s16);
s32 func_80149F40(u16, s32, s8);
void func_80211F14(s32);

void func_80211FD0(void) {
    u8 *__base_D_8021E231;
    s32 s0;
    s32 s1;
    s32 s2;
    s32 i;
    s32 k;
    u8 *__base_D_8021E251;

    __base_D_8021E251 = D_8021E251;

    D_80168BB0 = 0x16;
    if ((LH(D_8021E1A2, 0) < 2) && (LH(D_8021E1A2, -0x16) < 9)) {
        LH(D_8006FAF0, 0x20) = LH(D_8021E1A2, -0x16) + 1;
    } else {
        LH(D_8006FAF0, 0x20) = 0;
    }
    *D_80232820 = D_8021E1A3[0] + 1;
    s2 = 0;
    func_8003DE60(D_8021DDE0, LH(D_8021E1A2, 0));
    s1 = s2 * 2;
    if (LH(D_8021E1A2, 0) >= 0) {
        do {
            s1 = (((s1 + s2) * 0x10) - s2) * 8;
            i = s2 * 0x110;
            __base_D_8021E231 = D_8021E231;
            *(u16 *)(D_800DA260 + s1) = func_80149F40(*(u16 *)(D_800DA260 + s1), 0, SB(__base_D_8021E231 + i + SB(D_8021E22F + i))) & 0xFF;
            *(u16 *)(D_800DA260 + s1 + 2) = func_80149F40(*(u16 *)(D_800DA260 + s1), 1, SB(__base_D_8021E231 + i + SB(__base_D_8021E251 + 0x22) + (i))) & 0xFF;
            *(u16 *)(D_800DA260 + s1 + 6) = func_80149F40(*(u16 *)(D_800DA260 + s1), 2, SB(__base_D_8021E231 + i + SB(D_8021E273 + i) + 0x44)) & 0xFF;
            *(u16 *)(D_800DA260 + s1 + 0xA) = func_80149F40(*(u16 *)(D_800DA260 + s1), 3, SB(__base_D_8021E231 + i + SB(D_8021E295 + i) + 0x66)) & 0xFF;
            *(u16 *)(D_800DA260 + s1 + 4) = func_80149F40(*(u16 *)(D_800DA260 + s1), 4, SB(__base_D_8021E231 + i + SB(D_8021E2B7 + i) + 0x88)) & 0xFF;
            *(u16 *)(D_800DA260 + s1 + 8) = func_80149F40(*(u16 *)(D_800DA260 + s1), 5, SB(__base_D_8021E231 + i + SB(D_8021E2D9 + i) + 0xAA)) & 0xFF;
            *(u16 *)(D_800DA260 + s1 + 0xC) = func_80149F40(*(u16 *)(D_800DA260 + s1), 6, SB(__base_D_8021E231 + i + SB(D_8021E2FB + i) + 0xCC)) & 0xFF;
            *(u16 *)(D_800DA260 + s1 + 0xE) = func_80149F40(*(u16 *)(D_800DA260 + s1), 7, SB(D_8021E31F + i + SB(D_8021E31D + i))) & 0xFF;
            for (i = 0; i < 4; i++) {
                u8 *dst = D_800DA260 + 0x16A + i * 0x178;
                u8 *src = D_8021F048 + i * 14;
                for (k = 0; k < 14; k++) {
                    dst[k] = src[k];
                }
                func_80211F14(i);
            }/*__repair_loop_weight*/__repair_rows: {do {do {
            s2 += 1;} while (0);} while (0);}
if (0) goto __repair_rows;
            s1 = s2 * 2;
        } while (LH(D_8021E1A2, 0) >= s2);
    }
}
