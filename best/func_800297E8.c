extern s32 D_80046D74;
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
    s8 a;
    s16 b;
} Msg;

s32 func_800297E8(s8 arg0, s32 arg1, s16 arg2) {
    Msg msg;
    u8 sp28[0x18];
    u32 sp40[1];
    s16 type = 0x4001;

    if (D_80046D74 != 0) {
        osCreateMesgQueue(sp28, sp40, 1);
        msg.a = arg0;
        msg.type = type;
        msg.arg = arg1;
        msg.b = arg2;
        msg.ptr = sp28;
        osSendMesg(D_80092BE0, &msg, 1);
        osRecvMesg(sp28, NULL, 1);
        return msg.ret;
    }
    return -1;
}
