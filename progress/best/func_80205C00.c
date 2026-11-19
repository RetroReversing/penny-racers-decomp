extern s32 D_8021AFFC;
extern u8 D_8021B019;
extern s32 D_8021B024[5];
extern s32 D_8021B038[5];
extern s32 D_8021B04C[5];
extern u8 D_8021B06A;
extern s8 D_8021B07E;

void func_80205C00(void) {
    s32 var_v0;

    switch (D_8021B019) {
    case 1:
        var_v0 = D_8021AFFC + 1;
        D_8021AFFC = var_v0;
        break;
    case 2:
        var_v0 = D_8021AFFC - 1;
        D_8021AFFC = var_v0;
        break;
    }
    if ((s32) D_8021B06A < D_8021AFFC) {
        D_8021AFFC = 0;
    } else if (D_8021AFFC < 0) {
        D_8021AFFC = (s32) D_8021B06A;
    }
    D_8021B024[0] = 0;
    ((f32 *) D_8021B038)[0] = -10.0f;
    D_8021B04C[0] = 0;
    ((f32 *) D_8021B024)[1] = -60.0f;
    ((f32 *) D_8021B038)[1] = 15.0f;
    ((f32 *) D_8021B04C)[1] = -70.0f;
    ((f32 *) D_8021B024)[2] = 60.0f;
    ((f32 *) D_8021B038)[2] = 15.0f;
    ((f32 *) D_8021B04C)[2] = -70.0f;
    ((f32 *) D_8021B024)[3] = -158.0f;
    ((f32 *) D_8021B038)[3] = 15.0f;
    ((f32 *) D_8021B04C)[3] = -70.0f;
    ((f32 *) D_8021B024)[4] = 158.0f;
    ((f32 *) D_8021B038)[4] = 15.0f;
    ((f32 *) D_8021B04C)[4] = -70.0f;
    D_8021B019 = 0;
    D_8021B07E = 0;
}
