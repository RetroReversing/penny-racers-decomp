/* identical to func_800946B4 in V-RALLY-PAL (matched), with its names changed by decompdecomp */
s32 func_80033A90();
s32 osRecvMesg();
s32 osSendMesg();
extern s32 D_800A39A0;
extern char D_80067C70[];
extern char D_800677A8[];
extern char D_800B6FF8[];

void func_8003DA04(void)
{
    s32 sp10;

    if (D_800A39A0 == 0) {
        D_800A39A0 = 1;
        func_80033A90(D_800677A8 + 0x87A8, D_80067C70 + 0x6AF0, 1);
        osSendMesg(D_800B6FF8, 0, 0);
    }
    osRecvMesg(D_800677A8 + 0x87A8, &sp10, 1);
}
