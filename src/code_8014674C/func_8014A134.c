#include "common_local_source_339302417259.h"

extern f32 D_8011F308[];
extern f32 D_8011F30C[];
extern f32 D_8011F310[];

void func_8014A134(u16 arg0, u16 arg1, s32 arg2) {
    s32 k = arg1 * 100;
    s32 i = arg0 * 100;
    *(f32 *)((u8 *)D_8011F308 + k) += (*(f32 *)((u8 *)D_8011F308 + i) - *(f32 *)((u8 *)D_8011F308 + k)) / (f32)arg2;
    *(f32 *)((u8 *)D_8011F30C + k) += (*(f32 *)((u8 *)D_8011F30C + i) - *(f32 *)((u8 *)D_8011F30C + k)) / (f32)arg2;
    *(f32 *)((u8 *)D_8011F310 + k) += (*(f32 *)((u8 *)D_8011F310 + i) - *(f32 *)((u8 *)D_8011F310 + k)) / (f32)arg2;
}
