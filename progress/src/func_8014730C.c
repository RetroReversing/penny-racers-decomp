typedef struct { u8 timer; u8 pad1[0x17]; f32 vx; f32 vy; u8 pad20[0x14]; f32 f34; u8 pad38[6]; u16 state; u16 f40; u8 pad42[0x22]; } Rec;
typedef struct { u16 f0; u8 f2; u8 f3; } Fade;
extern Rec D_8011F2F0[];
extern volatile u16 D_8021E19C;
extern volatile u8 D_8021E19E;
extern volatile u16 D_80190CA4;
extern u8 D_80189B34, D_801E87E3;
extern volatile u8 D_80189B36;
extern s8 D_80189C9D[];
extern u16 D_8006FAF0[];
extern s16 D_8021E1A2, D_8021E1A6;
extern u16 D_8018A44A[];
s32 func_8014BAC0(u16);
void func_800DE41C();
void func_8014B890();
void func_8014B854(s32);
void func_801E1EEC(s32, s32);
void func_801DD938(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);

void func_8014730C(u16 id) {
    Rec *r;
    s32 pad;
    s32 flag;
    u32 v;
    volatile u16 *p;

    r = &D_8011F2F0[id];
    pad = func_8014BAC0(id);
    switch (r->state) {
    case 0:
        (*(volatile u8 *)&D_8021E19E) = 0;
        *(volatile u16 *)(&D_8021E19E - 2) = 0;
        D_80190CA4 = 0xFF;
        switch (D_80189B34) {
        case 0:
            r->state = 0x30;
            if (D_8006FAF0[0x10] == 0) {
                r->f40 = 0x20;
                r->state = 0x13;
            }
            break;
        case 2:
            switch (D_80189B36 & 0x80) {
            case 0:
                r->f40 = 0x20;
                r->state = 0x13;
                break;
            default:
                r->state = 0x10;
                break;
            }
            if (D_8021E1A2 == 0) {
                func_800DE41C(0, 0, 3, 0, 0x4F, 0xFF, 0, func_8014B890, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            }
            break;
        case 1:
            r->state = 0x10;
            break;
        }
        break;
    case 0x10:
        r->f40 = 0x10;
        p = &D_8021E19C;
        (*p) += 4;
        if ((*p) >= 0x100) {
            (*p) = 0xFF;
            r->timer = 0;
            r->state = 0x11;
        }
        break;
    case 0x11:
        r->timer++;
        if (r->timer >= 0x5B) {
            r->timer = 0;
            r->state = 0x12;
        }
        break;
    case 0x12:
        switch (r->timer) {
        case 0:
            r->vy = 192.0f;
            r->vx = -2.0f;
            r->timer = 1;
        case 1:
            r->vy += r->vx;
            r->vx += 0.3f;
            if (192.0f < r->vy) {
                r->timer = 0;
            }
            break;
        }
        if (pad & 0x10) {
            func_8014B854(0x3D);
            r->vy = 192.0f;
            r->f34 = 0.0f;
            r->state = 0xFF;
            if ((D_8018A44A[D_8021E1A6] & 0x1FF) != 0x1FF) {
                r->state = 0x13;
                r->f40 = 0x20;
            }
        }
        break;
    case 0x13:
        p = &D_80190CA4;
        (*p) -= 8;
        v = (*p);
        flag = 0;
        if (v < 0x80) {
            (*p) = 0x80;
            flag = 1;
        }
        r->f34 += 8.0f;
        if (255.0f < r->f34) {
            r->f34 = 255.0f;
            flag |= 2;
        }
        if (flag == 3) {
            r->state = 0x20;
        }
        break;
    case 0x20:
        if (pad & 1) {
            D_80189C9D[0]--;
        }
        if (pad & 2) {
            D_80189C9D[0]++;
        }
        D_80189C9D[0] &= 1;
        if (pad & 3) {
            func_8014B854(0x3B);
        }
        if (pad & 0x10) {
            func_8014B854(0x3D);
            r->state = 0xFF;
        }
        break;
    case 0x30:
        r->f40 = 0x30;
        (*(volatile u16 *)&D_8021E19C) += 8;
        if ((*(volatile u16 *)&D_8021E19C) >= 0x100) {
            (*(volatile u16 *)&D_8021E19C) = 0xFF;
            r->state = 0x31;
        }
        break;
    case 0x31:
        if (pad & 1) {
if (D_80189C9D[0] == 0) { D_80189C9D[0] = 2; } else { D_80189C9D[0] -= 1; }
        }
        if (pad & 2) {
            if (D_80189C9D[0] == 2) {
                D_80189C9D[0] = 0;
            } else {
                D_80189C9D[0]++;
            }
        }
        if (pad & 3) {
            func_8014B854(0x3B);
        }
        if (pad & 0x10) {
            if (D_80189C9D[0] == 2) {
                if (D_801E87E3 == 1) {
                    func_8014B854(0x3D);
                    func_801E1EEC(0, 0);
                } else {
                    func_8014B854(0x3E);
                    func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xB4, 0x12, 0x16, 0, 0x1B);
                }
            } else {
                func_8014B854(0x3D);
                r->state = 0xFF;
            }
        }
        break;
    case 0xFF:
        (*(volatile u8 *)&D_80189B36) &= 0xEF;
        break;
    }
    (*(volatile u8 *)&D_8021E19E) -= 8;
}
