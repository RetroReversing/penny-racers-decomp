s32 getMenuNavMask(s32, s32, s32);
void playStageSound(s32, s32);
typedef struct { u8 pad0[0x3E]; u16 state; u8 pad40[0x24]; } Obj;
extern Obj D_8011F2F0[];
extern u16 menuFadeLevel;
extern u8 menuConfirmed;
extern u8 D_80190CB0;
extern u8 menuCursorPos[];
extern u8 menuNextScene;

/* Runs the two-row choice menu: up/down move each row's cursor, A confirms the row,
 * B goes back. Confirming the second row fades the menu out to the next scene. */
void updateChoiceMenu(u16 objIndex)
{
    Obj *menuObj = &D_8011F2F0[objIndex];
    u16 *fadePtr = &menuFadeLevel;
    u8 *choiceA = (u8 *) fadePtr + 2;
    u8 *choiceB = (u8 *) fadePtr + 4;
    s32 navInput = getMenuNavMask(0x1E, 7, 0);
    s16 *timerPtr;

    switch (menuObj->state) {
    case 0:
        *fadePtr = 0xFF;
        menuConfirmed = 0;
        *choiceA = menuCursorPos[0] - 3;
        *choiceB = menuCursorPos[1] - 5;
        menuObj->state = 0x10;
    case 0x10:
        if ((navInput & 8) && *choiceA != 1) {
            playStageSound(7, 0x3B);
            *choiceA = 1;
        }
        if ((navInput & 4) && *choiceA != 0) {
            playStageSound(7, 0x3B);
            *choiceA = 0;
        }
        menuCursorPos[0] = *choiceA + 3;
        if (navInput & 0x10) {
            navInput = 0;
            playStageSound(7, 0x3D);
            menuConfirmed = 1;
            menuObj->state = 0x20;
        }
        if (navInput & 0x20) {
            playStageSound(7, 0x3A);
            {
                u8 *p = &D_80190CB0;
                do {*p = 0;}while(0);
                *(s16 *) (p - 0x16) = 0x10;
            }
            menuNextScene = 5;
        }
        break;
    case 0x20:
        if ((navInput & 8) && *choiceB != 1) {
            playStageSound(7, 0x3B);
            *choiceB = 1;
        }
        if ((navInput & 4) && *choiceB != 0) {
            playStageSound(7, 0x3B);
            *choiceB = 0;
        }
        menuCursorPos[1] = *choiceB + 5;
        if (navInput & 0x10) {
            navInput = 0;
            playStageSound(7, 0x3D);
            menuObj->state = 0x30;
        }
        if (navInput & 0x20) {
            playStageSound(7, 0x3A);
            menuObj->state = 0;
        }
        break;
    case 0x30:
        *fadePtr -= 8;
        if ((s16) *fadePtr < 0) {
            *fadePtr = 0;
            {
                u8 *p = &D_80190CB0;
                *p = 0;
                timerPtr = (s16 *) (p - 0x16);
                *timerPtr = 0xF0;
            }
        }
        break;
    }
}
