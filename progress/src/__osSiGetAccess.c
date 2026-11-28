/* identical to func_8003DA04 (matched), with its names changed by decompdecomp */
s32 func_80033A90();
s32 osRecvMesg();
s32 osSendMesg();
extern s32 D_800A39A0;
extern char D_80067C70[];
extern char D_800677A8[];
extern char D_800B6FF8[];

extern s32 D_80048200;
extern char D_800DE2B0[];
extern char D_8006E770[];

void __osSiGetAccess(void)
{
    s32 sp10;

    if (D_80048200 == 0) {
        D_80048200 = 1;
        osCreateMesgQueue(D_800DE2B0, D_8006E770, 1);
        osSendMesg(D_800DE2B0, 0, 0);
    }
    osRecvMesg(D_800DE2B0, &sp10, 1);
}
