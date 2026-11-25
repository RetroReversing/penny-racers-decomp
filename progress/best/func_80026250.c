extern u8 D_25EA0;
extern u8 D_29A40;
extern u8 D_2D580;
extern u8 D_86290;
extern u8 D_BC070;
extern u8 D_C78D0;
extern u8 D_C9C40;
extern u8 D_DB3B0;
extern u8 D_DB950;
extern u8 D_DD2B0;
extern u8 D_E5840;
extern u8 D_FFE70;
extern u8 D_101900;
extern u8 D_10A1F0;
extern u8 D_10EBE0;
extern u8 D_111C60;
extern u8 D_1B0E50;
extern u8 D_42A740;
extern u8 D_42E8E0;
extern u8 D_52B560;
extern u8 D_52F020;
extern u8 D_5758D0;
extern u8 D_80049870;
extern u8 D_80049898;
extern u8 D_800498C0;
extern u8 D_800498E8;
extern u8 D_80049910;
extern u8 D_80049938;
extern u8 D_80049960;
extern u8 D_80049988;
extern u8 D_800499B0;
extern u8 D_800499D8;
extern u8 D_80049A00;
extern u8 D_80049A28;
extern u8 D_80049A50;
extern u8 D_80049A78;
extern u8 D_80049AA0;
extern u8 D_80049ACC;
extern u8 D_8006FB14;
extern volatile u16 D_8006FE58;
extern u8 D_801E4420;
extern s8 D_801E87C0;
void func_8003DE60();
void func_800294A0();
void func_800289C0();
void func_80028A00();
void func_80028BD0();
void func_80025C50();
void func_80027DF0();
void func_80027B40();
void func_80027BF0();
void func_8021F6A0();
void nuGfxFuncSet(void *arg0);
u8 nuContInit(void);
void func_800267FC();
void func_80025DE0();
void func_800DE2E0();
void func_80127000();
void func_8012AD20();
void D_80190D40(void);
void func_801CA140();
void func_801D59F0();
void func_801D7F60();
void D_801F93E0(void);
void D_801F9990(void);
void D_801FB300(void);
void func_80203AD0();
void func_8021F5F0();
void D_80221230(void);
void func_8022E6B0();
void D_80233ED0(void);
void D_802376A0(void);
inline static volatile short inline_fn(s32 arg0)
{
  return D_801E4420 >> arg0;
}

inline static u8 *inline_fn2()
{
  return &D_25EA0;
}

void func_80026250(void)
{
  u8 *__base_D_29A40;
  s32 size;
  u8 c;
  u8 *p;
  s32 i;
  s32 v;
  u8 *__base_D_2D580;
 do { __base_D_2D580 = &D_2D580; do { if (size) { __base_D_29A40 = &D_29A40; size = __base_D_29A40 - inline_fn2(); func_8003DE60(&D_80049870, inline_fn2()); func_800294A0(inline_fn2(), func_800DE2E0, size); size = __base_D_2D580 - __base_D_29A40; func_8003DE60(&D_80049898, __base_D_29A40, func_80127000, __base_D_2D580 - __base_D_29A40); func_800294A0(__base_D_29A40, func_80127000, __base_D_2D580 - __base_D_29A40); size = (&D_86290) - __base_D_2D580; func_8003DE60(&D_800498C0, __base_D_2D580, func_8012AD20, size); func_800294A0(__base_D_2D580, func_8012AD20, size); size = (&D_BC070) - (&D_86290); func_8003DE60(&D_800498E8, &D_86290, D_80190D40, size); func_800294A0(&D_86290, D_80190D40, size); size = (&D_C78D0) - (&D_BC070); func_8003DE60(&D_80049910, &D_BC070, func_801CA140, size); func_800294A0(&D_BC070, func_801CA140, size); size = (&D_C9C40) - (&D_C78D0); func_8003DE60(&D_80049938, &D_C78D0, func_801D59F0, size); func_800294A0(&D_C78D0, func_801D59F0, size); size = (&D_DB3B0) - (&D_C9C40); func_8003DE60(&D_80049960, &D_C9C40, func_801D7F60, size); func_800294A0(&D_C9C40, func_801D7F60, size); size = (&D_DB950) - (&D_DB3B0); func_8003DE60(&D_80049988, &D_DB3B0, D_801F93E0, size); func_800294A0(&D_DB3B0, D_801F93E0, size); size = (&D_DD2B0) - (&D_DB950); func_8003DE60(&D_800499B0, &D_DB950, D_801F9990, size); func_800294A0(&D_DB950, D_801F9990, size); size = (&D_E5840) - (&D_DD2B0); func_8003DE60(&D_800499D8, &D_DD2B0, D_801FB300, size); func_800294A0(&D_DD2B0, D_801FB300, size); size = (&D_FFE70) - (&D_E5840); func_8003DE60(&D_80049A00, &D_E5840, func_80203AD0, size); func_800294A0(&D_E5840, func_80203AD0, size); size = (&D_101900) - (&D_FFE70); func_8003DE60(&D_80049A28, &D_FFE70, func_8021F5F0, size); func_800294A0(&D_FFE70, func_8021F5F0, size); size = (&D_10A1F0) - (&D_101900); func_8003DE60(&D_80049A50, &D_101900, D_80221230, size); func_800294A0(&D_101900, D_80221230, size); size = (&D_10EBE0) - (&D_10A1F0); func_8003DE60(&D_80049A78, &D_10A1F0, func_8022E6B0, size); func_800294A0(&D_10A1F0, func_8022E6B0, size); size = (&D_111C60) - (&D_10EBE0); func_8003DE60(&D_80049AA0, &D_10EBE0, D_80233ED0, size); func_800294A0(&D_10EBE0, D_80233ED0, size); size = (&D_1B0E50) - (&D_111C60); func_8003DE60(&D_80049ACC, &D_111C60, D_802376A0, size); func_800294A0(&D_111C60, D_802376A0, size); func_80028A00(); p = &D_8006FB14; *((s32 *) p) = 0; func_8021F6A0(1); } else { __base_D_29A40 = &D_29A40; size = __base_D_29A40 - inline_fn2(); func_8003DE60(&D_80049870, inline_fn2()); func_800294A0(inline_fn2(), func_800DE2E0, size & 0xFFFF); size = __base_D_2D580 - __base_D_29A40; func_8003DE60(&D_80049898, __base_D_29A40, func_80127000, size); func_800294A0(__base_D_29A40, func_80127000, size); size = (&D_86290) - __base_D_2D580; func_8003DE60(&D_800498C0, __base_D_2D580, func_8012AD20, size); func_800294A0(__base_D_2D580, func_8012AD20, size); size = (&D_BC070) - (&D_86290); func_8003DE60(&D_800498E8, &D_86290, D_80190D40, size); func_800294A0(&D_86290, D_80190D40, size); size = (&D_C78D0) - (&D_BC070); func_8003DE60(&D_80049910, &D_BC070, func_801CA140, size); func_800294A0(&D_BC070, func_801CA140, size); size = (&D_C9C40) - (&D_C78D0); func_8003DE60(&D_80049938, &D_C78D0, func_801D59F0, size); func_800294A0(&D_C78D0, func_801D59F0, size); size = (&D_DB3B0) - (&D_C9C40); func_8003DE60(&D_80049960, &D_C9C40, func_801D7F60, size); func_800294A0(&D_C9C40, func_801D7F60, size); size = (&D_DB950) - (&D_DB3B0); func_8003DE60(&D_80049988, &D_DB3B0, D_801F93E0, size); func_800294A0(&D_DB3B0, D_801F93E0, size); size = (&D_DD2B0) - (&D_DB950); func_8003DE60(&D_800499B0, &D_DB950, D_801F9990, size); func_800294A0(&D_DB950, D_801F9990, size); size = (&D_E5840) - (&D_DD2B0); func_8003DE60(&D_800499D8, &D_DD2B0, D_801FB300, size); func_800294A0(&D_DD2B0, D_801FB300, size); size = (&D_FFE70) - (&D_E5840); func_8003DE60(&D_80049A00, &D_E5840, func_80203AD0, size); func_800294A0(&D_E5840, func_80203AD0, size); size = (&D_101900) - (&D_FFE70); func_8003DE60(&D_80049A28, &D_FFE70, func_8021F5F0, size); func_800294A0(&D_FFE70, func_8021F5F0, size); size = (&D_10A1F0) - (&D_101900); func_8003DE60(&D_80049A50, &D_101900, D_80221230, size); func_800294A0(&D_101900, D_80221230, size); size = (&D_10EBE0) - (&D_10A1F0); func_8003DE60(&D_80049A78, &D_10A1F0, func_8022E6B0, size); func_800294A0(&D_10A1F0, func_8022E6B0, size); size = (&D_111C60) - (&D_10EBE0); func_8003DE60(&D_80049AA0, &D_10EBE0, D_80233ED0, size); func_800294A0(&D_10EBE0, D_80233ED0, size); size = (&D_1B0E50) - (&D_111C60); func_8003DE60(&D_80049ACC, &D_111C60, D_802376A0, size); func_800294A0(&D_111C60, D_802376A0, size); func_80028A00(); p = &D_8006FB14; *((s32 *) p) = 0; func_8021F6A0(1); } } while (0); *((u16 *) (6 + p)) = 0; do { if (func_801D7F60) { *((u16 *) (p + 8)) = 0; *((u16 *) (p + 0xA)) = 0; *((u16 *) (p + 0xC)) = 0; *((u16 *) (p + 0xE)) = 0; D_801E4420 = nuContInit(); i = 0; } else { *((u16 *) (p + 8)) = 0; *((u16 *) (p + 0xA)) = 0; *((u16 *) (p + 0xC)) = 0; *((u16 *) (p + 0xE)) = 0; D_801E4420 = nuContInit(); i = 0; } } while (0); c = D_801E4420; v = c >> i; for (;;) { if (1) { if (v & 1) { D_801E87C0 = i; } else { if (func_800DE2E0) { i += 1; v = inline_fn(i); } else { i += 1; v = inline_fn(i); } if (((i - 1) + 1) <= (4 - 1)) { continue; } } } break; } func_800289C0(&func_800267FC); func_801D59F0(); func_80027DF0(&D_52B560, (&D_52F020) - (&D_52B560), &D_52F020); func_80027B40(&D_42A740, (&D_42E8E0) - (&D_42A740), &D_42E8E0); } while (0);
  func_80027BF0(&D_5758D0);
  func_80025C50();
  nuGfxFuncSet(&func_80025DE0);
  func_80028BD0();
  D_8006FE58 = 0;
  if (((s16) D_8006FE58) == ((s16) D_8006FE58))
  {
    if (1)
    {
      do
      {
      }
      while (((s16) D_8006FE58) == ((s16) D_8006FE58));
    }
  }
  while (1)
  {
  }

}
