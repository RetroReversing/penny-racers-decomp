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

/* Advances one player's fade state machine: starts the mode-1 fade, then steps fade-in or fade-out and sets alpha. */ void updatePlayerFade(u16 playerId)
{
    Fade *curFade;
    Fade *alphaFade;

    switch (playerSlots[playerId].mode) {
    case 0:
        playerSlots[playerId].mode = 1;
    case 1:
        break;
    default:
        return;
    }
    switch (D_8011F350[playerId].fade->state) {
    case 0:
        break;
    case 1:
        D_8011F350[playerId].fade->timer = 0;
        D_8011F350[playerId].fade->alpha = 0xFF;
        D_8011F350[playerId].fade->state = 3;
        break;
    case 2:
        D_8011F350[playerId].fade->timer = 0;
        D_8011F350[playerId].fade->alpha = 0;
        D_8011F350[playerId].fade->state = 4;
        break;
    case 3:
        curFade = D_8011F350[playerId].fade;
        if (curFade->timer < curFade->max) {
            curFade->timer++;
        } else {
            D_8011F350[playerId].fade->state = 0;
        }
        alphaFade = D_8011F350[playerId].fade;
        alphaFade->alpha = ~(alphaFade->timer * 255 / alphaFade->max);
        break;
    case 4:
        curFade = D_8011F350[playerId].fade;
        if (curFade->timer < curFade->max) {
            curFade->timer++;
        } else {
            D_8011F350[playerId].fade->state = 0;
        }
        alphaFade = D_8011F350[playerId].fade;
        alphaFade->alpha = alphaFade->timer * 255 / alphaFade->max;
        break;
    }
}
