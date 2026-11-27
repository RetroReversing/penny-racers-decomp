typedef struct { u8 type; u8 y; s8 x; s8 z; s8 pad; } Point;
typedef struct { u8 a; u8 b; u8 count; } Info;
typedef struct { f32 x; f32 y; f32 z; f32 rot; } Out;
extern Info *D_801C7AB0;

void func_801B312C(Point *p, Out *out, u8 n, f32 x, f32 z) {
    u8 i;

    for (i = 0; i < n; i++, out++) {
        if (p->type == 0) {
            if (n == 1) {
                out->x = p->x * 400.0f + 75.0f + (x - 75.0f);
            } else if (n == 2) {
                out->x = p->x * 400.0f + (f32) (i + 1) * 50.0f + (x - 75.0f);
            } else if (n == 3) {
                out->x = p->x * 400.0f + (f32) i * 75.0f + (x - 75.0f);
            } else if (n == 4) {
                out->x = p->x * 400.0f + (f32) i * 50.0f + (x - 75.0f);
            }
            if (D_801C7AB0->b == 5) {
                out->y = p[D_801C7AB0->count - 1].y;
                out->z = (p->z + 1) * 400.0f + (z - 180.0f);
            } else {
                out->y = p->y;
                out->z = p->z * 400.0f + (z - 180.0f);
            }
            out->rot = 180.0f;
        } else if (p->type == 1) {
            if (D_801C7AB0->b == 5) {
                out->x = (p->x + 1) * 400.0f + (x - 170.0f);
                out->y = p[D_801C7AB0->count - 1].y;
            } else {
                out->x = p->x * 400.0f + (x - 170.0f);
                out->y = p->y;
            }
            if (n == 1) {
                out->z = p->z * 400.0f + 75.0f + (z - 75.0f);
            } else if (n == 2) {
                out->z = p->z * 400.0f + (f32) (i + 1) * 50.0f + (z - 75.0f);
            } else if (n == 3) {
                out->z = p->z * 400.0f + (f32) i * 75.0f + (z - 75.0f);
            } else if (n == 4) {
                out->z = p->z * 400.0f + (f32) i * 50.0f + (z - 75.0f);
            }
            out->rot = 270.0f;
        } else if (p->type == 2) {
            if (n == 1) {
                out->x = p->x * 400.0f + 75.0f + (x - 75.0f);
            } else if (n == 2) {
                out->x = p->x * 400.0f + (f32) (i + 1) * 50.0f + (x - 75.0f);
            } else if (n == 3) {
                out->x = p->x * 400.0f + (f32) i * 75.0f + (x - 75.0f);
            } else if (n == 4) {
                out->x = p->x * 400.0f + (f32) i * 50.0f + (x - 75.0f);
            }
            if (D_801C7AB0->b == 5) {
                out->y = p[D_801C7AB0->count - 1].y;
                out->z = (p->z - 1) * 400.0f + (z + 180.0f);
            } else {
                out->y = p->y;
                out->z = p->z * 400.0f + (z + 180.0f);
            }
            out->rot = 0.0f;
        } else if (p->type == 3) {
            if (D_801C7AB0->b == 5) {
                out->x = (p->x - 1) * 400.0f + (x + 170.0f);
                out->y = p[D_801C7AB0->count - 1].y;
            } else {
                out->x = p->x * 400.0f + (x + 170.0f);
                out->y = p->y;
            }
            if (n == 1) {
                out->z = p->z * 400.0f + 75.0f + (z - 75.0f);
            } else if (n == 2) {
                out->z = p->z * 400.0f + (f32) (i + 1) * 50.0f + (z - 75.0f);
            } else if (n == 3) {
                out->z = p->z * 400.0f + (f32) i * 75.0f + (z - 75.0f);
            } else if (n == 4) {
                out->z = p->z * 400.0f + (f32) i * 50.0f + (z - 75.0f);
            }
            out->rot = 90.0f;
        }
    }
}
