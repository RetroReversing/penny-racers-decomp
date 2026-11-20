#include "common_local_source_339302416934.h"

s32 func_80033A90();
s32 osRecvMesg();
s32 osSendMesg();
extern s32 D_800A39A0;
extern char D_80067C70[];
extern char D_800677A8[];
extern char D_800B6FF8[];

extern s32 D_80048160;
extern char D_8006FF50[];
extern char D_8006E760[];

void func_8003DA04(void)
{
    s32 sp10;

    if (D_80048160 == 0) {
        D_80048160 = 1;
        osCreateMesgQueue(D_8006FF50, D_8006E760, 1);
        osSendMesg(D_8006FF50, 0, 0);
    }
    osRecvMesg(D_8006FF50, &sp10, 1);
}
