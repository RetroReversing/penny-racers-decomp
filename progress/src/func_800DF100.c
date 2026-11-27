typedef struct {
    u16 flags;
    u8 pad[98];
} Slot;

extern Slot sNodeFlags[];

void func_800DF100(s32 arg0) {
    sNodeFlags[arg0 & 0xFFFF].flags |= 0x10;
}
