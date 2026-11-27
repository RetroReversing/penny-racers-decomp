typedef struct { u8 pad0[0x3E]; u16 f3E; u16 f40; u8 pad42[0x22]; } Rec;
typedef struct { u16 timer; u8 count; u8 pad3; u8 sel; u8 pad5[0x11]; u8 f16; } State;
typedef struct { s8 v[3]; } Tri;
extern Rec D_8011F2F0[];
extern State D_80190C9A;
extern Tri D_8021DEB0;
extern u8 D_801CA13C;
extern u8 D_801C5E9C[];
extern u8 D_801C5EA0;
extern u8 D_801C5EA1;
typedef struct { u16 v; } Fade;
extern Fade D_8021E19C;
s32 func_8014A870(s32, s32, s32);
void func_801D651C(s32, s32);

void func_80215DE0(u16 id) {
    Tri tri = D_8021DEB0;
    Rec *rec = &D_8011F2F0[id];
    u8 *count = &D_80190C9A.count;
    u8 *sel = &D_80190C9A.sel;
    s32 keys = func_8014A870(0x1E, 7, 0);

    switch (rec->f3E) {
    case 0:
        *sel = 0;
        switch (D_801CA13C) {
        case 2:
            *sel = 1;
            *count = 2;
            break;
        case 7:
            *sel = 2;
        default:
            *count = 2;
            break;
        }
        if (D_801C5EA0 != 0) {
            *count = 3;
        }
        rec->f3E = 0x10;
    case 0x10:
        D_8021E19C.v += 8;
        if (D_8021E19C.v >= 0x100) {
            D_8021E19C.v = 0xFF;
            rec->f3E = 0x11;
        }
        break;
    case 0x11:
        if (keys & 1) {
            (*sel)--;
            if (*sel == 0xFF) {
                *sel = *count - 1;
            }
        }
        if (keys & 2) {
            (*sel)++;
            if (*sel == *count) {
                *sel = 0;
            }
        }
        if (keys & 3) {
            func_801D651C(7, 0x3B);
        }
        D_801CA13C = tri.v[*sel];
        if (keys & 0x10) {
            keys = 0;
            func_801D651C(7, 0x3D);
            D_80190C9A.f16 = 0;
            switch (*sel) {
            case 0:
                D_80190C9A.timer = 0x20;
                if (D_801C5EA0 == 0) {
                    D_801C5E9C[0] = 3;
                    D_801C5E9C[1] = 5;
                    D_801C5E9C[2] = 0;
                    D_801C5E9C[3] = 0;
                }
                D_801C5EA1 = 0;
                break;
            case 1:
                D_80190C9A.timer = 0x30;
                break;
            case 2:
                D_80190C9A.timer = 0;
                rec->f40 = 0x20;
                rec->f3E = 0x20;
                D_801C5EA1 = 1;
                D_80190C9A.f16 = 1;
                break;
            }
        }
        if (keys & 0x20) {
            func_801D651C(7, 0x3A);
            D_80190C9A.timer = 0;
            rec->f40 = 0x20;
            rec->f3E = 0x20;
            D_801C5EA1 = 0;
        }
        break;
    case 0x20:
        D_8021E19C.v -= 8;
        if (D_8021E19C.v & 0x8000) {
            D_8021E19C.v = 0;
            D_80190C9A.f16 = 0;
            if (D_80190C9A.timer == 0) {
                if (D_801C5EA1 != 0) {
                    D_80190C9A.timer = 0xF0;
                } else {
                    D_80190C9A.timer = 0xFA;
                }
            } else {
                D_80190C9A.timer = 0xF0;
            }
        }
        break;
    }
}
