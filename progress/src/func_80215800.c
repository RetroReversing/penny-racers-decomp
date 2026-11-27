extern s8 D_80190CB4;
extern u8 menuArrowAlpha;
s32 func_80205D48(f32, f32, s32);

void func_80215800(void) {
    u8 *p;

    p = &menuArrowAlpha;
    *p -= 8;
    D_80190CB4 = ~func_80205D48(100.0f, 2.0f, 1);
}
