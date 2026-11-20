/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern s32 D_8022A772;
extern s32 D_8022AD0C;

void func_80222988(void *arg0) {
    f32 var_ft0;
    f32 var_fv0;
    s32 var_a1;
    u16 temp_v1;
    
    union { void * pointer; unsigned int value; } __repair_phase_storage;
    void *var_v0;
    s32 *__base_D_8022AD0C;

    __base_D_8022AD0C = &D_8022AD0C;

    var_a1 = 0;
    if ((*(u8 *)((char *)(arg0) + 0x778)) == 0) {
        __repair_rows: {
            temp_v1 = *(&D_8022A772 + var_a1 * 0x23c);
            if (temp_v1 != 0xFFFF) {
                __repair_phase_storage.pointer = (void *)(arg0); __repair_phase_storage.pointer = (void *)((char *)__repair_phase_storage.pointer + (s32)((var_a1 * 8)));
                if (temp_v1 != (*(u16 *)((char *)(arg0) + 2))) {
                    (*(f32 *)((char *)(__repair_phase_storage.pointer) + 0x5B4)) = (f32) ((*(f32 *)((char *)(__repair_phase_storage.pointer) + 0x5B4)) * (*(f32 *)((char *)(arg0) + 0x5A4)));
                }
            }/*__repair_loop_weight*/do {
            var_a1 += 1;} while (0);
        }
if (var_a1 < 7) goto __repair_rows;
        __repair_phase_storage.value = (u8)( (*(u8 *)((char *)(arg0) + 0x5F2)));
        if ((*(s32 *)((char *)(arg0) + 0x59C)) > *(__base_D_8022AD0C + (((u8)__repair_phase_storage.value) * 0x8F0))) {
            var_v0 = arg0 + (((u8)__repair_phase_storage.value) * 8);
            var_fv0 = (1.0f - var_ft0) * (*(f32 *)((char *)(arg0) + 0x5A8)) * 0.5f;
            var_ft0 = (*(f32 *)((char *)(var_v0) + 0x5B8));
        } else {
            var_v0 = arg0 + ((*(u8 *)((char *)(arg0) + 0x5F2)) * 8);
            var_ft0 = (*(f32 *)((char *)(var_v0) + 0x5B8));
            var_fv0 = (1.0f - var_ft0) * (*(f32 *)((char *)(arg0) + 0x5A8));
        }
        (*(f32 *)((char *)(var_v0) + 0x5B8)) = (f32) (var_fv0 + var_ft0);
    }
}
