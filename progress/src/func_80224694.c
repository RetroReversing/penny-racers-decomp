extern unsigned char D_8006FB14[];

typedef struct {
    char pad0[0x238];
    f32 *table;
    char pad23C[0x748 - 0x23C];
    f32 unk748;
    u8 index;
    u8 unk74D;
    char pad74E[0x754 - 0x74E];
    f32 unk754;
    char pad758[0x770 - 0x758];
    f32 unk770;
} Obj;

void func_80224694(Obj *obj, f32 arg1)
{
    f32 cur;
    f32 diff;
    f32 rate;

    if (D_8006FB14[4] != 0) {
        if (obj->unk748 > 1200.0f) {
            cur = obj->unk770;
            if (cur < arg1) {
                rate = 0.4f;
                diff = arg1 - cur;
            } else {
                rate = obj->unk770;
                rate -= arg1;
                rate *= obj->table[obj->index];
                obj->unk754 = rate;
                cur = obj->unk770;
                diff = arg1 - cur;
                rate = 0.5f;
            }
            obj->unk770 = diff * rate + cur;
        } else {
            obj->unk770 *= 0.5f;
            if (obj->unk770 < 5.0f) {
                obj->unk74D = 0;
                obj->unk754 = 0.0f;
                obj->unk770 = 0.0f;
            }
        }
    } else {
        obj->unk770 = 0.0f;
    }
}
