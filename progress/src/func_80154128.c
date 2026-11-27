extern u8 racerTimerFlags[];
extern u8 playerSlots[];
extern u8 D_802D9CD8[];

void func_80154128(void **arg0, s32 arg1)
{
    s32 off;

    {
        s32 *g = *arg0;
        *arg0 = g + 2;
        g[0] = 0xFA000000;
        off = (arg1 & 0xFFFF) * 100;
        g[1] = racerTimerFlags[off] | 0xFFFFFF00;
    }
    {
        s32 *g = *arg0;
        *arg0 = g + 2;
        g[0] = 0xFD88003F;
        g[1] = (s32) D_802D9CD8;
    }
    {
        s32 *g = *arg0;
        *arg0 = g + 2;
        g[0] = 0xF5881000;
        g[1] = 0x07014060;
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
        g[1] = 0x070FC07C;
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
        g[0] = 0xF5881000;
        g[1] = 0x00014060;
    }
    {
        s32 *g = *arg0;
        *arg0 = g + 2;
        g[0] = 0xF2000000;
        g[1] = 0x000FC07C;
    }
    {
        s32 *g = *arg0;
        *arg0 = g + 2;
        g[0] = (*(u16 *) (playerSlots + off) & 0xFFF) | 0xF2000000;
        g[1] = 0x000FC07C;
    }
}
