extern u8 D_8021E19E;
extern s32 D_8021B01C;
extern s32 D_8021B020;
extern s32 D_8021B080;
extern u8 D_8021B084;
extern s32 D_8021B128;

s32 func_80205D48(f32, f32, u8);
void func_80205E04(s32 *, f32, u8);
void func_80205EBC(s32 *, f32, f32, f32, s32);
void func_80211C7C(s32);

void func_80208374(void) {
    u8 *p = &D_8021E19E;

    *p = *p - 8;
    func_80205E04(&D_8021B01C, 43.0f, D_8021B084);
    func_80205EBC(&D_8021B020, 40.0f, -3.0f, 0.2f, (s32) D_8021B084);
    func_80211C7C(0x14);
    if (*(s16 *)(p + 4) == 0 && D_8021B128 != 1) {
        D_8021B080 = func_80205D48(20.0f, 4.0f, D_8021B084);
    }
    if (D_8021B084 == 0) {
        D_8021B084 = 1;
    }
}
