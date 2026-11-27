typedef struct Obj { u8 pad0[0xC]; u8 count; u8 padD[0xB]; f32 x; f32 y; f32 z; u8 pad24[0x20]; f32 f44; s32 f48; u8 pad4C[0x18]; } Obj;
typedef struct { u8 pad0[2]; u16 idx; u8 pad4[0x8EC]; } Slot;
typedef struct { f32 f0; u8 pad[0x78]; } Rec;
extern Obj D_8011F2F0[];
extern Slot D_8022A770[];
extern Rec D_8018D730[];
extern u8 D_8023977C[];
extern u8 D_80239950[];
extern void func_8014081C(), func_80140A0C(), func_80140A38(), func_80138304();
u16 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, s32, s32, s32, f32, f32, f32);
u16 func_8013E364(void);
void func_8013E818(u16, s32, s16, f32, f32, f32, u16);
u32 func_801FA30C(void);
f32 sqrtf(f32);
void func_801402B8(u16 arg0)
{
    s32 found = 0;
    Obj *obj = &D_8011F2F0[arg0];
    s32 i;
    f32 x;
    f32 y;
    f32 z;

    for (i = 0; i < 7; i++) {
        if (D_8022A770[i].idx != 0xFFFF) {
            Slot *slot = &D_8022A770[i];
            Obj *other = &D_8011F2F0[slot->idx];
            x = obj->x - other->x;
            y = obj->y - other->y;
            z = obj->z - other->z;
            if (sqrtf(x * x + y * y + z * z) < 1400.0f) {
                found = 1;
            }
        }
    }
    obj->count++;
    if (found > 0 & (obj->count & 0x3F) == 0) {
        u16 id = func_8013E364();
        if (id != 0xFFFF) {
            f32 f;
            f32 x2;
            f32 z2;
            u16 e;

            f = func_801FA30C() & 0x7F;
            x = f * -2.74f + -700.0f;
            y = 240.0f;
            z = f * 2.72f + 737.0f;
            f = func_801FA30C() & 0x7F;
            x2 = f * -1.433f + -965.0f;
            z2 = f * 1.417f + 531.0f;
            e = func_800DE41C(0, 0, 1, 0, 0x51, 0xC8, D_8023977C, func_8014081C, func_80140A0C, x, y, z, 0, 0, 0, 2.0f, 2.0f, 2.0f);
            if ((u16) (e + 2) >= 2U) {
                f32 s = (func_801FA30C() & 0x1F) * 0.01f + 0.5f;
                f32 h = (func_801FA30C() & 0xF) * 0.1f + 4.0f;
                u16 e2;

                func_8013E818(id, e, 0x40, (x2 - x) * 0.008f * s, h, (z2 - z) * 0.008f * s, 0xC8);
                D_8011F2F0[e].f48 = 0;
                D_8018D730[id].f0 = 25.0f;
                e2 = func_800DE41C(0, 0, 1, 0, 0x52, 0x9B, D_80239950, func_80140A38, func_80138304, 0.0f, 0.0f, 0.0f, 0, 0, 0, 0.2f, 0.2f, 0.2f);
                if ((u16) (e2 + 2) >= 2U) {
                    D_8011F2F0[e2].f44 = e;
                    D_8011F2F0[e].f44 = e2;
                }
            } else {
                func_8013E49C(id);
            }
        }
    }
}
