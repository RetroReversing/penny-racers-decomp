#define S16AT(p,o) (*(s16 *)((u8 *)(p) + (o)))
#define U16AT(p,o) (*(u16 *)((u8 *)(p) + (o)))

s32 func_8014A4C8();
void func_801CA140(s32);
void func_801CA494(s32, s32, s32, s32, s32);
void func_801CCE7C(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, void *, void *);

extern u8 D_8011F2F2[];
extern u16 D_8021AFE6;
extern u8 D_8021E1A2[];
extern u8 D_802E66D8[];
extern u8 D_802F92E0[];

void func_80208DEC(s32 arg0, s32 arg1) {
    u8 *rec = D_8011F2F2 + (arg1 & 0xFFFF) * 0x64;
    s32 i;
    s16 a1;
    s16 a2;

    for (i = 1; i < 4; i++) {
        U16AT(rec, i * 2) |= 0x20;
    }
    if (U16AT(rec, 0x3E) == 1) {
        func_801CA140(arg0);
        func_801CA494(arg0, 0x78, 0x78, 0x78, 0xFF);
        func_801CCE7C(arg0, 0, 0, 0, 0, 0x140, 0xF0, 0x140, 0xF0, 0x40, 0x20, 0, 0, 0x13F, 0xEF, D_802E66D8, D_802F92E0);
        if (S16AT(D_8021E1A2, 0) != 0) {
            func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
            func_8014A4C8(arg0, 0xC4, 0x12, 0xB, 0x42);
            func_8014A4C8(arg0, 0xDC, 0x11, 0xB, S16AT(D_8021E1A2, 4) + 0x43);
            func_8014A4C8(arg0, 0x2B, 0xD, 5, 0);
            func_801CA494(arg0, 0, 0, 0, 0xAA);
            switch (S16AT(D_8021E1A2, 0)) {
            case 3:
                func_8014A4C8(arg0, 0xA7, (s16)(D_8021AFE6 + 0x90), 0xB, 0x32);
            case 2:
                func_8014A4C8(arg0, 0x1D, (s16)(D_8021AFE6 + 0x90), 0xB, 0x32);
            case 1:
                func_8014A4C8(arg0, 0xA7, (s16)(D_8021AFE6 + 0x33), 0xB, 0x32);
            case 0:
                a1 = 0x1D;
                a2 = D_8021AFE6 + 0x33;
                break;
            default:
                return;
            }
            func_8014A4C8(arg0, a1, a2, 0xB);
        } else {
            func_801CA494(arg0, 0, 0, 0, 0x64);
            func_8014A4C8(arg0, 0x32, 0x19, 0xB, 0x2E);
            func_8014A4C8(arg0, 0x102, 0x19, 0xB, 0x2E);
            func_8014A4C8(arg0, 0x32, 0xBE, 0xB, 0x2E);
            func_8014A4C8(arg0, 0x102, 0xBE, 0xB, 0x2E);
            func_8014A4C8(arg0, 0x42, 0x18, 0xB, 0x2F);
            func_8014A4C8(arg0, 0x42, 0xBF, 0xB, 0x2F);
            func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
            func_8014A4C8(arg0, 0x30, 0x17, 0xB, 1);
            func_8014A4C8(arg0, 0x100, 0x17, 0xB, 3);
            func_8014A4C8(arg0, 0x30, 0xBC, 0xB, 4);
            func_8014A4C8(arg0, 0x100, 0xBC, 0xB, 6);
            for (i = 0; i < 6; i++) {
                func_8014A4C8(arg0, (s16)(i * 0x20 + 0x40), 0x16, 0xB, 2);
            }
            for (i = 0; i < 6; i++) {
                func_8014A4C8(arg0, (s16)(i * 0x20 + 0x40), 0xBD, 0xB, 5);
            }
            func_8014A4C8(arg0, 0x4D, 0x10, 5, 0);
            func_8014A4C8(arg0, 0x99, 0x2E, 0xB, 0x42);
            func_8014A4C8(arg0, 0xB1, 0x2D, 0xB);
        }
    } else {
        U16AT(rec, 0x3E) += 1;
    }
    func_801CA494(arg0, 0xFF, 0xFF, 0xFF, 0xFF);
}
