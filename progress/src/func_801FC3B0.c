s32 gfxSetup2DState(void **);
s32 drawText(void **, s32, s32, s32, s32 *, s32 *);
extern u8 D_8011F330[];
extern s32 fontPalette;
extern s32 D_8020352C;
extern u16 D_802038C0;
extern s16 D_802038C2;
extern s32 D_80220ED8;

void func_801FC3B0(void **arg0, s32 arg1) {
    u16 temp_v1;
    void *temp_v1_2;

    temp_v1 = *(u16 *)(D_8011F330 + ((s16)arg1 & 0xFFFF) * 0x64);
    switch (temp_v1) {
    case 0:
        D_802038C2 = 0;
        D_802038C0 = 0;
        *(u16 *)(D_8011F330 + (arg1 & 0xFFFF) * 0x64) = 1;
        return;
    case 1:
        D_802038C0 += 1;
        if (D_802038C0 < 0xA) {
            gfxSetup2DState(arg0);
            temp_v1_2 = *arg0;
            *arg0 = (char *)temp_v1_2 + 8;
            *(s32 *)temp_v1_2 = 0x06000000;
            *(s32 *)((char *)temp_v1_2 + 4) = (s32)&D_80220ED8;
            drawText(arg0, 0x18, 0x10, 8, &fontPalette, &D_8020352C);
        }
        if (D_802038C0 >= 0x15) {
            D_802038C0 = 0;
        }
        return;
    }
}
