typedef struct {
    u8 unk0[2];
    u16 owner;
    u16 num;
    u8 unk6[0x72C - 6];
    f32 posA[3];
    f32 posB[3];
    u8 unk744[0x770 - 0x744];
    f32 speed;
    u8 unk774[4];
    u8 wheels;
    u8 unk779[0x7C0 - 0x779];
    f32 sx;
    f32 sy;
    f32 sz;
    u8 type;
    u8 unk7CD[0x860 - 0x7CD];
    u8 ground;
    u8 unk861[3];
    f32 grip;
    u8 unk868[0x8A1 - 0x868];
    u8 mode;
} Car;
typedef struct {
    u8 unk0[2];
    u16 size[4];
    u8 unkA[4];
    u16 parent;
    u8 unk10[8];
    f32 x;
    f32 y;
    f32 z;
    f32 rx;
    f32 ry;
    f32 rz;
    u8 unk30[0xE];
    u16 kind;
    u8 unk40[4];
    f32 vx;
    f32 vy;
    f32 vz;
    u8 unk50[0x10];
    Car *car;
} Obj;
typedef struct { u8 unk0[0x20]; u16 unk20; } Sel;
extern Obj D_8011F2F0[];
extern Sel D_8006FAF0;
extern u16 D_80167FB0[];
extern u8 D_802390C8[];
extern u8 D_80239200[];
extern u8 sprayDef[];
extern u8 D_802393A0[];
extern void func_8013AF08();
extern void func_8013B0D4();
extern void updateExpandingFx();
extern void func_8013B704();
extern void func_8013B894();
extern void func_8013BA38();
extern void func_8013BA58();
extern void func_8013BB0C();
extern u32 func_801FA38C(s32);
extern f32 func_80033640(f32);
extern f32 func_80032320(f32);
extern s16 objCreate(s32, s32, s32, s32, s32, s32, void *, void *, void *,
                         f32, f32, f32, f32, f32, f32, f32, f32, f32);

#define BAD(id) ((id) == 0xFFFF || (id) == 0xFFFE)
#define SIZES(id, v) D_8011F2F0[id].size[0] = D_8011F2F0[id].size[1] = D_8011F2F0[id].size[2] = D_8011F2F0[id].size[3] = (v)

void func_8013BB54(u16 arg0)
{
    Car *car = D_8011F2F0[arg0].car;
    u16 id;
    u16 i;
    f32 x;
    f32 z;

    if (20.0f < car->speed) {
        switch (car->type) {
        case 0xA:
        case 0xB:
        case 0xC:
        case 0x13:
        case 0x14:
        case 0x1E:
        case 0x1F:
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x26:
        case 0x27:
        case 0x2A:
        case 0x2B:
            if (car->mode != 4 && car->grip < 0.95 && car->ground && (car->wheels & 7) == 7) {
                id = objCreate(0, (u8) car->num, 1, 0, 0x5B, 0x9B, D_802390C8, func_8013AF08, func_8013B0D4,
                                   car->posA[0], car->posA[1], car->posA[2], 0.0f, 0.0f, 0.0f, 0.08f, 0.08f, 0.08f);
                if (BAD(id)) {
                    break;
                }
                SIZES(id, 0x40);
                D_8011F2F0[id].vx = car->sx;
                D_8011F2F0[id].vy = car->sy * 0.8f + 1.0f;
                D_8011F2F0[id].vz = car->sz;
                D_8011F2F0[id].kind = car->type;
                D_8011F2F0[id].parent = arg0;
                id = objCreate(0, (u8) car->num, 1, 0, 0x5B, 0x9B, D_802390C8, func_8013AF08, func_8013B0D4,
                                   car->posB[0], car->posB[1], car->posB[2], 0.0f, 0.0f, 0.0f, 0.08f, 0.08f, 0.08f);
                if (BAD(id)) {
                    break;
                }
                SIZES(id, 0x40);
                D_8011F2F0[id].vx = car->sx;
                D_8011F2F0[id].vy = car->sy * 0.8f + 1.0f;
                D_8011F2F0[id].vz = car->sz;
                D_8011F2F0[id].kind = car->type;
                D_8011F2F0[id].parent = arg0;
            }
            break;
        case 0x11:
        case 0x28:
        case 0x29:
            if (car->ground && (car->wheels & 0xF) == 0xF) {
                id = objCreate(0, (u8) car->num, 1, 0, 0x5B, 0xC8, D_80239200, updateExpandingFx, func_8013B704,
                                   D_8011F2F0[car->owner].x, D_8011F2F0[car->owner].y, D_8011F2F0[car->owner].z,
                                   D_8011F2F0[car->owner].rx, D_8011F2F0[car->owner].ry, D_8011F2F0[car->owner].rz,
                                   0.08f, 0.02f, 0.08f);
                if (BAD(id)) {
                    break;
                }
                D_8011F2F0[id].vx = car->sx;
                D_8011F2F0[id].vy = car->sy * 0.8f + 1.0f;
                D_8011F2F0[id].vz = car->sz;
                D_8011F2F0[id].kind = car->type;
                D_8011F2F0[id].parent = arg0;
            }
            break;
        case 0xF:
        case 0x2C:
        case 0x2D:
            if (car->ground && (car->wheels & 0xF) == 0xF) {
                id = objCreate(0, (u8) car->num, 1, 0, 0x5B, 0x9B, D_802390C8, updateExpandingFx, func_8013B704,
                                   car->posA[0], car->posA[1], car->posA[2], 0.0f, 0.0f, 0.0f, 0.08f, 0.08f, 0.08f);
                if (BAD(id)) {
                    break;
                }
                SIZES(id, 0x40);
                D_8011F2F0[id].vx = car->sx * 1.2f;
                D_8011F2F0[id].vy = car->sy * 0.8f + 1.0f;
                D_8011F2F0[id].vz = car->sz * 1.2f;
                D_8011F2F0[id].kind = car->type;
                D_8011F2F0[id].parent = arg0;
                id = objCreate(0, (u8) car->num, 1, 0, 0x5B, 0x9B, D_802390C8, updateExpandingFx, func_8013B704,
                                   car->posB[0], car->posB[1], car->posB[2], 0.0f, 0.0f, 0.0f, 0.08f, 0.08f, 0.08f);
                if (BAD(id)) {
                    break;
                }
                SIZES(id, 0x40);
                D_8011F2F0[id].vx = car->sx * 1.2f;
                D_8011F2F0[id].vy = car->sy * 0.8f + 1.0f;
                D_8011F2F0[id].vz = car->sz * 1.2f;
                D_8011F2F0[id].kind = car->type;
                D_8011F2F0[id].parent = arg0;
            }
            break;
        case 0xD:
        case 0x10:
        case 0x24:
        case 0x25:
            if (car->ground && (car->wheels & 0xF) == 0xF) {
                id = objCreate(0, (u8) car->num, 1, 0, 0x5B, 0x9B, D_802390C8, updateExpandingFx, func_8013B704,
                                   D_8011F2F0[car->owner].x, D_8011F2F0[car->owner].y, D_8011F2F0[car->owner].z,
                                   0.0f, 0.0f, 0.0f, 0.08f, 0.08f, 0.08f);
                if (BAD(id)) {
                    break;
                }
                SIZES(id, 0x40);
                D_8011F2F0[id].vx = car->sx * 1.2f;
                D_8011F2F0[id].vy = car->sy * 0.8f + 1.0f;
                D_8011F2F0[id].vz = car->sz * 1.2f;
                D_8011F2F0[id].kind = car->type;
                D_8011F2F0[id].parent = arg0;
            }
            break;
        }
    }

    if (car->num < 2) {
        switch (car->type) {
        case 0x1F:
        case 0x21:
        case 0x23:
        case 0x25:
        case 0x26:
        case 0x28:
        case 0x2A:
        case 0x2C:
            break;
        default:
            if (D_8006FAF0.unk20 == 7) {
                D_80167FB0[car->num]++;
                if (D_80167FB0[car->num] > 30) {
                    car = D_8011F2F0[arg0].car;
                    for (i = 0; i < 5; i++) {
                        z = D_8011F2F0[arg0].x + (z = func_801FA38C(0) % 400);
                        z -= 200.0f;
                        x = z + func_80033640(D_8011F2F0[arg0].ry * 3.14f / 180.0f) * (car->speed + car->speed + 100.0f);
                        z = D_8011F2F0[arg0].z + (z = func_801FA38C(0) % 400);
                        z -= 200.0f;
                        z = z + func_80032320(D_8011F2F0[arg0].ry * 3.14f / 180.0f) * (car->speed + car->speed + 100.0f);
                        id = objCreate(0, 0, 1, 0, 0x5B, 0xFF, sprayDef, func_8013B894, func_8013BA38,
                                           x, D_8011F2F0[arg0].y + 80.0f, z, 0.0f, 0.0f, 0.0f, 0.08f, 0.08f, 0.08f);
                        if (BAD(id)) {
                            break;
                        }
                        SIZES(id, 0x48);
                        D_8011F2F0[id].size[car->num] &= 0xFFF7;
                        D_8011F2F0[id].vy = D_8011F2F0[arg0].y;
                    }
                    D_80167FB0[car->num] = 0;
                }
            }
            if (D_8006FAF0.unk20 == 2) {
                D_80167FB0[car->num]++;
                if (D_80167FB0[car->num] > 5) {
                    car = D_8011F2F0[arg0].car;
                    for (i = 0; i < 4; i++) {
                        z = D_8011F2F0[arg0].x + (z = func_801FA38C(0) % 400);
                        z -= 100.0f;
                        x = z + func_80033640(D_8011F2F0[arg0].ry * 3.14f / 180.0f) * (car->speed * 1.5f + 100.0f);
                        z = D_8011F2F0[arg0].z + (z = func_801FA38C(0) % 400);
                        z -= 100.0f;
                        z = z + func_80032320(D_8011F2F0[arg0].ry * 3.14f / 180.0f) * (car->speed * 1.5f + 100.0f);
                        id = objCreate(0, 0, 1, 0, 0x5B, 0x64, D_802393A0, func_8013BA58, func_8013BB0C,
                                           x, D_8011F2F0[arg0].y + 100.0f, z, 0.0f, 0.0f, 0.0f, 0.08f, 0.09f, 0.08f);
                        if (BAD(id)) {
                            break;
                        }
                        SIZES(id, 0x48);
                        D_8011F2F0[id].size[car->num] &= 0xFFF7;
                        D_8011F2F0[id].vy = D_8011F2F0[arg0].y;
                    }
                    D_80167FB0[car->num] = 0;
                }
            }
            break;
        }
    }
}
