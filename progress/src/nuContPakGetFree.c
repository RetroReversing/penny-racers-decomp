extern s32 D_80046D6C;
extern u8 D_80092BE0[];
extern void osCreateMesgQueue(void *mq, void *msg, s32 count);
extern s32 osRecvMesg(void *mq, void *msg, s32 flag);
extern s32 osSendMesg(void *mq, void *msg, s32 flag);

typedef struct {
    s16 type;
    s16 pad;
    void *mq;
    s32 arg;
    s32 ret;
} Msg;

s32 nuContPakGetFree(s32 arg0) {
    u8 queue[0x18];
    u32 buf[1];
    Msg msg;

    if (D_80046D6C == 0) {
        return 0;
    }
    osCreateMesgQueue(queue, buf, 1);
    msg.arg = arg0;
    msg.type = 0x2002;
    msg.mq = queue;
    osSendMesg(D_80092BE0, &msg, 1);
    osRecvMesg(queue, 0, 1);
    return msg.ret;
}
