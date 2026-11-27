extern u8 menuCursorPos[]; extern u8 D_801F18E4[]; extern s32 D_801F18E0; s32 func_801E2BA4(void);
typedef struct { u8 a,b,c,d,e; } R5;
extern R5 trackPointTable[];
extern u8 D_801F18F8[];
void func_801E2BFC(void)
{
    u32 i;
    D_801F18E4[0] = menuCursorPos[0]; D_801F18E4[1] = menuCursorPos[1]; D_801F18E4[2] = menuCursorPos[2]; D_801F18E4[3] = menuCursorPos[3];
    for (i = 8; i < 0x18; i++) {
        ((u8 *) &D_801F18E0)[i] = 0;
    }
    for (i = 0; i < 200; i++) {
        D_801F18F8[i * 5 + 0] = trackPointTable[i].a;
        D_801F18F8[i * 5 + 1] = trackPointTable[i].b;
        D_801F18F8[i * 5 + 2] = trackPointTable[i].c;
        D_801F18F8[i * 5 + 3] = trackPointTable[i].d;
        D_801F18F8[i * 5 + 4] = trackPointTable[i].e;
    }
    D_801F18E0 = func_801E2BA4();
}
