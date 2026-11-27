typedef struct { u16 step; u16 count; u8 flags; u8 pad5; s16 timer; u16 mask; } State;
typedef struct { u8 pad0[0x3E]; u16 mode; u8 pad40[0x24]; } Obj;
extern Obj D_8011F2F0[];
extern State D_8018A43E;
extern u8 D_80168C64[];
extern u8 D_80190CB0;
extern u16 D_80183BD4;
extern u16 D_80189948;
extern u8 D_80189CC0[];
extern u8 D_80189B36[];
extern u16 D_80189C98;
extern u16 D_80190CAC;
u32 func_801FA30C(void);
void func_80148688(s32, s32);
s32 func_8014BAC0(void);
void func_8014B854(s32);

void func_80146A5C(u16 arg0) {
    Obj *obj;
    State *s;
    s32 i;
    u8 keys;

    obj = &D_8011F2F0[arg0];
    s = &D_8018A43E;
    keys = 0;
    switch (obj->mode) {
    case 0:
        s->step = func_801FA30C() & 7;
        s->count = 0;
        s->flags = 0;
        s->timer = 0;
        s->mask = 0;
        s->step <<= 4;
        obj->mode = 1;
        break;
    case 1:
        switch (D_80168C64[s->step]) {
        case 0:
            s->flags = 2;
            if (func_801FA30C() & 1) {
                s->flags = 1;
            }
            s->step++;
            break;
        case 1:
            if (!(s->count & s->mask)) {
                keys = s->flags | keys;
            }
            func_80148688(keys, D_80190CB0);
            if (D_80183BD4 == D_80189948) {
                s->step++;
            }
            break;
        case 2:
            s->timer = 0x1E;
            obj->mode = 2;
            break;
        case 3:
            if (s->flags == 1) {
                s->flags = 2;
            } else {
                s->flags = 1;
            }
            s->step++;
            break;
        case 4:
            s->timer = (func_801FA30C() & 3) + 2;
            obj->mode = 3;
            break;
        case 5:
            if ((D_80183BD4 & 0x700) > 0x300) {
                s->flags = 1;
            } else {
                s->flags = 2;
            }
            s->step++;
            break;
        case 6:
            s->mask = 1;
            s->step++;
            break;
        case 7:
            s->mask = 3;
            s->step++;
            break;
        case 8:
            s->mask = 7;
            s->step++;
            break;
        case 9:
            s->timer = D_80189CC0[0];
            if (D_80190CB0 == 0) {
                s->timer = D_80189CC0[-8];
            }
            obj->mode = 3;
            break;
        case 0xDE:
            break;
        case 0xFF:
            keys |= 0x10;
            break;
        }
        break;
    case 2:
        if (--s->timer < 0) {
            s->step++;
            obj->mode = 1;
        }
        break;
    case 3:
        if (!(s->count & s->mask)) {
            s->timer--;
            keys = s->flags | keys;
        }
        func_80148688(keys, D_80190CB0);
        if (s->timer == 0) {
            s->step++;
            obj->mode = 1;
        }
        break;
    }
    if (func_8014BAC0() & 0x10) {
        for (i = 0; i < 0x96; i++) {
            func_80148688(2, D_80190CB0);
            if (D_80183BD4 == D_80189948) {
                keys = 0x10;
                break;
            }
        }
    }
    if (keys & 3) {
        func_8014B854(0x3B);
    }
    if ((keys & 0x10) && !(D_80183BD4 & 0x1000)) {
        func_8014B854(0x3D);
        D_80189B36[0] &= 0xEF;
        D_80189C98 = D_80190CAC;
    }
    s->count++;
}
