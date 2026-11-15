extern u8 D_8011F308[];
extern u8 D_8011F30C[];
extern u8 D_8011F320[];
extern u8 D_8011F324[];
extern f64 D_8021DE90;
extern f64 D_8021DE98;
extern f64 D_8021DEA0;
extern f64 D_8021DEA8;

void func_80215480(s32 arg0) {
    s32 i = arg0 & 0xFFFF;
    s32 t = i * 0x64;
    f32 v;

    *(f32 *)(D_8011F320 + t) += *(f32 *)(D_8011F308 + t);
    *(f32 *)(D_8011F324 + t) += *(f32 *)(D_8011F30C + t);
    v = *(f32 *)(D_8011F320 + t);
    t = i * 2;
    if (D_8021DE90 <= v || v <= D_8021DE98) {
        *(u32 *)(D_8011F320 + (arg0 & 0xFFFF) * 0x64) = 0;
    }
    v = *(f32 *)(D_8011F324 + (((arg0 & 0xFFFF) * 2 + i) * 8 + i) * 4);
    if (D_8021DEA0 <= v || v <= D_8021DEA8) {
        *(u32 *)(D_8011F324 + i * 0x64) = 0;
    }
}
