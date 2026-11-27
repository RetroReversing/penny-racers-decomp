typedef struct { u8 pad0[0x3E]; u16 state; u16 frames; u8 pad42[0x22]; } MenuRecord;
typedef struct { u16 timer; u8 optionCount; u8 pad3; u8 selected; u8 pad5[0x11]; u8 hold; } MenuState;
typedef struct { s8 v[3]; } OptionMap;
typedef struct { u16 v; } Fade;
extern MenuRecord D_8011F2F0[];
extern MenuState sMenuState;
extern OptionMap D_8021DEB0;
extern u8 D_801CA13C;
extern u8 D_801C5E9C[];
extern u8 D_801C5EA0;
extern u8 D_801C5EA1;
extern Fade sFadeLevel;
s32 getMenuNavMask(s32, s32, s32);
void playStageSound(s32, s32);

/* Menu state machine: fades in, moves the selection with the d-pad, plays the chosen option's
   sound and timer, then fades out. */
void updateMenuSelect(u16 id) {
    OptionMap optionMap = D_8021DEB0;
    MenuRecord *menuRec = &D_8011F2F0[id];
    u8 *optionCount = &sMenuState.optionCount;
    u8 *selected = &sMenuState.selected;
    s32 pressed = getMenuNavMask(0x1E, 7, 0);

    switch (menuRec->state) {
    case 0:
        *selected = 0;
        switch (D_801CA13C) {
        case 2:
            *selected = 1;
            *optionCount = 2;
            break;
        case 7:
            *selected = 2;
        default:
            *optionCount = 2;
            break;
        }
        if (D_801C5EA0 != 0) {
            *optionCount = 3;
        }
        menuRec->state = 0x10;
    case 0x10:
        sFadeLevel.v += 8;
        if (sFadeLevel.v >= 0x100) {
            sFadeLevel.v = 0xFF;
            menuRec->state = 0x11;
        }
        break;
    case 0x11:
        if (pressed & 1) {
            (*selected)--;
            if (*selected == 0xFF) {
                *selected = *optionCount - 1;
            }
        }
        if (pressed & 2) {
            (*selected)++;
            if (*selected == *optionCount) {
                *selected = 0;
            }
        }
        if (pressed & 3) {
            playStageSound(7, 0x3B);
        }
        D_801CA13C = optionMap.v[*selected];
        if (pressed & 0x10) {
            pressed = 0;
            playStageSound(7, 0x3D);
            sMenuState.hold = 0;
            switch (*selected) {
            case 0:
                sMenuState.timer = 0x20;
                if (D_801C5EA0 == 0) {
                    D_801C5E9C[0] = 3;
                    D_801C5E9C[1] = 5;
                    D_801C5E9C[2] = 0;
                    D_801C5E9C[3] = 0;
                }
                D_801C5EA1 = 0;
                break;
            case 1:
                sMenuState.timer = 0x30;
                break;
            case 2:
                sMenuState.timer = 0;
                menuRec->frames = 0x20;
                menuRec->state = 0x20;
                D_801C5EA1 = 1;
                sMenuState.hold = 1;
                break;
            }
        }
        if (pressed & 0x20) {
            playStageSound(7, 0x3A);
            sMenuState.timer = 0;
            menuRec->frames = 0x20;
            menuRec->state = 0x20;
            D_801C5EA1 = 0;
        }
        break;
    case 0x20:
        sFadeLevel.v -= 8;
        if (sFadeLevel.v & 0x8000) {
            sFadeLevel.v = 0;
            sMenuState.hold = 0;
            if (sMenuState.timer == 0) {
                if (D_801C5EA1 != 0) {
                    sMenuState.timer = 0xF0;
                } else {
                    sMenuState.timer = 0xFA;
                }
            } else {
                sMenuState.timer = 0xF0;
            }
        }
        break;
    }
}
