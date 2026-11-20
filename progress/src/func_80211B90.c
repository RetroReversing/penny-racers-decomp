extern u8 D_8021B59C[];
extern u16 D_8021B5F8[];
extern u16 D_8021B618[];
extern u16 D_8021B620[];
extern u8 D_8021EEC1[];
extern u16 D_8021EEC6;
extern u16 D_8021EEC8;

void func_80211B90(void) {
    u8 v = D_8021B59C[D_8021EEC1[0]];

    if ((v & 0xF) == 6) {
        *(u16 *)(D_8021EEC1 + 5) = D_8021B618[v >> 4];
    } else {
        D_8021EEC6 = D_8021B5F8[v >> 4];
    }
    D_8021EEC8 = D_8021B620[v & 0xF];
}
