s32 func_800288B0();
s32 func_800339C0();
s32 osRecvMesg();
s32 osSendMesg();
s32 func_80039820();
s32 func_80039A2C();
extern char D_800DD85C[];
extern void *D_800DDE8C;
extern s32 D_800DDE90;
extern void *D_800DDE94;
void func_8002877C(void)
{
  void *sp10;
  void *sp14;
  s32 temp_v0;
  s32 temp_v0_2;
  s32 var_a0;
 do { loop_1: osRecvMesg(&D_800DD85C, &sp10, 1); func_800288B0(sp10); var_a0 = func_800339C0(1); if (D_800DDE90 != 0) { D_800DDE94 = sp10; func_800339C0(var_a0); osRecvMesg(D_800DD85C + 0xE0, &sp14, 1); var_a0 = func_800339C0(1); D_800DDE94 = NULL; } func_800339C0(var_a0); temp_v0 = func_800339C0(1); D_800DDE8C = sp10; func_800339C0(temp_v0); func_80039820(sp10 + 0x10); func_80039A2C(sp10 + 0x10); osRecvMesg(D_800DD85C + 0x70, &sp14, 1); temp_v0_2 = func_800339C0(1); D_800DDE8C = NULL; func_800339C0(temp_v0_2); if (!((*((s32 *) (((char *) sp10) + 8))) & 2)) { osRecvMesg(D_800DD85C + 0xA8, &sp14, 1); } osSendMesg(*((s32 *) (((char *) sp10) + 0x50)), sp10, 1); goto loop_1; } while (0);
}
