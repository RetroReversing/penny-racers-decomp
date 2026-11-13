s32 func_800339C0(s32);
s32 func_80033A90(s32 *, s32 *, s32);
s32 osRecvMesg(s32 *, void **, s32);
s32 osViBlack(s32);
extern s32 (*D_80046D94)(void *);
extern s32 (*D_80046D98)(void *);
extern s32 D_8006C300;
extern s32 D_8006FB30;
extern s32 D_80092C00;
extern s32 D_800DE0E8;

void nuGfxTaskMgr(void) {
    void *sp10;
    s32 temp_a0;

    func_80033A90(&D_800DE0E8, &D_8006C300, 8);
    for (;;) {
        osRecvMesg(&D_800DE0E8, &sp10, 1);
        switch (*(s16 *)(*(s32 *)((char *)sp10 + 0x54))) {
        case 4:
            if (D_80046D94 != NULL) {
                D_80046D94(sp10);
            }
            if (D_8006FB30 == 1) {
                osViBlack(0);
            }
            break;
        case 8:
            if (D_80046D98 != NULL) {
                D_80046D98(sp10);
            }
            break;
        }
        temp_a0 = func_800339C0(1);
        D_80092C00 -= 1;
        func_800339C0(temp_a0);
    }
}
