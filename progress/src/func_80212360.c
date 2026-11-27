extern s8 D_412160;
extern s8 D_419270;
extern s32 D_80212500;
extern s32 D_802134EC;
extern s32 D_8021AFDC;
extern s8 D_8021B084;
extern s8 D_8021B677;
extern s8 menuInputLock;
extern s8 D_8021E160;
extern s32 D_8030BD90;
void dmaRomToRam(void *, void *, s32);
void func_80143DCC(void);
void setScreenTransition(s32, s32, s32, s32, s32);
void func_80214204(s32);
void objCreate(s32, s32, s32, s32, s32, s32, s32, void *, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void func_802153C4(s32, s32, s32, s32, s32, s32);

void func_80212360(void) {
    s8 *end;
    s8 *start;
    s32 state;
    end = &D_419270;
    start = &D_412160;
    dmaRomToRam(start, &D_8030BD90, end - start);
    func_80143DCC();
    D_8021B677 = 0;
    state = D_8021AFDC;
    if (state == 2 || state == 6 || state == 0x18) {
        menuInputLock = 0;
        func_80214204(state);
    }
    if (D_8021AFDC == 0x10) {
        D_8021E160 = 1;
    } else {
        D_8021E160 = 0;
    }
    setScreenTransition(1, 6, 0, 0, 0);
    objCreate(0, 0, 3, 0, 0x42, 0, 0, &D_80212500, &D_802134EC, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_802153C4(0x40, 0xBF000000, 0x3F000000, 0x96, 0x62, 0xE2);
    D_8021B084 = 0;
}
