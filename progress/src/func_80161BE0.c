typedef struct { u8 used; s8 target; f32 x[8], y[8], z[8], a[8], b[8], c[8]; } Trail;
typedef struct { u8 pad0[0x18]; f32 x, y, z; u8 pad24[4]; f32 angle; u8 pad2C[0x38]; } Cam;
typedef struct { u8 pad0[4]; void *owner; u8 pad8[0xE]; u8 unk16; u8 pad17[0x65]; } Row;
typedef struct { u8 v[0x7C]; } Hit;
typedef struct { f32 v; u8 pad[0x78]; } HitF;
extern Trail D_8018A460[][3];
extern Cam D_8011F2F0[];
extern Row hitSlots[];
extern Hit slotHitFlags[];
extern HitF slotRadius[];
extern f32 sGroupSortKeys[][6];
extern u8 sGroupSortValues[][6];
extern u8 sCars[];
extern void func_80162460(void), func_80162BB0(void), stepCarPartAnim(void);
s32 objCreate(s32, s32, s32, s32, s32, s32, void *, void *, void *, f32, f32, f32, f32, f32, f32, f32, f32, f32);
void launchBall(s32, s32, void *, s32, f32, f32, f32, f32, f32, f32, s32);
void queueObjEvent(s32, s32);
void func_8003DF6C(void *, f32, f32, f32, f32 *, f32 *, f32 *);

void func_80161BE0(u8 *car) {
    Cam *rec = &D_8011F2F0[*(u16 *) (car + 2)];
    s32 id;
    s32 o;
    s32 i;
    s32 count;
    s32 f;
    Trail *t;
    u8 *other;
    Cam *oc;
    f32 d;
    f32 v[3];

    if (*(s32 *) (car + 0x898) == 1 && (f = *(u16 *) (car + 0x560), !(f & 8)) && (f & 7) < 4
        && (u8) (car[0x8A1] - 2) >= 2) {
        id = raceAllocSlot();
        if ((u16) id != 0xFFFF) {
            for (i = 0; i < 3; i++) {
                t = &D_8018A460[*(u16 *) (car + 4)][i];
                if (!t->used) {
                    break;
                }
            }
            if (i == 3) {
                goto fail;
            }
            t->used = 1;
            o = objCreate(0, 0, 3, 0, 0x5B, (u8) i, 0, func_80162460, func_80162BB0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
            if ((u16) (o + 2) < 2) {
            fail:
                func_8013E49C(id);
                return;
            }
            count = *(u16 *) (car + 0x560) & 7;
            *(u16 *) (car + 0x560) = (*(u16 *) (car + 0x560) & 0xF8) | (count + 1);
            t->target = -1;
            for (i = 0; i < 7 && i < 6; i++) {
                if (t->target != -1) {
                    break;
                }
                    if (sGroupSortKeys[*(u16 *) (car + 4)][i] < 2000.0f) {
                        other = sCars + sGroupSortValues[*(u16 *) (car + 4)][i] * 0x8F0;
                        oc = &D_8011F2F0[*(u16 *) (other + 2)];
                        d = rec->angle - (f32) (u16) angleFromDelta((s32) (oc->z - rec->z), (s32) (oc->x - rec->x));
                        d = d > 0.0f ? d : -d;
                        if (other[0x879] == 0) {
                            if (d < 50.0f && other[0x8A1] != 4 && other[0x8D0] == 0) {
                                t->target = sGroupSortValues[*(u16 *) (car + 4)][i];
                                i = 7;
                            }
                        } else if (d < 50.0f) {
                            t->target = sGroupSortValues[*(u16 *) (car + 4)][i];
                            i = 7;
                        }
                    }
            }
            if (t->target == -1) {
                func_8003DF6C(car + 0x6D4, (f32) (car[0x778] & 0x1F) - 20.0f, 20.0f, *(f32 *) (car + 0x774) * 0.3f + 20.0f, &v[0], &v[1], &v[2]);
            } else {
                func_8003DF6C(car + 0x6D4, (f32) (car[0x778] & 0x1F) - 20.0f, 15.0f, *(f32 *) (car + 0x774) * 0.3f + -20.0f, &v[0], &v[1], &v[2]);
            }
            launchBall(id & 0xFFFF, (u16) o, car, 0x40, 0.0f, 0.0f, 0.0f, v[0], v[1], v[2], 0x12C);
            hitSlots[(u16) id].owner = car;
            slotHitFlags[(u16) id].v[*(u16 *) (car + 4)] = 1;
            slotRadius[(u16) id].v = 30.0f;
            hitSlots[(u16) id].unk16 = 0;
            for (i = 0; i < 8; i++) {
                t->x[i] = rec->x;
                t->y[i] = rec->y;
                t->z[i] = rec->z;
                t->a[i] = t->b[i] = t->c[i] = 0.0f;
            }
            if (*(s16 *) (car + 0x55E) > 0) {
                *(s16 *) (car + 0x55E) -= 1;
                if (*(s16 *) (car + 0x55E) == 0) {
                    objCreate(0, car[5], 3, 0, 0x5B, 0, 0, stepCarPartAnim, 0, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 1.0f, 1.0f);
                    count = *(u16 *) (car + 0x560) & 7;
                    *(u16 *) (car + 0x560) = (*(u16 *) (car + 0x560) & 0xF8) | (count + 1);
                    queueObjEvent(*(u16 *) (car + 2), 0x2A);
                }
            }
            queueObjEvent((u16) o, 0x2E);
        }
    }
}
