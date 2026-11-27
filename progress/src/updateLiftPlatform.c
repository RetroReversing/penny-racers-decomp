typedef struct { u8 pad[0x67]; u8 flags[7]; } Info;
typedef struct { u8 pad0[0x1C]; f32 y; u8 pad20[0x1E]; u16 state; u16 timer; u8 pad42[0x1E]; u8 *info; u8 pad64[0]; } Obj;
extern Obj D_8011F2F0[];
void liftCopyFlags(u16);
void queueObjEvent(u16, s32);
void liftHitCars(u16, u8 *);
void liftPushCars(u16, u8 *);

/* One frame of a lift platform: rises 4 units, pauses, falls 4 units, and
 * checks sCars against its zone while it moves. Triggers an event at each step. */
void updateLiftPlatform(u16 id) {
    Obj *obj;
    u8 *zone;
    s32 i;

    obj = &D_8011F2F0[id];
    zone = D_8011F2F0[id].info;
    liftCopyFlags(id);
    switch (D_8011F2F0[id].state) {
    case 0:
        if (--D_8011F2F0[id].timer == 0) {
            D_8011F2F0[id].timer = 10;
            D_8011F2F0[id].state = 1;
            queueObjEvent(id, 0x23);
        }
        break;
    case 1:
        obj->y += 4.0f;
        if (--D_8011F2F0[id].timer == 0) {
            D_8011F2F0[id].timer = 100;
            D_8011F2F0[id].state = 2;
        }
        liftHitCars(id, zone);
        for (i = 0; i < 7; i++) {
            ((Info *) zone)->flags[i] = 0;
        }
        break;
    case 2:
        if (--D_8011F2F0[id].timer == 0) {
            D_8011F2F0[id].timer = 10;
            D_8011F2F0[id].state = 3;
            queueObjEvent(id, 0x23);
        }
        liftPushCars(id, zone);
        break;
    case 3:
        obj->y -= 4.0f;
        if (--D_8011F2F0[id].timer == 0) {
            D_8011F2F0[id].timer = 10;
            D_8011F2F0[id].state = 4;
        }
        liftPushCars(id, zone);
        break;
    case 4:
        if (--D_8011F2F0[id].timer == 0) {
            D_8011F2F0[id].timer = 10;
            D_8011F2F0[id].state = 5;
            queueObjEvent(id, 0x23);
        }
        break;
    case 5:
        obj->y += 4.0f;
        if (--D_8011F2F0[id].timer == 0) {
            D_8011F2F0[id].timer = 10;
            D_8011F2F0[id].state = 6;
        }
        liftHitCars(id, zone);
        for (i = 0; i < 7; i++) {
            ((Info *) zone)->flags[i] = 0;
        }
        break;
    case 6:
        if (--D_8011F2F0[id].timer == 0) {
            D_8011F2F0[id].timer = 10;
            D_8011F2F0[id].state = 7;
            queueObjEvent(id, 0x23);
        }
        liftPushCars(id, zone);
        break;
    case 7:
        obj->y -= 4.0f;
        if (--D_8011F2F0[id].timer == 0) {
            D_8011F2F0[id].timer = 100;
            D_8011F2F0[id].state = 0;
        }
        liftPushCars(id, zone);
        break;
    }
}
