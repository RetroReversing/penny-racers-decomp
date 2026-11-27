typedef struct {
    u16 pad0; u16 size[4]; u8 padA[2]; u8 timer; u8 padD[0xB]; f32 pos[3]; u8 pad24[0x1C]; u16 x40; u8 pad42[2]; f32 vel[3]; u8 pad50[0x14];
} Obj;
typedef struct {
    u8 pad0[2]; u16 obj; u8 pad4[0x7B0]; f32 x7B4; u8 pad7B8[4]; f32 x7BC; f32 x7C0; u8 pad7C4[4]; f32 x7C8; u8 pad7CC[0x88]; f32 x854; u8 pad858[4]; f32 x85C; u8 pad860[0x90];
} Car;
typedef struct Def Def;
extern Obj D_8011F2F0[];
extern Car D_8022A770[];
extern f32 D_80187BE4;
extern u8 D_8023936C[];
void func_80143B68(void);
f32 func_801F99A8(s32);
u32 func_801FA30C(void);
u16 func_800DE41C(u8, u8, u8, u16, u8, u8, Def *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32);

void func_80143600(u16 id) {
    Obj *o_1;
    Obj *o_2;
    Obj *o_3;
    Obj *p;
    Car *car;
    s32 i;
    u8 found;
    u16 r;
    f32 dx;
    f32 dz;
    f32 y;

    o_1 = &D_8011F2F0[id];
    o_1->timer++;
    D_80187BE4 = func_801F99A8(o_1->timer);
    if (D_80187BE4 < 0.0f) {
        D_80187BE4 = -D_80187BE4;
    }
    found = 0;
    for (i = 0; i < 7; i++) {
        if (D_8022A770[i].obj != 0xFFFF) {
            car = &D_8022A770[i];
            p = &D_8011F2F0[car->obj];
            dx = p->pos[0] - 164.0f;
            dz = p->pos[2] - -3164.0f;
            if (dx * 0.0f + dz < 0.0f) {
                dx = p->pos[0] - -391.0f;
                dz = p->pos[2] - -3825.0f;
                if (dx * -0.01f + dz * -1.0f < 0.0f) {
                    if (dx * 0.97f + dz * -0.24f < 0.0f) {
                        dx = p->pos[0] - -741.0f;
                        dz = p->pos[2] - -3017.0f;
                        if (dx * -0.94f + dz * 0.34f < 0.0f) {
                            car->x854 -= D_80187BE4 * 7.65765e-05f;
                            car->x85C -= D_80187BE4 * 7.65765e-05f;
                            car->x7B4 -= D_80187BE4 * 7.65765e-05f;
                            car->x7BC -= D_80187BE4 * 0.009977477f;
                            car->x7C0 -= D_80187BE4 * 7.65765e-05f;
                            car->x7C8 -= D_80187BE4 * 0.009977477f;
                            found = 1;
                        }
                    } else {
                        dx = p->pos[0] - 226.0f;
                        dz = p->pos[2] - -3833.0f;
                        if (dx + dz * 0.09f < 0.0f) {
                            car->x854 -= D_80187BE4 * 0.000153153f;
                            car->x85C -= D_80187BE4 * 0.000153153f;
                            car->x7B4 -= D_80187BE4 * 0.000153153f;
                            car->x7BC -= D_80187BE4 * 0.019954953f;
                            car->x7C0 -= D_80187BE4 * 0.000153153f;
                            car->x7C8 -= D_80187BE4 * 0.019954953f;
                            found = 1;
                        } else {
                            dx = p->pos[0] - 676.0f;
                            dz = p->pos[2] - -3598.0f;
                            if (dx * 0.99f + dz * 0.15f < 0.0f) {
                                car->x854 -= D_80187BE4 * 7.65765e-05f;
                                car->x85C -= D_80187BE4 * 7.65765e-05f;
                                car->x7B4 -= D_80187BE4 * 7.65765e-05f;
                                car->x7BC -= D_80187BE4 * 0.009977477f;
                                car->x7C0 -= D_80187BE4 * 7.65765e-05f;
                                car->x7C8 -= D_80187BE4 * 0.009977477f;
                                found = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    if (found && !(o_1->timer & 7)) {
        dx = (f32) (func_801FA30C() & 0x7F) * 3.0787401f + -223.0f;
        y = (f32) (func_801FA30C() & 0x7F) + -99.0f;
        dz = -3000.0f;
        r = func_800DE41C(0, 0, 1, 0, 0x5B, 0xC8, (Def *) D_8023936C, (s32) func_80143B68, 0, dx, y, dz, 0.0f, 0.0f, 0.0f, 0.2f, 0.2f, 0.2f);
        if (r != 0xFFFF && r != 0xFFFE) {
            o_2 = (Obj *) (r * sizeof(Obj));
            o_3 = (Obj *) ((u32) o_2 + (u32) D_8011F2F0);
            o_3->size[0] = o_3->size[1] = o_3->size[2] = o_3->size[3] = 0x40;
            o_3->vel[0] = o_3->vel[1] = o_3->vel[2] = 0.0f;
            o_3->x40 = func_801FA30C();
        }
    }
}
