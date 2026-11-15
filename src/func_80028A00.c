s32 func_80028AF0(void *);
s32 func_80028B50(void);
s32 nuGfxSetCfb(void *, s32);
s32 nuGfxThreadStart(void);
s32 nuGfxTaskMgrInit(void);
s32 nuGfxTaskStart(s32 *, s32, s32, s32);
extern s32 D_46C78;
extern s32 D_80046C60;
extern s32 D_80046C70;
extern s32 D_8006F9D0;
extern void *D_8006FF68;
extern s32 func_80028B30;

void func_80028A00(void)
{
    s32 gfx[6];
    u8 big[0x7F0];

    nuGfxThreadStart();
    nuGfxSetCfb(&D_80046C70, 2);
    D_8006F9D0 = 0x80000400;
    func_80028AF0(&func_80028B30);
    D_8006FF68 = &D_80046C60;
    nuGfxTaskMgrInit();
    gfx[0] = 0x06000000;
    gfx[1] = (s32)&D_46C78;
    gfx[2] = 0xE9000000;
    gfx[3] = 0;
    gfx[4] = 0xB8000000;
    gfx[5] = 0;
    nuGfxTaskStart(gfx, 0x18, 0, 0);
    func_80028B50();
}
