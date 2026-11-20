#include "common_local_source_339302417167.h"

extern u8 D_8011F2FD[];
extern u8 D_8011F308[];
extern u8 D_8011F30C[];
extern u8 D_8011F338[];

void func_8013BA58(s32 arg0) {
    s32 off = (arg0 & 0xFFFF) * 100;

    if (*(f32 *)(D_8011F338 + off) < *(f32 *)(D_8011F30C + off)) {
        *(f32 *)(D_8011F30C + off) = *(f32 *)(D_8011F30C + off) - 3.0f;
        *(f32 *)(D_8011F308 + off) = *(f32 *)(D_8011F308 + off) - 1.0f;
    } else {
        D_8011F2FD[(arg0 & 0xFFFF) * 100] = 2;
    }
}
