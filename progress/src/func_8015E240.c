typedef struct { u32 w0; u32 w1; } Gfx;
#define CMD(a, b) { Gfx *_g = (Gfx *)((*gp)++); _g->w0 = (a); _g->w1 = (b); }
extern u8 D_8011F350[];
extern u8 racerTimerFlags[];
extern u8 D_802A5A48[];
void func_8015E240(Gfx **gp, u16 arg1)
{
    s32 off = arg1 * 100;
    u8 *p = *(u8 **)(D_8011F350 + off);

    if (racerTimerFlags[off] == 0xFF) {
        return;
    }
    CMD(0xB6000000, 0x3000);
    CMD(0xFD900000, (u32) D_802A5A48);
    CMD(0xF5900000, 0x7018060);
    CMD(0xE6000000, 0);
    CMD(0xF3000000, 0x731F19A);
    CMD(0xE7000000, 0);
    CMD(0xF5880A00, 0x18060);
    CMD(0xF2000000, 0x9C09C);
    CMD(0xF5880800, 0x14060);
    CMD((*(u8 *)(*(u8 **)(p + 4) + 0x778) << 2) | 0xF2000000, 0x9C09C);
    CMD(0xFA000000, (p[0x17] << 24) | (p[0x18] << 16) | (p[0x19] << 8) | racerTimerFlags[off]);
}
