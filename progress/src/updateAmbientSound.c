void debugPrintf(s32 *);
void playStageSound(s32, s16);
void playStageSoundVol(s32, s16, s16);
void stopStageSound(s32);

typedef struct { u8 pad[0x3E]; u16 state; u8 pad40[0x24]; } Emitter;
typedef struct { s16 id; f32 x; f32 y; f32 z; f32 radius; } Zone;
typedef struct { s16 vol; u8 pad[10]; } SndEntry;
typedef struct { f32 x; f32 y; f32 z; u8 pad[0x18]; } Listener;
typedef struct { u8 pad[0x20]; u16 course; } Race;
typedef struct { u8 pad[4]; u8 count; } Menu;
typedef struct { u8 pad[0x2108]; s16 mode; u8 pad210A[2]; s16 view; } Sys;

extern Emitter D_8011F2F0[];
extern Zone *D_801D7A78[];
extern SndEntry soundDefs[];
extern Listener D_80221080[];
extern Race D_8006FAF0;
extern Menu D_8006FB14;
extern Sys sRowBoard;
extern s32 D_801D7D40;
extern u16 D_801D7DEA;
extern s16 D_801D7EFC;
extern s16 D_801D7F0E;
extern s16 D_801D7F50;

/* Ambient sound for the stage: finds the sound zone nearest the view point and
 * plays its sound, fading it with distance. Channel 6 carries it. */
void updateAmbientSound(u16 arg0)
{
    Emitter *e = &D_8011F2F0[arg0];
    Listener *pos;
    Zone *zone;
    Zone *near;
    s16 old;
    f32 best;
    f32 dist;
    f32 vol;
    f32 dx, dy, dz;

    switch (e->state) {
    case 0:
        if (D_801D7A78[D_8006FAF0.course] != 0 && sRowBoard.mode < 2) {
            D_801D7DEA = 10;
            D_801D7F50 = -1;
            e->state = 1;
            debugPrintf(&D_801D7D40);
        }
        break;
    case 1:
        if (D_801D7DEA != 0) {
            D_801D7DEA--;
            break;
        }
        if (D_8006FB14.count >= 2) {
            e->state = 2;
        }
        old = D_801D7F50;
        D_801D7F50 = 0;
        pos = &D_80221080[sRowBoard.view];
        best = 10000.0f;
        zone = D_801D7A78[D_8006FAF0.course];
        near = 0;
        while (zone->id != 0) {
            if (zone->id == 0x1F) {
                dist = 0.0f;
            } else {
                dx = pos->x - zone->x;
                dy = pos->y - zone->y;
                dz = pos->z - zone->z;
                dist = sqrtf(dx * dx + dy * dy + dz * dz);
            }
            if (dist < best) {
                best = dist;
                D_801D7F50 = zone->id;
                near = zone;
            }
            zone++;
        }
        if (old != D_801D7F50) {
            if (D_801D7F50 != 0) {
                best -= near->radius;
                if (best < 0.0f) {
                    playStageSound(6, D_801D7F50);
                    D_801D7F0E = soundDefs[D_801D7F50].vol;
                    break;
                }
                if (best < 900.0f) {
                    vol = soundDefs[D_801D7F50].vol * (1000.0f - best) / 1000.0f;
                    playStageSoundVol(6, D_801D7F50, vol);
                    break;
                }
                D_801D7F50 = 0;
            }
            if (D_801D7EFC != -1) {
                stopStageSound(6);
            }
        } else if (D_801D7F50 != 0) {
            best -= near->radius;
            if (best < 0.0f) {
                D_801D7F0E = soundDefs[D_801D7F50].vol;
            } else if (best < 900.0f) {
                vol = soundDefs[D_801D7F50].vol * (1000.0f - best) / 1000.0f;
                D_801D7F0E = vol;
            } else {
                D_801D7F50 = 0;
                if (D_801D7EFC != -1) {
                    stopStageSound(6);
                }
            }
        }
        break;
    case 2:
        D_801D7F0E = 0;
        break;
    }
}
