extern void func_800294A0(void *, void *, s32);
extern void func_801AFB94(s32, s32);
extern u8 D_1B0E50[];
extern u8 D_1F9030[];
extern s32 D_801CA134;
extern u8 D_8021E1A3;
extern u8 D_802D6890[];

void func_8022E6F4(void) {
    func_800294A0(D_1B0E50, D_802D6890, D_1F9030 - D_1B0E50);
    func_801AFB94(D_801CA134, (D_8021E1A3 + 1) & 0xFF);
}
