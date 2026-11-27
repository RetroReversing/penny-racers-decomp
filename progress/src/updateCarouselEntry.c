typedef struct { u8 f0; u8 pad1; u16 flags[4]; u8 padA[0xE]; f32 f18; f32 f1C; f32 f20; u8 pad24[4]; f32 f28; u8 pad2C[0x24]; u8 *f50; u8 pad54[0x10]; } Rec;
extern Rec D_8011F2F0[];
extern u16 D_8021F090;
extern u16 D_8021E146;
extern u16 D_8021F024;
extern u16 D_8021F026;
extern u16 D_8021EFF8;
extern s16 D_8021E1A2;
extern s8 D_8021E20B[][9];
extern u8 D_8021B00C[];
extern f32 carouselX[];
extern f32 carouselY[];
extern f32 carouselZ[];
void updateCarousel(void);

/* Updates one carousel entry on the title screen: positions the five car slots from the carousel track (or a fixed layout) and flags the cars that are not the selected one. */ void updateCarouselEntry(u16 entryIdx) {
    Rec *entry = &D_8011F2F0[entryIdx];
    Rec *slotA = &D_8011F2F0[D_8021F090];
    Rec *slotB = &D_8011F2F0[D_8021E146];
    Rec *slotC = &D_8011F2F0[D_8021F024];
    Rec *slotD = &D_8011F2F0[D_8021F026];
    Rec *slotE = &D_8011F2F0[D_8021EFF8];
    u8 lane;

    switch (entry->f0) {
    case 0:
        if (D_8021E1A2 == 0) {
            if (D_8021E20B[entry->f0][0] == 1) {
                if (*entry->f50 != 0) {
                    goto flags;
                }
                slotA->f18 = -20.0f;
                slotA->f1C = -10.0f;
                slotA->f20 = 0.0f;
                slotB->f18 = -200.0f;
                slotC->f18 = 200.0f;
                slotD->f18 = -200.0f;
                slotE->f18 = 200.0f;
            } else if (D_8021B00C[0] == 0) {
                if (*entry->f50 != 0) {
                    goto flags;
                }
                updateCarousel();
                slotA->f18 = carouselX[0];
                slotA->f1C = carouselY[0];
                slotA->f20 = carouselZ[0];
                slotB->f18 = carouselX[1];
                slotC->f18 = carouselX[2];
                slotD->f18 = carouselX[3];
                slotE->f18 = carouselX[4];
                slotB->f1C = carouselY[1] + -10.0f;
                slotC->f1C = carouselY[2] + -10.0f;
                slotD->f1C = carouselY[3] + -10.0f;
                slotE->f1C = carouselY[4] + -10.0f;
                slotB->f20 = carouselZ[1];
                slotC->f20 = carouselZ[2];
                slotD->f20 = carouselZ[3];
                slotE->f20 = carouselZ[4];
            } else {
                if (*entry->f50 != 0) {
                    goto flags;
                }
                slotA->f18 = 0.0f;
                slotA->f1C = -10.0f;
                slotA->f20 = 0.0f;
                slotB->f18 = -200.0f;
                slotC->f18 = 200.0f;
            }
            if (*entry->f50 == 0) {
                slotA->f28 -= 1.0f;
                slotB->f28 -= 1.0f;
                slotC->f28 -= 1.0f;
                slotD->f28 -= 1.0f;
                slotE->f28 -= 1.0f;
            }
        } else {
            if (*entry->f50 == 0) {
                entry->f28 -= 1.0f;
            }
        }
    flags:
        entry->flags[1] |= 8;
        entry->flags[2] |= 8;
        entry->flags[3] |= 8;
        break;
    case 1:
    case 2:
    case 3:
        if (*entry->f50 == 0) {
            entry->f28 -= 1.0f;
        }
        for (lane = 0; lane < 4; lane++) {
            if (entry->f0 != lane) {
                entry->flags[lane] |= 8;
            }
        }
        break;
    }
}
