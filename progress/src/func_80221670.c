typedef struct { f32 x; f32 y; f32 z; u8 flag; } Point;
typedef struct { u8 id; f32 x; f32 y; f32 z; u8 flag; } Row;
typedef struct { Row *rows; u16 unk4; u16 bonus; s32 unk8; } Part;
typedef struct { f32 *ptr; u16 unk4; u16 bonus; s32 unk8; } Curve;
typedef struct { s32 a; s32 b; f32 weight; u16 unkC; u16 bonus; s32 unk10; } Kind;
typedef struct {
    u8 pad0[0x232]; u16 total; u16 kind; u8 pad236[2]; s32 unk238; s32 unk23C; u16 unk240; u16 unk242;
    Point points[47];
    u8 pad534[0x534 - 0x244 - 47 * 0x10];
    u16 unk534; u16 unk536; u8 pad538[4];
    u16 times[16]; u16 unk55C; u8 pad55E[0x760 - 0x55E];
    f32 unk760;
} Obj;
extern u16 D_8006FB10;
extern Curve D_802D2B94[];
extern Part D_802D2C74[];
extern Kind D_802CC544[];
extern Part D_802CF7D4[];
extern Curve D_802CF134[];
extern Row D_802CC020[];
s32 func_80224030(s32);

void func_80221670(Obj *obj)
{
    u16 n;
    u16 i;
    u16 a;
    u16 id;
    u16 v;

    obj->total = D_802D2B94[obj->unk534].bonus;
    obj->unk760 = *D_802D2B94[obj->unk534].ptr;
    obj->total += D_802CC544[obj->kind].bonus;
    obj->unk760 += D_802CC544[obj->kind].weight;
    obj->unk238 = D_802CC544[obj->kind].a;
    obj->unk23C = D_802CC544[obj->kind].b;

    if (D_8006FB10 == 2) {
        n = obj->unk242 + 0xE;
    } else {
        n = obj->unk242;
    }
    obj->total += D_802CF7D4[n].bonus;

    for (i = 0; i < 0x2F; i++) {
        obj->points[i].x = D_802CC020[i].x;
        obj->points[i].y = D_802CC020[i].y;
        obj->points[i].flag = D_802CC020[i].flag;
        obj->points[i].z = D_802CC020[i].z;
    }

    for (i = 0; (id = D_802CF7D4[n].rows[i].id) != 0xFF; i++) {
        obj->points[id].x = D_802CF7D4[obj->unk242].rows[i].x;
        obj->points[id].y = D_802CF7D4[obj->unk242].rows[i].y;
        obj->points[id].flag = D_802CF7D4[obj->unk242].rows[i].flag;
        obj->points[id].z = D_802CF7D4[obj->unk242].rows[i].z;
    }

    obj->total += D_802D2C74[obj->unk536].bonus;
    obj->total += D_802CF134[obj->unk240].bonus;

    i = 0;
    a = 0;
    obj->unk55C = 0;
    do {
        v = D_802CF134[obj->unk240].ptr[func_80224030((s16) a)];
        if (obj->unk55C < v) {
            obj->unk55C = v;
        }
        if (i <= v) {
            do { } while (0);
            obj->times[i] = a;
            i++;
        }
        a += 4;
        if (a >= 0x3D) {
            break;
        }
    } while (i < 0x10);

    while (i < 0x10) {
        obj->times[i] = 0x3C;
        i++;
    }
}
