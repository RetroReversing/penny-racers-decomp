extern s32 D_80046D6C;
extern void *D_80092BE0;

typedef struct {
    s16 type;
    s16 pad;
    void *replyQ;
    s32 a;
    s32 b;
    s32 c;
} Msg2007;

void nuContPakFileNum(s32 arg0, s32 arg1, s32 arg2) {
    void *queue[6];
    void *buf[1];
    Msg2007 msg;

    if (D_80046D6C != 0) {
        osCreateMesgQueue(queue, buf, 1);
        msg.type = 0x2007;
        msg.replyQ = queue;
        msg.a = arg0;
        msg.b = arg1;
        msg.c = arg2;
        osSendMesg(D_80092BE0, &msg, 1);
        osRecvMesg(queue, 0, 1);
    }
}
