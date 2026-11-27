typedef struct { u8 pad0[4]; u16 flags; u8 pad6[0x38]; u16 state; u8 pad40[0x24]; } Obj_;
typedef struct { u8 a; u8 b; u8 c; u8 d; u8 e; } Lap;
typedef struct { u8 pad0[2]; u16 x2; u8 pad4[2]; u16 x6; u8 pad8[0x55A]; Lap t[10]; s16 x594; u8 pad596[0x35A]; } Car;
typedef struct { u8 pad0[4]; u8 x4; } Cfg;
extern Obj_ D_8011F2F0[];
extern Car D_8022A770[];
extern s16 D_80237058[];
extern s16 D_8023760E[];
extern s16 D_80237600[];
extern u8 D_80237694[];
extern s16 D_80237632[];
extern u8 D_80236F50;
extern u8 D_8023761C;
extern u8 D_80167E62;
extern Cfg D_8006FB14;
extern u8 D_80236ED4[];
extern u8 D_80236F10[];
extern u8 D_80236F20[];
void func_8003DE60();
void func_80230EFC(Car *);

void func_80233ED0(u16 id) {
    u16 i;
    Car *car;

    switch (D_8011F2F0[id].state) {
    case 0:
        for (i = 0; i < 7; i++) {
            D_80237058[i] = 0;
            D_8023760E[i] = 0;
            D_80237600[i] = 0;
            D_80237694[i] = 0;
            D_80237632[i] = 0;
        }
        D_80236F50 = 0;
        D_8023761C = 0;
        D_80167E62 = 0;
        D_8011F2F0[id].state = 1;
        break;
    case 1:
        for (i = 0; i < 7; i++) {
            car = &D_8022A770[i];
            if ((car->x2 != 0xFFFF) & (i < 6)) {
                switch (D_80237058[i]) {
                case 0:
                    if (car->x594 != 0) {
                        D_8023760E[i] = car->x594;
                        D_80237058[i] = 1;
                    } else if (D_8006FB14.x4 == 1) {
                        D_8023760E[i] = 1;
                        D_80237058[i] = 1;
                    }
                    break;
                case 1:
                    if (D_8023760E[i] < car->x594) {
                        D_8023760E[i] = car->x594;
                    }
                    if (D_8023760E[i] < 10) {
                        car->t[D_8023760E[i]].d++;
                        if (car->t[D_8023760E[i]].d >= 60) {
                            car->t[D_8023760E[i]].d = 0;
                            car->t[D_8023760E[i]].e = 0;
                            car->t[D_8023760E[i]].c++;
                            if (car->t[D_8023760E[i]].c >= 60) {
                                car->t[D_8023760E[i]].c = 0;
                                car->t[D_8023760E[i]].b++;
                                if (car->t[D_8023760E[i]].b >= 60) {
                                    car->t[D_8023760E[i]].b = 0;
                                    car->t[D_8023760E[i]].a++;
                                }
                            }
                        } else {
                            car->t[D_8023760E[i]].e = D_80236ED4[car->t[D_8023760E[i]].d];
                        }
                        if (car->t[D_8023760E[i]].a != 0) {
                            car->t[D_8023760E[i]].d = 59;
                            car->t[D_8023760E[i]].e = 99;
                            car->t[D_8023760E[i]].b = 59;
                            car->t[D_8023760E[i]].c = 59;
                            car->t[D_8023760E[i]].a = 1;
                        }
                    if (D_80237600[i] != D_8023760E[i] && D_8023760E[i] < 5) {
                        if (!(car->x6 & 8) && D_8023760E[i] >= 2) {
                            car->x6 |= 0x40;
                            func_8003DE60(D_80236F10, car->x6 & 0x48);
                        } else {
                            car->x6 &= ~8;
                            func_8003DE60(D_80236F20, car->x6 & 0x40);
                        }
                        if (D_8023760E[i] >= 2) {
                            func_80230EFC(car);
                        }
                        car->t[0].e += car->t[D_80237600[i]].e;
                        car->t[0].c += car->t[D_80237600[i]].c;
                        car->t[0].b += car->t[D_80237600[i]].b;
                        car->t[0].a += car->t[D_80237600[i]].a;
                        while (car->t[0].e >= 100) {
                            car->t[0].e -= 100;
                            car->t[0].c++;
                        }
                        while (car->t[0].c >= 60) {
                            car->t[0].c -= 60;
                            car->t[0].b++;
                        }
                        while (car->t[0].b >= 60) {
                            car->t[0].b -= 60;
                            car->t[0].a++;
                        }
                    }
                    }
                    D_80237600[i] = D_8023760E[i];
                    break;
                }
            }
        }
        break;
    }
}
