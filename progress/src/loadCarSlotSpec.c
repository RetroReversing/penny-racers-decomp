typedef struct { u16 f0; u16 f2; u16 f4; u16 f6; u16 f8; u16 fA; u16 fC; u16 padE; f32 f10; f32 f14; f32 f18; f32 f1C; u8 f20; u8 pad21[3]; } Spec;
typedef struct { u16 f0; u16 f2; u16 f4; u16 f6; u16 f8; u16 fA; u16 fC; u16 fE; u8 pad10[4]; f32 f14; f32 f18; f32 f1C; f32 f20; u8 f24; u8 pad25[0x145]; u8 f16A[14]; } Slot;
typedef struct { u16 v; } Half;
extern Half D_8006FB10;
extern Spec *D_802D6288[];
extern Slot sCarSlots[];
extern s16 carClassIndex;
extern s32 btnCyclePrevPressed;
extern char D_80232D34[], D_80232D44[], D_80232D58[], D_80232D6C[], D_80232D80[], D_80232D94[], D_80232DA8[], D_80232DBC[], D_80232DD0[], D_80232DE4[], D_80232DF8[], D_80232E0C[], D_80232E20[];
u32 func_801FA38C(s32);
void func_80149FA8(u16);
void debugPrintf(char *, ...);

/* Fills car slot id from the spec table for the current mode, using entry as the row, and logs the values when debug output is on. */ void loadCarSlotSpec(u16 id, u16 entry) {
    Spec *spec = D_802D6288[D_8006FB10.v];
    Slot *slot = &sCarSlots[id];

    if (carClassIndex >= 3) {
        spec += 28 + entry;
        sCarSlots[id].f6 = 0xE;
        if (D_8006FB10.v == 6) {
            sCarSlots[id].f4 = 0xC;
        } else {
            sCarSlots[id].f4 = 0xB;
        }
        sCarSlots[id].f1C = 1.0f;
        sCarSlots[id].f8 = 5;
        slot->f0 = entry;
    } else {
        spec += entry + carClassIndex * 14;
        slot->f6 = spec->f4;
        slot->f4 = spec->f2;
        slot->f1C = spec->f18;
        slot->f8 = spec->f6;
        slot->f0 = entry;
    }
    slot->f2 = spec->f0;
    slot->fA = spec->f8;
    slot->fC = spec->fA;
    slot->fE = spec->fC;
    slot->f14 = spec->f10;
    slot->f18 = spec->f14;
    slot->f20 = spec->f1C;
    slot->f24 = spec->f20;
    slot->f16A[entry] = func_801FA38C(0) % 10;
    func_80149FA8(id);
    if (btnCyclePrevPressed != 0) {
        debugPrintf(D_80232D34, id, entry);
        debugPrintf(D_80232D44, slot->f2);
        debugPrintf(D_80232D58, slot->f4);
        debugPrintf(D_80232D6C, slot->f6);
        debugPrintf(D_80232D80, slot->f8);
        debugPrintf(D_80232D94, slot->fA);
        debugPrintf(D_80232DA8, slot->fC);
        debugPrintf(D_80232DBC, slot->fE);
        debugPrintf(D_80232DD0, slot->f14);
        debugPrintf(D_80232DE4, slot->f18);
        debugPrintf(D_80232DF8, slot->f1C);
        debugPrintf(D_80232E0C, slot->f20);
        debugPrintf(D_80232E20, slot->f24);
    }
}
