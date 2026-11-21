/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern char D_80075F68[];

void func_8026E1F0(s32 arg0) {
    char *__base_D_80075F68;
    unsigned temp_v1;
    s32 var_v1;
    u8 *temp_v1_2;

    var_v1 = arg0;
    if (arg0 < 0) {
        var_v1 = arg0 + 7;
    }
    temp_v1 = var_v1 >> 3;
    __base_D_80075F68 = D_80075F68;
    *temp_v1_2 |= 1 << (arg0 - ((var_v1 >> 3) * 8));
    temp_v1_2 = ((var_v1 >> 3) & 0xFF) + __base_D_80075F68;
}
