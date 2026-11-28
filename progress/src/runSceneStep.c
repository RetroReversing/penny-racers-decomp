/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_BITS_F32(expr) (m2c_bits = (u32)(expr), *(f32 *)&m2c_bits)
extern u32 m2c_bits;
#define M2C_PTR_FROM_F32(type, expr) ((type)(m2c_fbits = (expr), *(u32 *)&m2c_fbits))
extern f32 m2c_fbits;
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

M2C_UNK initBackgroundScene();                            /* extern */
M2C_UNK setupSceneObjects();                            /* extern */
M2C_UNK func_80205FB0();                            /* extern */
M2C_UNK func_80206104();                            /* extern */
M2C_UNK func_80206770();                            /* extern */
M2C_UNK func_80206830();                            /* extern */
M2C_UNK func_80206F20();                            /* extern */
M2C_UNK func_80207014();                            /* extern */
M2C_UNK initResultsScreen();                            /* extern */
M2C_UNK func_80208374();                            /* extern */
M2C_UNK initMenuScene();                            /* extern */
M2C_UNK func_8020C948();                            /* extern */
M2C_UNK setupSelectionMenu();                            /* extern */
M2C_UNK func_8020EE10();                            /* extern */
M2C_UNK func_80210050();                            /* extern */
M2C_UNK func_80210784();                            /* extern */
M2C_UNK commitRacerPicks();                            /* extern */
M2C_UNK func_80212350();                            /* extern */
M2C_UNK func_80212360();                            /* extern */
M2C_UNK func_802124B0();                            /* extern */
M2C_UNK initNoticeScreen();                            /* extern */
M2C_UNK func_802144DC();                            /* extern */
M2C_UNK func_80214860();                            /* extern */
M2C_UNK func_80214A50();                            /* extern */
M2C_UNK func_80214B84();                            /* extern */
M2C_UNK func_80215700();                            /* extern */
M2C_UNK func_80215800();                            /* extern */
M2C_UNK setupTrackScene();                            /* extern */
M2C_UNK func_802178AC();                            /* extern */
M2C_UNK func_80218840();                            /* extern */
M2C_UNK initStageSpawns();                            /* extern */
extern s16 gameState;
extern u32 D_80168BB0;

/* Runs the per-frame update for the current scene step, moving to the next step as each screen finishes. */ void runSceneStep(void) {
    func_80214860();
    switch (D_80168BB0) {
    case 0x22:
        initNoticeScreen();
        D_80168BB0 = 0x23;
    case 0x23:
        func_802144DC();
        break;
    case 0x32:
        setupSceneObjects();
        D_80168BB0 = 0x33;
        break;
    case 0x28:
        initBackgroundScene();
        D_80168BB0 = 0x29;
        break;
    case 0x0:
        func_80205FB0();
        D_80168BB0 = 0x1;
    case 0x1:
        func_80206104();
        break;
    case 0x2:
        func_80206770();
        D_80168BB0 = 0x3;
    case 0x3:
        func_80206830();
        break;
    case 0x4:
        func_80206F20();
        D_80168BB0 = 0x5;
    case 0x5:
        func_80207014();
        break;
    case 0x6:
        initResultsScreen();
        D_80168BB0 = 0x7;
    case 0x7:
        func_80208374();
        break;
    case 0xC:
        initMenuScene();
        D_80168BB0 = 0xD;
    case 0xD:
        func_8020C948();
        break;
    case 0xE:
        D_80168BB0 = 0xF;
        break;
    case 0x10:
        setupSelectionMenu();
        D_80168BB0 = 0x11;
    case 0x11:
        func_8020EE10();
        break;
    case 0x16:
        commitRacerPicks();
        gameState = 0x14;
        break;
    case 0x17:
        func_80212350();
        break;
    case 0x12:
        func_80210050();
        D_80168BB0 = 0x13;
    case 0x13:
        func_80210784();
        break;
    case 0x14:
        D_80168BB0 = 0x15;
        break;
    case 0xA:
        D_80168BB0 = 0xB;
        break;
    case 0x1C:
        func_80212360();
        D_80168BB0 = 0x1D;
    case 0x1D:
        func_802124B0();
        break;
    case 0x26:
        func_80214A50();
        D_80168BB0 = 0x27;
    case 0x27:
        func_80214B84();
        break;
    case 0x2A:
        func_80215700();
        D_80168BB0 = 0x2B;
    case 0x2B:
        func_80215800();
        break;
    case 0x2C:
        setupTrackScene();
        D_80168BB0 = 0x2B;
    case 0x2D:
        func_802178AC();
        break;
    case 0x2E:
        func_80218840();
        D_80168BB0 = 0x2F;
        break;
    case 0x30:
        initStageSpawns();
        D_80168BB0 = 0x31;
        break;
    case 0x33:
        break;
    }
}
