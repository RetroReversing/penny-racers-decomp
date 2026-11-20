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
s32 func_80029E84();
s32 func_800346B0();
s32 func_801F97E0();
s32 osVirtualToPhysical(s32);
extern s32 D_2D62D8;
extern s32 D_2D6308;
extern s32 D_8006F9D0;
extern s32 D_8006FB14;
extern s32 D_800DB1B0;
extern s32 D_800DE080;
extern s32 D_801F9970;
extern s32 D_801F9974;
extern s32 D_801F9980;
extern s32 D_80220ED8;
inline static char *inline_fn(void *arg0)
{
  return (char *) arg0;
}

void func_801F93FC(void *arg0)
{
  volatile unsigned short temp_v1;
  void *temp_v0;
  void *temp_v0_2;
  *((void **) (inline_fn(&D_800DE080) + 0x64)) = (void *) (arg0 + 0x848);
  *((s32 *) (inline_fn(arg0) + 0x840)) = 0xBC000006;
  *((s32 *) (inline_fn(arg0) + 0x844)) = 0;
  *((void **) (inline_fn(&D_800DE080) + 0x64)) = (void *) (arg0 + 0x850);
  *((s32 *) (inline_fn(arg0) + 0x848)) = 0x06000000;
  *((s32 **) (inline_fn(arg0) + 0x84C)) = &D_2D6308;
  *((void **) (inline_fn(&D_800DE080) + 0x64)) = (void *) (arg0 + 0x858);
  *((s32 *) (inline_fn(arg0) + 0x850)) = 0x06000000;
  *((s32 **) (inline_fn(arg0) + 0x854)) = &D_2D62D8;
  *((void **) (inline_fn(&D_800DE080) + 0x64)) = (void *) (arg0 + 0x860);
  *((s32 *) (inline_fn(arg0) + 0x858)) = 0x06000000;
  *((s32 **) (inline_fn(arg0) + 0x85C)) = &D_80220ED8;
  *((void **) (inline_fn(&D_800DE080) + 0x64)) = (void *) (arg0 + 0x868);
  *((s32 *) (inline_fn(arg0) + 0x860)) = 0xBC000404;
  *((s32 *) (inline_fn(arg0) + 0x864)) = 1;
  *((void **) (inline_fn(&D_800DE080) + 0x64)) = (void *) (arg0 + 0x870);
  *((s32 *) (inline_fn(arg0) + 0x868)) = 0xBC000C04;
  *((s32 *) (inline_fn(arg0) + 0x86C)) = 1;
  *((void **) (inline_fn(&D_800DE080) + 0x64)) = (void *) (arg0 + 0x878);
  *((s32 *) (inline_fn(arg0) + 0x870)) = 0xBC001404;
  *((s32 *) (inline_fn(arg0) + 0x874)) = 0xFFFF;
  *((void **) (inline_fn(&D_800DE080) + 0x64)) = (void *) (arg0 + 0x880);
  *((s32 *) (inline_fn(arg0) + 0x878)) = 0xBC001C04;
  *((s32 *) (inline_fn(arg0) + 0x87C)) = 0xFFFF;
  *((void **) (inline_fn(&D_800DE080) + 0x64)) = (void *) (arg0 + 0x888);
  *((s32 *) (inline_fn(arg0) + 0x880)) = 0xFE000000;
  temp_v1 = D_8006F9D0 - 0x80000000;
  *((s32 *) (inline_fn(arg0) + 0x884)) = temp_v1;
  *((void **) (inline_fn(&D_800DE080) + 0x64)) = (void *) (arg0 + 0x890);
  *((s32 *) (inline_fn(arg0) + 0x888)) = 0xBA001402;
  *((s32 *) (inline_fn(arg0) + 0x88C)) = 0x300000;
  *((void **) (inline_fn(&D_800DE080) + 0x64)) = (void *) (arg0 + 0x898);
  *((s32 *) (inline_fn(arg0) + 0x890)) = 0xFF10013F;
  *((s32 *) (inline_fn(arg0) + 0x894)) = temp_v1;
  *((void **) (inline_fn(&D_800DE080) + 0x64)) = (void *) (arg0 + 0x8A0);
  *((s32 *) (inline_fn(arg0) + 0x898)) = 0xF7000000;
  *((s32 *) (inline_fn(arg0) + 0x89C)) = 0xFFFCFFFC;
  *((void **) (inline_fn(&D_800DE080) + 0x64)) = (void *) (arg0 + 0x8A8);
  *((s32 *) (inline_fn(arg0) + 0x8A0)) = 0xF64FC3BC;
  *((s32 *) (inline_fn(arg0) + 0x8A4)) = 0;
  *((void **) (inline_fn(&D_800DE080) + 0x64)) = (void *) (arg0 + 0x8B0);
  *((s32 *) (inline_fn(arg0) + 0x8A8)) = 0xE7000000;
  *((s32 *) (inline_fn(arg0) + 0x8AC)) = 0;
  *((void **) (inline_fn(&D_800DE080) + 0x64)) = (void *) (arg0 + 0x8B8);
  *((s32 *) (inline_fn(arg0) + 0x8B0)) = 0xFF10013F;
  *((s32 *) (inline_fn(arg0) + 0x8B4)) = osVirtualToPhysical(D_800DB1B0);
  temp_v0 = *((void **) (inline_fn(&D_800DE080) + 0x64));
  *((void **) (inline_fn(&D_800DE080) + 0x64)) = (void *) (temp_v0 + 8);
  *((s32 *) (inline_fn(temp_v0) + 0)) = 0xF7000000;
  *((s32 *) (inline_fn(temp_v0) + 4)) = 0x10001;
  *((void **) (inline_fn(&D_800DE080) + 0x64)) = (void *) (temp_v0 + 0x10);
  *((s32 *) (inline_fn(temp_v0) + 8)) = 0xF64FC3BC;
  *((s32 *) (inline_fn(temp_v0) + 0xC)) = 0;
  *((void **) (inline_fn(&D_800DE080) + 0x64)) = (void *) (temp_v0 + 0x18);
  *((s32 *) (inline_fn(temp_v0) + 0x10)) = 0xE7000000;
  *((s32 *) (inline_fn(temp_v0) + 0x14)) = 0;
  *((void **) (inline_fn(&D_800DE080) + 0x64)) = (void *) (temp_v0 + 0x20);
  *((s32 *) (inline_fn(temp_v0) + 0x18)) = 0xBA001102;
  *((s32 *) (inline_fn(temp_v0) + 0x1C)) = 0;
  *((void **) (inline_fn(&D_800DE080) + 0x64)) = (void *) (temp_v0 + 0x28);
  *((s32 *) (inline_fn(temp_v0) + 0x20)) = 0xBA001001;
  *((s32 *) (inline_fn(temp_v0) + 0x24)) = 0;
  *((void **) (inline_fn(&D_800DE080) + 0x64)) = (void *) (temp_v0 + 0x30);
  *((s32 *) (inline_fn(temp_v0) + 0x28)) = 0xBA000C02;
  *((s32 *) (inline_fn(temp_v0) + 0x2C)) = 0x2000;
  *((void **) (inline_fn(&D_800DE080) + 0x64)) = (void *) (temp_v0 + 0x38);
  *((s32 *) (inline_fn(temp_v0) + 0x30)) = 0xBA000903;
  *((s32 *) (inline_fn(temp_v0) + 0x34)) = 0xC00;
  *((void **) (inline_fn(&D_800DE080) + 0x64)) = (void *) (temp_v0 + 0x40);
  *((s32 *) (inline_fn(temp_v0) + 0x38)) = 0xBA000602;
  *((s32 *) (inline_fn(temp_v0) + 0x3C)) = 0xC0;
  *((void **) (inline_fn(&D_800DE080) + 0x64)) = (void *) (temp_v0 + 0x48);
  *((s32 *) (inline_fn(temp_v0) + 0x40)) = 0xBA000602;
  *((s32 *) (inline_fn(temp_v0) + 0x44)) = 0x40;
  *((void **) (inline_fn(&D_800DE080) + 0x64)) = (void *) (temp_v0 + 0x50);
  *((s32 *) (inline_fn(temp_v0) + 0x48)) = 0xBA000402;
  *((s32 *) (inline_fn(temp_v0) + 0x4C)) = 0x30;
  *((void **) (inline_fn(&D_800DE080) + 0x64)) = (void *) (temp_v0 + 0x58);
  *((s32 *) (inline_fn(temp_v0) + 0x50)) = 0xF9000000;
  *((s32 *) (inline_fn(temp_v0) + 0x54)) = 0xFF;
  do
  {
    func_801F97E0(arg0);
  }
  while (0);
  temp_v0_2 = *((void **) (inline_fn(&D_800DE080) + 0x64));
  *((void **) (inline_fn(&D_800DE080) + 0x64)) = (void *) (temp_v0_2 + 8);
  *((s32 *) (inline_fn(temp_v0_2) + 0)) = 0xE9000000;
  *((s32 *) (inline_fn(temp_v0_2) + 4)) = 0;
  *((void **) (inline_fn(&D_800DE080) + 0x64)) = (void *) (temp_v0_2 + 0x10);
  *((s32 *) (inline_fn(temp_v0_2) + 8)) = 0xB8000000;
  *((s32 *) (inline_fn(temp_v0_2) + 0xC)) = 0;
  if ((((s32) ((temp_v0_2 - 0x830) - arg0)) >> 3) >= 0x4650)
  {
    func_800346B0(&D_801F9970);
  }
  func_80029E84(arg0 + 0x840, (((s32) (((*((void **) (inline_fn(&D_800DE080) + 0x64))) - 0x840) - arg0)) >> 3) * 8, D_8006FB14);
  D_801F9980 += 1;
}

