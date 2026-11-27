typedef struct { u8 pad0[2]; u16 obj; u8 pad4; u8 b5; u8 pad6[0x558]; s16 ammo; u16 flags; u8 pad562[0x1FE]; f32 f760; u8 pad764[0x134]; s32 state; u8 pad89C[0x54]; } Car;
typedef struct { f32 v; u8 pad[0x60]; } SlotF;
typedef struct { void *v; u8 pad[0x78]; } HitP;
extern Car D_8022A770[];
extern SlotF D_8011F308[], D_8011F30C[], D_8011F310[], D_8011F320[];
extern HitP D_8018D6C4[];
extern u8 D_80239540[];
void func_80166DC0(void);
void func_8016711C(void);
s32 func_800DE41C(s32, s32, s32, s32, s32, s32, u8 *, void (*)(void), s32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void func_8013E818(u16, u16, s32, s32, f32, f32, s32);
void func_801D7028(u16, s32);

void func_801669D0(Car *car) {
    u16 slot;
    s32 n;
    s32 i;
    s32 state;

    state = car->state;
    if (state == 1 && !(car->flags & 0x4F)) {
        slot = func_8013E364();
        if (slot != 0xFFFF) {
            n = func_800DE41C(0, 0, 3, 0, 0x20, state, 0, func_80166DC0, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
            if ((u16)(n + 2) < 2) {
                func_8013E49C(slot);
                return;
            }
            func_8013E818(slot, n, 0, 0, 0.0f, 0.0f, 0x136);
            D_8018D6C4[slot].v = car;
            car->flags |= 0x40;
            if (car->ammo > 0) {
                car->ammo--;
            }
            for (i = 0; i < 7; i++) {
                if (D_8022A770[i].obj != 0xFFFF && D_8022A770[i].obj != car->obj && !(D_8022A770[i].flags & 0x68)) {
                    slot = func_8013E364();
                    if (slot == 0xFFFF) {
                        return;
                    }
                    n = func_800DE41C(0, car->b5, 1, 0, 0x51, 0xFF, D_80239540, func_8016711C, 0,
                                      D_8011F308[D_8022A770[i].obj].v, D_8011F30C[D_8022A770[i].obj].v + 200.0f, D_8011F310[D_8022A770[i].obj].v,
                                      0.0f, i * 60, 0.0f, 1.0f, 1.0f, 1.0f);
                    if ((u16)(n + 2) < 2) {
                        func_8013E49C(slot);
                        return;
                    }
                    D_8022A770[i].flags |= 8;
                    D_8022A770[i].f760 += 30000.0f;
                    func_801D7028(n, 0x36);
                    func_8013E818(slot, n, 0, 0, 200.0f, D_8011F320[D_8022A770[i].obj].v, 0x12C);
                    D_8018D6C4[slot].v = &D_8022A770[i];
                }
            }
        }
    }
}
