typedef struct { f32 x, y, z; } Vec3;
typedef struct { u8 pad0[2]; s16 r, g, b, a; u8 pad0a[3]; u8 flag; u8 pad0e[0x30]; s16 unk3E; s16 unk40; u8 pad42[0x22]; } Obj64;
typedef struct { u8 pad0[4]; void *anim; u8 pad8[0x68]; f32 radius; u8 pad74[8]; } Obj7C;
extern Obj64 D_8011F2F0[];
extern Obj7C hitSlots[];
extern Vec3 D_80168814[];
extern u8 D_802397E4[];
extern u8 sCars[];
extern void updateLiftPlatform();
s32 raceAllocSlot(void);
u16 objCreate(s32, s32, s32, s32, s32, s32, void *, void *, s32, f32, f32, f32, s32, s32, s32, f32, f32, f32);
void func_8013E818(u16, s32, s16, f32, f32, f32, u16);

void func_80140BEC(u16 arg0)
{
    s32 i;
    s32 id;
    s32 slot;
    f32 drop;
    u16 obj;
    Obj64 *p;

    for (i = 0; i < 4; i++) {
        drop = 20.0f;
        id = raceAllocSlot();
        slot = id & 0xFFFF;
        if (slot != 0xFFFF) {
            obj = objCreate(0, 0xF, 1, 0, 0x51, 0xFF, D_802397E4, updateLiftPlatform, 0,
                                D_80168814[i].x, D_80168814[i].y - drop, D_80168814[i].z, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            if (obj != 0xFFFF && obj != 0xFFFE) {
                p = &D_8011F2F0[obj];
                p->a = 0x80;
                p->b = 0x80;
                p->g = 0x80;
                p->r = 0x80;
                p->unk3E = 0;
                p->unk40 = 100 - i * 10;
                func_8013E818(slot, obj, 0x40, 0.0f, 0.0f, 0.0f, 0);
                hitSlots[slot].radius = 35.0f;
                hitSlots[slot].anim = sCars;
            } else {
                func_8013E49C(id);
            }
        }
    }
    D_8011F2F0[arg0].flag = 2;
}
