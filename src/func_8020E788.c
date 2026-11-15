extern s32 D_8021B384[];
extern u8 D_8021E1BC[];

void func_8020E788(void) {
    *(s32 *)D_8021E1BC = D_8021B384[*(s16 *)(D_8021E1BC - 0x30)];
}
