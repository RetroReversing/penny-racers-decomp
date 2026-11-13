extern s16 D_8021E1A2;
extern u8 D_8021E1A3;
extern s32 D_80168BB0;
extern u8 D_80232820;
extern u8 D_8021DDE0[];
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
extern u8 D_800DA260[];
extern u8 D_800DA26A[];
extern s16 D_8006FAF0[];
void func_8003DE60(void *, s16);
u16 func_80149F40(u16, s32, s8);
void func_80211F14(s32, void *, void *);

void func_80211FD0(void) {
    s32 i;
    s32 j;
    s32 k;

    D_80168BB0 = 0x16;
    if (D_8021E1A2 < 2 && *(s16 *)(&D_8021E1A2 - 0x16) < 9) {
        D_8006FAF0[0x10] = *(s16 *)(&D_8021E1A2 - 0x16) + 1;
    } else {
        D_8006FAF0[0x10] = 0;
    }
    D_80232820 = D_8021E1A3 + 1;
    func_8003DE60(D_8021DDE0, D_8021E1A2);
    j = 0;
    if (D_8021E1A2 >= 0) {
        do {
            i = j * 0x0;
            j += 0;
        } while (0);
    }
}
