typedef struct Obj { u8 pad0[0xC]; u8 count; u8 padD[0xB]; f32 x; f32 y; f32 z; u8 pad24[0x20]; f32 f44; f32 f48; u8 pad4C[0x18]; } Obj;
typedef struct { u8 pad0[2]; u16 idx; u8 pad4[0x8EC]; } Slot;
typedef struct { f32 a; f32 b; f32 c; u8 d; u8 pad[3]; } Param;
extern Obj D_8011F2F0[];
extern Slot D_8022A770[];
extern Param D_80168844[];
extern u8 D_80239818[];
extern void func_80141818(), func_80141BC4();
u16 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, s32, s32, s32, f32, f32, f32);
u16 func_8013E364(void);
void func_8013E958(u16, s32, s16, f32, f32, f32, u16);
void func_801D7028(u16, s32);
u32 func_801FA30C(void);
f32 sqrtf(f32);
void func_80141268(u16 arg0)
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
            if (sqrtf(x * x + y * y + z * z) < 1500.0f) {
                found = 1;
            }
        }
    }
    obj->count++;
    if ((obj->count & 0x1F) == 0 & found != 0) {
        u16 id = func_8013E364();
        if (id != 0xFFFF) {
            f32 x2;
            f32 z2;
            u16 e;

            if ((func_801FA30C() & 0xFF) >= 0x80) {
                x = -850.0f - (func_801FA30C() & 0x7F);
                found = 0;
            } else {
                x = -1425.0f - (func_801FA30C() & 0x7F);
                found = 1;
            }
            y = -30.0f;
            z = func_801FA30C() % 827 + 59.0f;
            if ((func_801FA30C() & 0xFF) >= 0x80) {
                x2 = -1196.0f;
            } else {
                if (found) {
                    x2 = -850.0f - (func_801FA30C() & 0x7F);
                } else {
                    x2 = -1425.0f - (func_801FA30C() & 0x7F);
                }
            }
            z2 = func_801FA30C() % 827 + 59.0f;
            found = func_801FA30C() & 7;
            e = func_800DE41C(0, 0, 1, 0, 0x5B, 0xC8, D_80239818, func_80141818, func_80141BC4, x, y, z, 0, 0, 0, 5.0f, 5.0f, 5.0f);
            if ((u16) (e + 2) >= 2U) {
                func_8013E958(id, e, 0x40, (x2 - x) * D_80168844[found].c, D_80168844[found].a, (z2 - z) * D_80168844[found].c, D_80168844[found].d);
                D_8011F2F0[e].f48 = D_80168844[found].b;
                if (x2 == -1196.0f) {
                    D_8011F2F0[e].f44 = 1.0f;
                } else {
                    D_8011F2F0[e].f44 = 0.0f;
                }
                func_801D7028(e, 0x1E);
            } else {
                func_8013E49C(id);
            }
        }
    }
}
