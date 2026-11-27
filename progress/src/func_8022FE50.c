typedef struct { u8 unk0[4]; u8 *unk4; u8 unk8[2]; u16 next; u16 prev; } Part;
typedef struct Car Car;
typedef struct {
    u8 unk0[2];
    u16 size[4];
    u8 unkA;
    u8 unkB;
    u8 unkC[8];
    u16 child;
    u8 unk16[2];
    f32 x;
    f32 y;
    f32 z;
    u8 unk24[0x20];
    f32 vx;
    f32 vy;
    f32 vz;
    u8 *part;
    u8 unk54[0xC];
    Car *car;
} Obj;
struct Car {
    u8 unk0;
    u8 unk1;
    u16 id;
    u16 num;
    u8 unk6[2];
    u8 unk8[0x210 - 8];
    u8 unk210[0x20];
    u16 unk230;
    u16 unk232;
    u16 unk234;
    u8 unk236[0xA];
    u16 unk240;
    u16 unk242;
    u8 unk244[0x534 - 0x244];
    u16 unk534;
    u16 unk536;
    u16 unk538;
    u16 type;
    u8 unk53C[0x55E - 0x53C];
    s16 unk55E;
    s16 unk560;
    u8 unk562[0x5A0 - 0x562];
    f32 unk5A0;
    f32 unk5A4;
    f32 unk5A8;
    f32 unk5AC;
    u8 unk5B0;
    u8 unk5B1[0x5F2 - 0x5B1];
    u8 unk5F2;
    u8 unk5F3[0x7D0 - 0x5F3];
    u16 unk7D0;
    u16 unk7D2;
    u8 unk7D4[0x814 - 0x7D4];
    u16 unk814;
    u16 unk816;
    u8 unk818[0x879 - 0x818];
    u8 unk879;
    u8 unk87A[0x8DC - 0x87A];
    void *unk8DC;
    u8 unk8E0[0x10];
};
typedef struct {
    u16 model;
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u16 unk8;
    u16 unkA;
    u16 unkC;
    u16 unkE;
    u8 unk10[4];
    f32 unk14;
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u8 unk24;
    u8 unk25;
    u8 unk26[0x16A - 0x26];
    u8 unk16A[0xE];
} Info;
typedef struct { f32 x; f32 y; f32 z; f32 angle; } Start;
typedef struct { u8 unk0[8]; s32 a; s32 b; u8 unk10[4]; s32 d; u8 unk18[8]; s32 c; u8 unk24[0x70 - 0x24]; } Rec;
typedef struct { u8 unk0[0x20]; u16 unk20; } Sel;
typedef struct { u8 b[12]; } Pal;

extern Obj D_8011F2F0[];
extern Car sCars[];
extern Info sCarSlots[];
extern Sel D_8006FAF0;
extern Start *D_802CBF80[];
extern void *D_802CBEE0[];
typedef struct { u8 unk0[2]; s16 course; } Cup;
extern Cup D_8021E1A4;
extern u8 D_80232C50[];
extern Rec btnPlayPressed[];
extern Pal D_80237D18[];
extern u16 D_80233EC0;
extern u8 D_80239060[];
extern void resetCar();
extern void func_80232360();
extern void debugPrintf();
extern void initRaceTimes();
extern s32 func_80148230();
extern void func_8012AD20();
extern void setCarPartSprites();
extern u16 findPathNodeContaining(u16, f32, f32, f32);
extern void updateCarRecord();
extern void drawCarLighting();
extern void func_8013835C();
extern void func_80138304();
extern void func_8015BD20();
extern void drawPlayerIcon();
extern s16 objCreate(s32, s32, s32, s32, s32, s32, void *, void *, void *,
                         f32, f32, f32, f32, f32, f32, f32, f32, f32);

void func_8022FE50(u8 arg0, u8 arg1, u8 arg2, u8 arg3)
{
    Car *car;
    Info *info;
    Start *pos;
    Start *first;
    u16 ghost;
    u8 alpha;
    f32 x;
    f32 y;
    f32 z;
    u16 id;
    u16 child;

    if (arg1 & 0x10) {
        ghost = 1;
        alpha = 0x9B;
        arg1 -= 0x10;
    } else {
        alpha = 0xFF;
        ghost = 0;
    }
    car = &sCars[arg2];
    info = &sCarSlots[arg1];
    pos = D_802CBF80[D_8006FAF0.unk20];
    resetCar(car);
    car->unk230 = info->model;
    car->unk234 = info->unk2;
    car->unk240 = info->unk4;
    car->unk242 = info->unk6;
    car->unk534 = info->unk8;
    car->unk536 = info->unkA;
    car->type = info->unkE;
    car->unk538 = info->unkC;
    car->unk5F2 = info->unk25;
    car->unk5A0 = info->unk14;
    car->unk5A4 = info->unk18;
    car->unk5A8 = info->unk1C;
    car->unk5AC = info->unk20;
    car->unk5B0 = info->unk24;
    switch (arg3) {
    case 0:
        switch (car->type) {
        case 3:
        case 4:
        case 5:
        case 7:
        case 10:
        case 12:
        case 14:
            car->unk55E = 5;
            break;
        case 8:
            car->unk55E = 6;
            break;
        case 1:
        case 2:
        case 6:
        case 9:
        case 11:
        case 13:
            car->unk55E = 3;
            break;
        case 15:
            car->unk55E = 0x1E;
            break;
        }
        break;
    case 1:
        func_80232360(arg2, (u16) (D_8021E1A4.course * 4 + car->unk5B0));
        debugPrintf(D_80232C50, arg2, D_8021E1A4.course * 4 + car->unk5B0);
        switch (car->type) {
        case 3:
        case 4:
        case 5:
        case 7:
        case 10:
        case 12:
        case 14:
            car->unk55E = 0xA;
            break;
        case 8:
            car->unk55E = 0xC;
            break;
        case 1:
        case 2:
        case 6:
        case 9:
        case 13:
            car->unk55E = 6;
            break;
        case 11:
            car->unk55E = 2;
            break;
        case 15:
            car->unk55E = 0x1E;
            break;
        }
        break;
    }
    if (arg3 == 0 && arg2 < 4) {
        if (btnPlayPressed[arg2].a && btnPlayPressed[arg2].b && btnPlayPressed[arg2].c && btnPlayPressed[arg2].d) {
            car->unk55E = -1;
        }
    }
    car->unk560 = 0;
    initRaceTimes(car);
    car->unk8DC = D_802CBEE0[D_8006FAF0.unk20];
    pos += arg0;
    y = pos->y + 0.5;
    if ((u8) func_80148230() == 1 && arg0 == 1) {
        first = D_802CBF80[D_8006FAF0.unk20];
        switch ((s16) pos->angle) {
        case 90:
            x = first->x;
            z = pos->z;
            break;
        case -90:
        case 270:
            x = first->x;
            z = pos->z;
            break;
        case -180:
        case 0:
        case 180:
            x = pos->x;
            z = first->z;
            break;
        }
    } else {
        x = pos->x;
        z = pos->z;
    }
    car->id = objCreate(0, 0, 1, 0, 0x51, alpha, car->unk8, updateCarRecord, drawCarLighting,
                                       x, y, z, 0.0f, pos->angle, 0.0f, 0.2f, 0.2f, 0.2f);
    car->num = arg2;
    car->unk0 = arg0;
    car->unk879 = arg3;
    D_8011F2F0[car->id].car = car;
    if (car->id < 0xFFF0) {
        ((Part *) D_8011F2F0[D_8011F2F0[car->id].child].part)->unk4 = D_80237D18[info->model].b;
        func_8012AD20(D_8011F2F0[car->id].child, car->unk210, (u8) info->model, info->unk16A[info->model]);
    }
    setCarPartSprites(car);
    car->unk7D0 = findPathNodeContaining(D_80233EC0, D_8011F2F0[car->id].x, D_8011F2F0[car->id].y, D_8011F2F0[car->id].z);
    car->unk7D2 = 0;
    car->unk814 = findPathNodeContaining(D_80233EC0, D_8011F2F0[car->id].x, D_8011F2F0[car->id].y, D_8011F2F0[car->id].z);
    car->unk816 = 0;
    if (ghost == 0) {
        id = objCreate(0, 0, 1, 0, 0x52, 0x9B, D_80239060, func_8013835C, func_80138304,
                           0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.05f, 0.05f, 0.05f);
        D_8011F2F0[id].vx = car->id;
        D_8011F2F0[id].vy = arg2;
        D_8011F2F0[id].vz = 0.2f;
        D_8011F2F0[car->id].vx = id;
    }
    child = D_8011F2F0[car->id].child;
    while (((Part *) D_8011F2F0[child].part)->prev != 0xFFFF || ((Part *) D_8011F2F0[child].part)->next != 0xFFFF) {
        if (*D_8011F2F0[child].part == 2 || *D_8011F2F0[child].part == 3) {
            D_8011F2F0[child].size[0] |= 0x8000;
        }
        child = D_8011F2F0[child].child;
    }
    id = objCreate(0, (u8) car->num, 3, 0, 0x52, 0x9B, 0, func_8015BD20, drawPlayerIcon,
                       0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    D_8011F2F0[id].unkB = 0xE;
}
