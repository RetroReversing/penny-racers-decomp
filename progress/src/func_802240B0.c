struct Racer {
    char pad0[0x748];
    f32 dist;
    u8 counter;
    u8 timer;
    char pad1[0x87A - 0x74E];
    u8 mode;
    char pad2[0x890 - 0x87B];
    s32 flag;
    char pad3[0x8A0 - 0x894];
    u8 state;
};

void func_802240B0(struct Racer *arg0)
{
    switch (arg0->mode) {
    case 0:
        if (arg0->counter != 5) {
            if (arg0->dist > 5000.0f && arg0->timer == 0 && arg0->flag != 0) {
                if (arg0->counter < 4) {
                    arg0->counter = arg0->counter + 1;
                    arg0->timer = arg0->timer + 0x3C;
                }
                return;
            }
            if (arg0->dist < 3000.0f && arg0->timer == 0 && arg0->counter != 0) {
                arg0->counter = arg0->counter - 1;
                arg0->timer = arg0->timer + 0x3C;
            }
        }
        break;
    case 1:
        switch (arg0->state) {
        case 1:
            if (arg0->counter < 4) {
                arg0->counter = arg0->counter + 1;
                arg0->timer = arg0->timer + 0x3C;
            }
            break;
        case 2:
            if (arg0->counter != 0) {
                arg0->counter = arg0->counter - 1;
                arg0->timer = arg0->timer + 0x3C;
            }
            break;
        }
        arg0->state = 0;
        break;
    }
}
