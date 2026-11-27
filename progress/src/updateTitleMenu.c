typedef struct { u8 timer; u8 pad1[0x17]; f32 vx; f32 vy; u8 pad20[0x14]; f32 f34; u8 pad38[6]; u16 state; u16 f40; u8 pad42[0x22]; } Rec;
typedef struct { u16 f0; u8 f2; u8 f3; } Fade;
extern Rec D_8011F2F0[];
extern volatile u16 sFadeLevel;
extern volatile u8 menuArrowAlpha;
extern volatile u16 D_80190CA4;
extern u8 D_80189B34, D_801E87E3;
extern volatile u8 D_80189B36;
extern s8 D_80189C9D[];
extern u16 D_8006FAF0[];
extern s16 skipFirstRowFlag, D_8021E1A6;
extern u16 D_8018A44A[];
s32 func_8014BAC0(u16);
void objCreate();
void func_8014B890();
void playMenuSound(s32);
void func_801E1EEC(s32, s32);
void func_801DD938(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);

/* Per-frame update for the title/mode-select menu: fades the screen in, reads pad input to move the selection, and starts the chosen mode on confirm. */ void updateTitleMenu(u16 playerId) {
    Rec *self;
    s32 buttons;
    s32 doneFlags;
    u32 fadeVal;
    volatile u16 *p;

    self = &D_8011F2F0[playerId];
    buttons = func_8014BAC0(playerId);
    switch (self->state) {
    case 0:
        (*(volatile u8 *)&menuArrowAlpha) = 0;
        *(volatile u16 *)(&menuArrowAlpha - 2) = 0;
        D_80190CA4 = 0xFF;
        switch (D_80189B34) {
        case 0:
            self->state = 0x30;
            if (D_8006FAF0[0x10] == 0) {
                self->f40 = 0x20;
                self->state = 0x13;
            }
            break;
        case 2:
            switch (D_80189B36 & 0x80) {
            case 0:
                self->f40 = 0x20;
                self->state = 0x13;
                break;
            default:
                self->state = 0x10;
                break;
            }
            if (skipFirstRowFlag == 0) {
                objCreate(0, 0, 3, 0, 0x4F, 0xFF, 0, func_8014B890, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
            }
            break;
        case 1:
            self->state = 0x10;
            break;
        }
        break;
    case 0x10:
        self->f40 = 0x10;
        p = &sFadeLevel;
        (*p) += 4;
        if ((*p) >= 0x100) {
            (*p) = 0xFF;
            self->timer = 0;
            self->state = 0x11;
        }
        break;
    case 0x11:
        self->timer++;
        if (self->timer >= 0x5B) {
            self->timer = 0;
            self->state = 0x12;
        }
        break;
    case 0x12:
        switch (self->timer) {
        case 0:
            self->vy = 192.0f;
            self->vx = -2.0f;
            self->timer = 1;
        case 1:
            self->vy += self->vx;
            self->vx += 0.3f;
            if (192.0f < self->vy) {
                self->timer = 0;
            }
            break;
        }
        if (buttons & 0x10) {
            playMenuSound(0x3D);
            self->vy = 192.0f;
            self->f34 = 0.0f;
            self->state = 0xFF;
            if ((D_8018A44A[D_8021E1A6] & 0x1FF) != 0x1FF) {
                self->state = 0x13;
                self->f40 = 0x20;
            }
        }
        break;
    case 0x13:
        p = &D_80190CA4;
        (*p) -= 8;
        fadeVal = (*p);
        doneFlags = 0;
        if (fadeVal < 0x80) {
            (*p) = 0x80;
            doneFlags = 1;
        }
        self->f34 += 8.0f;
        if (255.0f < self->f34) {
            self->f34 = 255.0f;
            doneFlags |= 2;
        }
        if (doneFlags == 3) {
            self->state = 0x20;
        }
        break;
    case 0x20:
        if (buttons & 1) {
            D_80189C9D[0]--;
        }
        if (buttons & 2) {
            D_80189C9D[0]++;
        }
        D_80189C9D[0] &= 1;
        if (buttons & 3) {
            playMenuSound(0x3B);
        }
        if (buttons & 0x10) {
            playMenuSound(0x3D);
            self->state = 0xFF;
        }
        break;
    case 0x30:
        self->f40 = 0x30;
        (*(volatile u16 *)&sFadeLevel) += 8;
        if ((*(volatile u16 *)&sFadeLevel) >= 0x100) {
            (*(volatile u16 *)&sFadeLevel) = 0xFF;
            self->state = 0x31;
        }
        break;
    case 0x31:
        if (buttons & 1) {
if (D_80189C9D[0] == 0) { D_80189C9D[0] = 2; } else { D_80189C9D[0] -= 1; }
        }
        if (buttons & 2) {
            if (D_80189C9D[0] == 2) {
                D_80189C9D[0] = 0;
            } else {
                D_80189C9D[0]++;
            }
        }
        if (buttons & 3) {
            playMenuSound(0x3B);
        }
        if (buttons & 0x10) {
            if (D_80189C9D[0] == 2) {
                if (D_801E87E3 == 1) {
                    playMenuSound(0x3D);
                    func_801E1EEC(0, 0);
                } else {
                    playMenuSound(0x3E);
                    func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xB4, 0x12, 0x16, 0, 0x1B);
                }
            } else {
                playMenuSound(0x3D);
                self->state = 0xFF;
            }
        }
        break;
    case 0xFF:
        (*(volatile u8 *)&D_80189B36) &= 0xEF;
        break;
    }
    (*(volatile u8 *)&menuArrowAlpha) -= 8;
}
