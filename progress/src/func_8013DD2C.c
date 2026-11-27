typedef struct { s16 x; s16 y; u16 w; u16 h; u8 pad[0x20]; } Rec;
typedef struct { u8 pad[0x2110]; Rec r[1]; } Tbl;
extern Tbl sRowBoard;
extern u16 (*D_800DB1B0)[320];
extern u8 viewIndex;
extern u8 D_80168166;
extern u16 D_80183BE0[][2][32 * 32];

void func_8013DD2C(void)
{
    s32 i;
    s32 j;
    s32 w = (s16) sRowBoard.r[viewIndex].w >> 5;
    s32 h = (s16) sRowBoard.r[viewIndex].h >> 5;
    s32 x = sRowBoard.r[viewIndex].x;
    s32 y = sRowBoard.r[viewIndex].y;

    for (j = 0; j < 32; j++) {
        for (i = 0; i < 32; i++) {
            D_80183BE0[viewIndex][D_80168166][i * 32 + (31 - j)] = D_800DB1B0[j * h + y][i * w + x];
        }
    }
    D_80168166 ^= 1;
}
