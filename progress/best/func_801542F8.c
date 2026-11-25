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
  Gfx *p;
  p = (*g)++;
  p->w0 = (unsigned char) 0xFD48001F;
  p->w1 = (u32) D_802D7388;
  p = (*g)++;
  {
    int repair_store_value = 0x07014050;
    do
    {
      p->w1 = 0x07014050;
    }
    while (0);
  }
  p->w1 = 0x07014050;
  p->w0 = 0xF5480800;
  p = (*g)++;
  p->w0 = 0xE6000000;
  p->w1 = 0;
  p = (*g)++;
  p->w0 = 0xF4000000;
  p->w1 = 0x0707C07C & 0xFFFF;
  p = (*g)++;
  p->w0 = 0xE7000000;
  p->w1 = 0;
  p = (*g)++;
  do
  {
    p->w0 = 0xF5480800;
    p->w1 = 0x14050;
    do
    {
      p = (*g)++;
    }
    while (0);
    do
    {
      do
      {
        p->w0 = 0xF2000000;
      }
      while (0);
      p->w1 = 0x7C07C; p = (*g)++;
      do
      {
        p->w0 = (D_8011F32E[(unsigned short) i].v & 0xFFF) | 0xF2000000;
      }
      while (0);
    }
    while (0);
    p->w1 = ((((((((0x7C07C & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu) & 0xFFu;
  }
  while (0);
}

