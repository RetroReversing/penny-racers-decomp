void func_801CAF18(s32 *, u16, u16, u16, s32, s32, u8, s32, s32, s32, s32);
void func_801CABF4(s32 *gp, s32 x, s32 y, u16 step, s32 a4, u16 *list, u8 a6, s32 a7, s32 a8, s32 a9, s32 a10, s32 a11)
{
    s32 g;
    u16 i;
    u16 px;
    s32 py;
    g = *gp;
    i = 0;
    px = x;
    py = y;
    for (; list[i] != 0xFFFF; i++) {
        func_801CAF18(&g, px, py, list[i], a7, a4, a6, a8, a9, a10, a11);
        px = step + px;
    }
    *gp = g;
}
