typedef struct {
    u8 pad0[0x3E];
    u16 state;
    u8 pad40[0x20];
    u8 *p60;
} Obj;
typedef struct {
    u8 cur;
    u8 val;
    u8 total;
    u8 player;
    u8 vals[8];
    u8 yes;
    u8 bits;
} Menu;
typedef struct {
    u8 val;
    u8 max;
    u8 pad[0x20];
} Slot;
extern Obj D_8011F2F0[];
extern u16 D_8018BC3C;
extern u16 sMenuState;
extern s32 D_8021AFDC;
extern u8 D_8021E15C;
extern u8 D_8021E200;
extern Slot D_8021E22F[][8];
extern Menu selectionMenu;
extern s32 D_80168BB0;
s32 getMenuNavMask(u32, s32, s32);
void func_80211C7C(s32);
u8 func_8020FFD0(s32, s32, s32);
void playMenuSound(s32);
void setScreenTransition(s32, s32, s32, s32, s32);
void func_800DE38C(void);
void func_800DE2E0(void);
void func_80231C5C(void);
void func_801CF468(s32, s32, s32, s32);

/* Runs the selection menu: moves the cursor, adjusts per-slot values and handles confirm or cancel. */ void updateSelectionMenu(u16 arg0)
{
    Obj *obj = &D_8011F2F0[arg0];
    u16 *screenMode = &sMenuState;
    u8 changed = 0;
    s32 input;
    u8 max;
    s32 i;

    input = getMenuNavMask(0x14, 7, selectionMenu.player);
    func_80211C7C(0xA);
    switch (obj->state) {
    case 0:
        if (*D_8011F2F0[D_8018BC3C].p60 == 0) {
            obj->state = 0x10;
            if (D_8021AFDC == 0x12) {
                selectionMenu.yes = 1;
                obj->state = 0x20;
            }
        }
        break;
    case 0x10:
        if (input & 1) {
            selectionMenu.cur--;
            changed = 1;
        }
        if (input & 2) {
            selectionMenu.cur++;
            changed = 1;
        }
        selectionMenu.cur &= 7;
        max = D_8021E22F[selectionMenu.player][selectionMenu.cur].max;
        if ((input & 4) && selectionMenu.vals[selectionMenu.cur] != 0) {
            selectionMenu.vals[selectionMenu.cur]--;
            changed = 1;
        }
        if ((input & 8) && selectionMenu.vals[selectionMenu.cur] < max - 1) {
            selectionMenu.vals[selectionMenu.cur]++;
            changed = 1;
        }
        if (changed) {
            playMenuSound(0x3B);
        }
        selectionMenu.bits &= 0x3F;
        if (max != 1) {
            selectionMenu.bits |= 0xC0;
            if (selectionMenu.vals[selectionMenu.cur] == 0) {
                selectionMenu.bits = (selectionMenu.bits & 0x3F) | 0x40;
            }
            if (selectionMenu.vals[selectionMenu.cur] == max - 1) {
                selectionMenu.bits = (selectionMenu.bits & 0x3F) | 0x80;
            }
        }
        selectionMenu.val = func_8020FFD0(selectionMenu.player, selectionMenu.cur, selectionMenu.vals[selectionMenu.cur]);
        selectionMenu.total = 0;
        for (i = 0; i < 8; i++) {
            selectionMenu.total += func_8020FFD0(selectionMenu.player, (u8)i, selectionMenu.vals[i]);
        }
        if (input & 0x10) {
            input = 0;
            playMenuSound(0x3D);
            obj->state = 0x20;
        }
        if (input & 0x20) {
            *screenMode = 0x1C;
            playMenuSound(0x3A);
            D_8021E15C = 0;
            obj->state = 0x30;
        }
        break;
    case 0x20:
        if ((input & 4) && selectionMenu.yes == 1) {
            selectionMenu.yes = 0;
            playMenuSound(0x3B);
        }
        if ((input & 8) && selectionMenu.yes == 0) {
            selectionMenu.yes = 1;
            playMenuSound(0x3B);
        }
        if (input & 0x10) {
            if (selectionMenu.yes == 0) {
                D_8021E200 = 1;
                *screenMode = 0x12;
            } else {
                *screenMode = 0x1C;
                for (i = 0; i < 8; i++) {
                    D_8021E22F[selectionMenu.player][i].val = selectionMenu.vals[i];
                }
                D_8021E15C = 0;
            }
            input = 0;
            playMenuSound(0x3D);
            obj->state = 0x30;
        }
        if (input & 0x20) {
            playMenuSound(0x3A);
            obj->state = 0x10;
        }
        break;
    case 0x30:
        setScreenTransition(2, 6, 0, 0, 0);
        obj->state = 0x31;
        break;
    case 0x31:
        if (*D_8011F2F0[D_8018BC3C].p60 == 0) {
            func_800DE38C();
            func_800DE2E0();
            func_80231C5C();
            func_801CF468(D_8018BC3C, 0, 0, 0);
            D_8021AFDC = 0x10;
            D_80168BB0 = *screenMode;
        }
        break;
    }
}
