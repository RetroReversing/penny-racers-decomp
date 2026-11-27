typedef struct { u8 a; u8 b; u8 c; u8 d; u8 e; } Ent5;
typedef struct { u8 mode; } Hdr;
extern Hdr *D_801C7AB0;
extern Ent5 D_801C7080[];

void func_801C2FFC(u8 a, u8 b, u8 *x, u8 *y) {
    s8 t;

    if (D_801C7AB0->mode == 3) {
        t = D_801C7080[b].e;
    } else {
        t = D_801C7080[b].e - 0x2E;
    }
    if (D_801C7080[a].a == 0) {
        if ((t >= 5 && t <= 9) || (t >= 0x20 && t <= 0x29)) {
            D_801C7080[b].a = 0;
                } else if ((t >= 0xA && t <= 0xC)) {
            D_801C7080[b].a = 1;
                } else if ((t >= 0xD && t <= 0xF)) {
            D_801C7080[b].a = 3;
                } else if (t == 0x2A) {
            D_801C7080[b].a = 0;
        }
    } else if (D_801C7080[a].a == 1) {
        if ((t >= 0 && t <= 4) || (t >= 0x16 && t <= 0x1F)) {
            D_801C7080[b].a = 1;
                } else if ((t >= 0xD && t <= 0xF)) {
            D_801C7080[b].a = 2;
                } else if ((t >= 0x13 && t <= 0x15)) {
            D_801C7080[b].a = 0;
                } else if (t == 0x2C) {
            D_801C7080[b].a = 1;
        }
    } else if (D_801C7080[a].a == 2) {
        if ((t >= 5 && t <= 9) || (t >= 0x20 && t <= 0x29)) {
            D_801C7080[b].a = 2;
                } else if ((t >= 0x10 && t <= 0x12)) {
            D_801C7080[b].a = 1;
                } else if ((t >= 0x13 && t <= 0x15)) {
            D_801C7080[b].a = 3;
                } else if (t == 0x2B) {
            D_801C7080[b].a = 2;
        }
    } else if (D_801C7080[a].a == 3) {
        if ((t >= 0 && t <= 4) || (t >= 0x16 && t <= 0x1F)) {
            D_801C7080[b].a = 3;
                } else if ((t >= 0xA && t <= 0xC)) {
            D_801C7080[b].a = 2;
                } else if ((t >= 0x10 && t <= 0x12)) {
            D_801C7080[b].a = 0;
                } else if (t == 0x2D) {
            D_801C7080[b].a = 3;
        }
    }
    if (D_801C7080[b].a == 0) {
        *x = D_801C7080[b].c;
        *y = D_801C7080[b].d - 1;
    } else if (D_801C7080[b].a == 1) {
        *x = D_801C7080[b].c - 1;
        *y = D_801C7080[b].d;
    } else if (D_801C7080[b].a == 2) {
        *x = D_801C7080[b].c;
        *y = D_801C7080[b].d + 1;
    } else if (D_801C7080[b].a == 3) {
        *x = D_801C7080[b].c + 1;
        *y = D_801C7080[b].d;
    }
}
