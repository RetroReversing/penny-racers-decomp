typedef struct
{
  u32 w0;
  u32 w1;
} Gfx;
typedef struct
{
  u16 v;
  u8 pad[98];
} SlotE;
extern u8 D_802D7388[];
extern SlotE D_8011F32E[];

void func_801542F8(Gfx **g, s32 i)
{
    {
        Gfx *p = (*g)++;
        p->w0 = 0xFD48001F;
        p->w1 = (u32) D_802D7388;
    }
    {
        Gfx *p = (*g)++;
        p->w0 = 0xF5480800;
        p->w1 = 0x07014050;
    }
    {
        Gfx *p = (*g)++;
        p->w0 = 0xE6000000;
        p->w1 = 0;
    }
    {
        Gfx *p = (*g)++;
        p->w0 = 0xF4000000;
        p->w1 = 0x0707C07C;
    }
    {
        Gfx *p = (*g)++;
        p->w0 = 0xE7000000;
        p->w1 = 0;
    }
    {
        Gfx *p = (*g)++;
        p->w0 = 0xF5480800;
        p->w1 = 0x00014050;
    }
    {
        Gfx *p = (*g)++;
        p->w0 = 0xF2000000;
        p->w1 = 0x0007C07C;
    }
    {
        Gfx *p = (*g)++;
        p->w0 = 0xF2000000 | ((0x7C - D_8011F32E[(u16) i].v) & 0xFFF);
        p->w1 = 0x0007C07C;
    }
}
