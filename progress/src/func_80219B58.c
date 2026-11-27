typedef struct {
    u8 flags;
    u8 pad1[0xB];
    u8 alpha;
    u8 padD[0x57];
} Struct8011F2F0;
extern Struct8011F2F0 D_8011F2F0[];
extern u8 D_8021CA30[][3];
extern u8 lastMaterial;
typedef struct { u32 w0, w1; } GfxW;

void func_80219B58(GfxW **dl, u16 idx)
{
    u8 f = D_8011F2F0[idx].flags;
    GfxW *g;

    g = (*dl)++;
    g->w0 = 0xB6000000;
    g->w1 = 0x2000;
    g = (*dl)++;
    g->w0 = 0xFA000000;
    g->w1 = (D_8021CA30[f >> 6][0] << 24) | (D_8021CA30[f >> 6][1] << 16) | (D_8021CA30[f >> 6][2] << 8) | D_8011F2F0[idx].alpha;
    lastMaterial = 0xFF;
}
