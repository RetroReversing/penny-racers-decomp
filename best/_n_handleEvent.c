extern void *D_80046DF4;
extern f64 D_8004A368;
s32 func_8002CD38(s32, f32, s32, void *);
void func_8002FFD0(void *, u16 *);
void func_80030250(void *, u8);
void n_alSynFreeVoice(void *);
void n_alSynSetPan(void *, s32);
void n_alSynSetPitch(void *, f32);
void n_alSynSetVol(void *, s16, s32);
void n_alSynStartVoice(void *, s32);
void n_alSynStopVoice(void *);
void _removeEvents(s32, void *);
void alEvtqPostEvent(s32, s16 *, s32);

void _n_handleEvent(void *arg0) {
    u16 sp10;
    s16 sp12;
    s8 sp14;
    struct { s16 type; s32 pad; void *payload; s32 pad2; } ev;
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
    s32 temp_s2;
    s32 temp_s5;
    s32 temp_v0;
    s32 temp_v0_2;
    u16 temp_a0_2;
    u8 temp_a0;
    u8 temp_a1;
    void *temp_a3;
    void *temp_s0;
    void *temp_s3;
    void *temp_v1_4;

    temp_s0 = *(void **)((s8 *)arg0 + 4);
    temp_v1 = *(s16 *)arg0;
    temp_s5 = *(s32 *)((s8 *)D_80046DF4 + 0xC);
    temp_s3 = *(void **)((s8 *)temp_s0 + 0x1C);
    switch (temp_v1) {
    case 0:
        if (((*(s32 *)((s8 *)temp_s0 + 0x28) != 0) | (temp_s3 == NULL)) == 0) {
            sp12 = 0;
            sp14 = 0;
            sp10 = *(u16 *)((s8 *)temp_s0 + 0x20);
            func_8002FFD0(temp_s0, &sp10);
            temp_a3 = *(void **)temp_s3;
            temp_v1_2 = *(u8 *)((s8 *)temp_s3 + 0xC) + (*(u8 *)((s8 *)temp_s0 + 0x2E) + 0xFFC0);
            var_v1 = temp_v1_2 & ((s32) ~temp_v1_2 >> 0x1F);
            temp_s4 = (*(u8 *)((s8 *)temp_a3 + 0xC) * *(s16 *)((s8 *)temp_s0 + 0x2C)) / 127;
            if (var_v1 >= 0x80) {
                var_v1 = 0x7F;
            }
            temp_fs0 = *(f32 *)((s8 *)temp_s0 + 0x24);
            temp_s2 = func_8002CD38(*(s32 *)temp_a3, temp_fs0, 0x81020409, temp_a3);
            n_alSynStartVoice(temp_s0, *(s32 *)((s8 *)temp_s3 + 8));
            *(s32 *)((s8 *)temp_s0 + 0x28) = 1;
            n_alSynSetPan(temp_s0, var_v1 & 0xFF);
            n_alSynSetVol(temp_s0, temp_s4, temp_s2);
            n_alSynSetPitch(temp_s0, temp_fs0);
            func_80030250(temp_s0, *(u8 *)((s8 *)temp_s0 + 0x2F));
            ev.type = 6;
            ev.payload = temp_s0;
            alEvtqPostEvent(temp_s5 + 0x14, (s16 *)&ev, func_8002CD38(*(s32 *)(*(void **)temp_s3), *(f32 *)((s8 *)temp_s0 + 0x24), 0x81020409, temp_a3));
            return;
        }
    default:
        return;
    case 1:
        if (((*(s32 *)((s8 *)temp_s0 + 0x28) != 1) | (temp_s3 == NULL)) == 0) {
            temp_v0 = func_8002CD38(*(s32 *)(*(void **)temp_s3 + 8), *(f32 *)((s8 *)temp_s0 + 0x24), 0x81020409, temp_s3);
            n_alSynSetVol(temp_s0, 0, temp_v0);
            if (temp_v0 != 0) {
                ev.type = 7;
                ev.payload = temp_s0;
                alEvtqPostEvent(temp_s5 + 0x14, (s16 *)&ev, temp_v0);
                *(s32 *)((s8 *)temp_s0 + 0x28) = 2;
                return;
            }
        case 7:
            n_alSynStopVoice(temp_s0);
            n_alSynFreeVoice(temp_s0);
            _removeEvents(temp_s5 + 0x14, temp_s0);
            *(s32 *)((s8 *)temp_s0 + 0x28) = 0;
        }
        break;
    case 2:
        temp_a0 = *(u8 *)((s8 *)arg0 + 8);
        *(u8 *)((s8 *)temp_s0 + 0x2E) = temp_a0;
        if ((*(s32 *)((s8 *)temp_s0 + 0x28) == 1) & (temp_s3 != NULL)) {
            temp_v1_3 = *(u8 *)((s8 *)temp_s3 + 0xC) + (temp_a0 + 0xFFC0);
            var_v1_2 = temp_v1_3 & ((s32) ~temp_v1_3 >> 0x1F);
            if (var_v1_2 >= 0x80) {
                var_v1_2 = 0x7F;
            }
            n_alSynSetPan(temp_s0, var_v1_2 & 0xFF);
            return;
        }
        break;
    case 4:
        temp_ft0 = (f32) *(u8 *)((s8 *)arg0 + 8);
        *(f32 *)((s8 *)temp_s0 + 0x24) = temp_ft0;
        if ((f64) temp_ft0 < D_8004A368) {
            *(f32 *)((s8 *)temp_s0 + 0x24) = 0.0001f;
        }
        if (*(s32 *)((s8 *)temp_s0 + 0x28) == 1) {
            n_alSynSetPitch(temp_s0, *(f32 *)((s8 *)temp_s0 + 0x24));
            return;
        }
        break;
    case 8:
        temp_a1 = *(u8 *)((s8 *)arg0 + 8);
        *(u8 *)((s8 *)temp_s0 + 0x2F) = temp_a1;
        if (*(s32 *)((s8 *)temp_s0 + 0x28) == 1) {
            func_80030250(temp_s0, temp_a1);
            return;
        }
        break;
    case 3:
        temp_a0_2 = (u16) *(u8 *)((s8 *)arg0 + 8);
        *(s16 *)((s8 *)temp_s0 + 0x2C) = (s16) temp_a0_2;
        if ((*(s32 *)((s8 *)temp_s0 + 0x28) == 1) & (temp_s3 != NULL)) {
            n_alSynSetVol(temp_s0, (s16) ((*(u8 *)((s8 *)(*(void **)temp_s3) + 0xD) * (s16) temp_a0_2) / 127), 0x3E8);
            return;
        }
        break;
    case 6:
        temp_v1_4 = *(void **)temp_s3;
        temp_a0_3 = *(s32 *)((s8 *)temp_v1_4 + 4);
        if (temp_a0_3 != -1) {
            temp_s1 = (*(u8 *)((s8 *)temp_v1_4 + 0xD) * *(s16 *)((s8 *)temp_s0 + 0x2C)) / 127;
            temp_v0_2 = func_8002CD38(temp_a0_3, *(f32 *)((s8 *)temp_s0 + 0x24), 0, temp_s0);
            n_alSynSetVol(temp_s0, temp_s1, temp_v0_2);
            ev.type = 1;
            ev.payload = temp_s0;
            alEvtqPostEvent(temp_s5 + 0x14, (s16 *)&ev, temp_v0_2);
            return;
        }
        break;
    }
}
