/* adapted from similar verified C in nuContPakFileNum in PENNY RACERS (matched), with its names changed by decompdecomp */
extern s32 D_80046D6C;
extern s32 D_80092BE0;

void nuContPakFileDelete(s32 arg0, s32 arg1, s32 arg2)
{
    s32 queue[6];
    struct {
        s16 type;
        s16 pad;
        s32 q;
        s32 a;
        s32 b;
        s32 c;
    } f;
    s32 buf;

    if (D_80046D6C) {
        osCreateMesgQueue(queue, &buf, 1);
        f.a = arg0;
        f.type = 0x2007;
        f.q = (s32)queue;
        f.b = arg1;
        f.c = arg2;
        osSendMesg(&D_80092BE0, &f, 1);
        osRecvMesg(queue, NULL, 1);
    }
}
