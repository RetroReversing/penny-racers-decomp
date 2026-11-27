typedef struct { u8 pad0[0x770]; f32 f770; } Sub;
typedef struct {
    u8 pad0[0xC]; u8 timer; u8 hidden; u16 owner; u8 pad10[8];
    f32 pos[3]; u8 pad24[0xC]; f32 scale[3]; u8 pad3C[2]; u16 kind; u8 pad40[4]; f32 vel[3]; u8 pad50[0x10]; Sub *sub; 
} Obj;
extern Obj D_8011F2F0[];

/* Grows a particle effect, drifts it with its velocity and hides it once its timer runs out. */ void updateExpandingFx(u16 fxIndex) {
    Sub *sub;

    sub = D_8011F2F0[D_8011F2F0[fxIndex].owner].sub;
    if (D_8011F2F0[fxIndex].timer >= 0x33) {
        switch (D_8011F2F0[fxIndex].kind) {
        case 16:
            D_8011F2F0[fxIndex].scale[0] += sub->f770 * 0.0003f;
            D_8011F2F0[fxIndex].scale[1] += sub->f770 * 0.0003f;
            D_8011F2F0[fxIndex].scale[2] += sub->f770 * 0.0003f;
            D_8011F2F0[fxIndex].pos[1] += sub->f770 * 0.006f;
            D_8011F2F0[fxIndex].timer -= 2;
            break;
        case 11:
        case 12:
        case 32:
        case 33:
        case 34:
        case 35:
            D_8011F2F0[fxIndex].scale[0] += 0.03f;
            D_8011F2F0[fxIndex].scale[1] += 0.03f;
            D_8011F2F0[fxIndex].scale[2] += 0.03f;
            D_8011F2F0[fxIndex].pos[1] += sub->f770 * 0.006f;
            D_8011F2F0[fxIndex].timer -= 3;
            break;
        case 13:
        case 36:
        case 37:
            D_8011F2F0[fxIndex].scale[0] += 0.05f;
            D_8011F2F0[fxIndex].scale[1] += 0.05f;
            D_8011F2F0[fxIndex].scale[2] += 0.05f;
            D_8011F2F0[fxIndex].pos[1] += sub->f770 * 0.006f;
            D_8011F2F0[fxIndex].timer -= 2;
            break;
        case 17:
        case 40:
        case 41:
            D_8011F2F0[fxIndex].scale[0] += 0.005f;
            D_8011F2F0[fxIndex].scale[1] += sub->f770 * 0.0002f;
            D_8011F2F0[fxIndex].scale[2] += sub->f770 * 0.0002f;
            D_8011F2F0[fxIndex].timer -= 4;
            break;
        case 45:
        default:
            D_8011F2F0[fxIndex].scale[0] += 0.01f;
            D_8011F2F0[fxIndex].scale[1] += 0.01f;
            D_8011F2F0[fxIndex].scale[2] += 0.01f;
            D_8011F2F0[fxIndex].timer -= 3;
            break;
        }
        D_8011F2F0[fxIndex].pos[0] += D_8011F2F0[fxIndex].vel[0];
        D_8011F2F0[fxIndex].pos[1] += D_8011F2F0[fxIndex].vel[1];
        D_8011F2F0[fxIndex].pos[2] += D_8011F2F0[fxIndex].vel[2];
        D_8011F2F0[fxIndex].vel[0] *= 0.95f;
        D_8011F2F0[fxIndex].vel[1] *= 0.6f;
        D_8011F2F0[fxIndex].vel[2] *= 0.95f;
    } else {
        D_8011F2F0[fxIndex].hidden = 2;
    }
}
