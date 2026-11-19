extern u8 D_8011F308[];
extern u8 D_8011F30C[];
extern u8 D_8011F310[];
extern s16 D_8018D672;
extern u8 D_8022A770[];
extern u8 D_8022A772[];
extern f32 sqrtf(f32);
extern void func_801D7028(u16, s32);

s32 func_8013F1D4(s32 arg0, u8 *arg1) {
    f32 px;
    f32 py;
    f32 pz;
    f32 dx;
    f32 dy;
    f32 dz;
    f32 dist;
    s32 i;
    s32 slot;
    s32 idx;
    u8 *obj;
    u8 *ent;

    D_8018D672 = 0;
    idx = (arg0 & 0xFFFF) * 100;
    px = *(f32 *)(D_8011F308 + idx);
    py = *(f32 *)(D_8011F30C + idx);
    pz = *(f32 *)(D_8011F310 + idx);
    for (i = 0; i < 7; i++) {
        slot = *(s8 *)(arg1 + 0x60 + i);
        if (slot == -1) {
            continue;
        }
        obj = D_8022A770 + slot * 0x8F0;
        idx = *(u16 *)(D_8022A772 + i * 0x8F0) * 100;
        dx = px - *(f32 *)(D_8011F308 + idx);
        dy = py - *(f32 *)(D_8011F30C + idx);
        dz = pz - *(f32 *)(D_8011F310 + idx);
        dist = sqrtf(dx * dx + dy * dy + dz * dz);
        if (dist < *(f32 *)(arg1 + 0x70) && arg1[0x67 + i] == 0) {
            if (!(*(u16 *)(obj + 0x560) & 0x20)) {
                *(s8 *)(obj + 0x8A1) = 3;
                *(s8 *)(obj + 0x8C8) = 0;
                *(s8 *)(obj + 0x8C9) = 1;
                *(f32 *)(obj + 0x8CC) = 360.0f;
                *(f32 *)(obj + 0x7B4) = -dx * 0.025f;
                *(f32 *)(obj + 0x7BC) = -dz * 0.025f;
                *(f32 *)(obj + 0x7C0) = -dx * 0.025f;
                *(f32 *)(obj + 0x7C8) = -dz * 0.025f;
                func_801D7028(*(u16 *)(obj + 2), 0x34);
            }
            ent = obj + *(u16 *)(*(u8 **)(arg1 + 4) + 4) * 8;
            *(f32 *)(ent + 0x5B4) = (1.0f - *(f32 *)(ent + 0x5B4)) * *(f32 *)(obj + 0x5A0) + *(f32 *)(ent + 0x5B4);
            arg1[0x67 + i] = 1;
            D_8018D672 = i;
            return 1;
        }
    }
    return 0;
}
