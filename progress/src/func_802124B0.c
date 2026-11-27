s8 func_80205D48(f32, f32, u8);
extern u8 D_8021B084;
extern s8 menuArrowAlpha;

void func_802124B0(void) {
    menuArrowAlpha = func_80205D48(100.0f, 1.0f, D_8021B084);
    if (D_8021B084 == 0) {
        D_8021B084 = 1;
    }
}
