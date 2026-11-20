extern u32 D_800E1C00[];
extern u16 D_8011F330[];
extern u32 D_80167FB8[];
extern u32 D_8031A7C8[];
extern u32 D_8031B5D0[];

void func_801C10FC(void **arg0, s32 arg1) {
    s32 i;
    u32 *gfx;

    if (D_8011F330[(arg1 & 0xFFFF) * 0x32] != 0) {
        if (D_8011F330[(arg1 & 0xFFFF) * 0x32] != 1) {
            return;
        }
        gfx = *arg0;
        *arg0 = gfx + 2;
        gfx[0] = 0x06000000;
        gfx[1] = (u32)D_800E1C00;
        gfx = *arg0;
        *arg0 = gfx + 2;
        gfx[0] = 0xB6000000;
        gfx[1] = 0x2000;
        gfx = *arg0;
        *arg0 = gfx + 2;
        gfx[0] = 0xFD100000;
        gfx[1] = (u32)D_8031B5D0;
        gfx = *arg0;
        *arg0 = gfx + 2;
        gfx[0] = 0xE8000000;
        gfx[1] = 0;
        gfx = *arg0;
        *arg0 = gfx + 2;
        gfx[0] = 0xF5000100;
        gfx[1] = 0x07000000;
        gfx = *arg0;
        *arg0 = gfx + 2;
        gfx[0] = 0xE6000000;
        gfx[1] = 0;
        gfx = *arg0;
        *arg0 = gfx + 2;
        gfx[0] = 0xF0000000;
        gfx[1] = 0x0703C000;
        gfx = *arg0;
        *arg0 = gfx + 2;
        gfx[0] = 0xE7000000;
        gfx[1] = 0;
        gfx = *arg0;
        *arg0 = gfx + 2;
        gfx[0] = 0x040040FF;
        gfx[1] = (u32)D_80167FB8;
        i = 0;
        do {
            gfx = *arg0;
            *arg0 = gfx + 2;
            gfx[0] = 0xFD48006F;
            gfx[1] = (u32)D_8031A7C8;
            gfx = *arg0;
            *arg0 = gfx + 2;
            gfx[0] = 0xF5480400;
            gfx[1] = 0x07080200;
            gfx = *arg0;
            *arg0 = gfx + 2;
            gfx[0] = 0xE6000000;
            gfx[1] = 0;
            gfx = *arg0;
            *arg0 = gfx + 2;
            gfx[0] = (((i << 6) & 0xFFF) << 0xC) | 0xF4000000;
            gfx[1] = ((((i << 5) + 0x1F) * 2 & 0xFFF) << 0xC) | 0x0700007C;
            gfx = *arg0;
            *arg0 = gfx + 2;
            gfx[0] = 0xE7000000;
            gfx[1] = 0;
            gfx = *arg0;
            *arg0 = gfx + 2;
            gfx[0] = 0xF5400400;
            gfx[1] = 0x80200;
            gfx = *arg0;
            *arg0 = gfx + 2;
            gfx[0] = (((i << 7) & 0xFFF) << 0xC) | 0xF2000000;
            gfx[1] = ((((i << 5) + 0x1F) * 4 & 0xFFF) << 0xC) | 0x7C;
            gfx = *arg0;
            *arg0 = gfx + 2;
            gfx[0] = (((i * 2) & 0xFF) << 0x10) | (((i + 8) << 9) & 0xFE00) | (((i + 1) * 2) & 0xFF) | 0xB1000000;
            gfx[1] = ((((i + 1) * 2) & 0xFF) << 0x10) | (((i + 8) << 9) & 0xFE00) | (((i + 9) * 2) & 0xFF);/*__repair_loop_weight*/do {
            i++;} while (0);
        } while (i < 7);
        return;
    }
    D_8011F330[(arg1 & 0xFFFF) * 0x32] = 1;
}
