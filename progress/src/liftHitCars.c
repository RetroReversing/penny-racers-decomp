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
    char pad0[0x4];
    u16 *info;
    char pad8[0x58];
    s8 owner[7];
    u8 hit[7];
    char pad6E[2];
    f32 range;
} Zone;
typedef struct { f32 v; s32 w; } E;
typedef struct { char pad[0x5B4]; E e[1]; } M;
extern Obj D_8011F308[];
extern Slot slotObjIds[];
extern u8 D_8011F2F0[];
extern u8 sCars[];

extern s16 liftHitIndex;

typedef union { s32 i; f32 f; } Bits;

/* Checks the seven hit zones of an object against nearby cars. On the first car in range
 * that has not been hit yet, knocks it up and records which zone was hit. */
s32 liftHitCars(s32 objIndex, void *zonePtr)
{
    Zone *zone = zonePtr;
    Bits x;
    f32 y;
    f32 z;
    f32 dx;
    f32 dy;
    f32 dz;
    s32 i;
    s32 j;
    u8 *car;

    liftHitIndex = 0;
    x.i = *(s32 *) &D_8011F308[objIndex & 0xFFFF].x;
    y = D_8011F308[objIndex & 0xFFFF].y;
    z = D_8011F308[objIndex & 0xFFFF].z;
    for (i = 0; i < 7; i++) {
        if (zone->owner[i] != -1) {
do { do { do { 
            car = sCars + zone->owner[i] * 0x8F0;
            j = slotObjIds[i].id;
            dx = x.f - D_8011F308[j].x;
            dy = y - D_8011F308[j].y;
            dz = z - D_8011F308[j].z;
            if (sqrtf(dx * dx + dy * dy + dz * dz) < zone->range) {
                if (zone->hit[i] == 0) {
                    if (!(*(u16 *)(car + 0x560) & 0x20)) {
                        *(u8 *)(car + 0x8A1) = 3;
                        *(u8 *)(car + 0x8C8) = 0;
                        *(u8 *)(car + 0x8C9) = 1;
                        *(f32 *)(car + 0x8CC) = 360.0f;
                        *(f32 *)(car + 0x7B4) = -dx * 0.025f;
                        *(f32 *)(car + 0x7BC) = -dz * 0.025f;
                        *(f32 *)(car + 0x7C0) = -dx * 0.025f;
                        *(f32 *)(car + 0x7C8) = -dz * 0.025f;
                        queueObjEvent(*(u16 *)(car + 2), 0x34);
                    }
do { do { do { do { do { do { ((M *)car)->e[zone->info[2]].v = (1.0f - ((M *)car)->e[zone->info[2]].v) * *(f32 *)(car + 0x5A0) + ((M *)car)->e[zone->info[2]].v; } while (0); } while (0); } while (0); } while (0); } while (0); } while (0);
                    zone->hit[i] = 1;
                    liftHitIndex = i;
                    return 1;
                }
            }
} while (0); } while (0); } while (0);
        }
    }
    return 0;
}
