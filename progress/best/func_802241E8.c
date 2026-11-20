/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

void func_802241E8(void *arg0) {
char *__repair_addr;

    f32 temp_ft1;
    u8 temp_v1;

    if ((*(u8 *)((char *)(arg0) + 0x860)) != 0) {
        temp_v1 = (*(u8 *)((char *)(arg0) + 0x7CC));
        if (((*(u8 *)((char *)(arg0) + 0x878)) != temp_v1) && ((*(u8 *)((char *)(arg0) + 0x8A1)) == 0)) {
__repair_addr = (char *)((arg0 + (temp_v1 * 0x10)));

            (*(f32 *)((char *)(arg0) + 0x874)) = (f32) (*(f32 *)((char *)(__repair_addr) + 0x24C));
            (*(u8 *)((char *)(arg0) + 0x871)) = (u8) (*(u8 *)((char *)((arg0 + ((*(u8 *)((char *)(arg0) + 0x7CC)) * 0x10))) + 0x250));
        }
        if ((*(u8 *)((char *)(arg0) + 0x871)) != 0) {
            (*(f32 *)((char *)(arg0) + 0x7B4)) = (f32) ((*(f32 *)((char *)(arg0) + 0x7B4)) * (*(f32 *)((char *)(arg0) + 0x874)));
            (*(u8 *)((char *)(arg0) + 0x871)) = (u8) ((*(u8 *)((char *)(arg0) + 0x871)) - 1);
            (*(f32 *)((char *)(arg0) + 0x7B8)) = (f32) ((*(f32 *)((char *)(arg0) + 0x7B8)) * (*(f32 *)((char *)(arg0) + 0x874)));
            (*(f32 *)((char *)(arg0) + 0x7BC)) = (f32) ((*(f32 *)((char *)(arg0) + 0x7BC)) * (*(f32 *)((char *)(arg0) + 0x874)));
            (*(f32 *)((char *)(arg0) + 0x7C0)) = (f32) ((*(f32 *)((char *)(arg0) + 0x7C0)) * (*(f32 *)((char *)(arg0) + 0x874)));
            (*(f32 *)((char *)(arg0) + 0x7C4)) = (f32) ((*(f32 *)((char *)(arg0) + 0x7C4)) * (*(f32 *)((char *)(arg0) + 0x874)));
            (*(f32 *)((char *)(arg0) + 0x7C8)) = (f32) ((*(f32 *)((char *)(arg0) + 0x7C8)) * (*(f32 *)((char *)(arg0) + 0x874)));
        }
    }
    temp_ft1 = (*(f32 *)((char *)(arg0) + 0x770));
    if (temp_ft1 > 140.0f) {
        (*(f32 *)((char *)(arg0) + 0x764)) = (f32) ((temp_ft1 * 0.1f) + 50.0f + ((temp_ft1 - 140.0f) * 0.1f));
        return;
    }
    (*(f32 *)((char *)(arg0) + 0x764)) = (f32) (((*(f32 *)((char *)(arg0) + 0x770)) * 0.1f) + 50.0f);
}
