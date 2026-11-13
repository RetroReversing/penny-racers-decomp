#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif
extern s32 D_80046C30;
extern s32 D_8005D088;
extern s32 D_8005D1A0;
extern s32 D_8005D7A4;
extern s32 D_8005D7A8;
extern s32 D_8005DCB0;

s32 auDmaCallBack(s32 arg0, s32 arg1) {
    s32 *var_s1;
    s32 *var_s0;
    
    
    
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s0;
    s32 temp_a0_2;
    s32 *temp_a1;

    var_s1 = (s32 *)D_8005D7A4;
    var_s0 = NULL;
    while (var_s1 != NULL) {
        temp_s2 = var_s1[2];
        if (arg0 >= temp_s2) {
            var_s0 = var_s1;
            if ((temp_s2 + 0x400) < (arg0 + arg1)) {
                var_s1 = (s32 *)var_s1[0];
                continue;
            }
            var_s1[3] = D_80046C30;
            return osVirtualToPhysical((var_s1[4] + arg0) - var_s1[2]);
        }
        break;
    }
    var_s1 = (s32 *)D_8005D7A8;
    if (var_s1 == NULL) {
        return ((s32 *)D_8005D7A4)[4] - 0x80000000;
    }
    D_8005D7A8 = (s32)var_s1[0];
    alUnlink(var_s1);
    if (var_s0 != NULL) {
        alLink(var_s1, (struct N **)var_s0);
    } else {
        var_s0 = (s32 *)D_8005D7A4;
        if (D_8005D7A4 != NULL) {
            D_8005D7A4 = (s32)var_s1;
            var_s1[0] = (s32)var_s0;
            var_s1[1] = 0;
            var_s0[1] = (s32)var_s1;
        } else {
            D_8005D7A4 = (s32)var_s1;
            var_s1[0] = 0;
            var_s1[1] = 0;
        }
    }
    temp_s0 = arg0 & 1;
    temp_a0_2 = osCartRomInit();
    temp_s2 = var_s1[4];
    temp_a1 = (s32 *)((u8 *)D_8005D1A0 + D_8005DCB0 * 0x18);
    temp_s3 = arg0 - temp_s0;
    var_s1[2] = temp_s3;
    D_8005DCB0 += 1;
    var_s1[3] = D_80046C30;
    temp_a1[1] = (s32)&D_8005D088;
    ((s8 *)temp_a1)[2] = 0;
    temp_a1[2] = temp_s2;
    temp_a1[3] = temp_s3;
    temp_a1[4] = 0x400;
    osEPiStartDma(temp_a0_2, (u8 *)temp_a1, 0);
    return osVirtualToPhysical(temp_s2) + temp_s0;
}
