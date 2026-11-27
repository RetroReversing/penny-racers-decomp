typedef struct { u8 pad0[2]; u16 obj; u8 pad4; u8 b5; u8 pad6[0x558]; s16 ammo; u16 flags; u8 pad562[0x1EA]; u8 b74C; u8 pad74D[0x14B]; s32 state; u8 pad89C[0x34]; u8 b8D0; } Car;
typedef struct Hit { u8 pad0[4]; Car *car; f32 scale; u8 pad0C[8]; u16 time; u8 pad16[0x66]; } Hit;
typedef struct { u8 pad0[0x18]; f32 x, y, z; u8 pad24[0xC]; f32 sx, sy, sz; u8 pad3C[8]; f32 f44; f32 f48; u8 pad4C[0x14]; Hit *hit; } Slot;
extern Slot D_8011F2F0[];
extern Hit hitSlots[];
extern u8 D_80239610[];
u16 raceAllocSlot(void);
s32 objCreate(s32, s32, s32, s32, s32, s32, u8 *, void (*)(void), void (*)(void), f32, f32, f32, f32, f32, f32, f32, f32, f32);
void initHitSlot(u16, s32, s32, s32, s32, s32, s32);
void queueObjEvent(u16, s32);
void func_8015EC58(void);
void updateCarExhaust(void);
void func_8015FD64(void);

void func_8015E530(Car *car) {
    u16 slot;
    s32 n;
    s32 state;

    state = car->state;
    if (state == 1 && !(car->flags & 0x18)) {
        slot = raceAllocSlot();
        if (slot != 0xFFFF) {
            n = objCreate(0, 0, 3, 0, 0x20, state, 0, func_8015EC58, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
            if ((u16)(n + 2) < 2) {
                func_8013E49C(slot);
                return;
            }
            {
                hitSlots[slot].time = 0x2D;
                hitSlots[slot].scale = 1.0f;
                hitSlots[slot].car = car;
                car->b8D0 = 0xF0;
                car->flags |= 0x10;
                D_8011F2F0[(u16)n].hit = &hitSlots[slot];
                queueObjEvent(car->obj, 0x2C);
                if (car->ammo > 0) {
                    car->ammo--;
                }
                if (car->b74C < 5) {
                    slot = raceAllocSlot();
                    if (slot != 0xFFFF) {
                        n = objCreate(0, car->b5, 1, 0, 0x5B, 0, D_80239610, updateCarExhaust, func_8015FD64,
                                          D_8011F2F0[car->obj].x, D_8011F2F0[car->obj].y + 15.0f, D_8011F2F0[car->obj].z,
                                          0.0f, 0.0f, 0.0f,
                                          D_8011F2F0[car->obj].sx * 2.0f, D_8011F2F0[car->obj].sy * 2.0f, D_8011F2F0[car->obj].sz * 2.0f);
                        if ((u16)(n + 2) < 2) {
                            func_8013E49C(slot);
                        } else {
                            D_8011F2F0[(u16)n].f44 = 16.0f;
                            D_8011F2F0[(u16)n].f48 = 1.0f;
                            initHitSlot(slot, (u16)n, 0x40, 0, 0, 0, 0x3C);
                            hitSlots[slot].car = car;
                        }
                    }
                }
            }
        }
    }
}

