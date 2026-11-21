/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80241E6C();                            /* extern */
extern s32 D_8006A920;

void func_80241EAC(void) {
    s32 *var_v1;
    s32 var_a0;

    func_80241E6C();
    var_a0 = 0;
    var_v1 = &D_8006A920;
    __repair_rows: {
        (*(s8 *)((char *)(var_v1) + 0)) = 0;
        (*(s16 *)((char *)(var_v1) + 6)) = 0;
        (*(s16 *)((char *)(var_v1) + 8)) = 1;
        (*(s16 *)((char *)(var_v1) + 0xA)) = 0;
        var_a0 += 1;
        var_v1 += 3;
    }
if (var_a0 < 8) goto __repair_rows;
}
