extern u8 D_8011F2FC[];
extern u8 D_8011F2FD[];
extern u16 D_8011F2FE[];
extern float D_8011F308[];
extern float D_8011F30C[];
extern float D_8011F310[];
extern float D_8011F320[];
extern float D_8011F324[];
extern float D_8011F328[];
extern u16 D_8011F32E[];
extern float D_8011F334[];
extern float D_8011F338[];
extern float D_8011F33C[];
extern void *D_8011F350[];

void func_8013B1BC(u16 a0) {
    u32 off = (u32)a0 * 100;
    u32 st;
    if (D_8011F2FC[off] < 0x33) {
        D_8011F2FD[off] = 2;
        return;
    }
    st = D_8011F32E[off] - 0xB;
    (void)st;
}
