typedef struct {
    u8 flag; u8 id; u8 step; u8 mode;
    f32 x, y, z;
    f32 x2, y2, z2;
    u8 pad[4];
} Node;
typedef struct { u8 pad0[0x18]; f32 x, y, z; u8 pad1[4]; f32 f28; u8 pad2[0x64 - 0x2C]; } Rec;
typedef struct { u8 pad0[0x68]; u16 f68; u8 pad1[2]; } Step;
typedef struct {
    u8 pad0[2]; u16 f2; u16 f4; u16 f6;
    u8 pad1[0x597 - 8]; u8 f597;
    u8 pad2[0x748 - 0x598]; f32 f748; u8 f74C;
    u8 pad3[0x7B4 - 0x74D]; f32 f7B4, f7B8, f7BC, f7C0, f7C4, f7C8;
    u8 pad4[0x7D0 - 0x7CC]; s16 f7D0, f7D2;
    u8 pad5[0x814 - 0x7D4]; s16 f814, f816;
    u8 pad6[0x870 - 0x818]; u8 f870;
    u8 pad7[0x879 - 0x871]; u8 f879;
    u8 pad8[0x8DC - 0x87A]; Step *f8DC;
    u8 pad9[0x8E4 - 0x8E0]; u16 f8E4; s16 f8E6; s16 f8E8;
} Obj;
extern Rec D_8011F2F0[];
extern struct { u8 pad[0x20]; u16 v; } D_8006FAF0;
extern Node *D_80236EA0[];
extern u8 D_80236F58[];
extern f32 D_80237070[];
extern f32 D_80168574[];
extern u16 D_80233EC0;
s16 func_8012913C(u16, f32, f32, f32);

/* Steers an AI racer along the track path: when it reaches its target node it advances to the next path node, then snaps its target point and speed to it. */ void followTrackPath(Obj *obj) {
    Rec *rec = &D_8011F2F0[obj->f2];
    Node *node;
    Node *nearest;
    Step *step;
    f32 dist;
    f32 min;
    f32 dx, dy, dz;

    if (obj->f870 >= 0x79) {
        obj->f6 |= 0x10;
        node = D_80236EA0[D_8006FAF0.v];
        while (node->id != obj->f8E4) {
            if (node->flag == 0) {
                break;
            }
            node++;
        }
        if (node->flag != 0) {
            obj->f8E4 = node->step;
            obj->f8E6 = node->step - 1;
            obj->f8E8 = 0;
            obj->f597 = node->mode;
            step = &obj->f8DC[node->step];
            dx = (node->x2 - node->x) * 0.2f;
            dy = (node->y2 - node->y) * 0.2f;
            dz = (node->z2 - node->z) * 0.2f;
            if (obj->f879 == 2) {
                rec->x = node->x;
                rec->y = node->y + 20.0f;
                rec->z = node->z;
            } else {
                rec->x = dx * obj->f4 + node->x;
                rec->y = dy * obj->f4 + node->y + 20.0f;
                rec->z = dz * obj->f4 + node->z;
            }
        } else {
            min = 1000000.0f;
            node = D_80236EA0[D_8006FAF0.v];
            nearest = 0;
            while (node->flag != 0) {
                f32 ex = rec->x - node->x;
                f32 ey = rec->y - node->y;
                f32 ez = rec->z - node->z;
                dist = sqrtf(ex * ex + ey * ey + ez * ez);
                if (dist < min) {
                    min = dist;
                    nearest = node;
                }
                node++;
            }
            if (nearest == 0) {
                goto done;
            }
            obj->f8E4 = nearest->step;
            obj->f8E6 = nearest->step - 1;
            obj->f8E8 = 0;
            obj->f597 = nearest->mode;
            step = &obj->f8DC[nearest->step];
            dx = (nearest->x2 - nearest->x) * 0.2f;
            dy = (nearest->y2 - nearest->y) * 0.2f;
            dz = (nearest->z2 - nearest->z) * 0.2f;
            if (obj->f879 == 2) {
                rec->x = nearest->x;
                rec->y = nearest->y + 20.0f;
                rec->z = nearest->z;
            } else {
                rec->x = dx * obj->f4 + nearest->x;
                rec->y = dy * obj->f4 + nearest->y + 20.0f;
                rec->z = dz * obj->f4 + nearest->z;
            }
        }
        rec->f28 = step->f68;
        obj->f748 = 1000.0f;
        obj->f74C = 0;
        obj->f7B4 = obj->f7B8 = obj->f7BC = 0.0f;
        obj->f7C0 = obj->f7C8 = obj->f7C4 = 0.0f;
        obj->f7D0 = func_8012913C(D_80233EC0, rec->x, rec->y, rec->z);
        obj->f7D2 = 0;
        obj->f814 = func_8012913C(D_80233EC0, rec->x, rec->y, rec->z);
        obj->f816 = 0;
    }
done:
    if (D_80236F58[obj->f8E4] == 0 && !(rec->y < D_80237070[obj->f8E4])) {
        do { } while (0);
        if (rec->y <= D_80168574[D_8006FAF0.v]) {
            rec->y = D_80168574[D_8006FAF0.v];
            obj->f7B4 = obj->f7B8 = obj->f7BC = 0.0f;
            obj->f7C0 = obj->f7C8 = obj->f7C4 = 0.0f;
            obj->f870++;
        } else {
            obj->f870 = 0;
        }
    } else {
        obj->f870++;
    }
}
