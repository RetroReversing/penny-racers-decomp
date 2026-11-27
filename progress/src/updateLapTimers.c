typedef struct { u8 pad0[4]; u16 flags; u8 pad6[0x38]; u16 state; u8 pad40[0x24]; } Obj_;
typedef struct { u8 hours; u8 minutes; u8 seconds; u8 frames; u8 centis; } Lap;
typedef struct { u8 pad0[2]; u16 x2; u8 pad4[2]; u16 x6; u8 pad8[0x55A]; Lap t[10]; s16 x594; u8 pad596[0x35A]; } Car;
typedef struct { u8 pad0[4]; u8 x4; } Cfg;
extern Obj_ D_8011F2F0[];
extern Car sCars[];
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
void debugPrintf();
void func_80230EFC(Car *);

/* Per-frame lap timer update for the race. For each car, follows which lap
 * segment it is on, adds the elapsed frames to that segment's lap time and
 * carries overflow up into centis, seconds, minutes and hours. Entering a new
 * segment also updates the car's lap total. */
void updateLapTimers(u16 index) {
    u16 i;
    Car *car;

    switch (D_8011F2F0[index].state) {
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
        D_8011F2F0[index].state = 1;
        break;
    case 1:
        for (i = 0; i < 7; i++) {
            car = &sCars[i];
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
                        car->t[D_8023760E[i]].frames++;
                        if (car->t[D_8023760E[i]].frames >= 60) {
                            car->t[D_8023760E[i]].frames = 0;
                            car->t[D_8023760E[i]].centis = 0;
                            car->t[D_8023760E[i]].seconds++;
                            if (car->t[D_8023760E[i]].seconds >= 60) {
                                car->t[D_8023760E[i]].seconds = 0;
                                car->t[D_8023760E[i]].minutes++;
                                if (car->t[D_8023760E[i]].minutes >= 60) {
                                    car->t[D_8023760E[i]].minutes = 0;
                                    car->t[D_8023760E[i]].hours++;
                                }
                            }
                        } else {
                            car->t[D_8023760E[i]].centis = D_80236ED4[car->t[D_8023760E[i]].frames];
                        }
                        if (car->t[D_8023760E[i]].hours != 0) {
                            car->t[D_8023760E[i]].frames = 59;
                            car->t[D_8023760E[i]].centis = 99;
                            car->t[D_8023760E[i]].minutes = 59;
                            car->t[D_8023760E[i]].seconds = 59;
                            car->t[D_8023760E[i]].hours = 1;
                        }
                    if (D_80237600[i] != D_8023760E[i] && D_8023760E[i] < 5) {
                        if (!(car->x6 & 8) && D_8023760E[i] >= 2) {
                            car->x6 |= 0x40;
                            debugPrintf(D_80236F10, car->x6 & 0x48);
                        } else {
                            car->x6 &= ~8;
                            debugPrintf(D_80236F20, car->x6 & 0x40);
                        }
                        if (D_8023760E[i] >= 2) {
                            func_80230EFC(car);
                        }
                        car->t[0].centis += car->t[D_80237600[i]].centis;
                        car->t[0].seconds += car->t[D_80237600[i]].seconds;
                        car->t[0].minutes += car->t[D_80237600[i]].minutes;
                        car->t[0].hours += car->t[D_80237600[i]].hours;
                        while (car->t[0].centis >= 100) {
                            car->t[0].centis -= 100;
                            car->t[0].seconds++;
                        }
                        while (car->t[0].seconds >= 60) {
                            car->t[0].seconds -= 60;
                            car->t[0].minutes++;
                        }
                        while (car->t[0].minutes >= 60) {
                            car->t[0].minutes -= 60;
                            car->t[0].hours++;
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
