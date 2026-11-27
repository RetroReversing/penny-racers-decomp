typedef struct { f32 v; u8 pad[0x60]; } SlotF;
typedef struct { u8 pad0[2]; u16 obj; u16 player; u8 pad6[0x558]; s16 ammo; u16 flags; u8 pad562[0x336]; s32 state; } Car;
typedef struct { u8 v[0x7C]; } Hit;
typedef struct { f32 v; u8 pad[0x78]; } HitF;
typedef struct { Car *v; u8 pad[0x78]; } HitP;
extern SlotF D_8011F308[], D_8011F30C[], D_8011F310[], D_8011F318[], D_8011F320[], D_8011F324[], D_8011F328[];
extern u8 D_80239408[];
extern Hit D_8018D727[];
extern HitF D_8018D730[];
extern HitP D_8018D6C4[];
void func_80164FC0(void);
void func_801D7028(u16, s32);
s32 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void (*)(void), s32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void func_8013E818(u16, u16, s32, f32, f32, f32, s32);
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
        slot = func_8013E364();
        if (slot != 0xFFFF) {
            n = func_800DE41C(0, 0, 3, 0, 0x20, st, 0, func_80164FC0, 0, D_8011F308[car->obj].v, D_8011F30C[car->obj].v, D_8011F310[car->obj].v, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
            if ((u16)(n + 2) < 2) {
                func_8013E49C(slot);
            } else {
                n2 = car->flags & 7; car->flags = (car->flags & 0xF8) | (n2 + 1);
                vx = func_80033640(D_8011F318[car->obj].v * 3.14f / 180.0f) * 8.0f;
                vz = func_80032320(D_8011F318[car->obj].v * 3.14f / 180.0f) * 8.0f;
                func_801D7028(n, 0x35);
                func_8013E818(slot, n, 0, -*(f32 *) ((u8 *) car + 0x7C0) * 8.0f + vx, *(f32 *) ((u8 *) car + 0x7C4), -*(f32 *) ((u8 *) car + 0x7C8) * 8.0f + vz, 5);
                D_8018D6C4[slot].v = car;
                if (car->ammo > 0) {
                    car->ammo--;
                }
            }
        }
    }
}
