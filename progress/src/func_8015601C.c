extern u8 D_8011F2FC[];
extern u8 D_8011F32E[];
extern u8 D_802E6320[];

void func_8015601C(void **arg0, s32 arg1)
{
    s32 off;

    {
        s32 *g = *arg0;
        *arg0 = g + 2;
        g[0] = 0xB6000000;
        g[1] = 0x2000;
    }
    {
        s32 *g = *arg0;
        *arg0 = g + 2;
        g[0] = 0xFA000000;
        off = (arg1 & 0xFFFF) * 100;
        g[1] = D_8011F2FC[off] | 0x5CC7BF00;
    }
    {
        s32 *g = *arg0;
        *arg0 = g + 2;
        g[0] = 0xFD88001F;
        g[1] = (s32) D_802E6320;
    }
    {
        s32 *g = *arg0;
        *arg0 = g + 2;
        g[0] = 0xF5880800;
        g[1] = 0x07018050;
    }
    {
        s32 *g = *arg0;
        *arg0 = g + 2;
        g[0] = 0xE6000000;
        g[1] = 0;
    }
    {
        s32 *g = *arg0;
        *arg0 = g + 2;
        g[0] = 0xF4000000;
        g[1] = 0x0707C0FC;
    }
    {
        s32 *g = *arg0;
        *arg0 = g + 2;
        g[0] = 0xE7000000;
        g[1] = 0;
    }
    {
        s32 *g = *arg0;
        *arg0 = g + 2;
        g[0] = 0xF5880800;
        g[1] = 0x00018050;
    }
    {
        s32 *g = *arg0;
        *arg0 = g + 2;
        g[0] = 0xF2000000;
        g[1] = 0x0007C0FC;
    }
    {
        s32 *g = *arg0;
        *arg0 = g + 2;
        g[0] = (*(u16 *) (D_8011F32E + off) & 0xFFF) | 0xF2000000;
        g[1] = 0x0007C0FC;
    }
}
