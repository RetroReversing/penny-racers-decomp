typedef struct {
    u8 state;
    u8 pad1;
    u16 max;
    u16 timer;
    u8 pad6[3];
    u8 alpha;
} Fade;
typedef struct {
    u16 mode;
    u8 pad[0x62];
} ModeSlot;
typedef struct {
    Fade *fade;
    u8 pad[0x60];
} FadeSlot;
extern ModeSlot playerSlots[];
extern FadeSlot D_8011F350[];

void func_801CE928(u16 id)
{
    Fade *f;
    Fade *g;

    switch (playerSlots[id].mode) {
    case 0:
        playerSlots[id].mode = 1;
    case 1:
        break;
    default:
        return;
    }
    switch (D_8011F350[id].fade->state) {
    case 0:
        break;
    case 1:
        D_8011F350[id].fade->timer = 0;
        D_8011F350[id].fade->alpha = 0xFF;
        D_8011F350[id].fade->state = 3;
        break;
    case 2:
        D_8011F350[id].fade->timer = 0;
        D_8011F350[id].fade->alpha = 0;
        D_8011F350[id].fade->state = 4;
        break;
    case 3:
        f = D_8011F350[id].fade;
        if (f->timer < f->max) {
            f->timer++;
        } else {
            D_8011F350[id].fade->state = 0;
        }
        g = D_8011F350[id].fade;
        g->alpha = ~(g->timer * 255 / g->max);
        break;
    case 4:
        f = D_8011F350[id].fade;
        if (f->timer < f->max) {
            f->timer++;
        } else {
            D_8011F350[id].fade->state = 0;
        }
        g = D_8011F350[id].fade;
        g->alpha = g->timer * 255 / g->max;
        break;
    }
}
