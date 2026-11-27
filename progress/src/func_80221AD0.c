typedef struct { u16 pad0; u16 pad2[9]; u16 x14; u8 pad16[2]; f32 px; f32 py; f32 pz; f32 rx; f32 ry; f32 rz; u8 pad30[0x34]; } Obj;
typedef struct {
    u8 pad0[2]; u16 obj; u8 pad4[2]; u16 x6; u8 pad8[0x208]; u16 x210; u16 x212; u8 pad214[0x24]; f32 *x238; u8 pad23C[4]; u16 x240; u8 pad242[0x3BA];
    f32 x5FC; u8 pad600[0x148]; f32 x748; u8 x74C; u8 pad74D[0xB]; f32 x758; u8 pad75C[4]; f32 x760; f32 x764; f32 x768; f32 x76C; f32 x770; u8 pad774[4]; u8 x778; u8 pad779[7];
    f32 x780; u8 pad784[0x49]; u8 x7CD; u8 pad7CE[0xC6]; s32 x894; u8 pad898[4]; s32 x89C; u8 pad8A0; u8 mode; u8 pad8A2[2]; f32 x8A4; u8 pad8A8[4]; f32 x8AC; u8 pad8B0[4]; f32 x8B4; u8 pad8B8[4]; f32 x8BC; u8 pad8C0[0x11]; u8 x8D1; u8 pad8D2[2]; f32 x8D4;
} Car;
typedef struct { f32 *tbl; u8 pad[8]; } Tbl;
extern Obj D_8011F2F0[];
extern Tbl D_802CF134[];
extern char D_8011F308[];
extern char D_8011F30C[];
extern char D_8011F310[];
extern char D_8011F31C[];
void followTrackPath(Car *);
void func_80222988(Car *);
void func_80222A84(Car *);
void func_80222368(Car *);
void func_8022312C(Car *);
void func_80223DB0(Car *);
void func_80224410(Car *);
s32 func_80223FBC(Car *);
void func_802240B0(Car *);
void func_802241E8(Car *);
void func_80224334(Car *);
void func_80224508(Car *);
void func_80224694(Car *, f32);
void func_80224784(Car *, f32, f32, s32);
void carWallCollide(Car *);
void func_80225FDC(Car *);
f32 func_801F9BE8(f32, f32);
f32 __sinf(f32);
f32 __cosf(f32);
void func_8013BB54(u16);

void func_80221AD0(Car *car) {
    Obj *o;
    s32 n;
    f32 spd;
    f32 rot;
    f32 ratio;
    f32 a;

    o = &D_8011F2F0[car->obj];
    car->x6 &= 0xFFFC;
    if (car->x8D1 != 0) {
        car->x8D1--;
    }
    followTrackPath(car);
    func_80222988(car);
    func_80222A84(car);
    if (car->x894 != 0) {
        car->x212 = 0xF801;
    } else {
        car->x212 = 0x7801;
    }
    if (car->x89C != 0 && !(car->x778 & 0x20)) {
        car->x210 = 0xFFC1;
    } else {
        car->x210 = 0x7BC1;
    }
    func_80222368(car);
    func_8022312C(car);
    func_80223DB0(car);
    func_80224410(car);
    n = func_80223FBC(car);
    if (car->x74C == 5) {
        spd = -D_802CF134[car->x240].tbl[n];
    } else {
        spd = D_802CF134[car->x240].tbl[n];
    }
    rot = o->ry;
    func_802240B0(car);
    ratio = car->x748 / car->x238[car->x74C];
    func_802241E8(car);
    func_80224334(car);
    car->x780 = car->x760 * 0.03f + car->x758 + car->x764 + car->x768 + car->x76C;
    func_80224508(car);
    func_80224694(car, ratio);
    car->x778++;
    func_80224784(car, spd, rot, n);
    carWallCollide(car);
    func_80225FDC(car);
    if (car->x7CD != 0 && car->x770 != 0.0f) {
        switch (car->mode) {
        case 0:
                if (n < 15) {
                    rot += spd * 0.125f;
                    if (rot >= 360.0f) {
                        rot -= 360.0f;
                    }
                } else {
                    rot -= spd * 0.125f;
                    if (rot < 0.0f) {
                        rot += 360.0f;
                    }
                }
                break;
        case 1:
                if (n < 15) {
                    rot += spd * ((1.0f - car->x8A4) * 0.1f + 0.125f);
                    if (rot >= 360.0f) {
                        rot -= 360.0f;
                    }
                } else {
                    rot -= spd * ((1.0f - car->x8A4) * 0.1f + 0.125f);
                    if (rot < 0.0f) {
                        rot += 360.0f;
                    }
                }
                break;
        case 4:
            rot += func_801F9BE8(rot, car->x8AC) * 0.1f;
            break;
        case 2:
                if (n < 15) {
                    rot += spd * (car->x8D4 * 0.1f + 0.125f);
                    if (rot >= 360.0f) {
                        rot -= 360.0f;
                    }
                } else {
                    rot -= spd * (car->x8D4 * 0.1f + 0.125f);
                    if (rot < 0.0f) {
                        rot += 360.0f;
                    }
                }
                break;
        }
        o->ry = rot;
    }
    switch (car->mode) {
    case 0:
        if (n < 15) {
            car->x8BC = car->x770 * spd * 0.014f;
        } else {
            car->x8BC = -car->x770 * spd * 0.014f;
        }
        a = D_8011F2F0[o->x14].rz;
        if (0.0f < a) {
            if (car->x8BC < a) {
                D_8011F2F0[o->x14].rz += func_801F9BE8(a, car->x8BC) * 0.1f;
            } else {
                D_8011F2F0[o->x14].rz += func_801F9BE8(D_8011F2F0[o->x14].rz, car->x8BC) * 0.01f;
            }
        } else if (D_8011F2F0[o->x14].rz < car->x8BC) {
            D_8011F2F0[o->x14].rz += func_801F9BE8(D_8011F2F0[o->x14].rz, car->x8BC) * 0.1f;
        } else {
            D_8011F2F0[o->x14].rz += func_801F9BE8(D_8011F2F0[o->x14].rz, car->x8BC) * 0.01f;
        }
        D_8011F2F0[o->x14].rx = 0.0f;
        break;
    case 3:
    case 4:
        D_8011F2F0[o->x14].rx = 0.0f;
        D_8011F2F0[o->x14].rz = car->x8BC;
        break;
    case 2:
    case 6:
    case 7:
        D_8011F2F0[o->x14].rx = car->x8B4;
        D_8011F2F0[o->x14].rz = 0.0f;
        break;
    }
    if (car->mode == 2 || car->mode == 6 || car->mode == 7) {
        if (car->mode == 2) {
            { s32 k = o->x14; n = k << 1; n += k; n <<= 3; n += k; n <<= 2; }
            *(f32 *) (D_8011F310 + n) = __sinf(car->x8B4 * 3.14f / 180.0f) * 40.0f;
        }
        { s32 k = o->x14; n = k << 1; n += k; n <<= 3; n += k; n <<= 2; }
        *(f32 *) (D_8011F30C + n) = 40.0f - __cosf((f32) (car->x8B4 * 3.14 / 180.0)) * 40.0f;
    } else {
        { s32 k = o->x14; n = k << 1; n += k; n <<= 3; n += k; n <<= 2; }
        *(f32 *) (D_8011F308 + n) = __sinf(*(f32 *) (D_8011F31C + n) * 3.14f / 180.0f) * 20.0f;
        { s32 k = o->x14; n = k << 1; n += k; n <<= 3; n += k; n <<= 2; }
        *(f32 *) (D_8011F30C + n) = 28.0f - __cosf(*(f32 *) (D_8011F31C + n) * 3.14f / 180.0f) * 25.0f;
        D_8011F2F0[o->x14].pz = 0.0f;
    }
    func_8013BB54(car->obj);
    car->x5FC = (car->x748 * 5.7142e-05f + 0.6f) * 2.0f;
}
