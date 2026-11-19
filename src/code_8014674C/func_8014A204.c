#include "common_local_source_339302417260.h"

extern char D_8011F308[];
extern char D_8011F30C[];
extern char D_8011F310[];

f32 func_8014A204(s32 arg0, s32 arg1) {
    s32 off0;
    s32 off1;
    f32 dx;
    f32 dy;
    f32 dz;

    off0 = (arg0 & 0xFFFF) * 100;
    off1 = (arg1 & 0xFFFF) * 100;
    dx = *(f32 *)(D_8011F308 + off0) - *(f32 *)(D_8011F308 + off1);
    dy = *(f32 *)(D_8011F30C + off0) - *(f32 *)(D_8011F30C + off1);
    dz = *(f32 *)(D_8011F310 + off0) - *(f32 *)(D_8011F310 + off1);
    return sqrtf(dx * dx + dy * dy + dz * dz);
}
