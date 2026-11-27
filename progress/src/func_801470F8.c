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

M2C_UNK gfxDrawSprite(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK gfxSetup2DState();                            /* extern */
M2C_UNK gfxSetPrimAlpha(s32, M2C_UNK);                /* extern */
M2C_UNK gfxSetPrimColor(s32, s32, s32, s32, s32);     /* extern */
M2C_UNK gfxDrawText(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, s32, s32, M2C_UNK *, s32, s32, s32, s32); /* extern */
extern u16 D_80189CC6;
extern M2C_UNK D_802033FC;
extern M2C_UNK D_802D6898;
extern M2C_UNK D_802D92A0;

void func_801470F8(s32 arg0) {
    s32 temp_a3;
    s32 temp_a3_2;
    s32 var_a3;
    s32 var_s7;

    gfxSetup2DState();
    gfxSetPrimAlpha(arg0, 0xC0);
    gfxDrawSprite(arg0, 0x58, 0x52, 0xB, 0x4B);
    gfxDrawSprite(arg0, 0x58, 0x8A, 0xB, 0x4C);
    gfxDrawSprite(arg0, 0xE0, 0x52, 0xB, 0x4D);
    gfxDrawSprite(arg0, 0xE0, 0x8A, 0xB, 0x4E);
    var_a3 = 0x5F;
    var_s7 = 0xFF;
    if (!(D_80189CC6 & 0x8000)) {
        var_a3 = 0xFF;
        var_s7 = 0x5F;
    }
    temp_a3 = var_a3 & 0xFFFF;
    gfxSetPrimColor(arg0, temp_a3, temp_a3, temp_a3, 0xFF);
    gfxDrawText(arg0, 0x73, 0x74, 0xF, &D_802D92A0, M2C_FIELD(&D_802033FC, s32 *, 0), 0, &D_802D6898, 0xE, 0x10, 0xE0, 0x60);
    temp_a3_2 = var_s7 & 0xFFFF;
    gfxSetPrimColor(arg0, temp_a3_2, temp_a3_2, temp_a3_2, 0xFF);
    gfxDrawText(arg0, 0xAF, 0x74, 0xF, &D_802D92A0, M2C_FIELD(&D_802033FC, s32 *, 4), 0, &D_802D6898, 0xE, 0x10, 0xE0, 0x60);
    gfxSetPrimAlpha(arg0, 0xFF);
    gfxDrawText(arg0, 0x64, 0x5E, 0xF, &D_802D92A0, M2C_FIELD(&D_802033FC, s32 *, -0x344), 0, &D_802D6898, 0xE, 0x10, 0xE0, 0x60);
}
