#include "common_local_source_339302416621.h"

extern s32 D_8006FEF8;
extern u8 D_80092BE0[];
extern void osCreateMesgQueue(void *mq, void *msg, s32 count);
extern s32 osSendMesg(void *mq, void *msg, s32 flag);
extern s32 osRecvMesg(void *mq, void *msg, s32 flag);

void nuContQueryRead(void)
{
    struct {
        s16 type;
        s16 pad;
        void *mq;
    } msg;
    u8 queue[24];
    u8 buf[8];

    if (D_8006FEF8 != 0)
    {
        osCreateMesgQueue(queue, buf, 1);
        msg.type = 0x1002;
        msg.mq = queue;
        osSendMesg(D_80092BE0, &msg, 1);
        osRecvMesg(queue, 0, 1);
    }
}
