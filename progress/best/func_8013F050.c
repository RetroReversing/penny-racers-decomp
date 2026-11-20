extern char D_8011F308[];
typedef struct { u16 f0; u8 pad[2286]; } Slot_8022A772;
extern Slot_8022A772 D_8022A772[];

f32 sqrtf(f32);

s32 func_8013F050(s32 arg0, s8 *arg1) {
    f32 x;
    f32 y;
    f32 z;
    f32 dx;
    f32 dy;
    f32 dz;
    f32 dist;
    s32 i;
    s32 j;

    x = *(f32 *)(D_8011F308 + (arg0 & 0xFFFF) * 100);
    y = *(f32 *)(D_8011F308 + 4 + (arg0 & 0xFFFF) * 100);
    z = *(f32 *)(D_8011F308 + 8 + (arg0 & 0xFFFF) * 100);
    for (i = 0; i < 7; i++) {
        if ((arg1 + i)[0x60] != -1) {
            j = D_8022A772[(unsigned short)i].f0 * 100;
            dx = x - *(f32 *)(D_8011F308 + j);
            dy = y - *(f32 *)(D_8011F308 + 4 + j);
            dz = z - *(f32 *)(D_8011F308 + 8 + j);
            dist = sqrtf(dx * dx + dy * dy + dz * dz);
            if (dist < *(f32 *)(arg1 + 0x70)) {
                if (arg1[i + 0x67] == 0) {
                    arg1[i + 0x67] = 1;
                    return 1;
                }
            }
        }
    }
    return 0;
}
