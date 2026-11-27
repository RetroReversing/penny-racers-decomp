typedef struct { u8 state; u8 min; u8 sec; u8 x3; u8 frac; } Time;
typedef struct { u8 pad[0x562]; Time time[4]; } Race;
typedef struct { u8 cur[3]; u8 best[3]; u16 curRows[9]; u16 bestRows[9]; u8 pad2A[6]; } Rec;
extern Race sCars;
extern Rec sSaveData[];
extern u8 D_8006FAF0[];
extern u8 newLapRecord;
extern u8 newTotalRecord;
extern u8 D_801E9698[];
extern u8 D_801E96B4[];
extern u16 sCarSlots[];
extern PennyHalfwordRows D_800DA26A[];
extern s32 D_801E9D58;
void debugPrintf();
void func_80029790(void);
void func_800297C8(void);
s32 func_801E2F38(s32);
void func_801DD938(s16, s16, s16, s16, u8, u16, u16, u16, u8, u16);

/* After a race, saves the total time as the best if it beats the stored best, and each lap time into the current record if it beats that lap. */ void updateRaceRecords(void) {
    s32 courseIndex;
    s32 lap;
    s32 row;
    Time *entry;
    Race *race;
    u8 lessSoFar;
    u8 newVal;
    u8 oldVal;

    newLapRecord = 0;
    newTotalRecord = 0;
    courseIndex = *(u16 *) &D_8006FAF0[0x20] - 1;
    race = &sCars;
    entry = race->time;
    if (entry[0].state == 0) {
        newVal = entry->min;
        oldVal = sSaveData[courseIndex].best[0];
        if (newVal <= oldVal) {
            lessSoFar = newVal < oldVal;
            newVal = entry->sec;
            oldVal = sSaveData[courseIndex].best[1];
            if ((newVal <= oldVal) || lessSoFar) {
                if (newVal < oldVal) lessSoFar = 1;
                newVal = entry->frac;
                oldVal = sSaveData[courseIndex].best[2];
                if ((newVal < oldVal) || lessSoFar) {
            debugPrintf(D_801E9698);
            newTotalRecord = 1;
            sSaveData[courseIndex].best[0] = entry->min;
            sSaveData[courseIndex].best[1] = entry->sec;
            sSaveData[courseIndex].best[2] = entry->frac;
            for (row = 0; row < 8; row++) {
                sSaveData[courseIndex].bestRows[row] = D_800DA26A[0].rows[sCarSlots[0]][row];
            }
                }
            }
        }
    }
    for (lap = 1; lap < 4; lap++) {
        entry = &race->time[lap];
        newVal = entry->min;
        oldVal = sSaveData[courseIndex].cur[0];
        if (newVal <= oldVal) {
            lessSoFar = newVal < oldVal;
            newVal = entry->sec;
            oldVal = sSaveData[courseIndex].cur[1];
            if ((newVal <= oldVal) || lessSoFar) {
                if (newVal < oldVal) lessSoFar = 1;
                newVal = entry->frac;
                oldVal = sSaveData[courseIndex].cur[2];
                if ((newVal < oldVal) || lessSoFar) {
            debugPrintf(D_801E96B4, lap);
            newLapRecord = lap;
            sSaveData[courseIndex].cur[0] = entry->min;
            sSaveData[courseIndex].cur[1] = entry->sec;
            sSaveData[courseIndex].cur[2] = entry->frac;
            for (row = 0; row < 8; row++) {
                sSaveData[courseIndex].curRows[row] = D_800DA26A[0].rows[sCarSlots[0]][row];
            }
                }
            }
        }
    }
    if (newLapRecord || newTotalRecord) {
        func_80029790();
        D_801E9D58 = func_801E2F38((u16) courseIndex);
        if (D_801E9D58 != 0) {
            func_801DD938(0x10, 0x4C, 0xA, 2, 0xC8, 0xB4, 0x12, 0x14, 0, 0x66);
        }
        func_800297C8();
    }
}
