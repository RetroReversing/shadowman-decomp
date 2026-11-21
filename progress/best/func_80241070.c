/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_80241114();                                /* extern */
s32 func_80241120();                            /* extern */

s32 func_80241070(void *arg0, void *arg1, f32 arg2) {
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    f32 temp_fv1f;
    void *temp_v1;

    temp_fv1f = (f32) (*(u16 *)((char *)(arg0) + 0x10)) + arg2;
    temp_fv0f = (f32) (*(s16 *)((char *)(arg0) + 0xA)) - (*(f32 *)((char *)(arg1) + 0));
    temp_fv0 = (f32) (*(s16 *)((char *)(temp_v1) + 2)) - (*(f32 *)((char *)(arg1) + 4));
    temp_v1 = arg0 + 0xA;
    temp_fv0_2 = (f32) (*(s16 *)((char *)(temp_v1) + 4)) - (*(f32 *)((char *)(arg1) + 8));
    if (!((temp_fv1f * temp_fv1f) < ((temp_fv0f * temp_fv0f) + (temp_fv0 * temp_fv0) + (temp_fv0_2 * temp_fv0_2)))) {
        func_80241120();
        return func_80241114();
    }
    return 0;
}
