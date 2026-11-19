#include "common.h"

typedef struct Msg {
    s16 type;
    s32 w1;
    s32 w2;
    s32 w3;
} Msg;

extern s32 D_80046D6C;
extern s32 D_80092BE0[];
void osCreateMesgQueue(void *, void *, s32);
s32 osRecvMesg(void *, s32, s32);
s32 osSendMesg(void *, void *, s32);

void nuContPakFileState(s32 arg0, s32 arg1) {
    s32 queue[6];
    Msg msg;
    s32 arr[1];

    if (D_80046D6C != 0) {
        osCreateMesgQueue(queue, arr, 1);
        msg.w2 = arg0;
        msg.type = 0x2006;
        msg.w1 = (s32) queue;
        msg.w3 = arg1;
        osSendMesg(D_80092BE0, &msg, 1);
        osRecvMesg(queue, 0, 1);
    }
}
