s8 func_80205D48(f32, f32, u8);
extern u8 D_8021B084;
extern u8 D_8021E19E;

void func_80206104(void) {
    *(s8 *)&D_8021E19E = func_80205D48(255.0f, 2.0f, D_8021B084);
    *(u16 *)(&D_8021E19E - 2) += 1;
    if (D_8021B084 == 0) {
        D_8021B084 = 1;
    }
}
