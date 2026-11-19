#include "common_local_source_339302417319.h"

typedef struct { u32 w0; u32 w1; } Gfx;
typedef struct { u16 v; u8 pad[98]; } SlotE;
extern u8 D_802E0CA0[];
extern SlotE D_8011F32E[];

void func_80152374(Gfx **g, u16 i)
{
    Gfx *p;
    p = (*g)++; p->w0 = 0xFD48001F; p->w1 = (u32)D_802E0CA0;
    p = (*g)++; p->w0 = 0xF5480800; p->w1 = 0x07018050;
    p = (*g)++; p->w0 = 0xE6000000; p->w1 = 0;
    p = (*g)++; p->w0 = 0xF4000000; p->w1 = 0x0707C0FC;
    p = (*g)++; p->w0 = 0xE7000000; p->w1 = 0;
    p = (*g)++; p->w0 = 0xF5480800; p->w1 = 0x00018050;
    p = (*g)++; p->w0 = 0xF2000000; p->w1 = 0x0007C0FC;
    p = (*g)++; p->w0 = (D_8011F32E[i].v & 0xFFF) | 0xF2000000; p->w1 = 0x0007C0FC;
}
