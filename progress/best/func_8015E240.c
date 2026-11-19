extern u32 D_8011F2FC;
extern u32 D_8011F350;
extern u32 D_802A5A48;

typedef struct Gfx {
    u32 w0;
    u32 w1;
} Gfx;

#define GCMD(w0v, w1v) \
    temp = *dl; \
    *dl = temp + 1; \
    temp->w0 = (w0v); \
    temp->w1 = (u32)(w1v);

void func_8015E240(Gfx **dl, s32 arg1) {
    Gfx *temp;
    s32 idx = (arg1 & 0xFFFF) * 0x64;
    u8 *obj = *(u8 **)(&D_8011F350 + idx);

    if (*(u8 *)(&D_8011F2FC + idx) != 0xFF) {
        GCMD(0xB6000000, 0x3000)
        GCMD(0xFD900000, &D_802A5A48)
        GCMD(0xF5900000, 0x07018060)
        GCMD(0xE6000000, 0)
        GCMD(0xF3000000, 0x0731F19A)
        GCMD(0xE7000000, 0)
        GCMD(0xF5880A00, 0x18060)
        GCMD(0xF2000000, 0x9C09C)
        GCMD(0xF5880800, 0x14060)
        GCMD(0xF2000000 | (obj[0x778] * 4), 0x9C09C)
        GCMD(0xFA000000, (obj[0x17] << 24) | (obj[0x18] << 16) | (obj[0x19] << 8) | *(u8 *)(&D_8011F2FC + idx))
    }
}
