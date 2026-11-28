typedef struct { u8 pad0[2]; u16 unk2_; u8 pad4[0x14]; f32 x, y, z; u8 pad24[0x3C]; void *ctl; } Cam;
typedef struct { u8 pad0[2]; u16 obj; u8 pad4[0x55A]; s16 ammo; u16 flags; u8 pad562[0x336]; s32 state; u8 pad89C[0x34]; u8 unk8D0; } Car;
typedef struct { u16 unk0; u8 pad2[2]; Car *car; f32 unk8; f32 unkC; u8 pad10[4]; u16 unk14; u8 pad16[0x66]; } Row;
extern Cam D_8011F2F0[];
extern Row hitSlots[];
extern u8 D_802399EC[], D_80239A20[], D_80239A54[];
extern void updateCarOutroSpin(void), updateCarIntroSpin(void), updateExhaustPuff(void), updateDustPuff(void), func_80166890(void);
s32 objCreate(s32, s32, s32, s32, s32, s32, void *, void *, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

void func_80165830(Car *car, u16 kind) {
    u16 id;
    u16 h;
    Cam *rec;

    if (car->state == 1 && !(car->flags & 0xF)) {
        id = raceAllocSlot();
        if (id != 0xFFFF) {
            switch (kind) {
            case 0:
                h = objCreate(0, 0, 3, 0, 0x20, 1, 0, updateCarOutroSpin, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
                break;
            case 1:
                h = objCreate(0, 0, 3, 0, 0x20, 1, 0, updateCarIntroSpin, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
                break;
            default:
                goto fail;
            }
            if (h == 0xFFFE || h == 0xFFFF) {
            fail:
                func_8013E49C(id);
                return;
            }
            hitSlots[id].unk8 = 10.0f;
            hitSlots[id].unkC = 270.0f;
            hitSlots[id].unk0 = car->obj;
            hitSlots[id].car = car;
            hitSlots[id].unk14 = 0xFF;
            car->unk8D0 = 0xF0;
            D_8011F2F0[h].ctl = &hitSlots[id];
            rec = &D_8011F2F0[car->obj];
            if (car->ammo > 0) {
                car->ammo--;
            }
            switch (kind) {
            case 0:
                objCreate(0, ((u8 *) car)[3], 1, 0, 0x5B, 0xFF, D_802399EC, updateExhaustPuff, 0, rec->x, rec->y, rec->z, 0.0f, 0.0f, 0.0f, 0.1f, 0.05f, 0.1f);
                break;
            case 1:
                objCreate(0, ((u8 *) car)[3], 1, 0, 0x5B, 0xFF, D_80239A20, updateDustPuff, 0, rec->x, rec->y, rec->z, 0.0f, 0.0f, 0.0f, 0.1f, 0.05f, 0.1f);
                objCreate(0, ((u8 *) car)[3], 1, 0, 0x5B, 0xFF, D_80239A54, func_80166890, 0, rec->x, rec->y, rec->z, 0.0f, 0.0f, 0.0f, 0.1f, 0.4f, 0.1f);
                break;
            }
        }
    }
}
