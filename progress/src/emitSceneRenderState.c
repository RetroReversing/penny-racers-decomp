typedef struct { u32 w0, w1; } Cmd;
extern u8 D_8006FAF0[];

#define PACK(r, g, b, a) ((((r) << 8) & 0xF800) | (((g) << 3) & 0x7C0) | (((b) >> 2) & 0x3E) | ((a) & 1))
#define EMIT(pkt, a, b) { Cmd *_g = (Cmd *)(pkt); _g->w0 = (a); _g->w1 = (b); }

/* Appends the scene's display-list state: a fill colour picked from the current mode and, for modes 2 and 7, an environment colour. */
void emitSceneRenderState(Cmd **dl)
{
    u32 fillR, fillG, fillB;
    u32 envR, envG, envB;

    switch (*(u16 *) (D_8006FAF0 + 0x20)) {
    case 5:
        fillR = 0xA; fillG = 0xA; fillB = 0x32;
        envR = 0xFF; envG = 0xFF; envB = 0xFF;
        break;
    case 2:
        fillR = 0x96; fillG = 0x96; fillB = 0x96;
        envR = 0x8C; envG = 0x8C; envB = 0x8C;
        break;
    case 7:
        fillR = 0xAA; fillG = 0xAA; fillB = 0xAA;
        envR = 0xBE; envG = 0xBE; envB = 0xBE;
        break;
    case 0: case 1: case 3: case 4: case 6: case 8: case 9:
    default:
        fillR = 0; fillG = 0; fillB = 0xFA;
        envR = 0xFF; envG = 0xFF; envB = 0xFF;
        break;
    }

    EMIT((*dl)++, 0xE7000000, 0);
    EMIT((*dl)++, 0xBA001402, 0x00300000);
    EMIT((*dl)++, 0xF7000000, (PACK(fillR, fillG, fillB, 1) << 16) | PACK(fillR, fillG, fillB, 1));
    EMIT((*dl)++, 0xF64FC3BC, 0);
    if (*(u16 *) (D_8006FAF0 + 0x20) == 2 || *(u16 *) (D_8006FAF0 + 0x20) == 7) {
        EMIT((*dl)++, 0xF8000000, (envR << 24) | (envG << 16) | (envB << 8) | 0xFF);
        EMIT((*dl)++, 0xBC000008, 0x0500FC00);
    }
}
