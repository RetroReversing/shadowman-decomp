extern s32 D_80059890;
extern s32 D_8005989C;

s32 func_80230C88(void) {
    s32 var_a0;
    s32 var_a1;
    char *var_v1;

    var_a0 = D_8005989C;
    var_a0 -= 1;
    var_a1 = 0;
    if (var_a0 != 0) {
        var_v1 = (var_a0 * 8) + D_80059890;
        for (;;) {
            var_a0 -= 1;
            if (*(u16 *)var_v1 == 0xFFFF) {
                var_a1 += 1;
                var_v1 -= 8;
                if (var_a0 != 0) {
                    continue;
                }
            }
            break;
        }
    }
    return var_a1 << 8;
}
