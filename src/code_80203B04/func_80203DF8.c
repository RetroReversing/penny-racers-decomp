#include "decompdecomp_sync_8e97415cd29f22d6593e.h"
#line 1 "func.c"
typedef struct {
    u8 *p;
    u8 pad[96];
} Ent;

extern Ent D_8011F350[];
extern u16 D_8018BC3C;

void func_80203DF8(s8 arg0, s16 arg1, s8 arg2, s8 arg3, u8 arg4) {
    D_8011F350[D_8018BC3C].p[0] = 0;
    *(s16 *)(D_8011F350[D_8018BC3C].p + 2) = arg1;
    *(s16 *)(D_8011F350[D_8018BC3C].p + 4) = 0;
    if ((u8)arg0 == 2) {
        D_8011F350[D_8018BC3C].p[6] = arg2;
        D_8011F350[D_8018BC3C].p[7] = arg3;
        D_8011F350[D_8018BC3C].p[8] = arg4;
    }
    *(s16 *)(D_8011F350[D_8018BC3C].p + 0xA) = 0;
    *(s16 *)(D_8011F350[D_8018BC3C].p + 0xC) = 0;
    *(s16 *)(D_8011F350[D_8018BC3C].p + 0xE) = 0x140;
    *(s16 *)(D_8011F350[D_8018BC3C].p + 0x10) = 0xF0;
    D_8011F350[D_8018BC3C].p[0] = arg0;
}

