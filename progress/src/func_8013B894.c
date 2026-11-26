typedef struct {
    u8 pad0[0xD];
    u8 state;
    u8 pad1[0xA];
    f32 x;
    f32 y;
    f32 z;
    u8 pad2[0x20];
    f32 angle;
    f32 floor;
    u8 pad3[0x18];
} Particle;
extern Particle D_8011F2F0[];
f32 __cosf(f32);
f32 __sinf(f32);
void func_8013B894(u16 id)
{
    if (D_8011F2F0[id].floor < D_8011F2F0[id].y) {
        D_8011F2F0[id].y -= 0.6f;
        D_8011F2F0[id].angle += 0.02f;
        if (id & 1) {
            D_8011F2F0[id].x += __sinf(D_8011F2F0[id].angle);
            D_8011F2F0[id].z += __cosf(D_8011F2F0[id].angle);
        } else {
            D_8011F2F0[id].x -= __cosf(D_8011F2F0[id].angle);
            D_8011F2F0[id].z -= __sinf(D_8011F2F0[id].angle);
        }
    } else {
        D_8011F2F0[id].state = 2;
    }
}
