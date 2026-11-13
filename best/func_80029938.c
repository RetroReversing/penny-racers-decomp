typedef struct Blk {
    s16 type;
    s32 *queue;
    s32 w1;
    s32 w2;
    s8 flag;
    s16 flag16;
} Blk;

extern s32 D_80046D74;
extern s32 D_80092BE0;
void osCreateMesgQueue(void *, void *, s32);
s32 osRecvMesg(void *, s32, s32);
s32 osSendMesg(void *, void *, s32);

s32 func_80029938(void) {
    s32 queue[6];
    s32 msgbuf[1];
    Blk blk;

    if (D_80046D74 == 0) {
        return -1;
    }
    osCreateMesgQueue(queue, msgbuf, 1);
    blk.type = 0x4000;
    blk.flag = 0;
    blk.w1 = 0;
    blk.flag16 = 0;
    blk.queue = queue;
    osSendMesg(&D_80092BE0, &blk, 1);
    osRecvMesg(queue, 0, 1);
    return blk.w2;
}
