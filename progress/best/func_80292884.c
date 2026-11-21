/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern unsigned int D_8003692C;
extern int D_80036930;
s32 func_80292CDC();
extern char D_80036920[];
extern s32 D_80036934;
extern s32 D_80036940;
extern u32 D_80036948;
extern s32 D_8003694C;
extern s32 D_80036950;

u32 func_80292884(void) {
    u32 *__base_D_80036948;
    char *var_s0;
    s32 temp_a0;
    u32 *temp_v0;
    u32 *temp_v1;
    u32 temp_hi;
    u32 temp_s2;
    u32 var_s1;

    __base_D_80036948 = &D_80036948;
    temp_hi = (u32) (*__base_D_80036948) % (u32) D_8003692C;
    var_s1 = 0;
    temp_v0 = (D_80036940) + ((temp_hi * 4));
    temp_s2 = *temp_v0;
    D_80036950 -= temp_s2;
    *temp_v0 = 0;
    if (temp_s2 != 0) {
        var_s0 = D_80036934 + (temp_hi * D_80036930 * 4);
        do {
            temp_a0 = *(s32 *)var_s0;
            temp_v1 = (temp_a0 * 4) + D_8003694C;
            if (*temp_v1 == -1U) {
                *temp_v1 = (*__base_D_80036948);
                func_80292CDC(temp_a0);
            }
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < temp_s2);
    }
    return temp_s2;
}
