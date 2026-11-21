/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

f32 func_801132A0(f32);                             /* extern */
f32 func_80113BE0(f32);                             /* extern */
extern void *D_8005EA2C;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x14, 0x18, 0x28, 0x2c, 0x38, 0x3c, 0x40, 0x44], gap at: 0x1c. */
typedef struct { float field_0; float field_4; float field_8; float field_C; float field_10; float field_14; float field_18; float field_1C; float field_20; } __repair_record_arg1;
void func_80239D9C(void *arg0, void *arg1) {
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
    f32 temp_fs0_4;
    f32 temp_fs0f;
    f32 temp_fs0f_2;
    f32 temp_fs1;
    f32 temp_fs1f;
    f32 temp_fs2;
    f32 temp_fs2_2;
    f32 temp_ft0;
    f32 temp_ft0f;
    f32 temp_ft2;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1f;
    f32 temp_fv1f_2;

    temp_fs0 = *(f32 *)0x2024A8;
    temp_fs1f = func_80113BE0((*(f32 *)((char *)(arg0) + 0)) * temp_fs0);
    temp_fs2 = func_801132A0((*(f32 *)((char *)(arg0) + 0)) * temp_fs0);
    temp_fs1 = func_80113BE0((*(f32 *)((char *)(arg0) + 4)) * temp_fs0);
    temp_fs0f = func_801132A0((*(f32 *)((char *)(arg0) + 4)) * temp_fs0);
    temp_fs0_2 = func_80113BE0((*(f32 *)((char *)(arg0) + 8)) * temp_fs0);
    temp_fv0 = func_801132A0((*(f32 *)((char *)(arg0) + 8)) * temp_fs0);
    temp_fv1f = -temp_fs2;
    temp_ft2 = temp_fs2 * temp_fv0;
    temp_fv1f_2 = temp_fv1f * temp_fs1;
    temp_fs2_2 = temp_fs2 * temp_fs0f;
    temp_ft0 = temp_fs0f * temp_fv0;
    temp_fs0f_2 = temp_fs0_2 * temp_fs0f;
    temp_fv0_2 = temp_fv0 * temp_fs1;
    temp_fs0_3 = temp_fs0_2 * temp_fs1;
    temp_fv1 = temp_fv0_2 * temp_fs1f;
    temp_ft0f = temp_ft0 * temp_fs1f;
    ((__repair_record_arg1*)arg1)->field_1C = temp_fs1f;
    ((__repair_record_arg1*)arg1)->field_4 = (f32) (temp_fv1f * temp_fs0_2);
    ((__repair_record_arg1*)arg1)->field_10 = temp_ft2;
    ((__repair_record_arg1*)arg1)->field_18 = temp_fv1f_2;
    ((__repair_record_arg1*)arg1)->field_20 = temp_fs2_2;
    temp_fv1_2 = temp_fv1 + temp_fs0f_2;
    ((__repair_record_arg1*)arg1)->field_0 = (f32) (temp_ft0 - (temp_fs0_3 * temp_fs1f));
    temp_fs0_4 = temp_fs0_3 - temp_ft0f;
    ((__repair_record_arg1*)arg1)->field_8 = (f32) ((temp_fs0f_2 * temp_fs1f) + temp_fv0_2);
    ((__repair_record_arg1*)arg1)->field_14 = temp_fs0_4;
    ((__repair_record_arg1*)arg1)->field_C = temp_fv1_2;
    ((__repair_record_arg1*)arg1)->field_18 = (f32) (temp_fv1f_2 / (*(f32 *)((char *)(D_8005EA2C) + 0xF8)));
    ((__repair_record_arg1*)arg1)->field_1C = (f32) (temp_fs1f / (*(f32 *)((char *)(D_8005EA2C) + 0xF8)));
    ((__repair_record_arg1*)arg1)->field_20 = (f32) (temp_fs2_2 / (*(f32 *)((char *)(D_8005EA2C) + 0xF8)));
    ((__repair_record_arg1*)arg1)->field_C = (f32) (temp_fv1_2 * (*(f32 *)((char *)(D_8005EA2C) + 0xDC)));
    ((__repair_record_arg1*)arg1)->field_10 = (f32) (temp_ft2 * (*(f32 *)((char *)(D_8005EA2C) + 0xDC)));
    ((__repair_record_arg1*)arg1)->field_14 = (f32) (temp_fs0_4 * (*(f32 *)((char *)(D_8005EA2C) + 0xDC)));
}
