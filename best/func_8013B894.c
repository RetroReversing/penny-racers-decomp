f32 __cosf(f32);
f32 __sinf(f32);
extern u8 D_8011F2FD[];
extern u8 D_8011F308[];
extern u8 D_8011F30C[];
extern u8 D_8011F310[];
extern u8 D_8011F334[];
extern u8 D_8011F338[];

#define F32AT(base, o) (*(f32 *)((u8 *)(base) + (o)))

void func_8013B894(s32 arg0) {
    s32 off;
    s32 a1;
    s32 odd;
    f32 fa;

    a1 = arg0;
    odd = arg0 & 1;
    arg0 = (a1 & 0xFFFF) * 0x64;
    if (F32AT(D_8011F338, arg0) < F32AT(D_8011F30C, arg0)) {
        F32AT(D_8011F30C, arg0) = F32AT(D_8011F30C, arg0) - 0.6f;
        fa = F32AT(D_8011F334, arg0) + 0.02f;
        F32AT(D_8011F334, arg0) = fa;
        if (odd != 0) {
            F32AT(D_8011F308, arg0) = __sinf(fa) + F32AT(D_8011F308, arg0);
            F32AT(D_8011F310, arg0) = __cosf(F32AT(D_8011F334, arg0)) + F32AT(D_8011F310, arg0);
            return;
        }
        arg0 = (a1 & 0xFFFF) * 0x64;
        F32AT(D_8011F308, arg0) = F32AT(D_8011F308, arg0) - __cosf(F32AT(D_8011F334, arg0));
        F32AT(D_8011F310, arg0) = F32AT(D_8011F310, arg0) - __sinf(F32AT(D_8011F334, arg0));
        return;
    }
    arg0 = (a1 & 0xFFFF) * 0x64;
    *(u8 *)(D_8011F2FD + arg0) = 2;
}
