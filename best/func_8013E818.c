extern s16 func_8012913C(u16, s32, s32, s32);
extern u8 D_8011F2F0[];
extern u8 D_8011F350[];
extern u8 D_8018D6C0[];
typedef struct { u16 f0; u8 pad[2286]; } Slot_8022A772;
extern Slot_8022A772 D_8022A772[];
typedef struct { f32 f0; u8 pad[2284]; } Slot_8022AD5C;
extern Slot_8022AD5C D_8022AD5C[];
extern u16 D_80233EC0;

void func_8013E818(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5, s32 arg6) {
    s32 i;
    u8 *s0;
    u8 *t0;

    t0 = (u8 *)((u32)D_8011F2F0 + (arg1 & 0xFFFF) * 0x64);
    s0 = (u8 *)((u32)D_8018D6C0 + (arg0 & 0xFFFF) * 0x7C);
    *(u8 **)((u32)D_8011F350 + (arg1 & 0xFFFF) * 0x64) = s0;
    *(s16 *)(t0 + 8) = arg2;
    *(s16 *)(t0 + 6) = arg2;
    *(s16 *)(t0 + 4) = arg2;
    *(s16 *)(t0 + 2) = arg2;
    *(s32 *)(s0 + 8) = arg3;
    *(f32 *)(s0 + 0xC) = arg4;
    *(f32 *)(s0 + 0x10) = arg5;
    *(u16 *)(s0 + 0x14) = arg6;
    *(s8 *)(s0 + 0x16) = 0;
    *(s16 *)(s0 + 0x20) = func_8012913C(D_80233EC0, *(s32 *)(t0 + 0x18), *(s32 *)(t0 + 0x1C), *(s32 *)(t0 + 0x20));
    *(s16 *)(s0 + 0x22) = 0;
    *(s8 *)(s0 + 0x1D) = 0;
    *(s8 *)(s0 + 0x1E) = 0;
    *(s32 *)(s0 + 0x70) = 0;
    for (i = 0; i < 7; i++) {
        *(s8 *)(s0 + 0x67) = 0;
        if (D_8022A772[i].f0 != 0xFFFF && D_8022AD5C[i].f0 > 0.0f) {
            *(s8 *)(s0 + 0x60) = i;
        } else {
            *(s8 *)(s0 + 0x60 + i) = -1;
        }
    }
}
