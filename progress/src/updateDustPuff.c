extern u8 D_8011F2F0[];
extern u8 D_8011F2FD[];

/* Per-frame update for a dust puff that follows its leader object; like updateExhaustPuff but fades faster and ends smaller. */
/* Per-frame update for a dust puff that follows its leader object; like updateExhaustPuff but fades faster and settles larger. */ void updateDustPuff(s32 objIndex) {
    f32 scale;
    f32 scale2;
    s32 objOffset;
    u16 phase;
    u8 *obj;
    u8 *leader;

    objOffset = (objIndex & 0xFFFF) * 0x64;
    obj = D_8011F2F0 + objOffset;
    leader = D_8011F2F0 + (*(u8 *)obj * 0x64);
    *(f32 *)(obj + 0x28) = *(f32 *)(obj + 0x28) + 20.0f;
    *(f32 *)(obj + 0x18) = *(f32 *)(leader + 0x18);
    *(f32 *)(obj + 0x1C) = *(f32 *)(leader + 0x1C);
    *(f32 *)(obj + 0x20) = *(f32 *)(leader + 0x20);
    obj[0xC] = obj[0xC] - 6;
    if (obj[0xC] < 6U) {
        D_8011F2FD[objOffset] = 2;
    }
    phase = *(u16 *)(obj + 0x3E);
    switch (phase) {
    case 0:
        scale = *(f32 *)(obj + 0x34) + 0.2f;
        *(f32 *)(obj + 0x34) = scale;
        if (scale > 1.6f) {
            *(u16 *)(obj + 0x3E) = 1;
        }
        return;
    case 1:
        *(f32 *)(obj + 0x34) = *(f32 *)(obj + 0x34) * 0.4f;
        scale2 = *(f32 *)(obj + 0x30) + 0.02f;
        *(f32 *)(obj + 0x30) = scale2;
        *(f32 *)(obj + 0x38) = scale2;
        if (*(f32 *)(obj + 0x30) > 0.3f) {
            *(u16 *)(obj + 0x3E) = 2;
            return;
        }
        break;
    case 2:
        *(f32 *)(obj + 0x38) = 0.21f;
        *(f32 *)(obj + 0x34) = 0.21f;
        *(f32 *)(obj + 0x30) = 0.21f;
        break;
    }
}
