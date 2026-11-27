typedef struct {
    u8 pad0[8];
    f32 v[3];
    s16 timer;
    u8 pad16[0x60];
    u16 sound;
} Part;
typedef struct {
    u8 pad0[0xC];
    u8 alpha;
    u8 mode;
    u8 padE[0x22];
    f32 scale;
    u8 pad34[0xA];
    u16 phase;
    u8 pad40[0x20];
    Part *part;
} Obj;
extern Obj D_8011F2F0[];
void func_8013EB20(s32, Part *, f32, f32, f32);
void func_8013EC48(s32, f32);
void func_801655A8(u16 id)
{
    Part *p;

    p = D_8011F2F0[id].part;
    switch (D_8011F2F0[id].phase) {
    case 0:
        func_8013EB20(id, p, -p->v[0] * 0.2f, -p->v[1] * 0.15f, -p->v[2] * 0.2f);
        D_8011F2F0[id].alpha += 0xC;
        if (--p->timer < 0) {
            D_8011F2F0[id].phase = 1;
        }
        break;
    case 1:
        func_8013EC48(id, (4.0f - D_8011F2F0[id].scale) * 0.2f + D_8011F2F0[id].scale);
        if (D_8011F2F0[id].scale > 3.9f) {
            D_8011F2F0[id].phase = 2;
        }
        break;
    case 2:
        func_8013EB20(id, p, 0.0f, 0.001f, 0.0f);
        D_8011F2F0[id].alpha -= 1;
        if (D_8011F2F0[id].alpha < 5) {
            func_8013E49C(p->sound);
            D_8011F2F0[id].mode = 2;
        }
        break;
    }
}
