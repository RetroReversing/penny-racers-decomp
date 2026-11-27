typedef struct { f32 v; u8 pad[0x60]; } SlotF;
typedef struct { u8 pad0[2]; u16 obj; u16 player; u8 pad6[0x558]; s16 ammo; u16 flags; u8 pad562[0x336]; s32 state; } Car;
typedef struct { u8 v[0x7C]; } Hit;
typedef struct { f32 v; u8 pad[0x78]; } HitF;
typedef struct { Car *v; u8 pad[0x78]; } HitP;
extern SlotF D_8011F308[], sPrimColorG[], sPrimColorB[], D_8011F318[], D_8011F320[], D_8011F324[], D_8011F328[];
extern u8 D_80239408[];
extern Hit slotHitFlags[];
extern HitF slotRadius[];
extern HitP slotOwner[];
void updateCarBumpEffect(void);
void queueObjEvent(u16, s32);
s32 objCreate(s32, s32, s32, s32, s32, s32, void *, void (*)(void), s32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void initHitSlot(u16, u16, s32, f32, f32, f32, s32);
f32 func_80033640(f32);
f32 func_80032320(f32);

void func_80164D00(Car *car) {
    u16 slot;
    s32 n;
    s32 f;
    s32 st;
    s32 n2;
    f32 vx;
    f32 vz;

    if ((st = car->state) == 1 && (f = car->flags, !(f & 8)) && (f & 7) < 5) {
        slot = raceAllocSlot();
        if (slot != 0xFFFF) {
            n = objCreate(0, 0, 3, 0, 0x20, st, 0, updateCarBumpEffect, 0, D_8011F308[car->obj].v, sPrimColorG[car->obj].v, sPrimColorB[car->obj].v, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
            if ((u16)(n + 2) < 2) {
                func_8013E49C(slot);
            } else {
                n2 = car->flags & 7; car->flags = (car->flags & 0xF8) | (n2 + 1);
                vx = func_80033640(D_8011F318[car->obj].v * 3.14f / 180.0f) * 8.0f;
                vz = func_80032320(D_8011F318[car->obj].v * 3.14f / 180.0f) * 8.0f;
                queueObjEvent(n, 0x35);
                initHitSlot(slot, n, 0, -*(f32 *) ((u8 *) car + 0x7C0) * 8.0f + vx, *(f32 *) ((u8 *) car + 0x7C4), -*(f32 *) ((u8 *) car + 0x7C8) * 8.0f + vz, 5);
                slotOwner[slot].v = car;
                if (car->ammo > 0) {
                    car->ammo--;
                }
            }
        }
    }
}
