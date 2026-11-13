extern s32 D_80046D6C;
extern u8 D_80092BE0[];
void osCreateMesgQueue(void *arg0, void *arg1, s32 arg2);
s32 osRecvMesg(void *queue, void *msg, s32 flags);
s32 osSendMesg(void *queue, void *msg, s32 flags);

typedef struct {
    s16 type;
    s16 pad;
    void *ptr;
    s32 arg;
    s32 ret;
} Msg;

s32 func_80028F60(s32 arg0) {
    u8 sp10[0x18];
    u32 sp38[1];
    Msg msg;

    if (D_80046D6C == 0) {
        return 0;
    }
    osCreateMesgQueue(sp10, sp38, 1);
    msg.arg = arg0;
    msg.type = 0x2002;
    msg.ptr = sp10;
    osSendMesg(D_80092BE0, &msg, 1);
    osRecvMesg(sp10, NULL, 1);
    return msg.ret;
}
