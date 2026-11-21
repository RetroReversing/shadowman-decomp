/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

f32 func_801132A0(f32);                             /* extern */
f32 func_80113BE0(f32);                             /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x14, 0x20, 0x24, 0x30, 0x34, 0x40, 0x44], gap at: 0x18. */
void func_80239C38(void *arg0, void *arg1) {
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0f;
    f32 temp_fs0f_2;
    f32 temp_fs1;
    f32 temp_fs1f;
    f32 temp_fs2;
    f32 temp_fs2f;
    f32 temp_fs2f_2;
    f32 temp_ft0;
    f32 temp_ft1f;
    f32 temp_ft2f;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    f32 temp_fv1;
    f32 temp_fv1f;

    temp_fv0 = *(f32 *)0x2024A4;
    temp_fs0 = (*(f32 *)((char *)(arg0) + 0)) * (*(f32 *)0x2024A4);
    temp_fs0f = (*(f32 *)((char *)(arg0) + 4)) * (*(f32 *)0x2024A4);
    temp_fs1 = (*(f32 *)((char *)(arg0) + 8)) * (*(f32 *)0x2024A4);
    temp_fs2f = func_80113BE0(temp_fs0);
    temp_fs2 = func_801132A0(temp_fs0);
    temp_fs1f = func_80113BE0(temp_fs0f);
    temp_fs0f_2 = func_801132A0(temp_fs0f);
    temp_fs0_2 = func_80113BE0(temp_fs1);
    temp_fv0_2 = func_801132A0(temp_fs1);
    temp_ft2f = temp_fs0f_2 * temp_fv0_2;
    temp_fv1 = temp_fs2f * temp_fs1f;
    temp_ft1f = temp_fs2 * temp_fv0_2;
    temp_fv0f = temp_fs2 * temp_fs1f;
    temp_fs2f_2 = temp_fs2f * temp_fv0_2;
    temp_ft0 = temp_fv1 * temp_fv0_2;
    temp_fv1f = temp_fv0f * temp_fv0_2;
    (*(f32 *)((char *)(arg1) + 0x18)) = (f32) -temp_fs1f;
    (*(s32 *)((char *)(arg1) + 0x24)) = 0;
    (*(s32 *)((char *)(arg1) + 0x2C)) = 0;
    (*(s32 *)((char *)(arg1) + 0x28)) = 0;
    (*(f32 *)((char *)(arg1) + 0)) = temp_ft2f;
    (*(f32 *)((char *)(arg1) + 0xC)) = (f32) (temp_fs0f_2 * temp_fs0_2);
    (*(f32 *)((char *)(arg1) + 0x1C)) = (f32) (temp_fs2f * temp_fs0f_2);
    (*(f32 *)((char *)(arg1) + 0x20)) = (f32) (temp_fs2 * temp_fs0f_2);
    (*(f32 *)((char *)(arg1) + 4)) = (f32) (temp_ft0 - (temp_fs2 * temp_fs0_2));
    (*(f32 *)((char *)(arg1) + 0x10)) = (f32) ((temp_fv1 * temp_fs0_2) + temp_ft1f);
    (*(f32 *)((char *)(arg1) + 8)) = (f32) (temp_fv1f + (temp_fs2f * temp_fs0_2));
    (*(f32 *)((char *)(arg1) + 0x14)) = (f32) ((temp_fv0f * temp_fs0_2) - temp_fs2f_2);
}
