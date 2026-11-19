#include "common_local_source_339302417646.h"

extern u8 D_8011F308[];
extern u8 D_8011F30C[];
extern u8 D_8011F320[];
extern u8 D_8011F324[];
extern f64 D_8021DE90;
extern f64 D_8021DE98;
extern f64 D_8021DEA0;
extern f64 D_8021DEA8;

void func_80215480(s32 arg0) {
    s32 idx;
    s32 t;
    f32 a;
    f32 b;
    f64 temp_fv1;
    f64 temp_fv1_2;

    idx = arg0 & 0xFFFF;
    t = idx * 0x64;
    a = *(f32 *)(D_8011F320 + t);
    b = *(f32 *)(D_8011F308 + t);
    *(f32 *)(D_8011F320 + t) = a + b;
    a = *(f32 *)(D_8011F324 + t);
    b = *(f32 *)(D_8011F30C + t);
    *(f32 *)(D_8011F324 + t) = a + b;
    temp_fv1 = (f64) *(f32 *)(D_8011F320 + t);
    if ((D_8021DE90 <= temp_fv1) || (temp_fv1 <= D_8021DE98)) {
        *(f32 *)(D_8011F320 + idx * 0x64) = 0.0f;
        idx = arg0 & 0xFFFF;
    }
    temp_fv1_2 = (f64) *(f32 *)(D_8011F324 + ((((idx * 2) + idx) * 8 + idx) * 4));
    if ((D_8021DEA0 <= temp_fv1_2) || (temp_fv1_2 <= D_8021DEA8)) {
        *(f32 *)(D_8011F324 + idx * 0x64) = 0.0f;
    }
}
