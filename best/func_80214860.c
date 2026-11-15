extern s32 D_80168BB0;
extern s32 D_8021B680;
extern u8 D_8021E678;
extern s32 D_8021AFE0;
extern s32 D_8021AFDC;
extern u8 D_8006FB38[];
void func_801D65BC(s32);
s32 alSeqpStop(void *);
void func_80214860(void)
{
  s32 v;
 do { switch (D_80168BB0 - 1) { case 0: alSeqpStop(D_8006FB38); v = 0x22; break; case 1: if ((D_8021E678 != 1) || (D_8021B680 == 2)) { v = 2; break; } func_801D65BC(0); D_8021E678 = 2; return; default: return; } D_8021B680 = v; } while (0);
}
