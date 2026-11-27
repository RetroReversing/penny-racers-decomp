typedef struct { u8 f0; u8 pad1[0x3D]; u16 f3E; u16 f40; u8 pad42[0x22]; } Rec;
typedef struct { u16 timer; u8 pad2[2]; u8 page; u8 pad5[9]; u8 cur; u8 padF; u8 sel; u8 pad11; u8 kind; u8 pad13[3]; u8 f16; u8 pad17; u8 f18; } State;
extern Rec D_8011F2F0[];
extern State D_80190C9A;
extern u8 D_801C5E9C[];
extern u8 D_801C5EA0;
extern u8 D_801C5EA2;
extern u8 D_801E9B34;
extern s32 D_8021DEB4;
s32 func_8014A870(s32, s32, s32);
void playStageSound(s32, s32);
void func_801E1EEC(s32, s32);
void func_80217600(void);
void func_802174DC(u8, u8, u8);
void debugPrintf(void *, s32);

/* Select menu: the first screen picks one of two options (cur 0 or 1), each of
 * which opens a page grid of slots. Pressing a slot records the choice and
 * moves on; cancel steps back. Sounds are on stage channel 7. */
void updateSelectMenu(u16 id) {
    Rec *rec = &D_8011F2F0[id];
    u8 *cur = &D_80190C9A.cur;
    u8 *page = &D_80190C9A.page;
    u8 *sel = &D_80190C9A.sel;
    s32 keys = func_8014A870(0x1E, 7, 0);

    switch (rec->f3E) {
    case 0:
        if (D_801C5EA2 == 2) {
            *cur = 1;
            rec->f3E = 0x30;
        } else {
            rec->f3E = 0x10;
        }
        break;
    case 0x10:
        rec->f40 = 1;
        rec->f3E = 0x11;
    case 0x11:
        if (keys & 1) {
            if (*cur != 0) {
                (*cur)--;
                playStageSound(7, 0x3B);
            }
        }
        if (keys & 2) {
            if (*cur != 2) {
                (*cur)++;
                playStageSound(7, 0x3B);
            }
        }
        if (keys & 0x10) {
            keys = 0;
            playStageSound(7, 0x3D);
            rec->f3E = 0xF0;
            switch (*cur) {
            case 0:
                rec->f3E = 0x20;
                D_80190C9A.f18 = 0;
                func_801E1EEC(7, 0);
                break;
            case 1:
                rec->f3E = 0x30;
                D_80190C9A.f18 = 0;
                func_801E1EEC(7, 0);
                break;
            }
        }
        if (keys & 0x20) {
            playStageSound(7, 0x3A);
            rec->f3E = 0xF0;
        }
        break;
    case 0x20:
        D_80190C9A.kind = 0xC;
        func_80217600();
        *page = 0;
        *sel = 0;
        rec->f40 = 3;
        rec->f3E = 0x21;
    case 0x21:
        func_802174DC(keys, *page, *sel);
        if (keys & 0x10) {
            keys = 0;
            playStageSound(7, 0x3D);
            D_801E9B34 = *page + *sel;
            if (D_801E9B34 >= 8) {
                D_801E9B34 -= 8;
                debugPrintf(&D_8021DEB4, D_801E9B34);
                func_801E1EEC(5, 0);
                D_801C5E9C[3] = D_801C5E9C[2];
            } else {
                func_801E1EEC(8, 0);
                D_801C5E9C[3] = D_801C5E9C[2];
                rec->f0 = 0;
                rec->f3E = 0x21;
            }
        }
        if (keys & 0x20) {
            playStageSound(7, 0x3A);
            rec->f3E = 0x10;
        }
        break;
    case 0x30:
        D_80190C9A.kind = 4;
        func_80217600();
        *page = 0;
        *sel = 0;
        rec->f40 = 5;
        rec->f3E = 0x31;
    case 0x31:
        func_802174DC(keys, *page, *sel);
        if (keys & 0x10) {
            if (D_801C5EA0 == 1) {
                keys = 0;
                playStageSound(7, 0x3D);
                D_801E9B34 = *page;
                debugPrintf(&D_8021DEB4, D_801E9B34);
                func_801E1EEC(4, 0);
            } else {
                playStageSound(7, 0x3E);
            }
        }
        if (keys & 0x20) {
            playStageSound(7, 0x3A);
            rec->f3E = 0x10;
        }
        break;
    case 0x40:
        rec->f0++;
        if (rec->f0 >= 0x15) {
            rec->f0 = 0;
            rec->f3E = 0x41;
        }
        break;
    case 0x41:
        rec->f0++;
        if (rec->f0 >= 0x5B) {
            rec->f3E = 0x21;
        }
        break;
    case 0xF0:
        D_80190C9A.f16 = 0;
        D_80190C9A.timer = 0x10;
        rec->f40 = 1;
        D_801C5EA2 = 5;
        break;
    }
}
