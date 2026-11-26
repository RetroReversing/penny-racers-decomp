void func_80224508(void *arg0)
{
    char *p = arg0;
    f32 temp_fv0;
    f32 temp_fv1_2;
    f32 temp_fv1_3;
    f32 *tab;
    s32 idx;

    if (*(u8 *) (p + 0x8A1) == 2) {
        *(f32 *) (p + 0x748) = *(f32 *) (p + 0x744) * 0.02f + *(f32 *) (p + 0x748);
    } else {
        *(f32 *) (p + 0x748) = *(f32 *) (p + 0x744) * 0.04f + *(f32 *) (p + 0x748);
    }
    if (*(u8 *) (p + 0x74D) != 0) {
        *(u8 *) (p + 0x74D) -= 1;
        idx = *(u8 *) (p + 0x74C);
        tab = *(f32 **) (p + 0x238);
        temp_fv1_2 = *(f32 *) (p + 0x748) - *(f32 *) (p + 0x770) * tab[idx];
        temp_fv1_2 = temp_fv1_2 * 0.9f;
        *(f32 *) (p + 0x748) = *(f32 *) (p + 0x748) - temp_fv1_2;
        idx = *(u8 *) (p + 0x74C);
        tab = *(f32 **) (p + 0x238);
        *(f32 *) (p + 0x770) = *(f32 *) (p + 0x748) / tab[idx];
    }
    temp_fv1_3 = *(f32 *) (p + 0x754);
    if (0.0f < temp_fv1_3) {
        temp_fv0 = temp_fv1_3 * 0.8f;
        *(f32 *) (p + 0x754) = temp_fv0;
        *(f32 *) (p + 0x748) = *(f32 *) (p + 0x748) + temp_fv0 * 0.5f;
        if (*(f32 *) (p + 0x754) < 50.0f) {
            *(f32 *) (p + 0x754) = 0.0f;
        }
    }
    if (*(f32 *) (p + 0x748) > 7000.0f) {
        *(f32 *) (p + 0x748) = 7000.0f;
    } else if (*(f32 *) (p + 0x748) < 1000.0f) {
        *(f32 *) (p + 0x748) = 1000.0f;
    }
}
