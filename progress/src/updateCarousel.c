extern f32 carouselX[];
extern f32 carouselY[];
extern f32 carouselZ[];
extern u8 carouselCmd;
extern u8 carouselPhase;
extern u8 carouselCount;
extern s32 carouselSelected[];
f32 sqrtf(f32);

/* Animates the five-item carousel: resets the layout when the phase is 2, moves items on left/right commands, and advances the selection once they settle. */ void updateCarousel(void) {
    if (carouselPhase == 2) {
        carouselX[0] = 0.0f;
        carouselY[0] = -10.0f;
        carouselZ[0] = 0.0f;
        carouselX[1] = -60.0f;
        carouselY[1] = 15.0f;
        carouselZ[1] = -70.0f;
        carouselX[2] = 60.0f;
        carouselY[2] = 15.0f;
        carouselZ[2] = -70.0f;
        carouselX[3] = -158.0f;
        carouselY[3] = 15.0f;
        carouselZ[3] = -70.0f;
        carouselX[4] = 158.0f;
        carouselY[4] = 15.0f;
        carouselZ[4] = -70.0f;
        carouselCmd = 0;
        carouselPhase = 0;
    }
    if ((carouselX[2] <= 0.5 && carouselY[2] <= 0.5 && carouselZ[2] >= -0.5) || (carouselX[1] >= -0.5 && carouselY[1] <= 0.5 && carouselZ[1] >= -0.5)) {
        if (carouselCmd == 1) {
            carouselSelected[0]++;
        } else if (carouselCmd == 2) {
            carouselSelected[0]--;
        }
        if (carouselSelected[0] > carouselCount) {
            carouselSelected[0] = 0;
        } else if (carouselSelected[0] < 0) {
            carouselSelected[0] = carouselCount;
        }
        carouselCmd = 3;
        carouselPhase++;
    } else if (carouselCmd == 1) {
        carouselX[1] -= 7.0;
        carouselY[1] = 15.0f;
        carouselZ[1] = -70.0f;
        carouselX[2] = sqrtf(carouselX[2] * carouselX[2]) * 0.7;
        carouselY[2] = sqrtf(carouselY[2] * carouselY[2]) * 0.7;
        carouselZ[2] = -(sqrtf(carouselZ[2] * carouselZ[2]) * 0.7);
        carouselX[0] = -(60.0 - carouselX[2]);
        carouselY[0] = 5.0f - carouselY[2];
        carouselZ[0] = -(carouselZ[2] + 70.0);
        carouselX[4] -= 7.0;
        carouselY[4] = 15.0f;
        carouselZ[4] = -70.0f;
    } else if (carouselCmd == 2) {
        carouselX[2] += 7.0;
        carouselY[2] = 15.0f;
        carouselZ[2] = -70.0f;
        carouselX[1] = -(sqrtf(carouselX[1] * carouselX[1]) * 0.7);
        carouselY[1] = sqrtf(carouselY[1] * carouselY[1]) * 0.7;
        carouselZ[1] = -(sqrtf(carouselZ[1] * carouselZ[1]) * 0.7);
        carouselX[0] = carouselX[1] + 60.0;
        carouselY[0] = 5.0f - carouselY[1];
        carouselZ[0] = -(carouselZ[1] + 70.0);
        carouselX[3] += 7.0;
        carouselY[3] = 15.0f;
        carouselZ[3] = -70.0f;
    }
}
