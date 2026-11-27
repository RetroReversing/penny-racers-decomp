typedef struct { u8 pad0[0xD]; u8 flag; u8 pad0e[0xE]; f32 y1C; u8 pad20[0x20]; s16 unk40; u8 pad42[2]; s32 unk44; u8 pad48[0x1C]; } Obj64;
typedef struct { u8 pad0[4]; void *anim; u8 pad8[0x68]; f32 radius; u8 pad74[8]; } Obj7C;
typedef struct { u8 pad0[4]; s16 index; s16 other; u8 pad8[4]; } Hit;
typedef struct { f32 x, y, z; f32 unkC; s16 unk10; u8 pad12[2]; Hit hit; f32 unk20; u8 pad24[0x34]; f32 unk58; } Rec5C;
extern Obj64 D_8011F2F0[];
extern Obj7C hitSlots[];
extern Rec5C D_801688C4[];
extern u8 D_8016D658[];
extern u8 sCars[];
extern u16 D_80233EC0;
extern void updateProximityBounce();
s32 raceAllocSlot(void);
u16 objCreate(s32, s32, s32, s32, s32, s32, void *, void *, s32, f32, f32, f32, s32, s32, s32, f32, f32, f32);
s32 func_8012913C(u16, f32, f32, f32);
void func_80129C1C(void *, f32, f32, f32, f32, f32, f32);
void func_8013E818(s32, s32, s16, f32, f32, f32, u16);

void func_801429A8(u16 arg0)
{
    s32 i;
    s32 id;
    s32 slot;
    u16 obj;
    Obj64 *p;

    for (i = 0; i < 8; i++) {
        id = raceAllocSlot();
        slot = id & 0xFFFF;
        if (slot != 0xFFFF) {
            obj = objCreate(0, 0x10, 2, 0, 0x51, 0xFF, D_8016D658, updateProximityBounce, 0,
                                D_801688C4[i].x, D_801688C4[i].y, D_801688C4[i].z, 0, 0, 0, 1.0f, 1.0f, 1.0f);
            if (obj != 0xFFFF && obj != 0xFFFE) {
                p = &D_8011F2F0[obj];
                p->unk44 = 0;
                p->unk40 = i;
                D_801688C4[i].unkC = p->y1C;
                D_801688C4[i].unk10 = i * 40 + 10;
                D_801688C4[i].hit.index = func_8012913C(D_80233EC0, D_801688C4[i].x, D_801688C4[i].y, D_801688C4[i].z);
                D_801688C4[i].hit.other = 0;
                func_80129C1C(&D_801688C4[i].hit, D_801688C4[i].x, D_801688C4[i].y, D_801688C4[i].z, 0.0f, -300.0f, 0.0f);
                D_801688C4[i].unk58 = D_801688C4[i].unk20;
                func_8013E818(slot, obj, 0, 0.0f, 0.0f, 0.0f, 0);
                hitSlots[slot].anim = sCars;
                hitSlots[slot].radius = 50.0f;
            } else {
                func_8013E49C(id);
            }
        }
    }
    D_8011F2F0[arg0].flag = 2;
}
