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
extern Slot D_8022A772[];
extern u8 D_8011F2F0[];
extern u8 D_8022A770[];

s32 func_8013EDFC(s32 arg0, void *a1)
{
    Zone *arg1 = a1;
    f32 x;
    f32 y;
    f32 z;
    f32 dx;
    f32 dy;
    f32 dz;
    s32 i;
    s32 j;
    u8 *p;
    u8 *s0;

    p = D_8011F2F0 + ((arg0 & 0xFFFF) * 0x64);
    x = *(f32 *)(p + 0x18);
    y = *(f32 *)(p + 0x1C);
    z = *(f32 *)(p + 0x20);
    for (i = 0; i < 7; i++) {
        if (arg1->owner[i] != -1) {
            s0 = D_8022A770 + arg1->owner[i] * 0x8F0;
            j = D_8022A772[i].id;
            dx = x - D_8011F308[j].x;
            dy = y - D_8011F308[j].y;
            dz = z - D_8011F308[j].z;
            if (sqrtf(dx * dx + dy * dy + dz * dz) < arg1->range) {
                if (arg1->hit[i] == 0) {
                    arg1->hit[i] = 1;
                    if (!(*(u16 *)(s0 + 0x560) & 0x20) && *(u8 *)(s0 + 0x8A1) != 4) {
                        *(u8 *)(s0 + 0x8A1) = 3;
                        *(u8 *)(s0 + 0x8C8) = 0;
                        *(u8 *)(s0 + 0x8C9) = 1;
                        *(f32 *)(s0 + 0x8CC) = 360.0f;
                        *(f32 *)(s0 + 0x7B4) = -dx * 0.025f;
                        *(f32 *)(s0 + 0x7BC) = -dz * 0.025f;
                        *(f32 *)(s0 + 0x7C0) = -dx * 0.025f;
                        *(f32 *)(s0 + 0x7C8) = -dz * 0.025f;
                        func_801D7028(*(u16 *)(s0 + 2), 0x34);
                    }
do { do { ((M *)s0)->e[arg1->info[2]].v = (1.0f - ((M *)s0)->e[arg1->info[2]].v) * *(f32 *)(s0 + 0x5A0) + ((M *)s0)->e[arg1->info[2]].v; } while (0); } while (0);
                }
            }
        }
    }
    return (s32)((u8 *)arg1 + i);
}
