extern u8 D_8011F2F1[];
extern u8 D_8011F300[];
extern u8 D_8011F302[];
extern u8 D_8011F304[];
extern u8 D_8011F32C[];
extern volatile unsigned int D_8011F340[];
extern u8 D_800E2660[];
extern u8 D_800E2662[];
extern u16 D_800E1ED0;
extern u16 D_80126FF0;
extern u16 D_80126FF2;
extern u16 D_80126FF4;
extern u16 func_800E1850;
inline static u16 inline_fn(u16 arg0)
{
  return *((u16 *) (D_8011F300 + ((arg0 & 0xFFFF) * 100)));
}

inline static u16 inline_fn2(u16 *arg0)
{
  return *arg0;
}

unsigned long long func_800DECCC(int arg0)
{
  s32 v;
 do { if (D_8011F2F1[(arg0 & 0xFFFF) * 100] != 0) { if ((D_8011F2F1[(arg0 & 0xFFFF) * 100] == 1) || (D_8011F2F1[(arg0 & 0xFFFF) * 100] == 4)) { if ((*((u16 *) ((*((u8 **) ((((arg0 & 0xFFFF) * 5) * 20) + D_8011F340))) + 0xC))) != 0xFFFF) { if (v) { func_800DECCC(*((u16 *) (D_8011F304 + ((arg0 & 0xFFFF) * 100)))); } else { func_800DECCC(inline_fn2((u16 *) (D_8011F304 + ((arg0 & 0xFFFF) * 100)))); } } if ((*((u16 *) ((*((u8 **) (D_8011F340 + ((arg0 & 0xFFFF) * 100)))) + 0xA))) != 0xFFFF) { func_800DECCC(*((u16 *) (((arg0 & 0xFFFF) * 100) + D_8011F304))); } } do { D_80126FF0 = D_80126FF0 + 1; do { if (D_8011F2F1[(arg0 & 0xFFFF) * 100] != 4) { if (inline_fn2((u16 *) (D_8011F300 + ((arg0 & (((((((0xFFFF & 0xFF) & 0xFF) & 0xFF) & 0xFF) & ((long long) 0xFF)) & 0xFF) & 0xFF)) * 100))) != 0xFFFF) { if (D_8011F300) { if (1) { do { *((u16 *) (D_8011F302 + (inline_fn2((u16 *) (D_8011F300 + ((arg0 & 0xFFFF) * 100))) * 100))) = inline_fn2((u16 *) (D_8011F302 + ((arg0 & 0xFFFF) * 100))); } while (0); } } else { *((u16 *) (D_8011F302 + (inline_fn(arg0) * 100))) = inline_fn2((u16 *) (D_8011F302 + ((arg0 & 0xFFFF) * 100))); } } if (!(inline_fn2((u16 *) (D_8011F302 + ((arg0 & 0xFFFF) * 100))) == 0xFFFF)) { *((u16 *) (D_8011F300 + ((*((u16 *) (D_8011F302 + ((arg0 & 0xFFFF) * 100)))) * 100))) = inline_fn(arg0); } else { func_800E1850 = inline_fn(arg0); } } v = arg0 & 0xFFFF; *((u16 *) (D_8011F300 + ((arg0 & 0xFFFF) * 100))) = 0xFFFF; } while (0); if (1) { *((u16 *) (D_8011F302 + ((arg0 & 0xFFFF) * 100))) = D_80126FF4; *((u16 *) (D_8011F300 + (D_80126FF4 * 100))) = arg0; } D_80126FF4 = arg0; D_8011F2F1[(arg0 & 0xFFFF) * 100] = 0; } while (0); if ((*((u16 *) (D_8011F32C + (v * 100)))) != 0xFFFF) { D_800E1ED0 += 1; do { *((u16 *) (D_800E2660 + (D_80126FF2 * 776))) = *((u16 *) (D_8011F32C + (v * 100))); } while (0); *((u16 *) (D_800E2662 + ((*((u16 *) (D_8011F32C + (v * 100)))) * 776))) = D_80126FF2; *((u16 *) (D_800E2660 + ((*((u16 *) (D_8011F32C - (-(v * 100))))) * 776))) = 0xFFFF; D_80126FF2 = *((u16 *) (D_8011F32C + (v * 100))); } } } while (0);
}
