u16 func_800DE41C(s32, s32, s32, s32, s32, s32, s32 *, void (*)(u16), s32, f32, f32, f32, s32, s32, s32, f32, f32, f32);
u16 func_8013E364(void);
void func_8013E640(u16, u16, void *, s32, f32, f32, f32, f32, f32, f32, s16);
void func_8013E818(u16, s32, s16, s32, f32, f32, u16);
u16 func_801D7028(u16, s32);
void func_8016018C(u16);
void func_801604F0(u16);
extern s32 D_80239678;
typedef struct { char pad0[2]; u16 unk2; char pad4[0x55A]; s16 unk55E; u16 unk560; char pad562[0x336]; s32 unk898; char pad89C[0x34]; s8 unk8D0; } Car;
typedef struct { char pad0[0x18]; f32 x; f32 y; f32 z; char pad24[0x40]; } Cam;
extern Cam D_8011F2F0[];
typedef struct { s32 unk0; void *unk4; char pad8[0xE]; u8 unk16; char pad17[0x65]; } Slot;
extern Slot D_8018D6C0[];

void func_8015FEC0(Car *car)
{
    s32 state = car->unk898;
    u16 slot;
    s32 i;
    u16 h;

    if (state == 1 && !(car->unk560 & 0xF)) {
        slot = func_8013E364();
        if (slot != 0xFFFF) {
            Cam *cam = &D_8011F2F0[car->unk2];
            h = func_800DE41C(0, 0, 3, 0, 0x20, state, 0, func_8016018C, 0, cam->x, cam->y, cam->z, 0, 0, 0, 0.0f, 0.0f, 0.0f);

            if ((u16)(h + 2) < 2) {
                func_8013E49C(slot);
                return;
            }
            func_8013E818(slot, h, 0, 0, 0, 0, 0x258);
            D_8018D6C0[slot].unk4 = car;
            car->unk8D0 = 0x78;
            car->unk560 |= 7;
            if (car->unk55E > 0)
                car->unk55E--;
            for (i = 0; i < 3; i++) {
                slot = func_8013E364();
                if (slot == 0xFFFF)
                    break;
                h = func_800DE41C(0, 0, 1, 0, 0x51, 0x64, &D_80239678, func_801604F0, 0, cam->x, cam->y, cam->z, 0, 0, 0, 0.05f, 0.05f, 0.05f);
                if ((u16)(h + 2) < 2) {
                    func_8013E49C(slot);
                    break;
                }
                func_8013E640(slot, h, car, 0x40, 0, 0, 0, 0, 0, 0, 0x258);
                D_8018D6C0[slot].unk4 = car;
                D_8018D6C0[slot].unk16 = i;
                func_801D7028(h, 0x32);
            }
        }
    }
}
