typedef struct { u8 pad0[4]; u8 *car; } Ctl;
typedef struct { f32 v; u8 pad[0x60]; } SlotF;
typedef struct { u8 pad0[4]; void *owner; u8 pad8[0xE]; u8 unk16; u8 pad17[0x65]; } Row;
typedef struct { Ctl *v; u8 pad[0x60]; } SlotP;
extern SlotF D_8011F308[], D_8011F30C[], D_8011F310[];
extern SlotP D_8011F350[];
extern Row D_8018D6C0[];
extern u8 D_802390C8[];
extern void func_8015CF2C(void), func_8015CFD8(void), func_8015D368(void);
s32 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void func_8013E818(u16, u16, s32, f32, f32, f32, s32);

void func_8015CB40(u16 arg0) {
    s32 id;
    s32 slot;
    s32 o;
    u16 i;
    s16 a, b, c;

    id = func_8013E364();
    slot = id & 0xFFFF;
    if (slot != 0xFFFF) {
        o = func_800DE41C(0, 0, 3, 0, 0x20, 1, 0, func_8015CF2C, 0, D_8011F308[arg0].v, D_8011F30C[arg0].v, D_8011F310[arg0].v, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
        if ((u16) (o + 2) < 2) {
        fail:
            ((void (*)(s32)) func_8013E49C)(slot);
            return;
        }
        func_8013E818(id, o, 0, 0.0f, 0.0f, 0.0f, 3);
        D_8018D6C0[(u16) id].owner = D_8011F350[arg0].v->car;
        for (i = 0; i < 10; i++) {
            id = func_8013E364();
            slot = id & 0xFFFF;
            if (slot == 0xFFFF) {
                break;
            }
            o = func_800DE41C(0, 0, 1, 0, 0x5B, 0xC8, D_802390C8, func_8015CFD8, func_8015D368, D_8011F308[arg0].v, D_8011F30C[arg0].v, D_8011F310[arg0].v, 0.0f, 0.0f, 0.0f, 0.1f, 0.1f, 0.1f);
            if ((u16) (o + 2) < 2) {
                goto fail;
            }
            a = (f32) (u32) (func_801FA30C() & 0x3F) - 32.0f;
            b = (f32) (u32) (func_801FA30C() & 0x1F);
            c = (f32) (u32) (func_801FA30C() & 0x3F) - 32.0f;
            func_8013E818(id, o, 0x40, a * 0.2, b * 0.2, c * 0.2, func_801FA30C() & 8);
            D_8018D6C0[(u16) id].unk16 = 1;
        }
    }
}
