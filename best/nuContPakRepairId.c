/* adapted from similar verified C in func_8002A3D0 in PENNY RACERS (matched), with its names changed by decompdecomp */
extern s32 D_8006FEF8;
extern s32 D_80092BE0;

void nuContPakRepairId(void)
{
    struct {
        s16 type;
        s16 pad;
        s32 q;
        s32 queue[6];
        s32 buf;
    } f;

    if (D_8006FEF8) {
        osCreateMesgQueue(&f.queue, &f.buf, 1);
        f.type = 0x1002;
        f.q = (s32) &f.queue;
        osSendMesg(&D_80092BE0, &f.type, 1);
        osRecvMesg(&f.queue, NULL, 1);
    }
}
