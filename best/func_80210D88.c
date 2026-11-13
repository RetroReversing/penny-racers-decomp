extern u8 D_8011F2F0[];
extern u8 D_8011F304[];
extern u8 D_8011F308[];
extern u8 D_8011F318[];
extern u8 D_8011F340[];
extern u16 D_80190C98[];
extern f64 D_8021DDB0;
extern f64 D_8021DDB8;
extern s8 D_8021E15F;
extern s8 D_8021E231[];
extern f32 D_8021EECC;
extern u8 D_8021F036[];
extern u8 D_8021F0A0[];
void func_8012AD20(u16, void *, s32, u8);

void func_80210D88(u16 arg0) {
    s32 i = arg0 * 0x64;
    s8 t;
    if (**(u8 **)(D_8011F340 + i) == 0) {
        *(f32 *)(D_8011F308 + i) = (f32)((f64)D_8011F2F0[i] * D_8021DDB0 + D_8021DDB8 - (f64)D_8021EECC);
        t = D_8021E231[D_8021E15F * 0x110 + D_8011F2F0[i]];
        func_8012AD20(*(u16 *)(D_8011F304 + D_80190C98[t] * 0x64), D_8021F0A0 + t * 32, t & 0xFF, D_8021F036[t]);
        if (D_8011F2F0[i] != ((u8 *)&D_8021EECC)[-0xC]) {
            *(f32 *)(D_8011F318 + arg0 * 0x64) = 333.0f;
        } else {
            *(f32 *)(D_8011F318 + i) -= 1.0f;
            if (*(f32 *)(D_8011F318 + i) < 0.0f)
                *(f32 *)(D_8011F318 + i) += 360.0f;
        }
    }
}
