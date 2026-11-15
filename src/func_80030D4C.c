extern char D_8004A4B0[];
extern char D_8004A4B4[];

void alEvtqPostEvent(void *a0, s16 *a1, s32 a2);
void func_80030E28(void *a0, s16 *a1);
void __handleMetaMsg(void *a0, s16 *a1);
void func_80031EC8(void *a0);
void func_80031FA0(void *a0, s16 *a1);
void func_800346B0(char *a0, char *a1, s32 a2);

void func_80030D4C(void *arg0) {
    s16 sp10[8];

    if (*(void **)((u8 *)arg0 + 0x18) != NULL) {
        func_80031FA0(*(void **)((u8 *)arg0 + 0x18), sp10);
        switch (sp10[0]) {
        case 1:
            func_80030E28(arg0, sp10);
            func_80031EC8(arg0);
            return;
        case 3:
            __handleMetaMsg(arg0, sp10);
            func_80031EC8(arg0);
            return;
        case 4:
            *(s32 *)((u8 *)arg0 + 0x2C) = 2;
            sp10[0] = 0x10;
            alEvtqPostEvent((u8 *)arg0 + 0x48, sp10, 0x7FFFFFFF);
            return;
        default:
            func_800346B0(D_8004A4B0, D_8004A4B4, 0x160);
            break;
        }
    }
}
