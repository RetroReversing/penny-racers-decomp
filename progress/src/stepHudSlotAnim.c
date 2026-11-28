typedef struct { u8 f0; u8 pad1[0xB]; u8 fC; u8 pad[0x31]; u16 f3E; u8 pad40[0x24]; } Rec_801B4B6C;
extern Rec_801B4B6C D_8011F2F0[];
extern u16 hudSlotIndex;
extern u8 hudVisible;
extern s8 D_801CA138;
extern s8 D_801C7AB5;

/* Steps the two animation counters (f0, fC) of one menu object while its HUD slot is on the HUD screen with the HUD visible; resets both when neither trigger flag is set. */
void stepHudSlotAnim(u16 objIdx) {
    if (D_8011F2F0[hudSlotIndex].f3E == 0x10 && hudVisible == 1) {
        if (D_801CA138 != 0) {
            if (D_8011F2F0[objIdx].f0 < 6) {
                Rec_801B4B6C *p = &D_8011F2F0[objIdx];
                p->f0 = D_8011F2F0[objIdx].f0 + 1;
                p->fC = D_8011F2F0[objIdx].fC + 1;
            } else {
                s32 v = D_8011F2F0[objIdx].f0;
                if ((u32) (v - 6) < 6) {
                    Rec_801B4B6C *p = &D_8011F2F0[objIdx];
                    p->f0 = v + 1;
                    p->fC = D_8011F2F0[objIdx].fC - 1;
                }
            }
        } else if (D_801C7AB5 != 0) {
            if (D_8011F2F0[objIdx].f0 < 6) {
                Rec_801B4B6C *p = &D_8011F2F0[objIdx];
                p->f0 = D_8011F2F0[objIdx].f0 + 1;
                p->fC = D_8011F2F0[objIdx].fC + 1;
            } else {
                s32 v = D_8011F2F0[objIdx].f0;
                if ((u32) (v - 6) < 6) {
                    Rec_801B4B6C *p = &D_8011F2F0[objIdx];
                    p->f0 = v + 1;
                    p->fC = D_8011F2F0[objIdx].fC - 1;
                }
            }
        } else {
            D_8011F2F0[objIdx].f0 = 0;
            D_8011F2F0[objIdx].fC = 0;
        }
    }
}
