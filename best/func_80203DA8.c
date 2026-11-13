extern u8 D_8021B00C[];
extern u32 D_8021B128[];
extern u8 D_8021E20B[];

void func_80203DA8(void) {
    s32 i;

    for (i = 0; i < 4; i++) {
        D_8021B00C[i] = 0;
        D_8021B128[i] = 0;
        D_8021E20B[i * 9] = 0;
    }
}
