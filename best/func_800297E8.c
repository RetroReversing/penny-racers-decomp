extern s32 D_80046D74;
extern s32 D_80092BE0;

void osCreateMesgQueue(void *, void *, s32);
s32 osRecvMesg(void *, void *, s32);
s32 osSendMesg(void *, void *, s32);

s32 func_800297E8(s8 arg0, s32 arg1, s16 arg2) {
    struct {
        s16 type;
        s16 pad;
        s32 q;
        s32 a;
        s32 b;
        s8 c;
        s16 d;
    } f;
    s32 queue[6];
    s32 buf;

    if (D_80046D74 != 0) {
        osCreateMesgQueue(queue, &buf, 1);
        f.c = arg0;
        f.type = 0x4001;
        f.a = arg1;
        f.d = arg2;
        f.q = (s32)queue;
        osSendMesg(&D_80092BE0, &f, 1);
        osRecvMesg(queue, NULL, 1);
        return f.b;
    }
    return -1;
}
