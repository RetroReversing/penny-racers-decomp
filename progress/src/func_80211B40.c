extern u16 D_8021EEF4[];
extern u32 sHexGlyphs[];

void func_80211B40(void) {
    s32 i;
    for (i = 0; i < 0x57; i++) {
        D_8021EEF4[i] = *(u16 *)(sHexGlyphs[*(u16 *)((u8 *)D_8021EEF4 - 0x30) + i]);
    }
}
