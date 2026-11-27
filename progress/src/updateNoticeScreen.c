typedef struct {
    u16 st;
    u8 pad[98];
} Slot;
extern Slot playerSlots[];
extern s32 D_80168BB0;
extern u16 D_8018BC3C;
extern s32 D_8021AFDC;
extern s32 noticeTimer;
extern s8 noticeFlag;
void initObjList(void);
void initModelTransforms(void);
void createNoticeScreenObj(void);
void func_801CF468(s32, s8, s8, s8);
void setScreenTransition();

/* One step of the notice screen for a player slot: fades in, holds, fades out, then resets the race state. */
void updateNoticeScreen(u16 slot)
{
    s32 buttons;

    switch (playerSlots[slot].st) {
    case 0:
        noticeTimer = 0;
        noticeFlag = 0;
        playerSlots[slot].st = 1;
        setScreenTransition(1, 0x78, 0xFF, 0xFF, 0xFF);
        break;
    case 1:
        buttons = 0;
        if (noticeTimer == 0x10E) {
            setScreenTransition(2, 0x78, 0, 0, 0);
        }
        if (noticeTimer >= 0x186 || (buttons & 0x10)) {
            setScreenTransition(1, 0x78, 0xFF, 0xFF, 0xFF);
            playerSlots[slot].st = 3;
        }
        noticeTimer++;
        break;
    case 3:
        buttons = 0;
        if (noticeTimer == 0x24E) {
            setScreenTransition(2, 0x78, 0, 0, 0);
        }
        if (noticeTimer >= 0x2D0 || (buttons & 0x10)) {
            playerSlots[slot].st = 2;
        }
        noticeTimer++;
        break;
    case 2:
        initModelTransforms();
        initObjList();
        createNoticeScreenObj();
        func_801CF468(D_8018BC3C, 0, 0, 0);
        D_8021AFDC = 0x28;
        D_80168BB0 = 0x28;
        break;
    }
}
