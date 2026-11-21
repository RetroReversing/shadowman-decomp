/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern s32 D_800619E0;
extern s32 D_800619F0;
extern s32 D_80061A00;
extern s32 D_80061A04;

void func_80236820(void) {
    s32 *__base_D_80061A04;
    char *var_a0;
    char *var_v1;
    s32 var_a1;

    var_a1 = 0;
    var_a0 = &D_800619E0;
    var_v1 = &D_800619F0;
    __base_D_80061A04 = &D_80061A04;
    (*__base_D_80061A04) = -1;
    D_80061A00 = -0x80;
    do {
        var_a1 += 1;
        var_v1 += 4;
        *(s32 *)var_v1 = (*__base_D_80061A04);
        *(s32 *)var_a0 = D_80061A00;
        var_a0 += 4;
    } while (var_a1 < 4);
}
