typedef struct { u8 type; u8 mode; u8 count; } Race;
typedef struct { u8 unk0; u8 h; s8 x; s8 z; s8 type; } Spot;
extern Race *D_801C7AB0;
extern Spot D_801C7080[];
extern u16 D_801C6BE0[];
extern u8 D_801C7AD8[];
extern s8 D_801C7068;
extern s8 D_801C6BB9;
extern s8 D_801C6BB0[];
extern s8 D_801C7062[];
extern u8 D_801C7AB7;
extern u8 D_801C746C;
extern s32 func_801C5528();
extern s32 func_801C5664();
extern void func_801C3DC8();
extern void func_801C407C();
extern void func_801C4344();
extern void func_801C45FC();
extern void func_801C48C8();
extern void func_801C4BD4();
extern void func_801C4EF4();
extern void func_801C5204();

void func_801C3634(u8 arg0, u8 *out1, u8 *out2)
{
    s8 a;
    s8 b;
    u8 c;
    s8 d;
    s8 e;
    u8 f;
    s8 t;

    *out1 = *out2 = D_801C7AB0->count;
    c = f = 4;
    a = d = 0x18;
    b = e = 0x18;
    if (D_801C7AB0->type == 3) {
        t = D_801C7080[arg0].type;
    } else {
        t = D_801C7080[arg0].type - 0x2E;
    }
    if (t >= 0 && t <= 4) {
        func_801C407C(arg0, &a, &b, &c);
        func_801C45FC(arg0, &d, &e, &f);
    } else if (t >= 5 && t <= 9) {
        func_801C3DC8(arg0, &a, &b, &c);
        func_801C4344(arg0, &d, &e, &f);
    } else if (t >= 10 && t <= 12) {
        func_801C407C(arg0, &a, &b, &c);
        func_801C4344(arg0, &d, &e, &f);
    } else if (t >= 13 && t <= 15) {
        func_801C45FC(arg0, &a, &b, &c);
        func_801C4344(arg0, &d, &e, &f);
    } else if (t >= 16 && t <= 18) {
        func_801C407C(arg0, &a, &b, &c);
        func_801C3DC8(arg0, &d, &e, &f);
    } else if (t >= 19 && t <= 21) {
        func_801C45FC(arg0, &a, &b, &c);
        func_801C3DC8(arg0, &d, &e, &f);
    } else if (t >= 22 && t <= 26) {
        func_801C4BD4(arg0, &a, &b, &c);
        func_801C45FC(arg0, &d, &e, &f);
    } else if (t >= 27 && t <= 31) {
        func_801C407C(arg0, &a, &b, &c);
        func_801C5204(arg0, &d, &e, &f);
    } else if (t >= 32 && t <= 36) {
        func_801C48C8(arg0, &a, &b, &c);
        func_801C4344(arg0, &d, &e, &f);
    } else if (t >= 37 && t <= 41) {
        func_801C3DC8(arg0, &a, &b, &c);
        func_801C4EF4(arg0, &d, &e, &f);
    } else if (t == 42) {
        func_801C4344(arg0, &d, &e, &f);
    } else if (t == 43) {
        func_801C3DC8(arg0, &a, &b, &c);
    } else if (t == 44) {
        func_801C45FC(arg0, &d, &e, &f);
    } else if (t == 45) {
        func_801C407C(arg0, &a, &b, &c);
    }
    if (a == 0x18 || b == 0x18) {
        *out1 = D_801C7AB0->count;
    } else if (a == 0x7F && b == 0x7F) {
        *out1 = D_801C7AB0->count;
    } else if (D_801C6BE0[a + b * 24] != 0xFFFF) {
        if (a == D_801C7068 && b == D_801C6BB9) {
        *out1 = D_801C7AD8[d + e * 24];
    } else if (a == D_801C6BB0[0] && b == D_801C6BB0[1]) {
        if (D_801C7AB0->mode == 5) {
            *out1 = func_801C5528(&a, &b, c);
        } else {
            *out1 = D_801C7AD8[a + b * 24];
        }
        D_801C7AB7 = *out1;
    } else if (a == D_801C7062[0] && b == D_801C7062[1]) {
        if (D_801C7AB0->mode == 5) {
            *out1 = func_801C5664(&a, &b, c);
        } else {
            *out1 = D_801C7AD8[a + b * 24];
        }
        D_801C746C = *out1;
    } else if (c == 0xFF) {
        *out1 = 0xFF;
    } else {
        *out1 = D_801C7AD8[a + b * 24];
    }
    } else {
        *out1 = D_801C7AB0->count;
    }
    if (d == 0x18 || e == 0x18) {
        *out2 = D_801C7AB0->count;
    } else if (d == 0x7F && e == 0x7F) {
        *out2 = D_801C7AB0->count;
    } else if (D_801C6BE0[d + e * 24] != 0xFFFF) {
        if (d == D_801C7068 && e == D_801C6BB9) {
        *out2 = D_801C7AD8[a + b * 24];
    } else if (d == D_801C6BB0[0] && e == D_801C6BB0[1]) {
        if (D_801C7AB0->mode == 5) {
            *out2 = func_801C5528(&d, &e, f);
        } else {
            *out2 = D_801C7AD8[d + e * 24];
        }
        D_801C7AB7 = *out2;
    } else if (d == D_801C7062[0] && e == D_801C7062[1]) {
        if (D_801C7AB0->mode == 5) {
            *out2 = func_801C5664(&d, &e, f);
        } else {
            *out2 = D_801C7AD8[d + e * 24];
        }
        D_801C746C = *out2;
    } else if (f == 0xFF) {
        *out2 = 0xFF;
    } else {
        *out2 = D_801C7AD8[d + e * 24];
    }
    } else {
        *out2 = D_801C7AB0->count;
    }
}
