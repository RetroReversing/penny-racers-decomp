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

/* Runs a car part's burst effect: fling it outward, grow it, then fade it out and play its sound. */
void updateCarPartEffect(u16 objIndex)
{
    Part *part;

    part = D_8011F2F0[objIndex].part;
    switch (D_8011F2F0[objIndex].phase) {
    case 0:
        func_8013EB20(objIndex, part, -part->v[0] * 0.2f, -part->v[1] * 0.15f, -part->v[2] * 0.2f);
        D_8011F2F0[objIndex].alpha += 0xC;
        if (--part->timer < 0) {
            D_8011F2F0[objIndex].phase = 1;
        }
        break;
    case 1:
        func_8013EC48(objIndex, (4.0f - D_8011F2F0[objIndex].scale) * 0.2f + D_8011F2F0[objIndex].scale);
        if (D_8011F2F0[objIndex].scale > 3.9f) {
            D_8011F2F0[objIndex].phase = 2;
        }
        break;
    case 2:
        func_8013EB20(objIndex, part, 0.0f, 0.001f, 0.0f);
        D_8011F2F0[objIndex].alpha -= 1;
        if (D_8011F2F0[objIndex].alpha < 5) {
            func_8013E49C(part->sound);
            D_8011F2F0[objIndex].mode = 2;
        }
        break;
    }
}
