extern u8 racerAnimFrames[];
extern s32 D_8016D0B0[];
extern u8 D_8016D0C4[];

void func_801513E4(void **arg0, s32 arg1)
{
    s32 *g = *arg0;
    f32 f;
    u16 idx;
    s32 *h;

    *arg0 = g + 2;
    h = g;
    h[0] = 0xFD900000;
    f = *(f32 *) (racerAnimFrames + (arg1 & 0xFFFF) * 100);
    idx = (u32) f;
    h[1] = D_8016D0B0[D_8016D0C4[idx]];
    {
        s32 *g = *arg0;
        *arg0 = g + 2;
        g[0] = 0xF5900000;
        g[1] = 0x07094250;
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
        g[0] = 0xF3000000;
        g[1] = 0x071FF200;
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
        g[1] = 0x00094250;
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
        g[0] = 0xFA000000;
        g[1] = 0xF87800FF;
    }
}
