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
extern u16 D_80190C9A;
extern s32 D_8021AFDC;
extern u8 D_8021E15C;
extern u8 D_8021E200;
extern Slot D_8021E22F[][8];
extern Menu D_8021EEA4;
extern s32 D_80168BB0;
s32 func_8014A870(u32, s32, s32);
void func_80211C7C(s32);
u8 func_8020FFD0(s32, s32, s32);
void func_8014B854(s32);
void func_80203DF8(s32, s32, s32, s32, s32);
void func_800DE38C(void);
void func_800DE2E0(void);
void func_80231C5C(void);
void func_801CF468(s32, s32, s32, s32);

void func_8020EE18(u16 arg0)
{
    Obj *obj = &D_8011F2F0[arg0];
    u16 *mode = &D_80190C9A;
    u8 changed = 0;
    s32 input;
    u8 max;
    s32 i;

    input = func_8014A870(0x14, 7, D_8021EEA4.player);
    func_80211C7C(0xA);
    switch (obj->state) {
    case 0:
        if (*D_8011F2F0[D_8018BC3C].p60 == 0) {
            obj->state = 0x10;
            if (D_8021AFDC == 0x12) {
                D_8021EEA4.yes = 1;
                obj->state = 0x20;
            }
        }
        break;
    case 0x10:
        if (input & 1) {
            D_8021EEA4.cur--;
            changed = 1;
        }
        if (input & 2) {
            D_8021EEA4.cur++;
            changed = 1;
        }
        D_8021EEA4.cur &= 7;
        max = D_8021E22F[D_8021EEA4.player][D_8021EEA4.cur].max;
        if ((input & 4) && D_8021EEA4.vals[D_8021EEA4.cur] != 0) {
            D_8021EEA4.vals[D_8021EEA4.cur]--;
            changed = 1;
        }
        if ((input & 8) && D_8021EEA4.vals[D_8021EEA4.cur] < max - 1) {
            D_8021EEA4.vals[D_8021EEA4.cur]++;
            changed = 1;
        }
        if (changed) {
            func_8014B854(0x3B);
        }
        D_8021EEA4.bits &= 0x3F;
        if (max != 1) {
            D_8021EEA4.bits |= 0xC0;
            if (D_8021EEA4.vals[D_8021EEA4.cur] == 0) {
                D_8021EEA4.bits = (D_8021EEA4.bits & 0x3F) | 0x40;
            }
            if (D_8021EEA4.vals[D_8021EEA4.cur] == max - 1) {
                D_8021EEA4.bits = (D_8021EEA4.bits & 0x3F) | 0x80;
            }
        }
        D_8021EEA4.val = func_8020FFD0(D_8021EEA4.player, D_8021EEA4.cur, D_8021EEA4.vals[D_8021EEA4.cur]);
        D_8021EEA4.total = 0;
        for (i = 0; i < 8; i++) {
            D_8021EEA4.total += func_8020FFD0(D_8021EEA4.player, (u8)i, D_8021EEA4.vals[i]);
        }
        if (input & 0x10) {
            input = 0;
            func_8014B854(0x3D);
            obj->state = 0x20;
        }
        if (input & 0x20) {
            *mode = 0x1C;
            func_8014B854(0x3A);
            D_8021E15C = 0;
            obj->state = 0x30;
        }
        break;
    case 0x20:
        if ((input & 4) && D_8021EEA4.yes == 1) {
            D_8021EEA4.yes = 0;
            func_8014B854(0x3B);
        }
        if ((input & 8) && D_8021EEA4.yes == 0) {
            D_8021EEA4.yes = 1;
            func_8014B854(0x3B);
        }
        if (input & 0x10) {
            if (D_8021EEA4.yes == 0) {
                D_8021E200 = 1;
                *mode = 0x12;
            } else {
                *mode = 0x1C;
                for (i = 0; i < 8; i++) {
                    D_8021E22F[D_8021EEA4.player][i].val = D_8021EEA4.vals[i];
                }
                D_8021E15C = 0;
            }
            input = 0;
            func_8014B854(0x3D);
            obj->state = 0x30;
        }
        if (input & 0x20) {
            func_8014B854(0x3A);
            obj->state = 0x10;
        }
        break;
    case 0x30:
        func_80203DF8(2, 6, 0, 0, 0);
        obj->state = 0x31;
        break;
    case 0x31:
        if (*D_8011F2F0[D_8018BC3C].p60 == 0) {
            func_800DE38C();
            func_800DE2E0();
            func_80231C5C();
            func_801CF468(D_8018BC3C, 0, 0, 0);
            D_8021AFDC = 0x10;
            D_80168BB0 = *mode;
        }
        break;
    }
}
