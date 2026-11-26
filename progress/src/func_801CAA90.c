typedef struct { u32 w0; u32 w1; } G;
#define SH(v,s,w) ((u32)(((u32)(v) & ((1 << (w)) - 1)) << (s)))
#define CMD(a,b) { G *_g = (G *)((*arg0)++); _g->w0 = (a); _g->w1 = (b); }
void func_801CAA90(G **arg0, s32 x0, s32 y0, s32 x1, s32 y1) {
    CMD(0xBA001402, 0x300000);
    CMD(0xF7000000, 0x10001);
    CMD(SH(0xF6,24,8) | SH(x1,14,10) | SH(y1,2,10), SH(x0,14,10) | SH(y0,2,10));
}
