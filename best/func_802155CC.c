extern void func_801CA140(void);
extern void func_801CA494(s32, u8, u8, u8, s32);
extern void func_8014A4C8(s32, s16, s16, s32, s32);
extern f32 D_8011F320[];
extern f32 D_8011F324[];
extern u8 D_8021F032[];

void func_802155CC(s32 arg0, s32 arg1) {
    s32 i;
    s32 j;
    s32 idx;

    func_801CA140();
    func_801CA494(arg0, D_8021F032[0], D_8021F032[1], D_8021F032[2], 0xFF);
    idx = (arg1 & 0xFFFF) * 25;
    for (i = 0; (u8) i < 7; i++) {
        for (j = 0; (u8) j < 6; j++) {
            func_8014A4C8(arg0, (s16) ((s32) D_8011F320[idx] + ((u8) i << 6) - 0x40), (s16) ((s32) D_8011F324[idx] + ((u8) j << 6) - 0x40), 0xB, 0);
        }
    }
}
