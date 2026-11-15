extern char D_8011F2F0[];
extern char D_80189B36[];
extern char D_80189C9A[];
extern char D_80189CC6[];
extern char D_8018A276[];
extern char D_8018A277[];
s32 func_8014A870();
s32 func_8014B854();

void func_8014674C(s32 arg0) {
    s32 s1;
    s32 s2;
    s32 v;
    char *e;
    char *s0;
    char *q;
    s32 a0;
    u8 a2;

    s2 = 0;
    e = D_8011F2F0 + (arg0 & 0xFFFF) * 100;
    s0 = D_80189CC6;
    s1 = 0;
    if (*(u16 *)s0 & 0x800) {
        s1 = func_8014A870(0x14, 3, *(u8 *)(s0 - 8));
        if (s1 & 1) {
            if (*(u8 *)(s0 - 0x2C) != 0) {
                s2 = 1;
                *(u8 *)(s0 - 0x2C) -= 1;
            }
        }
        if (s1 & 2) {
            q = D_80189C9A;
            if (*(u8 *)q != *(u8 *)D_8018A276 - 1) {
                s2 = 1;
                *(u8 *)q += 1;
            }
        }
    } else {
        v = *(u16 *)(e + 0x3E);
        if (v == 1) {
            a2 = *(u8 *)e + 1;
            *(u8 *)e = a2;
            q = D_80189C9A;
            if (*(u8 *)q != *(u8 *)(q + 2)) {
                if ((a2 & 0xF) == 0) {
                    s2 = 1;
                    *(u8 *)q += 1;
                }
            } else {
                *(u8 *)e = 0;
                *(u16 *)(e + 0x3E) = 2;
            }
        } else if (v < 2) {
            if (v == 0) {
                *(u8 *)e += 1;
                if (*(u8 *)e >= 0x15) {
                    *(u8 *)e = 0;
                    *(u16 *)(e + 0x3E) = 1;
                }
            }
        } else if (v == 2) {
            *(u8 *)e += 1;
            if (*(u8 *)e >= 0x1F) {
                s1 |= 0x10;
            }
        }
    }
    if (s2 != 0) {
        func_8014B854(0x3B);
    }
    if (s1 & 0x10) {
        a0 = 0x3E;
        q = D_80189C9A;
        if (!(*(u8 *)(D_8018A277 + *(u8 *)q) & 0x10)) {
            a0 = 0x3D;
            *(u8 *)D_80189B36 &= 0xEF;
            *(s16 *)(q - 2) = 0x30;
        }
        func_8014B854(a0, q);
    }
}
