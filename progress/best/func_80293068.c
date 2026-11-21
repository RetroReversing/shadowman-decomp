/* machine draft (m2c) for sn-n64-281 -G0 -mips3 -O2 -mgas -meb -mcpu=VR4300 -mhard-float -mfp64, tried by autopilot */
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

f32 func_80292E80(s32, s32, M2C_UNK, f32);          /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44, 0x50, 0x54], gap at: 0x48. */
void func_80293068(void *arg0, s32 arg1, M2C_UNK arg2, s32 arg3, void *arg4, s32 arg5) {
    s32 sp10;
    s32 sp14;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 var_fs0;
    s32 temp_v0;
    s32 var_s2;
    s32 var_s4;
    void *temp_v0_2;
    void *temp_v1;
    void *var_s1;
    void *var_s3;

    var_s4 = 0;
    var_fs0 = 0.0f;
    temp_v0 = arg5 - 1;
    if (temp_v0 > 0) {
        var_s3 = arg4;
        sp14 = arg1 < 0;
        sp10 = temp_v0;
        __repair_rows: {
            M2C_FIELD(var_s3, f32 *, 8) = 0.0f;
            M2C_FIELD(var_s3, f32 *, 4) = 0.0f;
            M2C_FIELD(var_s3, f32 *, 0) = 0.0f;
            var_s2 = 0;
            if (sp14 == 0) {
                var_s1 = arg0;
                do {
                    temp_fv0 = func_80292E80(var_s2, arg3, arg2, var_fs0);
                    M2C_FIELD(var_s3, f32 *, 0) = (f32) (M2C_FIELD(var_s3, f32 *, 0) + (M2C_FIELD(var_s1, f32 *, 0) * temp_fv0));
                    M2C_FIELD(var_s3, f32 *, 4) = (f32) (M2C_FIELD(var_s3, f32 *, 4) + (M2C_FIELD(var_s1, f32 *, 4) * temp_fv0));
                    var_s2 += 1;
                    temp_fv0_2 = M2C_FIELD(var_s3, f32 *, 8) + (M2C_FIELD(var_s1, f32 *, 8) * temp_fv0);
                    var_s1 += 0xC;
                    M2C_FIELD(var_s3, f32 *, 8) = temp_fv0_2;
                } while (arg1 >= var_s2);
            }
            var_s3 += 0xC;
            var_s4 += 1;
            var_fs0 += (f32) ((arg1 - arg3) + 2) / (f32) temp_v0;
        }
if (var_s4 < sp10) goto __repair_rows;
    }
    temp_v1 = (arg5 * 0xC) + arg4;
    temp_v0_2 = (arg1 * 0xC) + arg0;
    M2C_FIELD(temp_v1, s32 *, -0xC) = (s32) M2C_FIELD(temp_v0_2, s32 *, 0);
    M2C_FIELD(temp_v1, s32 *, -8) = (s32) M2C_FIELD(temp_v0_2, s32 *, 4);
    M2C_FIELD(temp_v1, s32 *, -4) = (s32) M2C_FIELD(temp_v0_2, s32 *, 8);
}
