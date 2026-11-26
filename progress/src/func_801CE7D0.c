typedef struct { u32 w0; u32 w1; } Gfx;
#define CMD(a, b) { Gfx *_g = p++; _g->w0 = (a); _g->w1 = (b); }
void func_801CE7D0(Gfx **gp)
{
    Gfx *p = *gp;
    CMD(0xE7000000, 0);
    CMD(0xBA001402, 0);
    CMD(0xB6000000, 0xF3205);
    CMD(0xFC119623, 0xFF2FFFFF);
    CMD(0xBA001301, 0);
    CMD(0xBA001001, 0);
    CMD(0xBA000C02, 0x2000);
    CMD(0xBA000903, 0xC00);
    CMD(0xBA000E02, 0);
    CMD(0xBA000602, 0xC0);
    CMD(0xBA000602, 0x40);
    CMD(0xB9000002, 0);
    CMD(0xBA000402, 0x30);
    *gp = p;
}
