extern u8 racerTimerFlags[];
extern u8 playerSlots[];
extern u8 D_802DF5A8[];

void func_80154494(void **arg0, unsigned long arg1)
{
    s32 w;

    {
        u32 *g = (u32 *) *arg0;
        *arg0 = (void *) (g + 2);
        g[0] = 0xFA000000;
        g[1] = (s32) (racerTimerFlags[((arg1 & 0xFFFF) * 100)] | ~0xFF);
    }
    {
        u32 *g = (u32 *) *arg0;
        *arg0 = (void *) (g + 2);
        g[0] = 0xFD88001F;
        g[1] = (u32) D_802DF5A8;
    }
    {
        u32 *g = (u32 *) *arg0;
        *arg0 = (void *) (g + 2);
        g[0] = 0xF5880800;
        g[1] = 0x07018050;
    }
    {
        u32 *g = (u32 *) *arg0;
        *arg0 = (void *) (g + 2);
        g[0] = 0xE6000000;
        g[1] = 0;
    }
    {
        u32 *g = (u32 *) *arg0;
        *arg0 = (void *) (g + 2);
        g[0] = 0xF4000000;
        g[1] = 0x707C0FC;
    }
    {
        u32 *g = (u32 *) *arg0;
        *arg0 = (void *) (g + 2);
        g[0] = 0xE7000000;
        g[1] = 0;
    }
    {
        u32 *g = (u32 *) *arg0;
        *arg0 = (void *) (g + 2);
        g[0] = 0xF5880800;
        g[1] = 0x00018050;
    }
    {
        u32 *g = (u32 *) *arg0;
        *arg0 = (void *) (g + 2);
        g[0] = 0xF2000000;
        g[1] = 0x7C0FC;
    }
    {
        u32 *g = (u32 *) *arg0;
        *arg0 = (void *) (g + 2);
        w = (0xFF - *(u16 *) (playerSlots + ((arg1 & 0xFFFF) * 100))) & 0xFFF;
        g[0] = (u32) (w | 0xF2000000);
        g[1] = 0x7C0FC;
    }
}
