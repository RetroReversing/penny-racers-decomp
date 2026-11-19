extern u16 D_8006FB1C;
extern u8 D_8011F2FC[];
extern char D_801839E0[];
extern void func_8003DE60(char *);

void func_80164364(u32 **arg0, u16 arg1) {
    s32 v, r, g, b, a;
    u32 *p;
    v = D_8011F2FC[arg1 * 0x64];
    if (v < 0xB4) {
        if (v < 0xA0) {
            if (v < 0x8C) {
                if (v < 0x78) {
                    if (v < 0) goto bad;
                    r = g = b = 0xFF;
                } else {
                    r = g = b = 0xC8;
                }
            } else {
                r = g = b = 0xA0;
            }
        } else {
            r = g = b = 0x50;
        }
    } else if (v < 0xDC) {
        r = g = 0;
        b = (v < 0xC8) ? 0 : 0x80;
    } else if (v < 0x100) {
        r = g = 0;
        b = 0xFF;
    } else {
bad:
        func_8003DE60(D_801839E0);
        return;
    }
    a = D_8011F2FC[arg1 * 0x64 + 1];
    if (!(D_8006FB1C & 1)) {
        r = g = b = 0xFF;
        a += 0x64;
        if ((u32)a >= 0x100) a = 0xFF;
    }
    p = *arg0;
    *arg0 = p + 2;
    p[0] = 0xFA000000;
    p[1] = (b << 24) | (g << 16) | (r << 8) | (a & 0xFF);
}
