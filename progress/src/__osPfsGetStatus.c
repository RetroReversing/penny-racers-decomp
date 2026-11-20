extern s8 D_800A3B34;
extern u8 D_800DD3E0[];
s32 func_8003F350(s32, void *);
s32 __osPfsRequestOneChannel(s32);
s32 __osPfsGetOneChannelData(s32, void *);
s32 osRecvMesg(s32, void *, s32);

s32 __osPfsGetStatus(s32 arg0, s32 arg1) {
    u8 sp10[8];
    u8 sp18[8];
    s32 temp_s0;

    __osPfsRequestOneChannel(arg1);
    func_8003F350(1, D_800DD3E0);
    osRecvMesg(arg0, sp18, 1);
    temp_s0 = func_8003F350(0, D_800DD3E0);
    osRecvMesg(arg0, sp18, 1);
    __osPfsGetOneChannelData(arg1, sp10);
    if ((sp10[2] & 1) && (sp10[2] & 2)) {
        return 2;
    }
    if ((*(u16 *)&sp10[2] & 0x1FF) != 0x100) {
        return 1;
    }
    if (sp10[2] & 4) {
        return 4;
    }
    return temp_s0;
}
