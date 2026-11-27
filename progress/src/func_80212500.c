typedef struct {
    s8 f0;
    s8 f1;
    s8 f2;
    s8 f3;
    s8 f4;
    s8 f5;
    s8 f6;
} MenuSel;

typedef struct {
    u8 f0;
    u8 pad1[0x10];
    s8 f11;
    s8 f12;
    u8 pad13[0x6D];
    u8 f80;
} MenuState;

typedef struct {
    u16 state;
    u8 pad[0x62];
} Mode;

typedef struct {
    u8 *p;
    u8 pad[96];
} Ent;

#define ENTRY(base) (*(u32 *)((u8 *)&(base) + D_8021E15C.f3 * 0x70))
#define STATE playerSlots[arg0].state
#define SEL (D_8021B660[3])

extern Mode playerSlots[];
extern Ent D_8011F350[];
extern u16 D_8018BC3C;
extern MenuSel D_8021E15C;
extern MenuState sMenu;
extern u32 D_8021E190;
extern s8 D_8021E160;
extern s32 D_80071F70;
extern s32 D_8021AFDC;
extern s32 D_8021AFE0;
extern s32 menuChoice;
extern u8 D_8021B064[];
extern s8 D_8021B068;
extern s8 D_8021B06B;
extern s8 D_8021B06C;
extern s8 D_8021B06D;
extern u8 D_8021B070[];
extern s32 D_8021B128;
extern s32 D_8021B660[];
extern u8 D_8021B674;
extern u8 D_8021B675;
extern u8 D_8021B676;
extern u8 D_8021B677;
extern u8 D_8021B678;
extern s16 skipFirstRowFlag;
extern s16 D_8021E1A6[];
extern s8 D_8021E20B;
extern u8 D_8021E251[][0x110];
extern u8 D_8021F048[][14];
extern u16 D_8021F09A;
extern u32 D_801E9988;
extern u32 D_801E998C;
extern u32 D_801E9990;
extern u32 D_801E9994;
extern u8 D_801E9798;
extern u8 D_8021B00C[];
extern s32 D_8021AFEC[];
extern s32 carouselSelected[];
extern u16 D_8018A44A[];
extern s32 D_80168BB0;

void func_800DE2E0(void);
void func_800DE38C(void);
void func_800DF100(s32);
void func_800DF138(s32);
void func_80149FA8(s32);
s32 func_8014A030(s32, s32, s32);
s32 getMenuNavMask(u32, s32, s32);
void playMenuSound(s32);
void func_801CF468(s32, s32, s32, s32);
void func_801E1EEC(u8, u8);
void func_80203BDC(s32);
void setScreenTransition(s8, s16, s8, s8, u8);
void func_80207DC8(void);
void func_80211E9C(s32);
void func_80214230(s8 *, s32);
void func_80231C5C(void);

void func_80212500(u16 arg0)
{
    s32 i;
    s32 flags;
    s32 n;

    switch (STATE) {
    case 0:
        D_8021E15C.f1 = 0;
        if (D_8021AFDC == 2) {
            D_8021B660[4] = D_80071F70 - 1;
        }
        if (D_8021AFDC == 6 || D_8021AFDC == 0x18) {
            D_8021B660[4] = skipFirstRowFlag;
        }
        sMenu.f11 = 0;
        sMenu.f12 = 0;
        D_8021B674 = 0;
        if (*D_8011F350[D_8018BC3C].p == 0) {
            do { STATE = 1; } while (0);
        }
        break;
    case 1:
        sMenu.f0 = 0;
        if (D_8021E15C.f0 == 0) {
            D_8021E15C.f5 = 1;
            D_8021E15C.f6 = 0;
            D_8021B675 = 3;
            D_8021B676 = 3;
            if (sMenu.f11 == 0) {
                for (i = 0; i <= D_8021B660[4]; i++) {
                    flags = getMenuNavMask(0x14, 3, i);
                    if ((flags & 0xE) ? 1 : (flags & 1)) {
                        sMenu.f11 = 0xA;
                        if (flags & 8) {
                            D_8021B675 = 0;
                        }
                        if (flags & 4) {
                            D_8021B675 = 1;
                        }
                        if (flags & 2) {
                            D_8021B676 = 0;
                        }
                        if (flags & 1) {
                            D_8021B676 = 1;
                        }
                    } else if ((flags & 0x10) && (D_8021E15C.f3 == i || D_8021E15C.f3 == 4) && D_8021E15C.f4 == 0) {
                        if (D_8021E15C.f0 == 0) {
                            D_8021E15C.f0 = 1;
                            n = i;
                            D_8021B677 = n;
                            playMenuSound(0x3D);
                        } else {
                            sMenu.f0 = 1;
                        }
                    } else if ((flags & 0x10) && D_8021E15C.f4 == 1) {
                        playMenuSound(0x3D);
                        sMenu.f0 = 2;
                    }
                    if (flags & 0x20) {
                        playMenuSound(0x3A);
                        if (D_8021E15C.f0 == 0) {
                            sMenu.f0 = 2;
                        }
                        D_8021E15C.f0 = 0;
                    }
                }
            }
            if (sMenu.f11 == 0xA) {
                if (D_8021B675 == 0 && D_8021E15C.f4 == 0) {
                    playMenuSound(0x3B);
                    D_8021E15C.f3++;
                    func_80214230(&D_8021E15C.f3, 5);
                } else if (D_8021B675 == 1 && D_8021E15C.f4 == 0) {
                    playMenuSound(0x3B);
                    D_8021E15C.f3--;
                    func_80214230(&D_8021E15C.f3, 5);
                } else if (D_8021B676 != 3) {
                    playMenuSound(0x3B);
                    D_8021E15C.f4 ^= 1;
                }
            }
            if (sMenu.f11 != 0) {
                sMenu.f11--;
            }
            if (sMenu.f0 == 2 && D_8021E15C.f0 == 0) {
                D_8021AFDC = 0x1C;
                menuChoice = D_8021AFE0;
                setScreenTransition(2, 6, 0, 0, 0);
                D_8021B068 = 0;
                STATE = 2;
            }
        } else {
            if (D_8021E15C.f3 != 4 && D_8021E15C.f4 == 0) {
                flags = getMenuNavMask(0xA, 7, D_8021E15C.f3);
                if (D_8021B674 != 0) {
                    flags &= 0x30;
                }
                if (flags & 0x10) {
                    if (D_8021E15C.f0 == 0) {
                        D_8021E15C.f0 = 1;
                    } else {
                        sMenu.f0 = 1;
                    }
                } else if ((flags & 0x20) && D_8021B674 == 0) {
                    playMenuSound(0x3A);
                    if (D_8021E15C.f0 == 0) {
                        sMenu.f0 = 2;
                    }
                    D_8021E15C.f0 = 0;
                }
                if (flags & 2) {
                    D_8021E15C.f6++;
                    playMenuSound(0x3B);
                } else if (flags & 1) {
                    D_8021E15C.f6--;
                    playMenuSound(0x3B);
                }
                func_80214230(&D_8021E15C.f6, 4);
                if (sMenu.f0 == 1 && D_8021E15C.f0 == 1) {
                    if (D_8021E15C.f6 == 0) {
                        if (D_8021B064[D_8021E15C.f3] == 1) {
                            sMenu.f80 = 0;
                            playMenuSound(0x3D);
                            D_8021AFDC = 0x1C;
                            menuChoice = 0x10;
                            setScreenTransition(2, 6, 0, 0, 0);
                            STATE = 2;
                        } else {
                            playMenuSound(0x3E);
                        }
                    } else if (D_8021E15C.f6 == 1) {
                        if (D_8021B064[D_8021E15C.f3] == 1) {
                            playMenuSound(0x3D);
                            func_801E1EEC(2, D_8021E15C.f3);
                        } else {
                            playMenuSound(0x3E);
                        }
                    } else if (D_8021E15C.f6 == 2) {
                        playMenuSound(0x3D);
                        func_801E1EEC(3, D_8021E15C.f3);
                    } else if (D_8021E15C.f6 == 3) {
                        if (D_8021B674 == 0) {
                            playMenuSound(0x3D);
                            D_8021B674 = 1;
                            D_8021B678 = 0;
                            func_800DF100(D_8021F09A);
                        }
                    }
                } else if (sMenu.f0 == 2 && D_8021E15C.f0 == 0) {
                    D_8021AFDC = 0x1C;
                    menuChoice = D_8021AFE0;
                    setScreenTransition(2, 6, 0, 0, 0);
                    D_8021B068 = 0;
                    STATE = 2;
                }
            } else {
                if (!(D_8021E190 & 0xFFFF00) && D_8021E160 == 0) {
                    flags = getMenuNavMask(0xA, 7, D_8021B677);
                    if (flags & 2) {
                        playMenuSound(0x3B);
                        D_8021E15C.f6 ^= 1;
                    } else if (flags & 1) {
                        playMenuSound(0x3B);
                        D_8021E15C.f6 ^= 1;
                    }
                    if (flags & 0x10) {
                        if (D_8021E15C.f0 == 1) {
                            playMenuSound(0x3D);
                        }
                        if (D_8021E15C.f0 == 0) {
                            D_8021E15C.f0 = 1;
                        } else {
                            sMenu.f0 = 1;
                        }
                        if (D_8021E15C.f6 == 0) {
                            D_8021B06C = 1;
                            SEL = 0;
                            STATE = 4;
                        } else if (D_8021E15C.f6 == 1) {
                            D_8021B06D = 0;
                            for (i = 0; i < 9; i++) {
                                D_8021B070[i] = 0;
                            }
                            D_8021B06B = 1;
                            STATE = 3;
                        }
                    }
                    if (flags & 0x20) {
                        playMenuSound(0x3A);
                        if (D_8021E15C.f0 == 0) {
                            sMenu.f0 = 2;
                        }
                        D_8021E15C.f0 = 0;
                        D_8021B660[0] = 0;
                    }
                }
            }
            if (D_8021B674 != 0) {
                if (D_8021B674 < 4) {
                    D_8021B674++;
                    if (D_8021B674 < 4) {
                        break;
                    }
                }
                if (ENTRY(D_801E9988) == 1 || ENTRY(D_801E998C) == 1) {
                    D_801E9798 = 0;
                    D_8021B678 ^= 1;
                    playMenuSound(0x3B);
                } else if (ENTRY(D_801E9990) == 1 && D_8021B678 == 1) {
                    func_800DF138(D_8021F09A);
                    playMenuSound(0x3D);
                    func_80149FA8(D_8021E15C.f3);
                    func_80211E9C(D_8021E15C.f3);
                    D_8021B00C[D_8021E15C.f3] = 0;
                    D_8021B064[D_8021E15C.f3] = 0;
                    D_8021AFEC[D_8021E15C.f3] = 0;
                    func_80203BDC(D_8021E15C.f3);
                    D_8021E251[D_8021E15C.f3][0] = 0;
                    D_8021B674 = 0;
                    D_8021B128 = 0;
                    D_8021E20B = 0;
                    carouselSelected[D_8021E15C.f3] = 0;
                    for (i = 0; i < 14; i++) {
                        D_8021F048[D_8021E15C.f3][i] = 0;
                    }
                } else if (ENTRY(D_801E9994) == 1) {
                    playMenuSound(0x3A);
                    D_8021B674 = 0;
                    D_8021B678 = 0;
                    func_800DF138(D_8021F09A);
                } else if (ENTRY(D_801E9990) == 1 && D_8021B678 == 0) {
                    playMenuSound(0x3D);
                    D_8021B674 = 0;
                    D_8021B678 = 0;
                    func_800DF138(D_8021F09A);
                }
            }
        }
        break;
    case 2:
        if (*D_8011F350[D_8018BC3C].p == 0) {
            func_80207DC8();
            if (D_8021E1A6[3] == 0) {
                D_8021E1A6[0] = 0;
            }
            func_800DE38C();
            func_800DE2E0();
            func_80231C5C();
            func_801CF468(D_8018BC3C, 0, 0, 0);
            D_80168BB0 = menuChoice;
        }
        break;
    case 3:
        flags = getMenuNavMask(0x1E, 7, D_8021B677);
        if (flags & 2) {
            D_8021B06D++;
            playMenuSound(0x3B);
        }
        if (flags & 1) {
            D_8021B06D--;
            playMenuSound(0x3B);
        }
        if (D_8021B06D >= 10) {
            D_8021B06D = 0;
        }
        if (D_8021B06D < 0) {
            D_8021B06D = 9;
        }
        if (flags & 0x10) {
            if (D_8021B06D == 9) {
                playMenuSound(0x3D);
                D_8021B06B = 0;
                n = 0;
                for (i = 0; i < 9; i++) {
                    if (D_8021B070[i] == 1) {
                        n++;
                        D_8018A44A[0] = func_8014A030(D_8018A44A[0], i, 0);
                        D_8018A44A[1] = func_8014A030(D_8018A44A[1], i, 0);
                        D_8018A44A[2] = func_8014A030(D_8018A44A[2], i, 0);
                        D_8018A44A[3] = func_8014A030(D_8018A44A[3], i, 0);
                    }
                }
                if (n != 0) {
                    func_801E1EEC(6, D_8021B677);
                }
                STATE = 1;
            } else {
                if (D_8021B070[D_8021B06D] == 0) {
                    playMenuSound(0x3D);
                }
                D_8021B070[D_8021B06D] = 1;
            }
        } else if (flags & 0x20) {
            playMenuSound(0x3A);
            if (D_8021B070[D_8021B06D] == 0) {
                D_8021B06B = 0;
                STATE = 1;
            } else {
                D_8021B070[D_8021B06D] = 0;
            }
        }
        break;
    case 4:
        flags = getMenuNavMask(0x1E, 7, D_8021B677);
        if (flags & 2) {
            SEL++;
            if (D_8021B660[1] == 1) {
                SEL++;
            }
            playMenuSound(0x3B);
        }
        if (flags & 1) {
            SEL--;
            if (D_8021B660[1] == 1) {
                SEL--;
            }
            playMenuSound(0x3B);
        }
        if (SEL >= 3) {
            SEL = 0;
        }
        if (SEL < 0) {
            SEL = 2;
        }
        if (flags & 0x10) {
            if (SEL == 2) {
                playMenuSound(0x3D);
                D_8021B06C = 0;
                STATE = 1;
            }
        } else if (flags & 0x20) {
            playMenuSound(0x3A);
            D_8021B06C = 0;
            STATE = 1;
        } else if (flags & 0xC) {
            if (SEL < 2) {
                playMenuSound(0x3B);
                if (SEL == 0) {
                    D_8021B660[1] ^= 1;
                }
                if (SEL == 1 && D_8021B660[1] == 0) {
                    D_8021B660[2] ^= 1;
                }
            }
        }
        break;
    }
    if (D_801E9798 < 30) {
        D_801E9798++;
    } else {
        D_801E9798 = 0;
    }
}
