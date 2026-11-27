typedef struct { u8 kind; u8 car; u8 pad2[2]; f32 x; f32 y; f32 z; u8 b10; u8 b11; u8 b12; u8 b13; f32 angle; f32 f18; u8 b1C; u8 spec; u8 pad1E; u8 b1F; } Step;
typedef struct { u16 f0; u16 f2; u16 f4; u16 f6; u16 f8; u16 fA; u16 fC; u16 padE; f32 f10; f32 f14; f32 f18; f32 f1C; u8 f20; u8 pad21[3]; } Spec;
typedef struct { u16 f0; u16 f2; u16 f4; u16 f6; u16 f8; u16 fA; u16 fC; u16 fE; u8 pad10[4]; f32 f14; f32 f18; f32 f1C; f32 f20; u8 f24; u8 pad25[0x153]; } Slot;
typedef struct {
    u8 pad0[2]; u16 first; u8 pad4[0x593]; u8 b597; u8 pad598[0x54]; f32 f5EC; u8 pad5F0[2]; u8 b5F2; u8 pad5F3[0x155]; f32 f748; u8 b74C; u8 pad74D[0x23]; f32 speed; u8 pad774[0x10];
    f32 f784; f32 f788; f32 f78C; f32 f790; f32 f794; f32 f798; u8 pad79C[0x18]; f32 f7B4; f32 f7B8; f32 f7BC; f32 f7C0; f32 f7C4; f32 f7C8; u8 pad7CC[4]; s16 f7D0; s16 f7D2; u8 pad7D4[0x40]; s16 f814; s16 f816; u8 pad818[0xCC]; u16 f8E4; u16 f8E6; u16 f8E8; u8 pad8EA[6];
} Car;
typedef struct { u8 pad0[0x18]; f32 x; f32 y; f32 z; u8 pad24[4]; f32 angle; u8 pad2C[0x24]; u8 *f50; u8 pad54[0x10]; } Rec;
extern Car sCars[];
extern Slot D_800DA260[];
extern Spec D_8021B6A0[];
extern Rec D_8011F2F0[];
extern u16 D_80233EC0;
void func_8022FE50(s32, u8, u8, s32);
f32 __sinf(f32);
f32 __cosf(f32);
s16 func_8012913C(u16, f32, f32, f32);

void func_80217F44(Step *step) {
    Car *car;
    Slot *slot;
    Spec *spec;
    Rec *rec;
    s32 i;

    while (step->kind != 0) {
        car = &sCars[step->car];
        slot = &D_800DA260[step->car];
        spec = &D_8021B6A0[step->spec];
        slot->f0 = step->b1F;
        slot->f2 = spec->f0;
        slot->f4 = spec->f2;
        slot->f6 = spec->f4;
        slot->f8 = spec->f6;
        slot->fA = spec->f8;
        slot->fC = spec->fA;
        slot->fE = spec->fC;
        slot->f14 = spec->f10;
        slot->f18 = spec->f14;
        slot->f1C = spec->f18;
        slot->f20 = spec->f1C;
        slot->f24 = spec->f20;
        func_8022FE50(0, step->car, step->car, 1);
        rec = &D_8011F2F0[sCars[step->car].first];
        rec->x = step->x;
        rec->y = step->y + 0.1;
        rec->z = step->z;
        rec->angle = step->angle;
        car->f8E4 = step->b10;
        car->f8E6 = step->b11;
        car->f8E8 = step->b12;
        car->b597 = step->b13;
        car->f748 = step->f18;
        car->b74C = step->b1C;
        car->speed = 150.0f;
        car->f7C0 = car->f790 = car->f7B4 = car->f784 = __sinf(step->angle * 3.14 / 180.0) * car->speed * -0.05;
        car->f7C4 = car->f794 = car->f7BC = car->f788 = 0.0f;
        car->f7C8 = car->f798 = car->f7BC = car->f78C = __cosf(step->angle * 3.14 / 180.0) * car->speed * -0.05;
        car->f7D0 = func_8012913C(D_80233EC0, rec->x, rec->y, rec->z);
        car->f7D2 = 0;
        car->f814 = func_8012913C(D_80233EC0, rec->x, rec->y, rec->z);
        car->f816 = 0;
        if (step->kind == 2) {
            car->f5EC = 0.0f;
            car->b5F2 = 1;
            for (i = 0; i < 8; i++) {
                rec = &D_8011F2F0[car->first + i];
                *(s32 *) (rec->f50 + 4) = 0;
            }
        }
        step++;
    }
}
