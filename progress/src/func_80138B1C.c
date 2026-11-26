typedef struct { u32 w0, w1; } Cmd;
extern u8 D_8006FAF0[];

#define PACK(r, g, b, a) ((((r) << 8) & 0xF800) | (((g) << 3) & 0x7C0) | (((b) >> 2) & 0x3E) | ((a) & 1))
#define EMIT(pkt, a, b) { Cmd *_g = (Cmd *)(pkt); _g->w0 = (a); _g->w1 = (b); }

void func_80138B1C(Cmd **gfx)
{
    u32 r, g, b;
    u32 er, eg, eb;

    switch (*(u16 *) (D_8006FAF0 + 0x20)) {
    case 5:
        r = 0xA; g = 0xA; b = 0x32;
        er = 0xFF; eg = 0xFF; eb = 0xFF;
        break;
    case 2:
        r = 0x96; g = 0x96; b = 0x96;
        er = 0x8C; eg = 0x8C; eb = 0x8C;
        break;
    case 7:
        r = 0xAA; g = 0xAA; b = 0xAA;
        er = 0xBE; eg = 0xBE; eb = 0xBE;
        break;
    case 0: case 1: case 3: case 4: case 6: case 8: case 9:
    default:
        r = 0; g = 0; b = 0xFA;
        er = 0xFF; eg = 0xFF; eb = 0xFF;
        break;
    }

    EMIT((*gfx)++, 0xE7000000, 0);
    EMIT((*gfx)++, 0xBA001402, 0x00300000);
    EMIT((*gfx)++, 0xF7000000, (PACK(r, g, b, 1) << 16) | PACK(r, g, b, 1));
    EMIT((*gfx)++, 0xF64FC3BC, 0);
    if (*(u16 *) (D_8006FAF0 + 0x20) == 2 || *(u16 *) (D_8006FAF0 + 0x20) == 7) {
        EMIT((*gfx)++, 0xF8000000, (er << 24) | (eg << 16) | (eb << 8) | 0xFF);
        EMIT((*gfx)++, 0xBC000008, 0x0500FC00);
    }
}
