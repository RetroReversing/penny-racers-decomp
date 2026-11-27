extern u8 D_8011F2F0[];
extern u8 D_8011F304[];
extern u8 D_8011F308[];
extern u8 D_8011F318[];
extern u8 sPathNodes[];
extern u8 D_80190C98[];
extern f64 D_8021DDB0;
extern f64 D_8021DDB8;
extern s8 menuInputLock;
extern s8 D_8021E231[];
extern u8 D_8021EECC[];
extern u8 D_8021F036[];
extern u8 D_8021F0A0[];
void func_8012AD20(s32 arg0, void *arg1, s32 arg2, u8 arg3);

/* Per-frame update for a course select menu item: while the item's path node is idle it refreshes the item's position and, for the highlighted item, counts its spin angle down and wraps it, otherwise it parks the angle at 333 degrees. */
void courseSelectItemUpdate(s32 objIdx)
{
    u16 itemIdx = objIdx & 0xFFFF;
    s32 itemOff = itemIdx * 100;
    s32 courseSlot;
    s8 courseIdx;
    u16 itemObj;

    if (*(u8 *)(*(u8 **)(sPathNodes + itemOff)) == 0) {
        *(f32 *)(D_8011F308 + itemOff) = (f32)((f64)D_8011F2F0[itemOff] * D_8021DDB0 + D_8021DDB8 - (f64)*(f32 *)D_8021EECC);
        courseSlot = menuInputLock;
        courseIdx = D_8021E231[(((courseSlot << 4) + courseSlot) << 4) + D_8011F2F0[itemOff]];
        itemObj = *(u16 *)(D_80190C98 + (courseIdx << 1));
        func_8012AD20(*(u16 *)(D_8011F304 + itemObj * 100), D_8021F0A0 + (courseIdx << 5), courseIdx & 0xFF, D_8021F036[courseIdx]);
        if (D_8011F2F0[itemOff] == D_8021EECC[-0xC]) {
            f32 angle;
            *(volatile f32 *)(D_8011F318 + itemOff) = *(f32 *)(D_8011F318 + itemOff) - 1.0f;
            angle = *(volatile f32 *)(D_8011F318 + itemOff);
            if (angle < 0.0f) {
                *(f32 *)(D_8011F318 + itemOff) = angle + 360.0f;
            }
        } else {
            *(f32 *)(D_8011F318 + itemIdx * 100) = 333.0f;
        }
    }
}
