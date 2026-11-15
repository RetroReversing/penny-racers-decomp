typedef struct {
    s16 type;
    s16 pad0;
    s32 *mq;
    s32 a0;
    s32 ret;
    s8 c;
    s8 pad1;
    s16 d;
} Msg;

extern s32 D_80046D74;
extern s32 D_80092BE0[];
void osCreateMesgQueue(void *mq, void *msg, s32 count);
s32 osRecvMesg(void *mq, void *msg, s32 flags);
s32 osSendMesg(void *mq, void *msg, s32 flags);

s32 func_80029938(void) {
    Msg msg;
    s32 mq[6];
    s32 buf[2];

    if (D_80046D74 != 0) {
        osCreateMesgQueue(mq, buf, 1);
        msg.type = 0x4000;
        msg.mq = mq;
        msg.d = 0;
        msg.c = 0;
        msg.a0 = 0;
        osSendMesg(D_80092BE0, &msg, 1);
        osRecvMesg(mq, 0, 1);
        return msg.ret;
    }
    return -1;
}
