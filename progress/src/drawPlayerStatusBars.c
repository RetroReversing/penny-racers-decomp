extern void gfxSetup2DState(void);
extern void gfxSetPrimAlpha(void **, u8);
extern void gfxDrawClippedTex4b(void **, s32, s16, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, void *, void *);
extern u8 racerTimerFlags[];
extern u16 playerSlots[];
extern s32 D_80175DD0;
extern s32 D_801760B8;
extern s32 D_801760E0;
extern s32 D_80176368;
extern s32 D_801763A0;
extern s32 D_80176628;
extern s32 D_80176660;
extern s32 D_801768E8;
extern s32 D_80176910;
extern s32 D_80176B98;
extern f32 D_80189C78;
extern u8 D_80189C7C;
extern u8 D_80189DC1;
extern u8 D_8018A148[];
extern s32 noticeBackgroundDl;

/* Draws the status bar panel and its four bars for one player, skipping players whose slot is inactive. */ void drawPlayerStatusBars(void **gfxp, u32 playerIdx)
{
    s32 slotOff;
    u16 slotState;
    void *cmd;

    if (D_80189DC1 == 0) {
        return;
    }
    slotOff = (playerIdx & 0xFFFF) * 100;
    slotState = *(u16 *)((u8 *)playerSlots + slotOff);
    if (((slotState != 0) & (slotState != 4)) && (*(u16 *)((u8 *)playerSlots + slotOff) != 5)) {
        gfxSetup2DState();
        cmd = *gfxp;
        *gfxp = (char *)cmd + 8;
        *(s32 *)cmd = 0x06000000;
        *(s32 **)((char *)cmd + 4) = &noticeBackgroundDl;
        gfxSetPrimAlpha(gfxp, racerTimerFlags[slotOff]);
        gfxDrawClippedTex4b(gfxp, 0x7F, (s16)(0x3F - (s32)D_80189C78), 0, 0, 0x40, 0x17, 0x40, 0x17, 0x40, 0x17, 0, 0, 0x13F, 0xEF, &D_80175DD0, &D_801760B8);
        gfxSetPrimAlpha(gfxp, D_8018A148[0]);
        gfxDrawClippedTex4b(gfxp, 0x78, 0x5A, 0, 0, 0x50, 0x10, 0x50, 0x10, 0x50, 0x10, 0, 0, 0x13F, 0xEF, &D_801760E0, &D_80176368);
        gfxSetPrimAlpha(gfxp, D_8018A148[1]);
        gfxDrawClippedTex4b(gfxp, 0x78, 0x70, 0, 0, 0x50, 0x10, 0x50, 0x10, 0x50, 0x10, 0, 0, 0x13F, 0xEF, &D_80176660, &D_801768E8);
        gfxSetPrimAlpha(gfxp, D_8018A148[2]);
        gfxDrawClippedTex4b(gfxp, 0x78, 0x86, 0, 0, 0x50, 0x10, 0x50, 0x10, 0x50, 0x10, 0, 0, 0x13F, 0xEF, &D_801763A0, &D_80176628);
        if (D_80189C7C == 1) {
            gfxSetPrimAlpha(gfxp, D_8018A148[3]);
            gfxDrawClippedTex4b(gfxp, 0x78, 0x9C, 0, 0, 0x50, 0x10, 0x50, 0x10, 0x50, 0x10, 0, 0, 0x13F, 0xEF, &D_80176910, &D_80176B98);
        }
    }
}
