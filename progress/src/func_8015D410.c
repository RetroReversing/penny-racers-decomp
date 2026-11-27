typedef struct { f32 v; u8 pad[0x60]; } SlotF;
typedef struct { u8 pad0[4]; void *owner; u8 pad8[0xE]; u8 unk16; u8 pad17[0x65]; } Row;
extern SlotF D_8011F308[], D_8011F30C[], D_8011F310[];
extern Row D_8018D6C0[];
extern u8 D_801684D8[], D_802395A8[], D_802395DC[];
extern void func_8015D7F0(void), func_8015E240(void), func_8015DC9C(void), func_8015E404(void), func_8015DD80(void), func_8015E484(void);
s32 func_800DE41C(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void func_8013E818(u16, u16, s32, f32, f32, f32, s32);

void func_8015D410(u16 arg0, f32 arg1, void *arg2, u8 arg3) {
    s32 id;
    s32 slot;
    s32 o;

    do {
    id = func_8013E364();
    slot = id & 0xFFFF;
    if (slot == 0xFFFF) {
        return;
    }
    o = func_800DE41C(0, 0, 1, 0, 0x5B, 0xFF, D_801684D8, func_8015D7F0, func_8015E240, D_8011F308[arg0].v, D_8011F30C[arg0].v, D_8011F310[arg0].v, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    if ((u16) (o + 2) < 2) {
        goto fail;
    }
    func_8013E818(id, o, 0, arg1, 0.0f, 0.0f, 3);
    D_8018D6C0[(u16) id].owner = arg2;
    D_8018D6C0[(u16) id].unk16 = arg3;
    } while (0);
    do {
    id = func_8013E364();
    slot = id & 0xFFFF;
    if (slot == 0xFFFF) {
        return;
    }
    o = func_800DE41C(0, 0, 1, 0, 0x5B, 0xFF, D_802395A8, func_8015DC9C, func_8015E404, D_8011F308[arg0].v, D_8011F30C[arg0].v, D_8011F310[arg0].v, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    if ((u16) (o + 2) < 2) {
        goto fail;
    }
    func_8013E818(id, o, 0, arg1, 0.0f, 0.0f, 0);
    D_8018D6C0[(u16) id].owner = arg2;
    D_8018D6C0[(u16) id].unk16 = arg3;
    } while (0);
    do {
    id = func_8013E364();
    slot = id & 0xFFFF;
    if (slot == 0xFFFF) {
        return;
    }
    o = func_800DE41C(0, 0, 1, 0, 0x5B, 0xFF, D_802395DC, func_8015DD80, func_8015E484, D_8011F308[arg0].v, D_8011F30C[arg0].v, D_8011F310[arg0].v, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
    if ((u16) (o + 2) < 2) {
    fail:
        ((void (*)(s32)) func_8013E49C)(slot);
        return;
    }
    func_8013E818(id, o, 0, arg1, 0.0f, 0.0f, 0);
    D_8018D6C0[(u16) id].owner = arg2;
    D_8018D6C0[(u16) id].unk16 = arg3;
    } while (0);
}
