#include "common_local_source_339302417381.h"

typedef struct {
    u8 pad0[0xC];
    u8 alpha;
    u8 pad1[0x60 - 0xD];
    u8 *col;
} Ent8015E484;
extern Ent8015E484 D_8011F2F0[];

typedef struct { u32 w0, w1; } GfxW;

void func_8015E484(GfxW **gp, u16 idx)
{
    u8 *c = D_8011F2F0[idx].col;
    GfxW *g;

    if (D_8011F2F0[idx].alpha != 0xFF) {
        g = (*gp)++;
        g->w0 = 0xB6000000;
        g->w1 = 0x3000;
        g = (*gp)++;
        g->w0 = 0xFA000000;
        g->w1 = (c[0x17] << 24) | (c[0x18] << 16) | (c[0x19] << 8) | D_8011F2F0[idx].alpha;
    }
}
