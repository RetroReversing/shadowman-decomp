/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

f32 func_801132A0(f32);                             /* extern */
f32 func_80113BE0(f32);                             /* extern */
M2C_UNK func_8026CCB0();                            /* extern */
M2C_UNK func_8026CD00();                            /* extern */
M2C_UNK func_8026CD44();                            /* extern */
M2C_UNK func_8026CEF8();                            /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x50, 0x54, 0x60, 0x64, 0x70, 0x74, 0x80, 0x84, 0x90, 0x94, 0x98, 0x9c], gap at: 0x40. */
void func_8026CB74(void *arg0, s8 arg1, f32 arg2, f32 arg3, f32 arg4) {
    s32 sp10;
    s32 sp14;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0f;
    f32 temp_fs0f_2;
    f32 temp_fs0f_3;
    f32 temp_fs1;
    f32 temp_fs1f;
    f32 temp_fs2;
    f32 temp_fs2f;
    f32 temp_fs3;
    f32 temp_fs3f;
    f32 temp_fs4;
    f32 temp_fs4f;
    f32 temp_fs5f;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    s32 temp_s1;
    u16 *var_s3;
    u16 temp_fp;
    u16 temp_s0;
    u16 temp_s5;
    u32 var_s4;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    void *temp_v1_2;
    void *var_s2;

    temp_v0 = M2C_FIELD(arg0, void **, 0x64);
    var_s3 = M2C_FIELD(temp_v0, u16 **, 0x20);
    temp_fp = M2C_FIELD(temp_v0, u16 *, 0x36);
    var_s4 = 0;
    sp10 = M2C_FIELD(temp_v0, s32 *, 0x18);
    sp14 = M2C_FIELD(temp_v0, s32 *, 0x24);
    temp_s1 = M2C_FIELD(temp_v0, s32 *, 0x28);
    if (temp_fp != 0) {
        var_s2 = var_s3 + 2;
        temp_fs4 = *(f32 *)0x20E4A4;
        temp_fs5f = *(f32 *)0x20E4AC;
        temp_fs4f = (arg4 * *(f32 *)0x20E4A0) + *(f32 *)0x20E4A8;
loop_2:
        temp_v0_2 = (*var_s3 * 6) + sp10;
        temp_fs2f = (f32) M2C_FIELD(temp_v0_2, s16 *, 0);
        temp_fs3f = (f32) M2C_FIELD(temp_v0_2, s16 *, 4);
        temp_s0 = M2C_FIELD(var_s2, u16 *, 2);
        temp_s5 = M2C_FIELD(var_s2, u16 *, 0);
        temp_fs3 = -sqrtf((temp_fs2f * temp_fs2f) + (temp_fs3f * temp_fs3f));
        if (!(temp_fs4 <= temp_fs4f)) {
            func_8026CCB0();
            return;
        }
        M2C_FIELD(((temp_s0 * 8) + temp_s1), s8 *, 4) = (s8) ((s32) (temp_fs4f - temp_fs4) | 0x80000000);
        temp_fv0 = (arg4 * *(f32 *)0x20E4B0) + *(f32 *)0x20E4B4;
        if (!(temp_fs4 <= temp_fv0)) {
            func_8026CD00();
            return;
        }
        temp_fv0_2 = arg4 * *(f32 *)0x20E4B8;
        M2C_FIELD(((temp_s0 * 8) + temp_s1), s8 *, 5) = (s8) ((s32) (temp_fv0 - temp_fs4) | 0x80000000);
        if (!(temp_fs4 <= temp_fv0_2)) {
            func_8026CD44();
            return;
        }
        temp_fs1f = (arg3 + arg2) * *(f32 *)0x20E4BC;
        M2C_FIELD(((temp_s0 * 8) + temp_s1), s8 *, 6) = (s8) ((s32) (temp_fv0_2 - temp_fs4) | 0x80000000);
        temp_fs0f = arg4 + *(f32 *)0x20E4C0;
        temp_fs2 = *(f32 *)0x20E4C4 - arg4;
        temp_fs1 = (temp_fs3 + arg3 + arg2) * *(f32 *)0x20E4D0;
        temp_fs0 = temp_fs2f * (temp_fs0f * ((func_80113BE0(temp_fs1f) * temp_fs5f * temp_fs2) + *(f32 *)0x20E4C8) * *(f32 *)0x20E4CC);
        temp_fs0_2 = temp_fs0 + (func_80113BE0(temp_fs1) * temp_fs5f);
        temp_fs0f_2 = temp_fs3f * (temp_fs0f * ((-func_801132A0(temp_fs1f) * temp_fs5f) + *(f32 *)0x20E4D4) * *(f32 *)0x20E4D8);
        temp_fv0f = *(f32 *)0x20E4DC;
        temp_fs0f_3 = (temp_fs0f_2 + (func_80113BE0(temp_fs1) * temp_fs5f * temp_fs2)) * temp_fv0f;
        temp_v1 = (temp_s5 * 4) + sp14;
        M2C_FIELD(temp_v1, s16 *, 0) = (s16) (s32) (temp_fs0_2 * temp_fv0f);
        M2C_FIELD(temp_v1, s16 *, 2) = (s16) (s32) temp_fs0f_3;
        if ((*(f32 *)0x20E4E0 < temp_fs3) && (temp_fs3 < *(f32 *)0x20E4E4)) {
            temp_v1_2 = (temp_s0 * 8) + temp_s1;
            M2C_FIELD(temp_v1_2, s8 *, 7) = arg1;
            M2C_FIELD(temp_v1_2, s8 *, 4) = 0xFF;
            M2C_FIELD(temp_v1_2, s8 *, 5) = 0xFF;
            func_8026CEF8();
            return;
        }
        temp_fv0f_2 = (f32) (arg1 & 0xFF);
        temp_fv0_3 = temp_fv0f_2 - (-temp_fs3 * temp_fv0f_2 * *(f32 *)0x20E4E8);
        if (!(temp_fs4 <= temp_fv0_3)) {
            func_8026CEF8();
            return;
        }
        M2C_FIELD(((temp_s0 * 8) + temp_s1), s8 *, 7) = (s8) ((s32) (temp_fv0_3 - temp_fs4) | 0x80000000);
        var_s2 += 6;
        var_s4 += 1;
        var_s3 += 6;
        if (var_s4 >= temp_fp) {

        } else {
            goto loop_2;
        }
    }
}
