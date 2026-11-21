extern char D_800458FC[];
extern char D_80045930[];

u32 func_802D20C0(s32 arg0, void *arg1) {
    char *var_a2;
    s32 var_a3;
    s32 var_t3;
    u32 var_t0;
    u32 var_t1;
    char *temp_v0;

    var_t1 = 0;
    var_a3 = -1;
    var_t0 = var_t1;
    var_t3 = var_a3;
    var_a2 = D_800458FC;
    for (;;) {
        if (var_a3 == var_t3) {
            var_t0 += 1;
            if (*(s32 *)var_a2 == arg0) {
                var_t1 = 1;
                var_a3 = *(s32 *)(var_a2 + 4);
                temp_v0 = (var_a3 * 0x14) + D_80045930;
                *(s32 *)(temp_v0 + 8) = *(s32 *)((char *)arg1 + 8);
                *(s32 *)(temp_v0 + 0xC) = 0;
            }
            var_a2 += 8;
            if (var_t0 < 6U) {
                continue;
            }
        }
        break;
    }
    return var_t1;
}
