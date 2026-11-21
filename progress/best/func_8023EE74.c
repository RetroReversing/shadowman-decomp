/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

void func_8023EE74(void *arg0, void *arg1) {
    f32 temp_fa0;
    f32 temp_fa0f;
    f32 temp_ft0;
    f32 temp_ft0f;
    f32 temp_ft1;
    f32 temp_ft1f;
    f32 temp_ft1f_2;
    f32 temp_ft3;
    f32 temp_ft3f;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv1;
    f32 temp_fv1f;
    f32 temp_fv1f_2;

    temp_ft0f = (*(f32 *)((char *)(arg0) + 0));
    temp_ft1f = temp_ft0f * temp_ft0f;
    temp_fv1f = (*(f32 *)((char *)(arg0) + 4));
    temp_ft1 = temp_fv1f * temp_fv1f;
    temp_fv0f = (*(f32 *)((char *)(arg0) + 8));
    temp_ft3 = temp_fv0f * temp_fv0f;
    temp_fv0 = (*(f32 *)((char *)(arg0) + 0xC));
    temp_ft3f = temp_fv0 * temp_fv0;
    temp_fv1 = temp_fv1f * temp_fv0f;
    temp_fa0 = temp_fv0 * temp_ft0f;
    temp_ft0 = temp_fv0 * temp_fv1f;
    temp_fa0f = temp_fv0f * temp_ft0f;
    temp_fv0f_2 = temp_fv0f * temp_fv0;
    temp_fv1f_2 = temp_fv1f * temp_ft0f;
    temp_ft1f_2 = temp_ft1f - temp_ft1;
    (*(f32 *)((char *)(arg1) + 4)) = (f32) (2.0f * (temp_fv1 - temp_fa0));
    (*(f32 *)((char *)(arg1) + 0xC)) = (f32) (2.0f * (temp_fv1 + temp_fa0));
    (*(f32 *)((char *)(arg1) + 0x18)) = (f32) (2.0f * (temp_ft0 - temp_fa0f));
    (*(f32 *)((char *)(arg1) + 8)) = (f32) (2.0f * (temp_ft0 + temp_fa0f));
    (*(f32 *)((char *)(arg1) + 0x14)) = (f32) (2.0f * (temp_fv0f_2 - temp_fv1f_2));
    (*(f32 *)((char *)(arg1) + 0)) = (f32) (((temp_ft1f + temp_ft1) - temp_ft3) - temp_ft3f);
    (*(f32 *)((char *)(arg1) + 0x1C)) = (f32) (2.0f * (temp_fv0f_2 + temp_fv1f_2));
    (*(f32 *)((char *)(arg1) + 0x10)) = (f32) ((temp_ft1f_2 + temp_ft3) - temp_ft3f);
    (*(f32 *)((char *)(arg1) + 0x20)) = (f32) ((temp_ft1f_2 - temp_ft3) + temp_ft3f);
}
