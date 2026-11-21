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

s32 func_80220028(s32, u8, u8, s32, s32, s32, f32, f32, f32, f32, f32, f32); /* extern */
s32 func_8022078C(s32);                             /* extern */
extern u16 D_8002C112;
extern M2C_UNK D_800569E0;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x48, 0x4c, 0x50, 0x54, 0x60, 0x64, 0x70, 0x74], gap at: 0x58. */
s32 func_802206D4(s32 arg0, void *arg1) {
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    f32 temp_fv1;
    f32 temp_fv1f;
    f32 var_fs0;
    f32 var_fs0f;
    f32 var_fs1;
    s16 temp_a1;
    s16 temp_fp;
    s16 temp_s6;
    s16 temp_s7;
    s32 temp_ft0;
    s32 temp_ft0_2;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_t0;
    s32 var_a2;
    s32 var_s3;
    u16 var_s1;
    u16 var_s2;

    var_a2 = arg0;
    if (M2C_FIELD(arg1, s32 *, 0x10) != 0) {
        return func_8022078C(var_a2);
    }
    var_s2 = M2C_FIELD(arg1, u16 *, 2);
    var_s3 = M2C_FIELD(arg1, s32 *, 0xC);
    temp_a1 = M2C_FIELD(arg1, s16 *, 8);
    temp_fv1f = *(f32 *)0x20010C;
    temp_fv0f = (f32) M2C_FIELD(arg1, s16 *, 0xA);
    var_fs0 = temp_fv0f / (f32) (s16) (s32) (*(f32 *)0x200108 / ((f32) M2C_FIELD(arg1, s16 *, 8) * *((M2C_FIELD(arg1, u8 *, 0x15) * 4) + &D_800569E0)));
    var_fs0f = (f32) temp_a1 / (f32) M2C_FIELD(arg1, s16 *, 4);
    temp_fv1 = (f32) M2C_FIELD(arg1, s16 *, 6);
    var_fs1 = temp_fv0f / temp_fv1;
    temp_ft0 = (s32) (temp_fv0f / var_fs0);
    temp_s5 = temp_ft0;
    temp_ft0_2 = (s32) (temp_fv1 / var_fs0);
    temp_s4 = temp_ft0_2;
    if (temp_fv1f < var_fs0f) {
        var_fs0f = temp_fv1f;
    }
    if (temp_fv1f < var_fs1) {
        var_fs1 = temp_fv1f;
    }
    temp_fv0 = *(f32 *)0x200110;
    if (var_fs0f < temp_fv0) {
        var_fs0f = temp_fv0;
    }
    if (var_fs1 < temp_fv0) {
        var_fs1 = temp_fv0;
    }
    temp_fv0_2 = *(f32 *)0x200114;
    var_s1 = (u16) M2C_FIELD(arg1, s16 *, 0xA);
    if (temp_fv0_2 <= var_fs0) {
        temp_fp = (s16) temp_ft0_2;
        temp_s7 = (s16) temp_ft0;
        temp_s6 = (s16) (s32) ((f32) (temp_a1 * (s16) temp_ft0) * *((M2C_FIELD(arg1, u8 *, 0x15) * 4) + &D_800569E0));
loop_13:
        temp_t0 = (s16) var_s2 + temp_fp;
        if ((s16) var_s2 < (s32) D_8002C112) {
            if (temp_t0 > 0) {
                var_a2 = func_80220028(var_a2, M2C_FIELD(arg1, u8 *, 0x15), M2C_FIELD(arg1, u8 *, 0x14), var_s3, (s32) M2C_FIELD(arg1, s16 *, 8), (s32) temp_s7, (f32) M2C_FIELD(arg1, s16 *, 0), (f32) (s16) var_s2, (f32) (M2C_FIELD(arg1, s16 *, 0) + M2C_FIELD(arg1, s16 *, 4)), (f32) temp_t0, var_fs0f, var_fs1);
            }
            var_s1 -= temp_s5;
            var_fs0 -= temp_fv0_2;
            var_s3 += temp_s6;
            var_s2 += temp_s4;
            if (!(temp_fv0_2 <= var_fs0)) {
                goto block_17;
            }
            goto loop_13;
        }
    } else {
block_17:
        if (((s16) var_s1 > 0) && ((s16) var_s2 < (s32) D_8002C112)) {
            var_a2 = func_80220028(var_a2, M2C_FIELD(arg1, u8 *, 0x15), M2C_FIELD(arg1, u8 *, 0x14), var_s3, (s32) M2C_FIELD(arg1, s16 *, 8), (s32) (s16) var_s1, (f32) M2C_FIELD(arg1, s16 *, 0), (f32) (s16) var_s2, (f32) (M2C_FIELD(arg1, s16 *, 0) + M2C_FIELD(arg1, s16 *, 4)), (f32) ((s16) var_s2 + (s16) (s32) (((f32) (s16) temp_s4 / (f32) (s16) temp_s5) * (f32) (s16) var_s1)), var_fs0f, var_fs1);
        }
    }
    return var_a2;
}
