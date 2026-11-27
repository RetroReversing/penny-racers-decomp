extern u8 D_425610[];
extern u8 D_42A740[];
extern u8 D_8030BD90[];
extern s8 D_80190C98;
extern u8 D_801D5A90[];
extern void updateSoundOptions(void);
extern void drawSoundOptions(void);
s32 dmaRomToRam(void *, void *, s32);
s32 objCreate(s32, s32, s32, s32, s32, s32, s32, void *, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
void setScreenTransition(s32, s32, s32, s32, s32);
void func_802153C4(s32, f32, f32, s32, s32, s32);
void func_80214A50(void)
{
    D_80190C98 = 0;
    dmaRomToRam(D_425610, D_8030BD90, D_42A740 - D_425610);
    objCreate(0, 0, 3, 0, 0x7F, 0, 0, D_801D5A90, NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    func_802153C4(0x40, 0.5f, 0.5f, 0xA6, 0xD0, 0xF1);
    objCreate(0, 0, 3, 0, 0x54, 0, 0, updateSoundOptions, drawSoundOptions, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    setScreenTransition(1, 6, 0, 0, 0);
}
