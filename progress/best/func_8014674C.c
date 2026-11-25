extern s32 func_8014A870(s32, s32, u8);
extern void func_8014B854(s32);
extern u8 D_8011F2F0[];
extern u8 D_80189B36;
extern u8 D_80189C9A[];
extern u8 D_80189CC6[];
extern u8 D_8018A276;
extern u8 D_8018A277[];

void func_8014674C(s32 arg0)
{
int __repair_constant = 2;

int __repair_literal;

    s32 s1;
s32 __repair_result_s1;
    s32 s2;
    union { u8 * pointer; s32 value; } __repair_phase_storage;
    s32 a2;
    u16 st;
    
    unsigned long v0;
    

    do { __repair_phase_storage.pointer = D_8011F2F0 + (arg0 & 0xFFFF) * 100;
    s1 = 0;
    s2 = 0; } while (0);
    if (*(u16 *)(D_80189CC6 + 0) & 0x800) {
        __repair_result_s1 = func_8014A870(0x14, 3, D_80189CC6[-8]);
        v0 = __repair_result_s1 & 2;
        if (__repair_result_s1 & 1) {
            v0 = __repair_result_s1 & 2;
            if (D_80189CC6[-0x2C] != 0) {
                s2 = 1;
                v0 = __repair_result_s1 & 2;
                D_80189CC6[-0x2C]--;
            }
        }
        __repair_result_s1 = s2 & 0xFF;
        if (v0 != 0) {
            __repair_result_s1 = s2 & 0xFF;
            if (D_80189C9A[0] != D_8018A276 - 1) {
                s2 = 1;
                D_80189C9A[0]++;
                goto block_23;
            }
        }
    } else {
        st = *(u16 *)(__repair_phase_storage.pointer + 0x3E);
        if (st != 1) {
__repair_literal = __repair_constant;

            if ((s32)st < __repair_literal) {
                __repair_result_s1 = 0;
                if (!st) {
                    __repair_result_s1 = 0;
                    __repair_phase_storage.pointer[0]++;
                    if (__repair_phase_storage.pointer[0] >= 0x15) {
                        __repair_phase_storage.pointer[0] = 0;
                        *(u16 *)(__repair_phase_storage.pointer + 0x3E) = 1;
                        goto block_23;
                    }
                }
            } else {
                __repair_result_s1 = 0;
                if (st == 2) {
                    __repair_phase_storage.pointer[0]++;
                    if (__repair_phase_storage.pointer[0] >= 0x1F) {
                        s1 = 0x10;
                    }
                    goto block_23;
                }
            }
        } else {
            __repair_phase_storage.pointer[0] = a2;
            a2 = __repair_phase_storage.pointer[0] + 1;
            if (D_80189C9A[0] != D_80189C9A[2]) {
                register __repair_result_s1 = 0;
                if (!(a2 & 0xF)) {
                    s2 = 1;
                    D_80189C9A[0]++;
                    goto block_23;
                }
            } else {
                __repair_phase_storage.pointer[0] = 0;
                *(u16 *)(__repair_phase_storage.pointer + 0x3E) = __repair_constant;
block_23:
                __repair_result_s1 = s2 & 0xFF;
            }
        }
    }
    __repair_phase_storage.value = s1 & 0x10;
    if (__repair_result_s1 != 0) {
        func_8014B854(0x3B);
        __repair_phase_storage.value = s1 & 0x10;
    }
    if (__repair_phase_storage.value != 0) {
        s32 a0 = 0x3E;
        if (!(D_8018A277[D_80189C9A[0]] & 0x10)) {
            a0 = 0x3D;
            D_80189B36 &= 0xEF;
            *(s16 *)(D_80189C9A - 2) = 0x30;
        }
        func_8014B854(a0);
    }
}
