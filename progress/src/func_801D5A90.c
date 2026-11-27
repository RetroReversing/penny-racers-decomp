typedef struct { u8 pad0[0x3E]; u16 st; u8 pad40[0x24]; } R;
typedef struct {
    u8 req; s8 state; u16 id; s16 handle; u8 pad6[6]; s32 playing; f32 pitch; u16 last; s16 vol;
    u8 b18; u8 b19; u8 pad1A[2]; f32 pitch2; u8 pad20[2]; s16 vol2; u8 c24; u8 c25; u8 prio; u8 pad27; s16 timer; u8 pad2A[2];
} Ch;
typedef struct { u8 prio; u8 pad1; u16 vol; u16 time; u8 pad6[6]; } Tab;
extern R D_8011F2F0[];
extern Ch D_801D7DF0[];
extern Tab D_801D75E4[];
extern u8 D_8021F029;
extern f64 D_801D7B10;
void func_801D63F4(void);
void stopStageSound(u16);
s16 func_80027EE0(u16);
void func_8002D030(s16);
void func_8002CFD0(void);
void func_8002CF70(s16);
void func_8002CF10(f32);
void func_8002CEB0(u8);
void func_8002CE50(u8);
s32 func_8002C690(void);
#define C D_801D7DF0[i]
#define T D_801D75E4[C.id]
#define START \
    C.state = 0; \
    C.handle = h; \
    C.last = C.id; \
    C.pitch2 = C.pitch = 1.0f; \
    C.c24 = C.b18 = 0x40; \
    C.c25 = C.b19 = 0; \
    C.prio = T.prio; \
    C.timer = T.time; \
    if (C.vol == 0) { \
        C.vol2 = C.vol = T.vol; \
        v = (f32) C.vol * D_8021F029 * 0.047619f; \
        func_8002D030(h); \
    } else { \
        C.vol2 = C.vol; \
        v = (f32) C.vol * D_8021F029 * 0.047619f; \
        func_8002D030(h); \
    } \
    func_8002CF70((s16) v);

void func_801D5A90(u16 arg0)
{
    u16 i;
    s16 h;
    f32 v;

    switch (D_8011F2F0[arg0].st) {
    case 0:
        func_801D63F4();
        D_8011F2F0[arg0].st = 1;
        break;
    case 1:
        for (i = 0; i < 8; i++) {
            if (C.state == 0) {
                C.state = C.req;
                C.req = 0;
                if (C.state == 0) {
                    continue;
                }
            }
            switch (C.state) {
            case 1:
                if (C.handle == -1) {
                    h = func_80027EE0(C.id);
                    if (h != -1) {
                        START
                    }
                } else {
                    if (C.prio >= T.prio) {
                        func_8002D030(C.handle);
                        func_8002CFD0();
                        C.state = 2;
                        C.vol = 0;
                    } else {
                        C.state = 0;
                    }
                }
                break;
            case 2:
                if (C.playing == 0) {
                    h = func_80027EE0(C.id);
                    if (h != -1) {
                        START
                    }
                }
                break;
            case 3:
                func_8002D030(C.handle);
                func_8002CFD0();
                C.state = 4;
                break;
            case 4:
                if (C.playing == 0) {
                    C.state = 0;
                    C.handle = -1;
                }
                break;
            }
        }
        for (i = 0; i < 8; i++) {
            if (C.handle == -1) {
                continue;
            }
            if (C.timer > 0) {
                if (--C.timer <= 0) {
                    stopStageSound(i);
                }
            }
            func_8002D030(C.handle);
            if ((C.playing = func_8002C690()) == 1) {
                if (C.pitch != C.pitch2) {
                    func_8002CF10(C.pitch * D_801D7B10);
                }
                if (C.vol != C.vol2) {
                    v = (f32) C.vol * D_8021F029 * 0.047619f;
                    func_8002CF70((s16) v);
                }
                if (C.b18 != C.c24) {
                    func_8002CEB0(C.b18);
                }
                if (C.b19 != C.c25) {
                    func_8002CE50(C.b19);
                }
            }
            C.pitch2 = C.pitch;
            C.vol2 = C.vol;
            C.c24 = C.b18;
            C.c25 = C.b19;
        }
        break;
    }
}
