extern s32 D_801E99A0;
extern s32 D_801E99A4;
extern s32 D_801E99A8;
extern s32 D_801E99AC;
extern s32 D_801E99C0;
extern u16 D_802330A0;
extern u16 D_8006F9E8;
extern u16 D_8006FB10;
extern u16 D_8006FE58;
void func_800DE38C(void);
void func_800DE2E0(void);

void func_8022F300(void)
{
    u16 v;

    {
        s32 *p = &D_801E99A0;
        if (*p == 1 && D_802330A0 != 0) {
            *p = 2;
            D_802330A0 -= 1;
        }
    }
    {
        s32 *p = &D_801E99A4;
        if (*p == 1 && D_802330A0 < 9) {
            *p = 2;
            D_802330A0 += 1;
        }
    }
    if (D_801E99AC == 1) {
        u16 *p = &D_8006FB10;
        if (*p >= 2) {
            *p -= 1;
        }
    }
    if (D_801E99A8 == 1) {
        u16 *p = &D_8006FB10;
        if (*p < 9) {
            *p += 1;
        }
    }
    {
        s32 *p = &D_801E99C0;
        if (*p != 0) {
            *p += 1;
            switch (D_802330A0) {
            case 0: v = 0x1A; D_8006F9E8 = v; break;
            case 1: v = 0x16; D_8006F9E8 = v; break;
            case 2: v = 0x2; D_8006F9E8 = v; break;
            case 3: v = 0x4; D_8006F9E8 = v; break;
            case 4: v = 0x6; D_8006F9E8 = v; break;
            case 5: v = 0x8; D_8006F9E8 = v; break;
            case 6: v = 0xA; D_8006F9E8 = v; break;
            case 7: v = 0xC; D_8006F9E8 = v; break;
            case 8: v = 0xE; D_8006F9E8 = v; break;
            case 9: v = 0x10; D_8006F9E8 = v; break;
            }
            func_800DE38C();
            func_800DE2E0();
            D_8006FE58 = 0;
        }
    }
}
