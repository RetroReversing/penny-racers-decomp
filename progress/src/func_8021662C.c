extern u16 D_80190CA0;
extern u8 D_80190CA2, D_80190CA4, D_80190CA6[];
typedef struct { u8 pad0[0x40]; u16 state; u8 pad42[0x22]; } Obj;
extern Obj D_8011F2F0[];
void func_801CA140();
void func_801CA468(void *, u16);
void func_801CA494(void *, u8, u8, u8, u16);
void func_8014A4C8(void *, s32, s32, s32, s32);
void func_8021662C(void *gp, u16 id)
{
    Obj *o = &D_8011F2F0[id];
    s32 a, b, c;
    u16 *pid = &D_80190CA0;

    func_801CA140();
    switch (o->state) {
    case 0:
        o->state = 0x10;
        break;
    case 0x10:
        a = D_80190CA6[0xE];
        b = 0x7F;
        if (D_80190CA6[0] != 0) {
            a = 0x7F;
            b = D_80190CA6[0xE];
        }
        func_801CA494(gp, a, a, a, *pid);
        func_8014A4C8(gp, 0x40, 0x48, 0xA, 0xD);
        func_8014A4C8(gp, 0x40, 0x80, 0xA, 0xE);
        func_8014A4C8(gp, 0xF8, 0x48, 0xA, 0xF);
        func_8014A4C8(gp, 0xF8, 0x80, 0xA, 0x10);
        func_801CA468(gp, *pid);
        func_8014A4C8(gp, 0x76, 0x3A, 0xA, 4);
        a = 0xFF;
            c = 0x7F;
            if (D_80190CA2 != 0) {
                a = 0x7F;
                c = 0xFF;
            }
            func_801CA494(gp, a, a, a, *pid);
            func_8014A4C8(gp, 0x49, 0x51, 0xA, 0);
            func_801CA494(gp, c, c, c, *pid);
        func_8014A4C8(gp, 0xA2, 0x51, 0xA, 1);
        func_801CA494(gp, b, b, b, *pid);
        func_8014A4C8(gp, 0x40, 0x98, 0xA, 0xD);
        func_8014A4C8(gp, 0x40, 0xD0, 0xA, 0xE);
        func_8014A4C8(gp, 0xF8, 0x98, 0xA, 0xF);
        func_8014A4C8(gp, 0xF8, 0xD0, 0xA, 0x10);
        func_801CA468(gp, *pid);
        func_8014A4C8(gp, 0x76, 0x89, 0xA, 5);
        a = 0xFF;
        c = 0x7F;
        if (D_80190CA4 != 0) {
            a = 0x7F;
            c = 0xFF;
        }
        func_801CA494(gp, a, a, a, *pid);
        func_8014A4C8(gp, 0x49, 0xA1, 0xA, 2);
        func_801CA494(gp, c, c, c, *pid);
        func_8014A4C8(gp, 0xA2, 0xA1, 0xA, 3);
        break;
    }
}
