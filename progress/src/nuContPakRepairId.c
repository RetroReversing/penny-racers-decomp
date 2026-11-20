extern s32 D_80046D6C;
extern s32 D_80092BE0;

void nuContPakRepairId(s32 arg0)
{
    s32 queue[6];
    struct {
        s16 type;
        s16 pad;
        s32 q;
        s32 r;
    } f;
    s32 buf;

    if (D_80046D6C) {
        osCreateMesgQueue(queue, &buf, 1);
        f.r = arg0;
        f.type = 0x2008;
        f.q = (s32)queue;
        osSendMesg(&D_80092BE0, &f, 1);
        osRecvMesg(queue, NULL, 1);
    }
}
