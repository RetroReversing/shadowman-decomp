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

f32 func_801132A0();
f32 func_80113BE0();
s32 func_8026D0F4();
s32 func_8026D154();

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x48, 0x4c, 0x58, 0x5c, 0x68, 0x6c, 0x78, 0x7c, 0x88, 0x8c, 0x90, 0x94], gap at: 0x40. */
void func_8026CF68(void *arg0, f32 arg1, s32 arg2) {
    s32 sp10;
    s32 sp14;
    f32 temp_fa0;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
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
    f32 temp_fs5;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0f;
    s16 temp_a0_2;
    s32 temp_s6;
    char *var_s3;
    u16 temp_fp;
    u16 temp_s1;
    u16 temp_s5;
    u32 var_s4;
    void *temp_a0;
    void *temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *var_s2;

    temp_v0 = M2C_FIELD(arg0, void **, 0x64);
    temp_fv0 = *(f32 *)0x20E4EC;
    var_s3 = M2C_FIELD(temp_v0, u16 **, 0x20);
    temp_fp = M2C_FIELD(temp_v0, u16 *, 0x36);
    temp_s6 = M2C_FIELD(temp_v0, s32 *, 0x28);
    var_s4 = 0;
    sp14 = M2C_FIELD(temp_v0, s32 *, 0x24);
    temp_fs2 = arg1 * temp_fv0;
    sp10 = M2C_FIELD(temp_v0, s32 *, 0x18);
    if (temp_fp != 0) {
        temp_fs3f = temp_fv0;
        var_s2 = var_s3 + 2;
        temp_fs3 = *(f32 *)0x20E4F0;
        temp_fs2f = *(f32 *)0x20E4F4;
        temp_fs4f = *(f32 *)0x20E4F8;
        temp_fs4 = *(f32 *)0x20E500;
        temp_fs5 = temp_fs2 * *(f32 *)0x20E4FC;
loop_2:
        temp_a0 = (*(u16 *)var_s3 * 6) + sp10;
        temp_fs0 = (f32) M2C_FIELD(temp_a0, s16 *, 0);
        temp_fs1 = (f32) M2C_FIELD(temp_a0, s16 *, 4);
        temp_s1 = M2C_FIELD(var_s2, u16 *, 2);
        temp_s5 = M2C_FIELD(var_s2, u16 *, 0);
        temp_fs0f = -sqrtf((temp_fs0 * temp_fs0) + (temp_fs1 * temp_fs1));
        temp_v1 = (temp_s1 * 8) + temp_s6;
        temp_fa0 = (temp_fs5 + temp_fs0f) * temp_fs3;
        temp_a0_2 = M2C_FIELD(temp_a0, s16 *, 2);
        temp_fs1f = (f32) temp_a0_2;
        M2C_FIELD(temp_v1, s8 *, 4) = 0x14;
        temp_fv0f = *(f32 *)0x20E504;
        temp_fv0_2 = (((func_80113BE0(temp_fa0, temp_a0_2) * temp_fs3f) + temp_fs3f) * temp_fv0f) + temp_fv0f;
        if (temp_fs2f <= temp_fv0_2) {
            M2C_FIELD(temp_v1, s8 *, 5) = (s8) ((s32) (temp_fv0_2 - temp_fs2f) | 0x80000000);
            temp_fv0_3 = temp_fs1f * (f32) (arg2 & 0xFF) * *(f32 *)0x20E508;
            temp_v1_2 = (temp_s1 * 8) + temp_s6;
            M2C_FIELD(temp_v1_2, u8 *, 6) = 0xFF;
            if (!(temp_fs2f <= temp_fv0_3)) {
                func_8026D154();
                return;
            }
            temp_fs0f_2 = temp_fs0 * *(f32 *)0x20E50C;
            M2C_FIELD(temp_v1_2, s8 *, 7) = (s8) (arg2 - ((s32) (temp_fv0_3 - temp_fs2f) | 0x80000000));
            temp_fs0_2 = temp_fs1f * *(f32 *)0x20E510;
            temp_fs0f_3 = temp_fs0f_2 + (func_80113BE0((temp_fs0f + temp_fs2) * temp_fs3) * temp_fs4f);
            var_s2 += 6;
            var_s4 += 1;
            temp_fs0_3 = (temp_fs0_2 + (-func_801132A0(((temp_fs1 * temp_fs3f) + temp_fs2) * temp_fs3) * temp_fs4f)) * temp_fs4;
            temp_v1_3 = (temp_s5 * 4) + sp14;
            M2C_FIELD(temp_v1_3, s16 *, 0) = (s16) (s32) (temp_fs0f_3 * temp_fs4);
            M2C_FIELD(temp_v1_3, s16 *, 2) = (s16) (s32) temp_fs0_3;
            var_s3 += 6;
            if (var_s4 >= temp_fp) {

            } else {
                goto loop_2;
            }
        } else {
            func_8026D0F4();
        }
    }
}
