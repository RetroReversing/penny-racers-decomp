typedef struct { u32 w0; u32 w1; } Gfx;
#define CMD(a, b) { Gfx *_g = (Gfx *)((*gp)++); _g->w0 = (a); _g->w1 = (b); }
extern u8 D_8011F2FC[];
extern u8 playerSlots[];
extern u8 D_802E6CB8[];
void func_8014C0FC(Gfx **gp, u16 arg1)
{

    CMD(0xB6000000, 0x2000);
    CMD(0xFA000000, D_8011F2FC[arg1 * 100] | ~0xFF);
    CMD(0xFD88001F, (u32) D_802E6CB8);
    CMD(0xF5880800, 0x7014050);
    CMD(0xE6000000, 0);
    CMD(0xF4000000, 0x707C0FC);
    CMD(0xE7000000, 0);
    CMD(0xF5880800, 0x14050);
    CMD(0xF2000000, 0x7C0FC);
    CMD(((0xFF - (*(u16 *)(playerSlots + arg1 * 100))) & 0xFFF) | 0xF2000000, 0x7C0FC);
}
