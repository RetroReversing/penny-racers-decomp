/* Integrates a car's ride-height velocity, decays the bounce term, and clamps the height to 1000..7000. */ void updateRideHeight(void *car)
{
    char *carBytes = car;
    f32 bounceStep;
    f32 heightDelta;
    f32 bounce;
    f32 *table;
    s32 tableIdx;

    if (*(u8 *) (carBytes + 0x8A1) == 2) {
        *(f32 *) (carBytes + 0x748) = *(f32 *) (carBytes + 0x744) * 0.02f + *(f32 *) (carBytes + 0x748);
    } else {
        *(f32 *) (carBytes + 0x748) = *(f32 *) (carBytes + 0x744) * 0.04f + *(f32 *) (carBytes + 0x748);
    }
    if (*(u8 *) (carBytes + 0x74D) != 0) {
        *(u8 *) (carBytes + 0x74D) -= 1;
        tableIdx = *(u8 *) (carBytes + 0x74C);
        table = *(f32 **) (carBytes + 0x238);
        heightDelta = *(f32 *) (carBytes + 0x748) - *(f32 *) (carBytes + 0x770) * table[tableIdx];
        heightDelta = heightDelta * 0.9f;
        *(f32 *) (carBytes + 0x748) = *(f32 *) (carBytes + 0x748) - heightDelta;
        tableIdx = *(u8 *) (carBytes + 0x74C);
        table = *(f32 **) (carBytes + 0x238);
        *(f32 *) (carBytes + 0x770) = *(f32 *) (carBytes + 0x748) / table[tableIdx];
    }
    bounce = *(f32 *) (carBytes + 0x754);
    if (0.0f < bounce) {
        bounceStep = bounce * 0.8f;
        *(f32 *) (carBytes + 0x754) = bounceStep;
        *(f32 *) (carBytes + 0x748) = *(f32 *) (carBytes + 0x748) + bounceStep * 0.5f;
        if (*(f32 *) (carBytes + 0x754) < 50.0f) {
            *(f32 *) (carBytes + 0x754) = 0.0f;
        }
    }
    if (*(f32 *) (carBytes + 0x748) > 7000.0f) {
        *(f32 *) (carBytes + 0x748) = 7000.0f;
    } else if (*(f32 *) (carBytes + 0x748) < 1000.0f) {
        *(f32 *) (carBytes + 0x748) = 1000.0f;
    }
}
