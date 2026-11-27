u16 objCreate(s32, s32, s32, s32, s32, s32, s32 *, void (*)(u16), s32, f32, f32, f32, s32, s32, s32, f32, f32, f32);
u16 raceAllocSlot(void);
void launchBall(u16, u16, void *, s32, f32, f32, f32, f32, f32, f32, s16);
void func_8013E818(u16, s32, s16, s32, f32, f32, u16);
u16 queueObjEvent(u16, s32);
void updateCarIntroAnim(u16);
void updateOrbitSprite(u16);
extern s32 D_80239678;
typedef struct { char pad0[2]; u16 unk2; char pad4[0x55A]; s16 unk55E; u16 unk560; char pad562[0x336]; s32 unk898; char pad89C[0x34]; s8 unk8D0; } Car;
typedef struct { char pad0[0x18]; f32 x; f32 y; f32 z; char pad24[0x40]; } Cam;
extern Cam D_8011F2F0[];
typedef struct { s32 unk0; void *unk4; char pad8[0xE]; u8 unk16; char pad17[0x65]; } Slot;
extern Slot hitSlots[];

void func_8015FEC0(Car *car)
{
    s32 state = car->unk898;
    u16 slot;
    s32 i;
    u16 h;

    if (state == 1 && !(car->unk560 & 0xF)) {
        slot = raceAllocSlot();
        if (slot != 0xFFFF) {
            Cam *cam = &D_8011F2F0[car->unk2];
            h = objCreate(0, 0, 3, 0, 0x20, state, 0, updateCarIntroAnim, 0, cam->x, cam->y, cam->z, 0, 0, 0, 0.0f, 0.0f, 0.0f);

            if ((u16)(h + 2) < 2) {
                func_8013E49C(slot);
                return;
            }
            func_8013E818(slot, h, 0, 0, 0, 0, 0x258);
            hitSlots[slot].unk4 = car;
            car->unk8D0 = 0x78;
            car->unk560 |= 7;
            if (car->unk55E > 0)
                car->unk55E--;
            for (i = 0; i < 3; i++) {
                slot = raceAllocSlot();
                if (slot == 0xFFFF)
                    break;
                h = objCreate(0, 0, 1, 0, 0x51, 0x64, &D_80239678, updateOrbitSprite, 0, cam->x, cam->y, cam->z, 0, 0, 0, 0.05f, 0.05f, 0.05f);
                if ((u16)(h + 2) < 2) {
                    func_8013E49C(slot);
                    break;
                }
                launchBall(slot, h, car, 0x40, 0, 0, 0, 0, 0, 0, 0x258);
                hitSlots[slot].unk4 = car;
                hitSlots[slot].unk16 = i;
                queueObjEvent(h, 0x32);
            }
        }
    }
}
