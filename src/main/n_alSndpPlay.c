#include "common.h"

typedef struct Evt
{
    s16 type;
    s16 pad;
    s32 val;
    s32 r1;
    s32 r2;
} Evt;

extern u8 *D_80046DF4;
void alEvtqPostEvent(void *q, Evt *evt, s32 delay);

void n_alSndpPlay(void)
{
    u8 *a0;
    s32 base;
    Evt ev;

    a0 = *(u8 **)(D_80046DF4 + 0xC);
    base = *(s32 *)(a0 + 0x40);
    if (*(s32 *)(base + *(s32 *)(a0 + 0x3C) * 0x30 + 0x28) == 0)
    {
        ev.type = 0;
        ev.val = base + *(s32 *)(a0 + 0x3C) * 0x30;
        alEvtqPostEvent(a0 + 0x14, &ev, 0);
    }
}
