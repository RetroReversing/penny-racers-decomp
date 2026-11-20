extern u8 D_8021EEC0[];
extern u8 D_8021EFA0[];

void func_80211C08(void) {
    s32 a;
    s32 b;

    a = *(s32 *)D_8021EFA0 & ~0x1800;
    *(s32 *)D_8021EFA0 = a;
    if (D_8021EFA0[-0xDD] != 1) {
        b = a | 0x1800;
        *(s32 *)D_8021EFA0 = b;
        if (D_8021EFA0[-0xE0] == 0) {
            *(s32 *)D_8021EFA0 = (b & ~0x1800) | 0x800;
        }
        if (D_8021EEC0[0] == D_8021EEC0[3] - 1) {
            *(s32 *)(D_8021EEC0 + 0xE0) = (*(s32 *)(D_8021EEC0 + 0xE0) & ~0x1800) | 0x1000;
        }
    }
}
