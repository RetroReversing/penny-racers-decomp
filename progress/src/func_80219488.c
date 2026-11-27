typedef struct { u8 f0; u8 pad1[0x3D]; u16 f3E; u8 pad40[0x20]; u8 *f60; } Rec;
typedef struct { u8 op; u8 arg; } Step;
typedef struct { s16 timer; u8 frames; } Clock;
typedef struct { u8 kind; u8 pad; u8 busy; } Byte;
extern Rec D_8011F2F0[];
extern u16 D_8018BC3C;
extern Clock D_80190CA6;
extern Byte D_80190CAC;
extern u8 D_80190CAA;
 
extern u8 D_80190CB2;
extern u8 D_8021C994[];
extern Step D_8021C840[];
extern s16 D_8021E1A6;
extern u8 D_8021B01A;
extern s32 D_8021AFDC;
extern u8 D_80046832;
extern s16 D_8006F9E8;
extern s32 D_80168BB0;
void func_8021AB34(void);
void func_8021A214(void);
void func_8021A334(void);
void func_800DE41C(s32, s32, s32, s32, s32, s32, s32, void *, void *, f32, f32, s32, s32, s32, s32, s32, s32, s32);
void func_801D65BC(s32);
void func_80028100(s32, s32);
void func_80203DF8(s32, s32, s32, s32, s32);
void func_8021AF20(u16);
void func_800DE38C(void);
void func_800DE2E0(void);
void func_80231C5C(void);
void func_801CF468(u16, s32, s32, s32);

void func_80219488(u16 id) {
    Rec *rec = &D_8011F2F0[id];
    s16 *timer = &D_80190CA6.timer;

    D_80190CA6.frames++;
    switch (rec->f3E) {
    case 0:
        if (*D_8011F2F0[D_8018BC3C].f60 == 0) {
            func_801D65BC(1);
            func_800DE41C(0, 0, 3, 0, 0x85, 0, 0, func_8021AB34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            rec->f0 = 0;
            *timer = 5;
            D_80190CB2 = 0;
            rec->f3E = 0x20;
        }
        break;
    case 0x20:
        if (--*timer < 0) {
            D_80190CAC.busy = 0;
            rec->f3E = 0x21;
        }
        break;
    case 0x21:
        if (D_80190CAC.busy == 0) {
            if (D_8021C994[rec->f0] < 0xF0) {
                func_800DE41C(0, rec->f0, 3, 0, 0x84, 0, 0, func_8021A214, func_8021A334, 40.0f, 240.0f, 0, 0, 0, 0, 0, 0, 0);
                D_80190CAC.busy = 1;
            } else {
                switch (D_8021C994[rec->f0]) {
                case 0xFE:
                    *timer = 0x10;
                    rec->f3E = 0x20;
                    break;
                case 0xFF:
                    *timer = 0x384;
                    D_80190CB2 = 1;
                    rec->f3E = 0x22;
                    break;
                }
            }
            rec->f0++;
        }
        break;
    case 0x22:
        if (--*timer < 0) {
            *timer = 0;
            rec->f0 = 0;
            rec->f3E = 0x28;
            if (D_8021E1A6 != 3) {
                rec->f3E = 0x30;
            }
        }
        break;
    case 0x28:
        if (--*timer < 0) {
            D_80190CAC.busy = 0;
            rec->f3E = 0x29;
        }
        break;
    case 0x29:
        if (D_80190CAC.busy == 0) {
            if (D_8021C840[rec->f0].op < 0xF0) {
                func_800DE41C(0, rec->f0, 3, 0, 0x84, D_80190CAC.kind, 0, func_8021A214, func_8021A334, 0, 240.0f, 0, 0, 0, 0, 0, 0, 0);
                D_80190CAC.busy = 1;
            } else {
                switch (D_8021C840[rec->f0].op) {
                case 0xFE:
                    *timer = D_8021C840[rec->f0].arg << 4;
                    rec->f3E = 0x28;
                    break;
                case 0xFF:
                    rec->f3E = 0x30;
                    break;
                case 0xFD:
                    D_80190CAA = D_8021C840[rec->f0].arg;
                    break;
                case 0xFC:
                    D_80190CAC.kind = D_8021C840[rec->f0].arg;
                    break;
                }
            }
            rec->f0++;
        }
        break;
    case 0x30:
        func_80028100(0, 0x64);
        func_80203DF8(2, 0x5A, 0xFF, 0xFF, 0xFF);
        rec->f3E = 0x31;
        break;
    case 0x31:
        if (*D_8011F2F0[D_8018BC3C].f60 == 0) {
            *timer = 4;
            rec->f3E = 0x32;
        }
        break;
    case 0x32:
        if (--*timer < 0) {
            func_8021AF20(id);
            *timer = 0x1E;
            rec->f3E = 0x33;
        }
    case 0x33:
        if (--*timer < 0) {
            func_800DE38C();
            func_800DE2E0();
            func_80231C5C();
            func_801CF468(D_8018BC3C, 0xFF, 0xFF, 0xFF);
            D_8021B01A = 0;
            D_8021AFDC = 0x30;
            D_80046832 = 0;
            D_8006F9E8 = 8;
            D_80168BB0 = 0;
            rec->f3E = 0x38;
        }
        break;
    case 0x38:
        break;
    }
}
