extern s32 carouselSelected[];
extern u8 carouselCmd, carouselCount;
extern f32 carouselX[], carouselY[], carouselZ[];
extern s8 carouselPhase;
void func_80205C00(void) {
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
