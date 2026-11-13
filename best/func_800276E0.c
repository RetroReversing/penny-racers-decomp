void osCreateMesgQueue(void *mq, void *msg, s32 count);
void osRecvMesg(void *mq, void *msg, s32 flags);
void osSendMesg(void *mq, void *msg, s32 flags, s32 pad);
s32 osVirtualToPhysical(void *);
s32 n_alAudioFrame(s32, s32 *, s32, s32);
void ai_dma_start(s32, s32);
void alLink(void *, void *);
void alUnlink(void *);
void func_80027584(void);
void nuScAddClient(void *, void *, s32);
u32 func_80039630(void);
s32 func_80039640(void);

extern u32 D_80046C30;
extern u8 D_80046C3C;
extern u8 D_80046C3D;
extern void (*D_80046C40)(s32, u8);
extern s32 D_8005CFC0;
extern s32 D_8005CFC8;
extern s32 D_8005D078;
extern void *D_8005D7A4;
extern void *D_8005D7A8;
extern s32 D_8005DCB0;
extern s32 D_80072BCC;
extern s32 D_800DD824;
extern s32 D_800DDE98;

void func_800276E0(void) {
    u8 sp10[0x10];
    u8 sp20[0x18];
    s32 sp38[8];
    u8 sp58[0x18];
    s32 sp70[1];
    s16 *sp74;
    s32 sp78;
    s32 sp84;
    s32 sp8C;
    s32 var_fp;
    s32 var_s2;
    s32 var_s3;
    s32 var_s5;
    s32 var_s6;
    s32 temp_s7;
    s32 temp_a3;
    u32 temp_s0;
    void *var_s0;
    void *temp_s1;
    s32 *var_s4;
    s32 var_v0;

    osCreateMesgQueue(sp20, sp38, 8);
    osCreateMesgQueue(sp58, sp70, 1);
    nuScAddClient(sp10, sp20, 3);
    var_s5 = 0;
    var_s2 = 0;
    var_s6 = D_8005CFC0;
    var_s3 = 0;
    var_s4 = &D_8005CFC8;
    sp78 = 0;
    sp8C = D_8005D078;
    temp_s7 = (((((D_800DDE98 * D_80072BCC) + 0x3B) / 60) / 184) + 1) * 0xB8;
    sp84 = temp_s7 - 0xB8;
    var_fp = 0;
    for (;;) {
        osRecvMesg(sp20, &sp74, 1);
        switch (*sp74) {
        case 1:
            if (func_80039640() < 0) {
                var_fp = 0;
                continue;
            }
            temp_s0 = func_80039630() >> 2;
            var_v0 = (s32) temp_s0 < 0x170;
            if (sp78 != 0 && D_80046C3C == 1) {
                ai_dma_start(sp8C, var_s5 * 4);
                var_s4 = (s32 *) ((u8 *) &D_8005CFC8 + var_s3 * 0x58);
                var_s6 = ((s32 *) &D_8005CFC0)[var_s3];
                sp8C = ((s32 *) &D_8005D078)[var_s2];
                var_v0 = (s32) temp_s0 < 0x170;
            }
            var_s5 = temp_s7;
            if ((var_v0 | (var_fp != 0)) != 0) {
                var_fp = 0;
            } else {
                var_s5 = sp84;
                var_fp = 1;
            }
            temp_a3 = n_alAudioFrame(var_s6, &sp78, osVirtualToPhysical((void *) sp8C), var_s5);
            if (sp78 != 0 && D_80046C3C == 1) {
                var_s4[0x44 / 4] = ((temp_a3 - var_s6) >> 3) * 8;
                var_s4[0x40 / 4] = var_s6;
                *(s32 **) ((u8 *) var_s4 + 0x50) = sp58;
                osSendMesg(&D_800DD824, var_s4, 1, temp_a3);
                var_s0 = D_8005D7A4;
                while (var_s0 != NULL) {
                    temp_s1 = *(void **) var_s0;
                    if ((u32) (*(s32 *) ((u8 *) var_s0 + 0xC) + 2) < D_80046C30) {
                        if (D_8005D7A4 == var_s0) {
                            D_8005D7A4 = temp_s1;
                        }
                        alUnlink(var_s0);
                        if (D_8005D7A8 != NULL) {
                            alLink(var_s0, D_8005D7A8);
                        } else {
                            D_8005D7A8 = var_s0;
                            *(void **) var_s0 = NULL;
                            *(s32 *) ((u8 *) var_s0 + 4) = 0;
                            var_s0 = temp_s1;
                            continue;
                        }
                    }
                    var_s0 = temp_s1;
                }
                D_8005DCB0 = 0;
                D_80046C30 += 1;
                osRecvMesg(sp58, NULL, 1);
                var_s3 ^= 1;
                var_s2 = (var_s2 + 1) % 3;
            }
            func_80027584();
            if (D_80046C40 != NULL && D_80046C3D != 0) {
                D_80046C40(1, D_80046C3D);
            } else {
                D_80046C3D += 1;
                continue;
            }
            break;
        case 2:
            if (D_80046C40 != NULL) {
                D_80046C40(2, D_80046C3D);
            }
            break;
        }
        D_80046C3D += 1;
    }
}
