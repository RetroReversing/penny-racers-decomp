extern s32 D_80046D74;
extern s32 D_80092BE0;

static inline s32 siSendRecv(s16 type)
{
    struct {
        s16 type;
        s16 pad;
        s32 q;
        s32 err;
        s32 ret;
        s8 flag;
        s8 pad2;
        s16 flag16;
    } f;
    s32 queue[6];
    s32 buf;

    if (D_80046D74 == 0) {
        return -1;
    }
    osCreateMesgQueue(queue, &buf, 1);
    f.type = type;
    f.flag = 0;
    f.err = 0;
    f.flag16 = 0;
    f.q = (s32)queue;
    osSendMesg(&D_80092BE0, &f, 1);
    osRecvMesg(queue, NULL, 1);
    return f.ret;
}

s32 func_80029938(void)
{
    return siSendRecv(0x4000);
}
