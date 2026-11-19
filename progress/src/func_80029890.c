extern s32 D_80046D74;
extern s32 D_80092BE0;

static inline s32 siSendRecv(s16 type, s8 flag, s32 data, s16 flag16)
{
    struct {
        s16 type;
        s16 pad;
        s32 q;
        s32 data;
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
    f.flag = flag;
    f.type = type;
    f.data = data;
    f.flag16 = flag16;
    f.q = (s32)queue;
    osSendMesg(&D_80092BE0, &f, 1);
    osRecvMesg(queue, NULL, 1);
    return f.ret;
}

s32 func_80029890(s8 arg0, s32 arg1, s16 arg2)
{
    return siSendRecv(0x4002, arg0, arg1, arg2);
}
