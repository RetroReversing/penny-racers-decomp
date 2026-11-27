extern u8 D_801C5EA8[];
extern u8 D_801C5EB8[];
typedef struct { u8 f0; u8 pad[4]; } Row_D_801C7081;
extern Row_D_801C7081 glyphLine[];
typedef struct { u8 f0; u8 pad[4]; } Row_D_801C7084;
extern Row_D_801C7084 glyphCode[];
extern u8 *trackInfo;

s32 func_801A4318(s32 arg0, u8 arg1, s32 arg2)
{
    s32 t0;
    u8 a1;
    u8 a3;

    t0 = 0;
    if ((arg1) == trackInfo[2]) {
        return 0;
    }
    if (trackInfo[0] == 3) {
        a3 = glyphCode[arg1].f0;
    } else {
        a3 = glyphCode[arg1].f0 - 0x2E;
    }
    if (glyphLine[arg0 & 0xFF].f0 == glyphLine[arg1].f0) {
        if (a3 < 5) {
            a1 = D_801C5EB8[arg2 & 0xFF];
            glyphCode[arg1].f0 = a1;
            t0 = 1;
            if (trackInfo[0] == 4) {
                glyphCode[arg1].f0 = a1 + 0x2E;
            }
        } else {
            if ((u8) (a3 - 0x1B) < 5) {
                glyphLine[arg1].f0 = 0x3C;
                a1 = D_801C5EA8[arg2 & 0xFF];
                glyphCode[arg1].f0 = a1;
                t0 = 1;
                if (trackInfo[0] == 4) {
                    glyphCode[arg1].f0 = a1 + 0x2E;
                }
            }
        }
    }
    return t0 & 0xFF;
}
