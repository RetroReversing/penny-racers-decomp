s32 func_8002CC90();
s32 func_8002CD38(s32, f32);
s32 alEvtqPostEvent();
s32 func_8002FFD0();
s32 func_800301B0();
s32 func_80030250();
s32 func_800302E0();
s32 func_80030370();
s32 func_80030400();
s32 func_800304B0();
s32 func_80030630();
extern u8 *D_80046DF4;
extern f64 D_8004A368;

typedef struct { s32 a; s32 b; s32 c; s32 d; s32 e; s32 f; s32 g; u8 pad[0]; } Dummy;

void _n_handleEvent(void *arg0) {
    u16 sp10;
    s16 sp12;
    s8 sp14;
    s16 sp18;
    void *sp1C;
    f32 temp_fs0;
    f32 temp_ft0;
    s16 temp_s1;
    s16 temp_s4;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 var_v1;
    s16 var_v1_2;
    s32 temp_a0_3;
    s32 temp_s5;
    s32 temp_v0;
s32 __repair_phase_temp_v0;
    
    u16 temp_a0_2;
    u8 temp_a0;
    u8 temp_a1;
    s32 stor;
    u8 *ptr;
    u8 *temp_s0;
    u8 *temp_s3;
    u8 *temp_v1_4;

    temp_s0 = *(u8 **)((u8 *)arg0 + 4);
    temp_v1 = *(s16 *)arg0;
    temp_s5 = *(s32 *)(D_80046DF4 + 0xC);
    temp_s3 = *(u8 **)(temp_s0 + 0x1C);
    switch (temp_v1) {
    case 0:
        if (((*(s32 *)(temp_s0 + 0x28) != 0) | (temp_s3 == 0)) == 0) {
            sp12 = 0;
            sp14 = 0;
            sp10 = *(u16 *)(temp_s0 + 0x20);
            func_8002FFD0(temp_s0, &sp10);
            ptr = *(u8 **)temp_s3;
            temp_v1_2 = temp_s3[0xC] + (temp_s0[0x2E] + 0xFFC0);
            var_v1 = temp_v1_2 & ((s32) ~temp_v1_2 >> 0x1F);
            temp_s4 = (ptr[0xC] * *(s16 *)(temp_s0 + 0x2C)) / 127;
            if (var_v1 >= 0x80) {
                var_v1 = 0x7F;
            }
            temp_fs0 = *(f32 *)(temp_s0 + 0x24);
            stor = func_8002CD38(*(s32 *)ptr, temp_fs0);
            func_800304B0(temp_s0, *(s32 *)(temp_s3 + 8));
            *(s32 *)(temp_s0 + 0x28) = 1;
            func_800302E0(temp_s0, var_v1 & 0xFF);
            func_80030400(temp_s0, temp_s4, stor);
            func_80030370(temp_s0, temp_fs0);
            func_80030250(temp_s0, temp_s0[0x2F]);
            sp18 = 6;
            sp1C = temp_s0;
            alEvtqPostEvent(temp_s5 + 0x14, &sp18, func_8002CD38(**(s32 **)temp_s3, *(f32 *)(temp_s0 + 0x24)));
            return;
        }
    default:
        return;
    case 1:
        if (((*(s32 *)(temp_s0 + 0x28) != 1) | (temp_s3 == 0)) == 0) {
            __repair_phase_temp_v0 = func_8002CD38(*(s32 *)(*(u8 **)temp_s3 + 8), *(f32 *)(temp_s0 + 0x24));
            func_80030400(temp_s0, 0, __repair_phase_temp_v0);
            if (__repair_phase_temp_v0 != 0) {
                sp18 = 7;
                sp1C = temp_s0;
                alEvtqPostEvent(temp_s5 + 0x14, &sp18, __repair_phase_temp_v0);
                *(s32 *)(temp_s0 + 0x28) = 2;
                return;
            }
        case 7:
            func_80030630(temp_s0);
            func_800301B0(temp_s0);
            func_8002CC90(temp_s5 + 0x14, temp_s0);
            *(s32 *)(temp_s0 + 0x28) = 0;
        }
        break;
    case 2:
        temp_a0 = *((u8 *)arg0 + 8);
        temp_s0[0x2E] = temp_a0;
        if ((*(s32 *)(temp_s0 + 0x28) == 1) & (temp_s3 != 0)) {
            temp_v1_3 = temp_s3[0xC] + (temp_a0 + 0xFFC0);
            var_v1_2 = temp_v1_3 & ((s32) ~temp_v1_3 >> 0x1F);
            if (var_v1_2 >= 0x80) {
                var_v1_2 = 0x7F;
            }
            func_800302E0(temp_s0, var_v1_2 & 0xFF);
            return;
        }
        break;
    case 4:
        temp_ft0 = *((u8 *)arg0 + 8);
        *(f32 *)(temp_s0 + 0x24) = temp_ft0;
        if ((f64) temp_ft0 < D_8004A368) {
            *(f32 *)(temp_s0 + 0x24) = 0.0001f;
        }
        if (*(s32 *)(temp_s0 + 0x28) == 1) {
            func_80030370(temp_s0, *(f32 *)(temp_s0 + 0x24));
            return;
        }
        break;
    case 8:
        temp_v0 = (u8)(*((u8 *)arg0 + 8));
        temp_s0[0x2F] = temp_v0;
        if (*(s32 *)(temp_s0 + 0x28) == 1) {
            func_80030250(temp_s0, temp_v0);
            return;
        }
        break;
    case 3:
        temp_a0_2 = *((u8 *)arg0 + 8);
        *(s16 *)(temp_s0 + 0x2C) = (s16) temp_a0_2;
        if ((*(s32 *)(temp_s0 + 0x28) == 1) & (temp_s3 != 0)) {
            func_80030400(temp_s0, (s16) (((*(u8 **)temp_s3)[0xD] * (s16) temp_a0_2) / 127), 0x3E8);
            return;
        }
        break;
    case 6:
        temp_v1_4 = *(u8 **)temp_s3;
        temp_a0_3 = *(s32 *)(temp_v1_4 + 4);
        if (temp_a0_3 != -1) {
            temp_s1 = (temp_v1_4[0xD] * *(s16 *)(temp_s0 + 0x2C)) / 127;
            temp_v0 = func_8002CD38(temp_a0_3, *(f32 *)(temp_s0 + 0x24));
            func_80030400(temp_s0, temp_s1, temp_v0);
            sp18 = 1;
            sp1C = temp_s0;
            alEvtqPostEvent(temp_s5 + 0x14, &sp18, temp_v0);
            return;
        }
        break;
    }
}
