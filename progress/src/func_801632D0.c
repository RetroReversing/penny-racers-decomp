typedef struct { f32 v; u8 pad[0x78]; } HitF;
typedef struct { void *v; u8 pad[0x78]; } HitP;
typedef struct { u8 v[0x7C]; } Hit;
typedef struct { u8 pad0[2]; u16 obj; u16 player; u8 pad6[0x558]; s16 ammo; u16 flags; u8 pad562[0x172]; u8 mtx[0xEC]; f32 vx; f32 vy; f32 vz; u8 pad7CC[0xCC]; s32 state; } Car;
extern u8 D_8011F2F0[];
extern u8 D_802394D8[];
extern Hit D_8018D727[];
extern HitF D_8018D730[];
extern HitP D_8018D6C4[];
void updateBallProjectile(void);
s32 objCreate(s32, s32, s32, s32, s32, s32, u8 *, void (*)(void), s32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void func_8013E640(u16, u16, Car *, s32, f32, f32, f32, f32, f32, f32, s32);
void func_8003DF6C(void *, f32, f32, f32, f32 *, f32 *, f32 *);
void queueObjEvent(u16, s32);

void func_801632D0(Car *car) {
    u8 *rec;
    u16 i;
    u16 slot;
    s32 n;
    s32 f;
    s32 count;
    f32 vx;
    f32 vy;
    f32 vz;

    rec = D_8011F2F0 + car->obj * 0x64;
    if (car->state == 1 && (f = car->flags, !(f & 8)) && (f & 7) < 7) {
        for (i = 0; i < 2; i++) {
            count = car->flags & 7;
            if (count < 7U && car->ammo != 0) {
                slot = raceAllocSlot();
                if (slot == 0xFFFF) {
                    break;
                }
                {
                    func_8003DF6C(car->mtx, (f32)(i * 30 - 15), 1.0f, 0.0f, &vx, &vy, &vz);
                    n = objCreate(0, 0, 1, 0, 0x51, 0xFF, D_802394D8, updateBallProjectile, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, *(f32 *)(rec + 0x30), *(f32 *)(rec + 0x34), *(f32 *)(rec + 0x38));
                    if ((u16)(n + 2) < 2) {
                        func_8013E49C(slot);
                        return;
                    }
                    car->flags = (car->flags & 0xF8) | (count + 1);
                    func_8013E640(slot, n, car, 0x40, vx, vy, vz, car->vx + vx, car->vy + vy, car->vz + vz, 0xC8);
                    D_8018D727[slot].v[car->player] = 1;
                    D_8018D730[slot].v = 8.0f;
                    D_8018D6C4[slot].v = car;
                    queueObjEvent(n, 0x2F);
                    if (car->ammo > 0) {
                        car->ammo--;
                    }
                }
            }
        }
    }
}
