typedef struct { u8 b[0x28]; } Blk;
extern u8 D_800DD3E0[];
extern s32 D_800DD41C;
s32 __osContAddressCrc(s32);
void __osPackRamWriteData(s32 arg0, s32 arg1, u8 *arg2)
{
  Blk sp;
  u8 *s2 = D_800DD3E0;
  s32 p;
  s32 i;
  s32 crc;
  u8 ff = 0xFF;
  sp.b[0] = ff;
  D_800DD41C = 1;
  sp.b[1] = 0x23; sp.b[2] = 1; 
  sp.b[0] = ff;
  sp.b[3] = 3;
  crc = __osContAddressCrc(arg1 & 0xFFFF);
  *(u16 *)(sp.b + 4) = (arg1 << 5) | (crc & 0xFF);
  sp.b[0x26] = ff;
  p = (s32)sp.b + 6;
  do { *(u8 *)p = *arg2++; p++; } while (p < (s32)sp.b + 0x26);
  if (arg0 != 0) { for (i = 0; i < arg0; i++) { *s2++ = 0; } }
  *(Blk *)s2 = sp;
  s2[0x28] = 0xFE;
}
