extern char D_8011F308[];
extern char D_8011F30C[];
extern char D_8011F310[];
s32 func_80032310();

void func_8014A204(s32 arg0, s32 arg1) {
    f32 a;
    f32 b;
    f32 c;
    f32 s;
    s32 i;
    s32 j;

    i = (arg0 & 0xFFFF) * 100;
    j = (arg1 & 0xFFFF) * 100;
    a = *(f32 *)(D_8011F308 + i) - *(f32 *)(D_8011F308 + j);
    b = *(f32 *)(D_8011F30C + i) - *(f32 *)(D_8011F30C + j);
    c = *(f32 *)(D_8011F310 + i) - *(f32 *)(D_8011F310 + j);
    s = a * a + b * b + c * c;
    s = __builtin_sqrtf(s);
    if (s != s) {
        func_80032310();
    }
}
