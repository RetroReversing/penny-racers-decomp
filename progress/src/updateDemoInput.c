typedef struct { u16 step; u16 count; u8 flags; u8 pad5; s16 timer; u16 mask; } State;
typedef struct { u8 pad0[0x3E]; u16 mode; u8 pad40[0x24]; } Obj;
extern Obj D_8011F2F0[];
extern State sDemoState;
extern u8 D_80168C64[];
extern u8 D_80190CB0;
extern u16 D_80183BD4;
extern u16 D_80189948;
extern u8 D_80189CC0[];
extern u8 D_80189B36[];
extern u16 D_80189C98;
extern u16 D_80190CAC;
u32 nextRandom(void);
void func_80148688(s32, s32);
s32 func_8014BAC0(void);
void playMenuSound(s32);

/* Advances the scripted demo input for player playerId: walks the demo step table, holds buttons for timed steps, and starts the race when the start button is pressed. */ void updateDemoInput(u16 playerId) {
    Obj *player;
    State *demo;
    s32 i;
    u8 buttons;

    player = &D_8011F2F0[playerId];
    demo = &sDemoState;
    buttons = 0;
    switch (player->mode) {
    case 0:
        demo->step = nextRandom() & 7;
        demo->count = 0;
        demo->flags = 0;
        demo->timer = 0;
        demo->mask = 0;
        demo->step <<= 4;
        player->mode = 1;
        break;
    case 1:
        switch (D_80168C64[demo->step]) {
        case 0:
            demo->flags = 2;
            if (nextRandom() & 1) {
                demo->flags = 1;
            }
            demo->step++;
            break;
        case 1:
            if (!(demo->count & demo->mask)) {
                buttons = demo->flags | buttons;
            }
            func_80148688(buttons, D_80190CB0);
            if (D_80183BD4 == D_80189948) {
                demo->step++;
            }
            break;
        case 2:
            demo->timer = 0x1E;
            player->mode = 2;
            break;
        case 3:
            if (demo->flags == 1) {
                demo->flags = 2;
            } else {
                demo->flags = 1;
            }
            demo->step++;
            break;
        case 4:
            demo->timer = (nextRandom() & 3) + 2;
            player->mode = 3;
            break;
        case 5:
            if ((D_80183BD4 & 0x700) > 0x300) {
                demo->flags = 1;
            } else {
                demo->flags = 2;
            }
            demo->step++;
            break;
        case 6:
            demo->mask = 1;
            demo->step++;
            break;
        case 7:
            demo->mask = 3;
            demo->step++;
            break;
        case 8:
            demo->mask = 7;
            demo->step++;
            break;
        case 9:
            demo->timer = D_80189CC0[0];
            if (D_80190CB0 == 0) {
                demo->timer = D_80189CC0[-8];
            }
            player->mode = 3;
            break;
        case 0xDE:
            break;
        case 0xFF:
            buttons |= 0x10;
            break;
        }
        break;
    case 2:
        if (--demo->timer < 0) {
            demo->step++;
            player->mode = 1;
        }
        break;
    case 3:
        if (!(demo->count & demo->mask)) {
            demo->timer--;
            buttons = demo->flags | buttons;
        }
        func_80148688(buttons, D_80190CB0);
        if (demo->timer == 0) {
            demo->step++;
            player->mode = 1;
        }
        break;
    }
    if (func_8014BAC0() & 0x10) {
        for (i = 0; i < 0x96; i++) {
            func_80148688(2, D_80190CB0);
            if (D_80183BD4 == D_80189948) {
                buttons = 0x10;
                break;
            }
        }
    }
    if (buttons & 3) {
        playMenuSound(0x3B);
    }
    if ((buttons & 0x10) && !(D_80183BD4 & 0x1000)) {
        playMenuSound(0x3D);
        D_80189B36[0] &= 0xEF;
        D_80189C98 = D_80190CAC;
    }
    demo->count++;
}
