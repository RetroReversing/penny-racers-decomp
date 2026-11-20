#include "common.h"

typedef struct {
    u8 pad[0x18];
} OSMesgQueue;
typedef void *OSMesg;

typedef struct {
    s16 type;
    s16 pad;
    void *mq;
    void *arg0;
    u8 *name;
    u8 *ext;
    s32 arg4;
    s32 arg3;
} NuPakMsg;

extern s32 D_80046D6C;
extern OSMesgQueue D_80092BE0;
extern void func_8003DDC0(void *, s32);
extern void nuContPakJisToN64(u8 *, void *, s32);
extern void osCreateMesgQueue(OSMesgQueue *, OSMesg *, s32);
extern void osSendMesg(OSMesgQueue *, void *, s32);
extern s32 osRecvMesg(OSMesgQueue *, OSMesg *, s32);

void nuContPakFileOpenJis(void *arg0, u8 *arg1, u8 *arg2, s32 arg3, s32 arg4) {
    OSMesgQueue mq;
    OSMesg buf;
    NuPakMsg msg;
    u8 name[0x20];
    u8 ext[4];
    s32 len;
    u8 *p;

    if (D_80046D6C != 0 && *(s32 *)((u8 *)arg0 + 0xC) != 0) {
        func_8003DDC0(name, 0x20);
        func_8003DDC0(ext, 4);
        len = 0;
        if (*arg1 != 0) {
            p = arg1;
            do {
                p++;
                len++;
            } while (*p != 0);
        }
        nuContPakJisToN64(arg1, name, len);
        nuContPakJisToN64(arg2, ext, 1);
        osCreateMesgQueue(&mq, &buf, 1);
        msg.type = 0x2003;
        msg.arg0 = arg0;
        msg.mq = &mq;
        msg.name = name;
        msg.ext = ext;
        msg.arg4 = arg4;
        msg.arg3 = arg3;
        osSendMesg(&D_80092BE0, &msg, 1);
        osRecvMesg(&mq, NULL, 1);
    }
}
