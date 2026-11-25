#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK;
typedef s32 M2C_UNK32;
s32 func_800DE41C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *, f32, f32, f32, s32, M2C_UNK32, s32, f32, f32, f32);
s32 func_8013E364();
M2C_UNK func_8013E640(s32, s32, void *, M2C_UNK, s32, f32, s32, f32, f32, f32, s32);
M2C_UNK func_801D7028(s32, M2C_UNK);
M2C_UNK guMtxXFMF(void *, M2C_UNK, M2C_UNK, f32, f32 *, f32 *, f32 *);
extern M2C_UNK D_8011F2F0;
typedef struct { u16 f0; u8 pad[98]; } Slot_8011F2F2;
extern Slot_8011F2F2 D_8011F2F2[];
extern M2C_UNK D_8011F2FD;
extern M2C_UNK D_8011F334;
extern M2C_UNK D_8011F338;
extern M2C_UNK D_8011F33C;
extern M2C_UNK D_8011F350;
extern M2C_UNK D_80168408;
extern f64 D_801839D0;
extern f64 D_801839D8;
extern M2C_UNK D_8018D6C4;
extern M2C_UNK D_802378B4;
extern M2C_UNK D_802390C8;
extern M2C_UNK func_80163E5C;
extern M2C_UNK func_8016410C;
extern M2C_UNK func_80164324;

void func_80163A38(s32 arg0) {
    M2C_UNK *__base_D_8011F2F0;
    f32 sp48;
    f32 sp4C;
    f32 sp50;
    s32 idx;
s32 __repair_result_idx;
    
    
s32 __repair_phase_temp_v0_6;
    s32 temp_s0;
    u16 temp_v0_4;
    s16 temp_v0_5;
    void *obj;
    void *node;
    void *slot;

    obj = *((M2C_UNK *)((s8 *)&D_8011F350 + ((arg0 & 0xFFFF) * 0x64)));
    idx = M2C_FIELD(obj, u16 *, 2);
    __base_D_8011F2F0 = &D_8011F2F0;
    slot = (void *) (__base_D_8011F2F0 + idx * 0x64 + 0x244);
    node = (void *) (__base_D_8011F2F0 + idx * 0x64);
    temp_s0 = func_8013E364() & 0xFFFF;
    if (temp_s0 != 0xFFFF) {
        __repair_result_idx = func_800DE41C(0, 0, 1, 0, 0x51, 0xFF, &D_80168408, &func_80163E5C, NULL, M2C_FIELD(node, f32 *, 0x18), M2C_FIELD(node, f32 *, 0x1C) + 15.0f, M2C_FIELD(node, f32 *, 0x20), 0, M2C_FIELD(node, f32 *, 0x28), 0, 2.0f * M2C_FIELD(node, f32 *, 0x30), 2.0f * M2C_FIELD(node, f32 *, 0x34), 2.0f * M2C_FIELD(node, f32 *, 0x38));
        if ((u32) ((__repair_result_idx + 2) & 0xFFFF) < 2U) {
            do { func_8013E49C(temp_s0); } while (0);
            return;
        }
        idx = (u16)(M2C_FIELD(obj, u16 *, 0x560));
        M2C_FIELD(obj, u16 *, 0x560) = (u16) ((idx & 0xF8) | ((idx & 7) + 1));
        do { func_801D7028(__repair_result_idx & 0xFFFF, 0x30); } while (0);
        /*__repair_pointer_balance*/if ((unsigned long)__base_D_8011F2F0 & 0x100) {
guMtxXFMF((char *) obj + 0x6D4, 0, 0x41700000, (f32) (((f64) M2C_FIELD(obj, f32 *, 0x774) * D_801839D0) + D_801839D8), &sp48, &sp4C, &sp50);
} else {
guMtxXFMF((char *) obj + 0x6D4, 0, 0x41700000, (f32) (((f64) M2C_FIELD(obj, f32 *, 0x774) * D_801839D0) + D_801839D8), &sp48, &sp4C, &sp50);
}
        do { func_8013E640(temp_s0, __repair_result_idx & 0xFFFF, obj, 0, 0, 15.0f, 0, sp48, sp4C, sp50, 0x78); } while (0);
        *((M2C_UNK *)((s8 *)&D_8018D6C4 + (temp_s0 * 0x7C))) = obj;
        temp_v0_5 = M2C_FIELD(obj, s16 *, 0x55E);
        if (temp_v0_5 > 0) {
            M2C_FIELD(obj, s16 *, 0x55E) = (s16) (temp_v0_5 - 1);
        }
        if (M2C_FIELD(obj, s16 *, 0x55E) == 0) {
            *(void **) slot = &D_802378B4;
        }
        guMtxXFMF((char *) obj + 0x6D4, 0, 0x41700000, -40.0f, &sp48, &sp4C, &sp50);
        __repair_result_idx = func_800DE41C(0, 0, 1, 0, 0x5B, 0x9B, &D_802390C8, &func_8016410C, &func_80164324, sp48 + M2C_FIELD(node, f32 *, 0x18), sp4C + M2C_FIELD(node, f32 *, 0x1C), sp50 + M2C_FIELD(node, f32 *, 0x20), 0, 0, 0, 0.08f, 0.08f, 0.08f);
        if ((u32) ((__repair_result_idx + 2) & 0xFFFF) >= 2U) {
            void *n2 = (void *) (__base_D_8011F2F0 + (__repair_result_idx & 0xFFFF) * 0x64);
            M2C_FIELD(n2, s16 *, 8) = 0x40;
            M2C_FIELD(n2, s16 *, 6) = 0x40;
            M2C_FIELD(n2, s16 *, 4) = 0x40;
            D_8011F2F2[__repair_result_idx & 0xFFFF].f0 = 0x40;
            *((M2C_UNK *)((s8 *)&D_8011F334 + (__repair_result_idx & 0xFFFF) * 0x64)) = M2C_FIELD(obj, f32 *, 0x7C0);
            *((f32 *)((s8 *)&D_8011F338 + (__repair_result_idx & 0xFFFF) * 0x64)) = (M2C_FIELD(obj, f32 *, 0x7C4) * 0.8f) + 1.0f;
            *((f32 *)((s8 *)&D_8011F33C + (__repair_result_idx & 0xFFFF) * 0x64)) = M2C_FIELD(obj, f32 *, 0x7C8);
        }
        *((s8 *)((s8 *)&D_8011F2FD + ((arg0 & 0xFFFF) * 0x64))) = 2;
    }
}
