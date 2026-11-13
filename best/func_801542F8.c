/* adapted from similar verified C in func_8015518C in PENNY RACERS (matched), with its names changed by decompdecomp */
typedef struct { u32 w0; u32 w1; } Gfx;
typedef struct { u16 v; u8 pad[98]; } SlotE;
extern u8 D_802D7388[];
extern SlotE D_8011F32E[];
void func_801542F8(Gfx **g, u16 i)
{
    Gfx *p;
    p = (*g)++; p->w0 = 0xFD48001F; p->w1 = (u32)D_802D7388;
    p = (*g)++; p->w0 = 0xF5480800; p->w1 = 0x07014050;
    p = (*g)++; p->w0 = 0xE6000000; p->w1 = 0;
    p = (*g)++; p->w0 = 0xF4000000; p->w1 = 0x0707C07C;
    p = (*g)++; p->w0 = 0xE7000000; p->w1 = 0;
    p = (*g)++; p->w0 = 0xF5480800; p->w1 = 0x14050;
    p = (*g)++; p->w0 = 0xF2000000; p->w1 = 0x7C07C;
    p = (*g)++; p->w0 = (D_8011F32E[i].v & 0xFFF) | 0xF2000000; p->w1 = 0x7C07C;
}
