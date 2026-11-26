typedef struct { u32 w0; u32 w1; } G;

void func_801CAB1C(G **arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u32 arg5, u32 arg6, u32 arg7)
{
    G *g;
    u32 x;
    u32 y;
    g = (*arg0)++;
    g->w0 = 0xBA001402;
    g->w1 = 0x300000;
    g = (*arg0)++;
    g->w0 = 0xF7000000;
    x = ((arg5 << 8) & 0xF800) | ((arg6 << 3) & 0x7C0) | ((arg7 >> 2) & 0x3E);
    y = x | 1;
    y = y << 16;
    y = y | 1;
    g->w1 = y | x;
    g = (*arg0)++;
    g->w0 = 0xF6000000 | ((arg3 & 0x3FF) << 14) | ((arg4 & 0x3FF) << 2);
    g->w1 = ((arg1 & 0x3FF) << 14) | ((arg2 & 0x3FF) << 2);
    g = (*arg0)++;
    g->w0 = 0xE7000000;
    g->w1 = 0;
}
