#include "common_local_source_339302416658.h"

s32 alEvtqPostEvent(s32, void *, s32);

void func_8002C370(s32 arg0, s32 arg1, s8 arg2) {
    struct {
        s16 type;
        s32 word;
        u8 a;
        u8 b;
        u8 c;
        u8 pad[5];
    } ev;

    ev.type = 2;
    ev.a = arg1 | 0xC0;
    ev.b = arg2;
    ev.word = 0;
    ev.c = 0;
    alEvtqPostEvent(arg0 + 0x48, &ev, 0);
}
