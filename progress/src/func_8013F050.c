f32 sqrtf(f32);
typedef struct {
    f32 x;
    f32 y;
    f32 z;
    char padC[0x58];
} Obj;
typedef struct {
    u16 id;
    char pad2[0x8EE];
} Slot;
typedef struct {
    char pad0[0x60];
    s8 owner[7];
    u8 hit[7];
    char pad6E[2];
    f32 range;
} Zone;
extern Obj D_8011F308[];
extern Slot slotObjIds[];

s32 func_8013F050(u16 arg0, Zone *arg1)
{
    f32 x;
    f32 y;
    f32 z;
    f32 dx;
    f32 dy;
    f32 dz;
    s32 i;
    s32 j;

    x = D_8011F308[arg0].x;
    y = D_8011F308[arg0].y;
    z = D_8011F308[arg0].z;
    for (i = 0; i < 7; i++) {
        if (arg1->owner[i] != -1) {
            j = slotObjIds[i].id;
            dx = x - D_8011F308[j].x;
            dy = y - D_8011F308[j].y;
            dz = z - D_8011F308[j].z;
            if (sqrtf(dx * dx + dy * dy + dz * dz) < arg1->range) {
                if (arg1->hit[i] == 0) {
                    arg1->hit[i] = 1;
                    return 1;
                }
            }
        }
    }
    return 0;
}
