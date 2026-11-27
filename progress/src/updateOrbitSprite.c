f32 __sinf(f32);
f32 __cosf(f32);
typedef struct {
    u8 pad0[2];
    u16 index;
} Link;
typedef struct {
    u32 pad0;
    Link *link;
    f32 vx;
    f32 vy;
    f32 vz;
    s16 timer;
    u8 phase;
    u8 pad17[0x5F];
    u16 handle;
} Orbiter;
typedef struct {
    u8 pad0[0xC];
    u8 alpha;
    u8 mode;
    u8 padE[0xA];
    f32 x;
    f32 y;
    f32 z;
    u8 pad24[0xC];
    f32 scaleX;
    f32 scaleY;
    u8 pad38[6];
    u16 state;
    u8 pad40[0x20];
    Orbiter *work;
} Sprite;
extern Sprite D_8011F2F0[];

/* Sprite that bobs and sways around its parent while it has a timer running.
 * When the timer runs out it drifts to a stop, fades out and switches to mode 2. */
void updateOrbitSprite(u16 id)
{
    Sprite *self = &D_8011F2F0[id];
    Orbiter *o = self->work;
    Sprite *parent = &D_8011F2F0[o->link->index];
    f32 dx;
    f32 dz;
    f32 h;

    if (--o->timer == 0) {
        D_8011F2F0[id].state = 1;
    }
    dx = __sinf((o->timer * 45.0f + o->phase * 660.0f) * 0.002454369f) * 10.0f;
    dz = __cosf((o->timer * 45.0f + o->phase * 660.0f) * 0.002454369f) * 10.0f;
    self->scaleX = __sinf(o->timer * 0.002454369f * 50.0f) * 0.075f + 0.15f;
    self->scaleY = __cosf(o->timer * 0.002454369f * 50.0f) * 0.075f + 0.15f;
    switch (D_8011F2F0[id].state) {
    case 0:
        h = parent->y + 8.0f;
        h += __sinf((o->timer * 60.0f + o->phase * 600.0f) * 0.002454369f);
        if (h < self->y) {
            o->vy = o->vy - 1.0f;
        } else {
            o->vy = o->vy + 1.0f;
        }
        o->vx = (dx + parent->x - self->x) * 0.3f;
        o->vy = o->vy * 0.5f;
        o->vz = (dz + parent->z - self->z) * 0.3f;
        self->x = self->x + o->vx;
        self->y = self->y + o->vy;
        self->z = self->z + o->vz;
        break;
    case 1:
        o->vx = o->vx * 0.1f;
        o->vy = o->vy * 0.1f;
        o->vz = o->vz * 0.1f;
        self->x = self->x + o->vx;
        self->y = self->y + o->vy;
        self->z = self->z + o->vz;
        D_8011F2F0[id].alpha -= 5;
        if (D_8011F2F0[id].alpha < 6) {
            func_8013E49C(o->handle);
            D_8011F2F0[id].mode = 2;
        }
        break;
    }
}
