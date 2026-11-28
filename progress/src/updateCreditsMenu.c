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
/* Credits menu input: moves the cursor with up/down, adjusts the option with left/right, and on Mode opens the chosen screen. */
void updateCreditsMenu(void)
{
    u16 nextState;

    {
        s32 *upPress = &btnUpPressed;
        if (*upPress == 1 && creditsCursor != 0) {
            *upPress = 2;
            creditsCursor -= 1;
        }
    }
    {
        s32 *downPress = &btnDownPressed;
        if (*downPress == 1 && creditsCursor < 9) {
            *downPress = 2;
            creditsCursor += 1;
        }
    }
    if (btnLeftPressed == 1) {
        u16 *option = &D_8006FB10;
        if (*option >= 2) {
            *option -= 1;
        }
    }
    if (btnRightPressed == 1) {
        u16 *option = &D_8006FB10;
        if (*option < 9) {
            *option += 1;
        }
    }
    {
        s32 *modePress = &btnModePressed;
        if (*modePress != 0) {
            *modePress += 1;
            switch (creditsCursor) {
            case 0: nextState = 0x1A; gameState = nextState; break;
            case 1: nextState = 0x16; gameState = nextState; break;
            case 2: nextState = 0x2; gameState = nextState; break;
            case 3: nextState = 0x4; gameState = nextState; break;
            case 4: nextState = 0x6; gameState = nextState; break;
            case 5: nextState = 0x8; gameState = nextState; break;
            case 6: nextState = 0xA; gameState = nextState; break;
            case 7: nextState = 0xC; gameState = nextState; break;
            case 8: nextState = 0xE; gameState = nextState; break;
            case 9: nextState = 0x10; gameState = nextState; break;
            }
            initModelTransforms();
            initObjList();
            D_8006FE58 = 0;
        }
    }
}
