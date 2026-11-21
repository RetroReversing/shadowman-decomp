/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

f32 func_801132A0(f32);                             /* extern */
f32 func_80113BE0(f32);                             /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x14, 0x18, 0x28, 0x2c, 0x38, 0x3c, 0x40, 0x44], gap at: 0x1c. */
void func_8025DAB8(void *arg0, void *arg1) {
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_fs1;
    f32 temp_fs1f;
    f32 temp_fs2;
    f32 temp_ft0;
    f32 temp_ft2;
    f32 temp_ft1f;
    f32 temp_fv1_2;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv1;
    f32 temp_ft1;
    f32 temp_fv1f;

    temp_fs0 = func_80113BE0((*(f32 *)((char *)(arg0) + 0)));
    temp_fs2 = func_801132A0((*(f32 *)((char *)(arg0) + 0)));
    temp_fs1 = func_80113BE0((*(f32 *)((char *)(arg0) + 4)));
    temp_fs1f = func_801132A0((*(f32 *)((char *)(arg0) + 4)));
    temp_fs0f = func_80113BE0((*(f32 *)((char *)(arg0) + 8)));
    temp_fv0 = func_801132A0((*(f32 *)((char *)(arg0) + 8)));
    temp_ft2 = temp_fs1 * temp_fv0;
    temp_fv1 = temp_fs1f * temp_fv0;
    temp_ft0 = temp_fs1 * temp_fs0f;
    temp_ft1 = temp_fs1f * temp_fs0f;
    temp_fv0_2 = temp_fs2 * temp_fv0;
    temp_fv1_2 = temp_fv1 + (temp_fs0 * temp_ft0);
    temp_fv1f = temp_fs0 * temp_ft2;
    temp_ft1f = temp_fs0 * temp_fv1;
    (*(f32 *)((char *)(arg1) + 0x14)) = (f32) -temp_fs0;
    (*(f32 *)((char *)(arg1) + 8)) = (f32) (temp_fs2 * temp_fs1);
    (*(f32 *)((char *)(arg1) + 0xC)) = (f32) (temp_fs2 * temp_fs0f);
    (*(f32 *)((char *)(arg1) + 0x10)) = temp_fv0_2;
    (*(f32 *)((char *)(arg1) + 0x20)) = (f32) (temp_fs2 * temp_fs1f);
    (*(f32 *)((char *)(arg1) + 0)) = temp_fv1_2;
    (*(f32 *)((char *)(arg1) + 4)) = (f32) (temp_fv1f - temp_ft1);
    (*(f32 *)((char *)(arg1) + 0x18)) = (f32) ((temp_fs0 * temp_ft1) - temp_ft2);
    (*(f32 *)((char *)(arg1) + 0x1C)) = (f32) (temp_ft0 + temp_ft1f);
}
