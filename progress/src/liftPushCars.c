f32 sqrtf(f32);
extern u8 D_8011F2F0[];
extern s32 sLiftHit;
extern u8 sCars[];

/* Pushes every car within range of a lift record away from the lift's object position and sets sLiftHit when any car is touched. */
void liftPushCars(s32 liftIdx, u8 *lift)
{
    f32 liftX;
    f32 liftY;
    f32 liftZ;
    f32 dx;
    f32 dy;
    f32 dz;
    f32 dist;
    s32 slot;
    s8 carIdx;
    u8 *liftObj;
    u8 *car;
    u8 *carObj;

    liftObj = D_8011F2F0 + ((liftIdx & 0xFFFF) * 0x64);
    sLiftHit = 0;
    liftX = *(f32 *)(liftObj + 0x18);
    liftY = *(f32 *)(liftObj + 0x1C);
    liftZ = *(f32 *)(liftObj + 0x20);
    for (slot = 0; slot < 7; slot++)
    {
        carIdx = *(s8 *)((lift + slot) + 0x60);
        if (carIdx != -1)
        {
            car = sCars + carIdx * 0x8F0;
            carObj = D_8011F2F0 + (*(u16 *)(car + 2)) * 0x64;
            dx = liftX - *(f32 *)(carObj + 0x18);
            dy = liftY - *(f32 *)(carObj + 0x1C);
            dz = liftZ - *(f32 *)(carObj + 0x20);
            dist = sqrtf(dx * dx + dy * dy + dz * dz);
            if (dist < *(f32 *)(lift + 0x70))
            {
                if (*(f32 *)(carObj + 0x18) > *(f32 *)(liftObj + 0x18))
                {
                    *(f32 *)(car + 0x854) += *(f32 *)(lift + 0x70) - dist;
                }
                else
                {
                    *(f32 *)(car + 0x854) -= *(f32 *)(lift + 0x70) - dist;
                }
                if (*(f32 *)(carObj + 0x20) > *(f32 *)(liftObj + 0x20))
                {
                    *(f32 *)(car + 0x85C) += *(f32 *)(lift + 0x70) - dist;
                }
                else
                {
                    *(f32 *)(car + 0x85C) -= *(f32 *)(lift + 0x70) - dist;
                }
                sLiftHit = 1;
            }
        }
    }
}
