#include "common.h"

typedef struct { u8 *p; u8 pad[0x60]; } Rec;
extern Rec D_8011F350[];
extern u16 D_8018BC3C;

void func_80203F58(void)
{
    D_8011F350[D_8018BC3C].p[0] = 0;
    *(s16 *)(D_8011F350[D_8018BC3C].p + 2) = 0;
    *(s16 *)(D_8011F350[D_8018BC3C].p + 4) = 0;
    D_8011F350[D_8018BC3C].p[6] = 0;
    D_8011F350[D_8018BC3C].p[7] = 0;
    D_8011F350[D_8018BC3C].p[8] = 0;
    D_8011F350[D_8018BC3C].p[9] = 0xFF;
    *(s16 *)(D_8011F350[D_8018BC3C].p + 0xA) = 0x10;
    *(s16 *)(D_8011F350[D_8018BC3C].p + 0xC) = 0x4C;
    *(s16 *)(D_8011F350[D_8018BC3C].p + 0xE) = 0x64;
    *(s16 *)(D_8011F350[D_8018BC3C].p + 0x10) = 0x64;
}
