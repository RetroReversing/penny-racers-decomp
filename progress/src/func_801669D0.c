typedef struct { u8 pad0[2]; u16 obj; u8 pad4; u8 b5; u8 pad6[0x558]; s16 ammo; u16 flags; u8 pad562[0x1FE]; f32 f760; u8 pad764[0x134]; s32 state; u8 pad89C[0x54]; } Car;
typedef struct { f32 v; u8 pad[0x60]; } SlotF;
typedef struct { void *v; u8 pad[0x78]; } HitP;
extern Car sCars[];
extern SlotF D_8011F308[], sPrimColorG[], sPathOffsetZ[], D_8011F320[];
extern HitP slotOwner[];
extern u8 D_80239540[];
void updateCarOutroAnim(void);
void updateHomingMissile(void);
s32 objCreate(s32, s32, s32, s32, s32, s32, u8 *, void (*)(void), s32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void initHitSlot(u16, u16, s32, s32, f32, f32, s32);
void queueObjEvent(u16, s32);

void func_801669D0(Car *car) {
    u16 slot;
    s32 n;
    s32 i;
    s32 state;

    state = car->state;
    if (state == 1 && !(car->flags & 0x4F)) {
        slot = raceAllocSlot();
        if (slot != 0xFFFF) {
            n = objCreate(0, 0, 3, 0, 0x20, state, 0, updateCarOutroAnim, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
            if ((u16)(n + 2) < 2) {
                func_8013E49C(slot);
                return;
            }
            initHitSlot(slot, n, 0, 0, 0.0f, 0.0f, 0x136);
            slotOwner[slot].v = car;
            car->flags |= 0x40;
            if (car->ammo > 0) {
                car->ammo--;
            }
            for (i = 0; i < 7; i++) {
                if (sCars[i].obj != 0xFFFF && sCars[i].obj != car->obj && !(sCars[i].flags & 0x68)) {
                    slot = raceAllocSlot();
                    if (slot == 0xFFFF) {
                        return;
                    }
                    n = objCreate(0, car->b5, 1, 0, 0x51, 0xFF, D_80239540, updateHomingMissile, 0,
                                      D_8011F308[sCars[i].obj].v, sPrimColorG[sCars[i].obj].v + 200.0f, sPathOffsetZ[sCars[i].obj].v,
                                      0.0f, i * 60, 0.0f, 1.0f, 1.0f, 1.0f);
                    if ((u16)(n + 2) < 2) {
                        func_8013E49C(slot);
                        return;
                    }
                    sCars[i].flags |= 8;
                    sCars[i].f760 += 30000.0f;
                    queueObjEvent(n, 0x36);
                    initHitSlot(slot, n, 0, 0, 200.0f, D_8011F320[sCars[i].obj].v, 0x12C);
                    slotOwner[slot].v = &sCars[i];
                }
            }
        }
    }
}
