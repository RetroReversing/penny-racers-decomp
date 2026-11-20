#include "common.h"

typedef struct {
    u16 type;
    u8 pri;
    s8 status;
    void *retQueue;
    s32 dramAddr;
    s32 devAddr;
    s32 size;
} IoMesg;

void func_800294A0(s32 arg0, s32 arg1, s32 arg2) {
    IoMesg mb;
    u32 queue[6];
    u32 msg;
    s32 handle;

    handle = osCartRomInit();
    osCreateMesgQueue(queue, &msg, 1);
    func_800338B0(arg1, arg2);
    mb.pri = 0;
    mb.retQueue = queue;
    mb.dramAddr = arg1;
    mb.devAddr = arg0;
    mb.size = arg2;
    osEPiStartDma(handle, (u8 *)&mb, 0);
    osRecvMesg(queue, &msg, 1);
}
