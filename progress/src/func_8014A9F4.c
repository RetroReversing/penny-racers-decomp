u16 func_80146E4C(u16);
typedef struct { u16 c[9]; } Name9;
typedef struct { Name9 names[20]; u8 pad2[16]; } Row178;
typedef struct { u8 pad[0x64]; Name9 names[15]; u8 pad2[6]; } Rec178;
extern u8 D_800DA26A[];
extern u16 D_80187BF0[];
extern u16 D_80187C00;
extern u16 *D_80203080[];
extern Row178 D_800DA2CE[];
void func_8014A9F4(u16 arg0, s32 arg1)
{
  s32 i; u16 *src; s32 off; s32 lo; u8 * base;
  
  if (!(arg0 & 0x700)) {
    for (i = 0; i < 8; i++) { u16 *d = &D_80187BF0[i]; off = (s32)(arg1 * 0x178); lo = arg0 & 0xFF; base = (u8 *)(D_800DA26A + 0x64); *d = ((Name9 *)(lo * 0x12 + ((u8 *)off + (s32)base)))->c[i]; }
  } else {
    src = D_80203080[func_80146E4C(arg0)];
    for (i = 0; i < 8; i++) {
      D_80187BF0[i] = src[i];
      if (src[i] == 0xFFFF) break;
    }
  }
  D_80187C00 = 0xFFFF;
}
