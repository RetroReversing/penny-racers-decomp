extern u8 playerSlots[];
extern u8 D_802DF378[];

void func_80153F74(s32 **arg0, u16 arg1)
{
    {
        s32 *g = *arg0;
        *arg0 = g + 2;
        g[0] = 0xFD48000F;
        g[1] = (s32) D_802DF378;
    }
    {
        s32 *g = *arg0;
        *arg0 = g + 2;
        g[0] = 0xF5480400;
        g[1] = 0x07014050;
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
        g[1] = 0x0703E07C;
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
        g[0] = 0xF5400400;
        g[1] = 0x00014050;
    }
    {
        s32 *g = *arg0;
        *arg0 = g + 2;
        g[0] = 0xF2000000;
        g[1] = 0x0007C07C;
    }
    {
        s32 *g = *arg0;
        *arg0 = g + 2;
        g[0] = ((0x7C - *(u16 *)(playerSlots + (arg1 & 0xFFFF) * 100)) & 0xFFF) | 0xF2000000;
        g[1] = 0x0007C07C;
    }
}
