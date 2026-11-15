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
extern unsigned char D_801C7080;
extern unsigned char D_801C6BB0;
extern unsigned char D_801C7082;
extern unsigned char D_801C6BB1;
extern unsigned char D_801C7083;
extern unsigned char D_801C6BB2;
extern unsigned char D_801C7084;
extern short D_801C6BB4;
extern unsigned char D_801C7081;
extern unsigned char D_801C5E9E;
extern unsigned char D_801C7062;
extern unsigned char D_801C7063;
extern unsigned char D_801C7064;
extern short D_801C7066;
extern unsigned short D_801C6BB6;
extern unsigned char D_801C5E9D;
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

u16 func_800DE41C();
s32 func_801BB1F0();
s32 func_801BFA1C();
extern char D_8011F2F4[];
extern char D_8011F2FB[];
extern char D_801C5E9C[];
extern char D_801C6BE0[];
extern s32 *D_801C706C;
extern u8 D_801C7469;
extern u16 D_801C746A;
extern s32 *D_801C7AB0;
extern u8 D_801C7AB6;
extern char D_801C7AD8[];
extern char D_801C7D30[];
typedef struct { u16 f0; u8 pad[14]; } Slot_801C7D31;
extern Slot_801C7D31 D_801C7D31[];
extern char D_801C7D34[];
extern char D_8031445C[];
extern s32 func_801B3F08;
extern s32 func_801B4070;

void func_801AF334(void) {
    s32 temp_a0_2;
s32 __repair_phase_temp_a0_2;
    s32 temp_a1_2;
    s32 temp_s0;
    s32 temp_v0;
    
    s32 temp_v1;
    s32 var_a0;
    s32 var_s2;
    s8 var_s1;
    u16 temp_v0_3;
    u8 temp_a0;
    u8 temp_a1;

    D_801C7AB0 = D_801C5E9C;
    D_801C706C = &D_801C7080;
    D_801C7469 = D_801C7080;
    D_801C6BB0 = (u8) D_801C7082;
    D_801C6BB1 = (u8) D_801C7083;
    D_801C6BB2 = (u8) D_801C7084;
    D_801C6BB4 = (s16) ((s8) D_801C7082 + ((s8) D_801C7083 * 0x18));
    D_801C746A = func_800DE41C(0, 0, 3, 0, 0x5B, 0x64, NULL, 0, &func_801B3F08, (f32) (s8) D_801C6BB0 * 400.0f * 0.5f, (f32) D_801C7081 * 0.5f, (f32) (s8) D_801C6BB1 * 400.0f * 0.5f, 0, 0, 0, 0.5f, 0.5f, 0.5f);
    temp_v0 = D_801C746A * 0x64;
    *(u16 *)(D_8011F2F4 + temp_v0) = *(u16 *)(D_8011F2F4 + temp_v0) | 0x20;
    *(u16 *)(D_8011F2FB + temp_v0) = 0xC;
    temp_s0 = (u8)(*(u8 *)(D_801C7082 + ((D_801C5E9E - 1) * 5)));
    D_801C7062 = temp_s0;
    temp_a0_2 = (u8)(*(u8 *)(D_801C7083 + ((D_801C5E9E - 1) * 5)));
    D_801C7063 = temp_a0_2;
    D_801C7064 = (u8) *(u8 *)(D_801C7084 + ((D_801C5E9E - 1) * 5));
    D_801C7066 = (s16) ((s8) temp_s0 + ((s8) temp_a0_2 * 0x18));
    D_801C6BB6 = func_800DE41C(0, 0, 3, 0, 0x5B, 0x64, NULL, 0, &func_801B4070, (f32) (s8) D_801C7062 * 400.0f * 0.5f, (f32) *(f32 *)(D_801C7081 + ((D_801C5E9E - 1) * 5)) * 0.5f, (f32) (s8) D_801C7063 * 400.0f * 0.5f, 0, 0, 0, 0.5f, 0.5f, 0.5f);
    temp_v0 = D_801C6BB6 * 0x64;
    *(u16 *)(D_8011F2F4 + temp_v0) = *(u16 *)(D_8011F2F4 + temp_v0) | 0x20;
    *(u16 *)(D_8011F2FB + temp_v0) = 0xC;
    D_801C7AB6 = D_801C5E9E;
    var_s1 = 0;
    if (D_801C5E9E != 0) {
        var_s2 = 0 & 0xFF;
        do {do { {do{
            temp_a1_2 = var_s2 * 5;}while(0);}
} while (0);
            temp_s0 = ((s8) *(s8 *)(D_801C7082 + temp_a1_2) + (*(s32 *)(D_801C7083 + temp_a1_2) * 0x18)) & 0xFFFF;
            __repair_phase_temp_a0_2 = temp_s0 * 0x10;
            *(u16 *)(D_801C7D30 + __repair_phase_temp_a0_2) = 0;
            D_801C7D31[temp_s0].f0 = 1;
            *(u16 *)(D_801C7D34 + __repair_phase_temp_a0_2) = (*(s32 *)(D_801C7084 + temp_a1_2) * 8) + D_8031445C;
            temp_v0_3 = func_800DE41C(0, 0, 2, 0, 0x5A, 0xFF, __repair_phase_temp_a0_2 + D_801C7D30, 0, NULL, (f32) *(f32 *)(D_801C7082 + temp_a1_2) * 400.0f * 0.5f, (f32) *(f32 *)(D_801C7081 + temp_a1_2) * 0.5f, (f32) *(f32 *)(D_801C7083 + temp_a1_2) * 400.0f * 0.5f, 0, 0, 0, 0.5f, 0.5f, 0.5f);
            temp_a0_2 = (temp_v0_3 & 0xFFFF) * 0x64;
            *(u16 *)(D_8011F2F4 + temp_a0_2) = *(u16 *)(D_8011F2F4 + temp_a0_2) | 8;
            *(u16 *)(D_801C6BE0 + (temp_s0 * 2)) = temp_v0_3;
            *(u16 *)(D_801C7AD8 + temp_s0) = var_s1;
            if (D_801C5E9D == 5) {
                var_a0 = var_s2;
                if (var_s2 == (D_801C5E9E - 1)) {
                    goto block_8;
                }
                goto block_9;
            }
            var_a0 = var_s1 & 0xFF;
            if (!(var_s1 & 0xFF)) {
                func_801BFA1C(0, 0);/*__repair_loop_weight*/do {
                var_s1 += 1;} while (0);
            } else if (var_a0 == (D_801C5E9E - 1)) {
block_8:
                func_801BFA1C(var_a0, 1);
                var_s1 += 1;
            } else {
block_9:
                func_801BB1F0(var_s1 & 0xFF);
                var_s1 += 1;
            }
            var_s2 = var_s1 & 0xFF;
        } while ((u32) (var_s1 & 0xFF) < (u8) D_801C5E9E);
    }
}
