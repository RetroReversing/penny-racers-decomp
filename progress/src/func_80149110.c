s32 func_801FA30C(void);
extern u8 D_80189CC9[];
extern u8 D_8018A276;
extern u8 D_8018A277[];

s32 func_80149110(void)
{
    s32 var_s0;
    s32 var_a1;
    s32 var_a0;
    u32 masked;
    u8 var_a2;
    u8 limit;

    var_s0 = 0;
    if (!(func_801FA30C() & 1))
    {
        var_a2 = 0xFF;
        var_a1 = 0;
        limit = D_8018A276;
        do
        {
            var_a0 = var_a1 & 0xFF;
            if (var_a2 >= D_80189CC9[var_a0] && !(D_8018A277[var_a0] & 0x10))
            {
                var_a2 = D_80189CC9[var_a0];
                var_s0 = var_a1;
            }
            var_a1 += 1;
        } while ((u32) limit >= (u32) (var_a1 & 0xFF));
        return var_s0 & 0xFF;
    }
    var_a2 = 0;
    var_a1 = 0;
    limit = D_8018A276;
    do
    {
        var_a0 = var_a1 & 0xFF;
        masked = var_a2 & 0xFF;
        if (D_80189CC9[var_a0] >= masked && !(D_8018A277[var_a0] & 0x10))
        {
            var_a2 = D_80189CC9[var_a0];
            var_s0 = var_a1;
        }
        var_a1 += 1;
    } while ((u32) limit >= (u32) (var_a1 & 0xFF));
    return var_s0 & 0xFF;
}
