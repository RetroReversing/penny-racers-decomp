typedef struct { u8 pad0[0xD]; u8 xD; u8 pad[0x30]; u16 state; u8 pad40[0x24]; } Obj;
typedef struct { u8 pad0[2]; u16 x2; u8 pad4[0x55C]; u16 x560; u8 pad562[0x32]; s16 x594; u8 pad596[0x2E3]; u8 x879; u8 pad87A[0x76]; } Car;
typedef struct { u8 pad0[0x20]; u16 id; } Snd;
typedef struct { u8 pad0[0x2108]; s16 count; } Root;
extern Obj D_8011F2F0[];
extern Car D_8022A770[];
extern Snd D_8006FAF0;
extern Root D_800DB1B8;
extern u8 D_8006FB38[];
extern s32 D_80189900[];
extern s32 D_80189C8C;
extern s32 D_80189C90;
extern s32 D_8018A244;
extern s32 D_80189920;
extern s32 D_80183BD8;
extern u8 D_8022AFE9;
void func_8022FDF0(u16, s32);
void func_801D65BC();
void alSeqpStop(void *);

void func_8013F884(u16 id) {
    Obj *o;
    s32 i;
    Car *car;

    o = &D_8011F2F0[id];
    switch (o->state) {
    case 0:
        func_8022FDF0(D_8006FAF0.id, 0);
        D_80189C8C = D_8006FAF0.id;
        o->state = 1;
        for (i = 0; i < 7; i++) {
            D_80189900[i] = D_8022A770[0].x879;
        }
        D_80189C90 = 0;
        break;
    case 1:
        D_8018A244 = 0;
        D_80189920 = 0;
        D_80183BD8 = 0;
        for (i = 0; i < 7; i++) {
            car = &D_8022A770[i];
            if (car->x2 != 0xFFFF) {
                if (car->x594 >= 3 && car->x879 == 0) {
                    D_8018A244++;
                }
                if ((car->x560 & 0x20) && car->x879 == 0) {
                    D_80189920 = 1;
                }
                if (car->x879 == 5) {
                    if (D_80189900[i] == 0) {
                        D_80189C90 = 0x200;
                    }
                    D_80183BD8++;
                    if (D_80183BD8 == D_800DB1B8.count) {
                        D_8011F2F0[id].xD = 2;
                        return;
                    }
                }
            }
        }
        if (D_80189920 != 0) {
            if (D_80189C8C != 200) {
                func_801D65BC(0xE);
                D_80189C8C = 200;
                D_80189C90 = 0;
            }
        } else if (D_8018A244 != 0) {
            func_8022FDF0(D_8006FAF0.id, 1);
            D_80189C8C = D_8006FAF0.id;
            o->state = 2;
            D_80189C90 = 0;
        } else if (D_80189C8C != D_8006FAF0.id) {
            func_8022FDF0(D_8006FAF0.id, 0);
            D_80189C8C = D_8006FAF0.id;
            D_80189C90 = 0;
        } else if (D_80189C90 != 0) {
            D_80189C90--;
            if (D_80189C90 == 1) {
                func_8022FDF0(D_8006FAF0.id, 0);
                D_80189C8C = D_8006FAF0.id;
                D_80189C90 = 0;
            }
        }
        break;
    case 2:
        D_8018A244 = 0;
        D_80189920 = 0;
        D_80183BD8 = 0;
        for (i = 0; i < 7; i++) {
            car = &D_8022A770[i];
            if (car->x2 != 0xFFFF) {
                if (car->x594 >= 4 && i < D_800DB1B8.count && car->x879 != 5) {
                    D_8018A244++;
                }
                if ((car->x560 & 0x20) && car->x879 == 0) {
                    D_80189920 = 1;
                }
                if (car->x879 == 5) {
                    if (D_80189900[i] == 0) {
                        D_80189C90 = 0x200;
                    }
                    D_80183BD8++;
                    if (D_80183BD8 == D_800DB1B8.count) {
                        D_8011F2F0[id].xD = 2;
                        return;
                    }
                }
            }
        }
        if (D_80189920 != 0) {
            if (D_80189C8C != 200) {
                func_801D65BC(0xE);
                D_80189C8C = 200;
                D_80189C90 = 0;
            }
        } else if (D_8018A244 == D_800DB1B8.count) {
            D_8011F2F0[id].xD = 2;
            return;
        } else if (D_8018A244 != 0) {
            if (D_80189C8C != 0xFF) {
                alSeqpStop(D_8006FB38);
                D_80189C8C = 0xFF;
                D_80189C90 = 0;
            }
        } else if (D_80189C8C != D_8006FAF0.id) {
            func_8022FDF0(D_8006FAF0.id, 1);
            D_80189C8C = D_8006FAF0.id;
            D_80189C90 = 0;
        } else if (D_80189C90 != 0) {
            D_80189C90--;
            if (D_80189C90 == 1) {
                func_8022FDF0(D_8006FAF0.id, 1);
                D_80189C8C = D_8006FAF0.id;
                D_80189C90 = 0;
            }
        }
        break;
    }
    for (i = 0; i < 7; i++) {
        car = &D_8022A770[i];
        if (car->x2 != 0xFFFF) {
            D_80189900[i] = car->x879;
        }
    }
}
