/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

extern void *D_8005EA2C;

s32 func_8025DBE4(const void *arg0, void *arg1) {
    f32 temp_ft0;
    f32 temp_ft0_2;
    f32 temp_ft1;
    f32 temp_fv1f;
    s32 var_v0;
    void *temp_v0;

    temp_fv1f = (*(const f32 *)((char *)(arg0) + 0));
    temp_ft1 = (*(const f32 *)((char *)(arg0) + 4));
    temp_v0 = D_8005EA2C + 0x3C;
    temp_ft0 = (*(const f32 *)((char *)(arg0) + 8));
    temp_ft0_2 = *(f32 *)0x20A1C8 / ((temp_fv1f * (*(const f32 *)((char *)(temp_v0) + 0x18))) + (temp_ft1 * (*(const f32 *)((char *)(temp_v0) + 0x1C))) + (temp_ft0 * (*(const f32 *)((char *)(temp_v0) + 0x20))) + (*(const f32 *)((char *)(temp_v0) + 0x2C)));
    (*(f32 *)((char *)(arg1) + 0)) = (f32) ((((temp_fv1f * (*(const f32 *)((char *)(D_8005EA2C) + 0x3C))) + (temp_ft1 * (*(const f32 *)((char *)(temp_v0) + 4))) + (temp_ft0 * (*(const f32 *)((char *)(temp_v0) + 8))) + (*(const f32 *)((char *)(temp_v0) + 0x24))) * (*(const f32 *)((char *)(D_8005EA2C) + 0xCC)) * temp_ft0_2) + (*(const f32 *)((char *)(D_8005EA2C) + 0xE0)));
    var_v0 = 0;
    (*(f32 *)((char *)(arg1) + 4)) = (f32) ((-((temp_fv1f * (*(const f32 *)((char *)(temp_v0) + 0xC))) + (temp_ft1 * (*(const f32 *)((char *)(temp_v0) + 0x10))) + (temp_ft0 * (*(const f32 *)((char *)(temp_v0) + 0x14))) + (*(const f32 *)((char *)(temp_v0) + 0x28))) * (*(const f32 *)((char *)(D_8005EA2C) + 0xD0)) * temp_ft0_2) + (*(const f32 *)((char *)(D_8005EA2C) + 0xE4)));
    (*(f32 *)((char *)(arg1) + 8)) = temp_ft0_2;
    if (!(temp_ft0_2 < 0.0f)) {
        var_v0 = 1;
    }
    return var_v0;
}
