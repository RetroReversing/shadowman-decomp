/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

f32 func_80113BE0(f32);                             /* extern */
s32 func_80116EB0(s32 *, s32 *, s32); /* extern */
extern s32 D_8002D1B4;
extern s32 D_8005901C;
extern s32 D_80059738;
extern u16 D_80075534;

void func_8022B274(void *arg0) {
    f32 temp_fa0;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv1;
    f32 var_fv0;

    if (!(D_80075534 & 4)) {
        temp_fv1 = (*(f32 *)((char *)(arg0) + 0xC));
        (*(f32 *)((char *)(&D_80059738) + 0x38)) = temp_fv1;
        temp_fv0f = (*(f32 *)((char *)(arg0) + 0x10));
        (*(f32 *)((char *)(&D_80059738) + 0x3C)) = temp_fv0f;
        var_fv0 = (*(f32 *)((char *)(arg0) + 0x14));
        (*(f32 *)((char *)(&D_80059738) + 0x40)) = var_fv0;
        if (!(temp_fv0f <= var_fv0)) {
            var_fv0 = temp_fv0f;
        }
        temp_fa0 = temp_fv0f_2 + *(f32 *)0x201E58;
        temp_fv0f_2 = *(f32 *)0x201E54 / (temp_fv1 / var_fv0);
        (*(s8 *)((char *)(&D_80059738) + 0x2E)) = 1;
        (*(f32 *)((char *)(&D_80059738) + 0x44)) = temp_fv0f_2;
        (*(f32 *)((char *)(&D_80059738) + 0x48)) = temp_fa0;
        (*(s16 *)((char *)(&D_80059738) + 0x30)) = (s16) (s32) (func_80113BE0(temp_fa0) * (*(f32 *)((char *)(&D_80059738) + 0x3C)));
        func_80116EB0(&D_8005901C, &D_8002D1B4, 1);
    }
}
