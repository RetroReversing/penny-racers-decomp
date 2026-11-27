typedef struct { u8 f0; u8 f1; u8 pad2[0xC]; u16 fE; u8 pad10[0x14]; f32 f24; f32 f28; u8 pad2C[0x24]; u8 *f50; u8 pad54[0xC]; u8 *f60; } Rec;
typedef struct { u8 pad0[0x770]; f32 speed; u8 pad774[0x5D]; u8 b7D1; u8 pad7D2[0xA7]; u8 kind; u8 pad87A; s8 tilt; } Car;
extern Rec D_8011F2F0[];
extern u8 D_80233EC1;
void liftCopyFlags(u16);
void func_80226A60(u16, Car *);
void func_80226BA0(u16, Car *);
void func_80228140(u16, Car *);
void func_80228290(u16, Car *);

/* Updates the record for car id from its car's speed and tilt, then runs the handler for that car's kind. */ void updateCarRecord(u16 id) {
    Rec *rec = &D_8011F2F0[id];
    Car *car = (Car *) D_8011F2F0[rec->fE].f60;
    f32 t;

    switch (*rec->f50) {
    case 0:
        D_8011F2F0[id].f0 = car->b7D1 - D_80233EC1;
        liftCopyFlags(id);
        break;
    case 2:
    case 3:
        t = car->tilt;
        if (t < 10.0f && t > -10.0f) {
            t = 0.0f;
        }
        rec->f28 = (t - 10.0f) * -0.7f;
        rec->f24 += car->speed * 0.1f;
        if (rec->f24 > 360.0f) {
            rec->f24 -= (u16) ((u16) rec->f24 / 360) * 360.0f;
        }
        break;
    case 4:
        rec->f24 += car->speed * 0.1f;
        if (rec->f24 > 360.0f) {
            rec->f24 -= (u16) ((u16) rec->f24 / 360) * 360.0f;
        }
        break;
    }
    if (rec->f1 == 1) {
        switch (car->kind) {
        case 0:
            func_80226A60(id, car);
            break;
        case 1:
            func_80226BA0(id, car);
            break;
        case 2:
            func_80228140(id, car);
            break;
        case 3:
            break;
        case 4:
        case 5:
            func_80228290(id, car);
            break;
        }
    }
}
