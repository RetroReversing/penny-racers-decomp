extern float D_8021B024;
extern float D_8021B038;
extern float D_8021B04C;
extern float D_8021B028;
extern float D_8021B02C;
extern float D_8021B030;
extern float D_8021B034;
extern float D_8021B03C;
extern float D_8021B040;
extern float D_8021B044;
extern float D_8021B048;
extern float D_8021B050;
extern float D_8021B054;
extern float D_8021B058;
extern float D_8021B05C;
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_802055F8();
extern char D_8011F2F0[];
extern u8 D_8021B00C;
extern u16 D_8021E146;
extern s16 D_8021E1A2;
extern char D_8021E20B[];
extern u16 D_8021EFF8;
extern u16 D_8021F024;
extern u16 D_8021F026;
extern u16 D_8021F090;

void func_80209D74(s32 arg0) {
    s32 temp_v1;
    s32 var_a0;
    u8 temp_v0;
    void *temp_s0;
    void *temp_s1;
    void *temp_s2;
    void *temp_s3;
    void *temp_s4;
    void *temp_s5;
    void *temp_v1_2;

    temp_s0 = ((arg0 & 0xFFFF) * 0x64) + D_8011F2F0;
    temp_s1 = (void *)((D_8021F090 * 0x64)); temp_s1 = (void *)((char *)temp_s1 + (s32)(D_8011F2F0));
    temp_s3 = (D_8021E146 * 0x64) + D_8011F2F0;
    temp_s2 = (D_8021F024 * 0x64) + D_8011F2F0;
    temp_s5 = (D_8021F026 * 0x64) + D_8011F2F0;
    temp_s4 = (D_8021EFF8 * 0x64) + D_8011F2F0;
    temp_v0 = (*(u8 *)((char *)(temp_s0) + 0));
    if (temp_v0 != 0) {
        if (((s32) temp_v0 >= 0) && ((s32) temp_v0 < 4)) {
            var_a0 = 0;
            if (*(*(u8 **)((char *)(temp_s0) + 0x50)) == 0) {
                (*(f32 *)((char *)(temp_s0) + 0x28)) -= 1.0f;
            }
            do {
                temp_v1 = var_a0 & 0xFF;
                if ((*(u8 *)((char *)(temp_s0) + 0)) != temp_v1) {
                    temp_v1_2 = (void *) (((temp_v1 * 2)) + (s32) temp_s0);
                    (*(u16 *)((char *)(temp_v1_2) + 2)) |= 8;
                }
                var_a0 += 1;
            } while ((u32) (var_a0 & 0xFF) < 4U);
        }
        return;
    }
    if (D_8021E1A2 == 0) {
        if (*(D_8021E20B + ((*(u8 *)((char *)(temp_s0) + 0)) * 9)) == 1) {
            if (*(*(u8 **)((char *)(temp_s0) + 0x50)) == 0) {
                (*(f32 *)((char *)(temp_s1) + 0x18)) = 0xC1A00000;
                (*(f32 *)((char *)(temp_s1) + 0x1C)) = -10.0f;
                (*(f32 *)((char *)(temp_s1) + 0x20)) = 0;
                (*(f32 *)((char *)(temp_s3) + 0x18)) = -200.0f;
                (*(f32 *)((char *)(temp_s2) + 0x18)) = 200.0f;
                (*(f32 *)((char *)(temp_s5) + 0x18)) = -200.0f;
                (*(f32 *)((char *)(temp_s4) + 0x18)) = 200.0f;
                goto block_13;
            }
        } else if (D_8021B00C == 0) {
            if (*(*(u8 **)((char *)(temp_s0) + 0x50)) == 0) {
                func_802055F8();
                (*(f32 *)((char *)(temp_s1) + 0x18)) = (f32) D_8021B024;
                (*(f32 *)((char *)(temp_s1) + 0x1C)) = (f32) D_8021B038;
                (*(f32 *)((char *)(temp_s3) + 0x18)) = (f32) D_8021B028;
                (*(f32 *)((char *)(temp_s1) + 0x20)) = (f32) D_8021B04C;
                (*(f32 *)((char *)(temp_s2) + 0x18)) = (f32) D_8021B02C;
                (*(f32 *)((char *)(temp_s5) + 0x18)) = (f32) D_8021B030;
                (*(f32 *)((char *)(temp_s4) + 0x18)) = (f32) D_8021B034;
                (*(f32 *)((char *)(temp_s3) + 0x1C)) = (f32) (D_8021B03C + -10.0f);
                (*(f32 *)((char *)(temp_s2) + 0x1C)) = (f32) (D_8021B040 + -10.0f);
                (*(f32 *)((char *)(temp_s5) + 0x1C)) = (f32) (D_8021B044 + -10.0f);
                (*(f32 *)((char *)(temp_s4) + 0x1C)) = (f32) (D_8021B048 + -10.0f);
                (*(f32 *)((char *)(temp_s3) + 0x20)) = (f32) D_8021B050;
                (*(f32 *)((char *)(temp_s2) + 0x20)) = (f32) D_8021B054;
                (*(f32 *)((char *)(temp_s5) + 0x20)) = (f32) D_8021B058;
                (*(f32 *)((char *)(temp_s4) + 0x20)) = (f32) D_8021B05C;
                goto block_13;
            }
        } else if (*(*(u8 **)((char *)(temp_s0) + 0x50)) == 0) {
            (*(f32 *)((char *)(temp_s1) + 0x18)) = 0;
            (*(f32 *)((char *)(temp_s1) + 0x1C)) = -10.0f;
            (*(f32 *)((char *)(temp_s1) + 0x20)) = 0;
            (*(f32 *)((char *)(temp_s3) + 0x18)) = -200.0f;
            (*(f32 *)((char *)(temp_s2) + 0x18)) = 200.0f;
block_13:
            if (*(*(u8 **)((char *)(temp_s0) + 0x50)) == 0) {
                (*(f32 *)((char *)(temp_s1) + 0x28)) -= 1.0f;
                (*(f32 *)((char *)(temp_s3) + 0x28)) -= 1.0f;
                (*(f32 *)((char *)(temp_s2) + 0x28)) -= 1.0f;
                (*(f32 *)((char *)(temp_s5) + 0x28)) -= 1.0f;
                (*(f32 *)((char *)(temp_s4) + 0x28)) -= 1.0f;
            }
        }
    } else if (*(*(u8 **)((char *)(temp_s0) + 0x50)) == 0) {
        (*(f32 *)((char *)(temp_s0) + 0x28)) -= 1.0f;
    }
    (*(u16 *)((char *)(temp_s0) + 4)) |= 8;
    (*(u16 *)((char *)(temp_s0) + 6)) |= 8;
    (*(u16 *)((char *)(temp_s0) + 8)) |= 8;
}
