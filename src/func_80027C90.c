typedef s32 M2C_UNK;
M2C_UNK func_800294A0(s32, s32, s32);
extern M2C_UNK D_8006FCAC;
extern M2C_UNK D_8006FCB0;
extern s32 D_8006FF00;

void func_80027C90(s32 arg0, s32 arg1) {
    s32 temp_a2;
    s32 temp_v0;
    s32 *temp_v1;

    temp_v0 = arg0 * 0x61;
    *(&D_8006FCB0 + temp_v0) = arg1;
    temp_v1 = (s32 *)(D_8006FF00 + (arg1 * 8));
    temp_a2 = temp_v1[2];
    temp_a2 = temp_a2 + (temp_a2 & 1);
    func_800294A0(temp_v1[1], *(&D_8006FCAC + temp_v0), temp_a2);
}
