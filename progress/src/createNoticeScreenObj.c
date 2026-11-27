extern u16 objCreate(s32, s32, s32, s32, s32, s32, s32, void *, void *, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern u8 D_8011F350[];
extern u16 D_8018BC3C;
extern u8 D_801CE928[];
extern u8 D_801CEC2C[];
extern u8 D_801D59A0;

/* Creates the notice screen object and fills in its record: idle state, timers and a 320x240 screen rectangle. */
void createNoticeScreenObj(void)
{
    D_8018BC3C = objCreate(0, 0, 3, 0, 0xA0, 0xFF, 0, D_801CE928, D_801CEC2C, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    {
        s32 recOff = D_8018BC3C * 100;
        u8 *noticeState = &D_801D59A0;
        *(u8 **)(D_8011F350 + recOff) = noticeState;
        *noticeState = 0;
        *(u16 *)(*(u8 **)(D_8011F350 + recOff) + 2) = 0x46;
        *(u16 *)(*(u8 **)(D_8011F350 + recOff) + 4) = 0;
        *(u8 *)(*(u8 **)(D_8011F350 + recOff) + 6) = 0xFF;
    }
    {
        s32 recOff = D_8018BC3C * 100;
        *(u8 *)(*(u8 **)(D_8011F350 + recOff) + 7) = 0xFF;
    }
    {
        s32 recOff = D_8018BC3C * 100;
        *(u8 *)(*(u8 **)(D_8011F350 + recOff) + 8) = 0xFF;
    }
    {
        s32 recOff = D_8018BC3C * 100;
        *(u8 *)(*(u8 **)(D_8011F350 + recOff) + 9) = 0xFF;
    }
    {
        s32 recOff = D_8018BC3C * 100;
        *(u16 *)(*(u8 **)(D_8011F350 + recOff) + 10) = 0;
        *(u16 *)(*(u8 **)(D_8011F350 + recOff) + 12) = 0;
        *(u16 *)(*(u8 **)(D_8011F350 + recOff) + 14) = 0x140;
        *(u16 *)(*(u8 **)(D_8011F350 + recOff) + 16) = 0xF0;
    }
}
