typedef s32 M2C_UNK;
extern f32 __cosf(f32);
extern f32 __sinf(f32);
extern M2C_UNK func_80129C88(M2C_UNK *, M2C_UNK, M2C_UNK);
extern f32 func_801F9C8C(f32, f32);
extern M2C_UNK guMtxCatF(M2C_UNK *, M2C_UNK *, M2C_UNK *);
extern M2C_UNK guMtxXFMF(M2C_UNK *, f32, f32, f32);
extern M2C_UNK guRotateF(M2C_UNK *, f32, f32, f32);
extern u8 D_8011F2F0[];
extern u8 D_8011F2FC[];
extern u8 D_8011F314[];
extern u8 D_8011F318[];
extern u8 D_8011F31C[];
extern f64 D_8021DF08;
extern f32 D_80221080[];
extern f32 D_802210A4;
extern f32 D_802210A8;
extern f32 D_802210AC;
extern f32 D_802210B0;
extern f32 D_802210B4;
extern f32 D_802210B8;
extern f32 D_802210BC;
extern f32 D_802210C0;
extern f32 D_802210C4;
extern u16 D_8022A772;
extern M2C_UNK D_8022AF3C;
extern u16 D_8022B062;

void func_80218288(s32 arg0) {
    u16 *__base_D_8022A772;
    f32 __repair_fzero = 0.0f;

    u8 *rec;
    u8 *rec2;

    __base_D_8022A772 = &D_8022A772;
    rec = D_8011F2F0 + (*(&D_8022A772)) * 0x64;
    rec2 = D_8011F2F0 + D_8022B062 * 0x64;
    D_802210A4 = *(f32 *)((D_8011F2F0 + (*__base_D_8022A772) * 0x64) + 0x18);
    D_802210A8 = *(f32 *)(rec + 0x1C) + 30.0f;
    D_802210AC = *(f32 *)(rec + 0x20);
    D_802210B0 = *(f32 *)((D_8011F2F0 + D_8022B062 * 0x64) + 0x18);
    D_802210B4 = *(f32 *)(rec2 + 0x1C) + 15.0f;
    D_802210B8 = *(f32 *)(rec2 + 0x20);
    D_802210BC = __repair_fzero;
    D_802210C0 = 1.0f;
    D_802210C4 = __repair_fzero;
    do { func_80129C88(&D_8022AF3C, 4, 0); } while (0);
}
