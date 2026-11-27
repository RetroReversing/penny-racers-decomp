/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
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

s32 queueObjEvent();
s32 func_80221AD0();
extern char stickY[];
extern char stickX[];
extern char btnPlayPressed[];
extern char btnStopPressed[];
extern char btnCycleNextPressed[];
extern char btnCyclePrevPressed[];

void func_80226A60(s32 arg0, void *arg1) {
    s32 temp_v1;

    M2C_FIELD(arg1, u8 *, 0x87B) = (u8) *(stickY + (M2C_FIELD(arg1, u16 *, 4) * 0x70));
    M2C_FIELD(arg1, u8 *, 0x87C) = (u8) *(stickX + (M2C_FIELD(arg1, u16 *, 4) * 0x70));
    if (*(s32 *)(btnPlayPressed + (M2C_FIELD(arg1, u16 *, 4) * 0x70)) != 0) {
        M2C_FIELD(arg1, s32 *, 0x890) += 1;
    } else {
        M2C_FIELD(arg1, s32 *, 0x890) = 0;
    }
    if (*(s32 *)(btnStopPressed + (M2C_FIELD(arg1, u16 *, 4) * 0x70)) != 0) {
        M2C_FIELD(arg1, s32 *, 0x894) += 1;
    } else {
        M2C_FIELD(arg1, s32 *, 0x894) = 0;
    }
    temp_v1 = *(s32 *)(btnCycleNextPressed + (M2C_FIELD(arg1, u16 *, 4) * 0x70));
    if (temp_v1 != 0) {
        if (temp_v1 == 1) {
            queueObjEvent(arg0 & 0xFFFF, 0x37);
        }
        M2C_FIELD(arg1, s32 *, 0x89C) += 1;
    } else {
        M2C_FIELD(arg1, s32 *, 0x89C) = 0;
    }
    if (*(s32 *)(btnCyclePrevPressed + (M2C_FIELD(arg1, u16 *, 4) * 0x70)) != 0) {
        M2C_FIELD(arg1, s32 *, 0x898) += 1;
    } else {
        M2C_FIELD(arg1, s32 *, 0x898) = 0;
    }
    func_80221AD0(arg1);
}
