extern s32 D_802038D0;
extern s32 D_802038D4;
extern s32 D_80203AB0;
extern s32 D_8006FB14;
extern s32 D_802282F0;
extern s32 D_8022A778;
extern s8 D_8022AFE9;
extern s32 D_80238EC0;
extern s32 func_8012AD9C;
extern s32 func_8015A728;

void func_801FA338(s32);
void func_80231A0C(void);
void func_80231C5C(void);
void func_80231E30(void);
void func_80232360(u16, u16);
void func_800E067C(void);
void func_8013ADA8(void);
void func_8022FE50(s32, s32, s32, s32);
void func_8022F780(u16);
void func_800DE41C(s32, s32, s32, s32, s32, s32, s32, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);

void func_80232480(void) {
    u16 i;
    u16 j;
    s32 k;
    s32 *dst;
    s32 *src;

    func_801FA338(0);
    D_80203AB0 = 0;
    D_802038D0 = 0;
    D_802038D4 = 0;
    *(s8 *)((u8 *)&D_8006FB14 + 4) = 0;
    func_80231A0C();
    func_80231C5C();
    func_80231E30();
    func_8022F780(*(u16 *)((u8 *)&D_8006FB14 + 4 - 8));
    func_800E067C();
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 8; j++) {
            dst = (s32 *)((u8 *)&D_8022A778 + i * 0x8F0 + j * 0x34);
            src = (s32 *)((u8 *)&D_80238EC0 + j * 0x34);
            for (k = 0; k < 13; k++) {
                dst[k] = src[k];
            }
        }
    }
    for (i = 0; i < 6; i++) {
        func_8022FE50(i, i, i, 1);
    }
    D_8022AFE9 = 0;
    func_800DE41C(0, 0, 3, 0, 0x20, 1, 0, &func_8012AD9C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0x20, 4, 0, &func_8012AD9C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0x20, 7, 0, &func_8012AD9C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0x20, 0xA, 0, &func_8012AD9C, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_8013ADA8();
    func_800DE41C(0, 0, 3, 0, 0x20, 0, 0, &D_802282F0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_800DE41C(0, 0, 3, 0, 0xC0, 0xFF, 0, &func_8015A728, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_80232360(1, 0);
    func_80232360(2, 0);
    func_80232360(3, 0);
    func_80232360(4, 0);
    func_80232360(5, 0);
}
