extern u16 D_8021EEF4[];
extern u16 *D_80203080[];

void func_80211B40(void) {
    s32 i;

    for (i = 0; i < 0x57; i++) {
        D_8021EEF4[i] = *D_80203080[*(u16 *)((u8 *)D_8021EEF4 - 0x30) + i];
    }
}
