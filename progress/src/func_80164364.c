typedef struct { u8 time; u8 pad[0x63]; } Rec8011F2FC;
extern Rec8011F2FC D_8011F2FC[];
extern u16 D_8006FB1C;
extern char D_801839E0[];
extern void func_8003DE60();

void func_80164364(u32 **arg0, u16 arg1) {
    s32 r;
    s32 g;
    s32 b;
    u32 a;
    u32 *p;

    switch (D_8011F2FC[arg1].time) {
    case 0 ... 0x77:
        r = 0xFF;
        g = 0xFF;
        b = 0xFF;
        break;
    case 0x78 ... 0x8B:
        r = 0xC8;
        g = 0xC8;
        b = 0xC8;
        break;
    case 0x8C ... 0x9F:
        r = 0xA0;
        g = 0xA0;
        b = 0xA0;
        break;
    case 0xA0 ... 0xB3:
        r = 0x50;
        g = 0x50;
        b = 0x50;
        break;
    case 0xB4 ... 0xC7:
        r = 0;
        g = 0;
        b = 0;
        break;
    case 0xC8 ... 0xDB:
        r = 0x80;
        g = 0;
        b = 0;
        break;
    case 0xDC ... 0xFF:
        r = 0xFF;
        g = 0;
        b = 0;
        break;
    default:
        func_8003DE60(D_801839E0);
        return;
    }
    a = D_8011F2FC[arg1].time;
    if (!(D_8006FB1C & 1)) {
        b = 0xFF;
        g = 0xFF;
        r = 0xFF;
        a += 0x64;
        if (a > 0xFF) {
            a = 0xFF;
        }
    }
    p = *arg0;
    *arg0 = p + 2;
    p[0] = 0xFA000000;
    p[1] = (r << 24) | (g << 16) | (b << 8) | (a & 0xFF);
}
