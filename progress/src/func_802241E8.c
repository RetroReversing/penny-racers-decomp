void func_802241E8(char *arg0)
{
    u8 temp_v1;
    f32 t;
    f32 limit;

    if (*(u8 *)(arg0 + 0x860) != 0) {
        temp_v1 = *(u8 *)(arg0 + 0x7CC);
        if (*(u8 *)(arg0 + 0x878) != temp_v1 && *(u8 *)(arg0 + 0x8A1) == 0) {
            *(f32 *)(arg0 + 0x874) = *(f32 *)(arg0 + (temp_v1 << 4) + 0x24C);
            *(u8 *)(arg0 + 0x871) = *(u8 *)(arg0 + (*(u8 *)(arg0 + 0x7CC) << 4) + 0x250);
        }
        if (*(u8 *)(arg0 + 0x871) != 0) {
            *(u8 *)(arg0 + 0x871) = *(u8 *)(arg0 + 0x871) - 1;
            *(f32 *)(arg0 + 0x7B4) = *(f32 *)(arg0 + 0x7B4) * *(f32 *)(arg0 + 0x874);
            *(f32 *)(arg0 + 0x7B8) = *(f32 *)(arg0 + 0x7B8) * *(f32 *)(arg0 + 0x874);
            *(f32 *)(arg0 + 0x7BC) = *(f32 *)(arg0 + 0x7BC) * *(f32 *)(arg0 + 0x874);
            *(f32 *)(arg0 + 0x7C0) = *(f32 *)(arg0 + 0x7C0) * *(f32 *)(arg0 + 0x874);
            *(f32 *)(arg0 + 0x7C4) = *(f32 *)(arg0 + 0x7C4) * *(f32 *)(arg0 + 0x874);
            *(f32 *)(arg0 + 0x7C8) = *(f32 *)(arg0 + 0x7C8) * *(f32 *)(arg0 + 0x874);
        }
    }
    t = *(f32 *)(arg0 + 0x770);
    limit = 140.0f;
    if (limit < t) {
        *(f32 *)(arg0 + 0x764) = ((t * 0.1f) + 50.0f) + ((t - limit) * 0.1f);
    } else {
        *(f32 *)(arg0 + 0x764) = (*(f32 *)(arg0 + 0x770) * 0.1f) + 50.0f;
    }
}
