extern s32 btnUpPressed;
extern s32 btnDownPressed;
extern s32 btnRightPressed;
extern s32 btnLeftPressed;
extern s32 btnModePressed;
extern u16 creditsCursor;
extern u16 gameState;
extern u16 D_8006FB10;
extern u16 D_8006FE58;
void initModelTransforms(void);
void initObjList(void);

void func_8022F300(void)
{
    u16 v;

    {
        s32 *p = &btnUpPressed;
        if (*p == 1 && creditsCursor != 0) {
            *p = 2;
            creditsCursor -= 1;
        }
    }
    {
        s32 *p = &btnDownPressed;
        if (*p == 1 && creditsCursor < 9) {
            *p = 2;
            creditsCursor += 1;
        }
    }
    if (btnLeftPressed == 1) {
        u16 *p = &D_8006FB10;
        if (*p >= 2) {
            *p -= 1;
        }
    }
    if (btnRightPressed == 1) {
        u16 *p = &D_8006FB10;
        if (*p < 9) {
            *p += 1;
        }
    }
    {
        s32 *p = &btnModePressed;
        if (*p != 0) {
            *p += 1;
            switch (creditsCursor) {
            case 0: v = 0x1A; gameState = v; break;
            case 1: v = 0x16; gameState = v; break;
            case 2: v = 0x2; gameState = v; break;
            case 3: v = 0x4; gameState = v; break;
            case 4: v = 0x6; gameState = v; break;
            case 5: v = 0x8; gameState = v; break;
            case 6: v = 0xA; gameState = v; break;
            case 7: v = 0xC; gameState = v; break;
            case 8: v = 0xE; gameState = v; break;
            case 9: v = 0x10; gameState = v; break;
            }
            initModelTransforms();
            initObjList();
            D_8006FE58 = 0;
        }
    }
}
