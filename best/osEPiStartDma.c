/* identical to func_80006F60 in Resident Evil II (matched), with its names changed by decompdecomp */
extern s32 D_800128F0;
s32 func_800418C0(void);
s32 osJamMesg(s32, void *, s32);
s32 osSendMesg(s32, void *, s32);

s32 osEPiStartDma(s32 a, u8 *p, s32 c)
{
    if (D_800128F0 == 0) {
        return -1;
    }
    *(s32 *)(p + 0x14) = a;
    if (c == 0) {
        *(s16 *)p = 0xF;
    } else {
        *(s16 *)p = 0x10;
    }
    if (*(u8 *)(p + 2) != 1) {
        return osSendMesg(func_800418C0(), p, 0);
    }
    return osJamMesg(func_800418C0(), p, 0);
}
