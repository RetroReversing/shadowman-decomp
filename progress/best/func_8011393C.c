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
M2C_UNK func_8011360C();                            /* extern */
M2C_UNK func_80113A90(s32, s32);                    /* extern */
f32 func_80113BE0(f32);                             /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x14, 0x18, 0x20, 0x24, 0x30, 0x34, 0x40, 0x44], gap at: 0x28. */
void func_8011393C(f32 *arg0, s16 *arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    f32 *var_s0;
    f32 *var_v1;
    f32 temp_fs0;
    f32 temp_fs0_2;
    f32 temp_fs0_3;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv1;
    f32 temp_fv1f;
    s16 temp_v1;
    s16 var_v0;
    s32 var_a0;
    s32 var_a1;

    var_s0 = arg0;
    func_8011360C();
    temp_fs0 = arg2 * *(f32 *)0x102488 * *(f32 *)0x10248C;
    temp_fs0_2 = func_801132A0(temp_fs0);
    var_a1 = 0;
    temp_fs0_3 = temp_fs0_2 / func_80113BE0(temp_fs0);
    temp_fv1f = arg4 - arg5;
    M2C_FIELD(var_s0, f32 *, 0) = temp_fs0_3 / arg3;
    M2C_FIELD(var_s0, f32 *, 0x14) = temp_fs0_3;
    M2C_FIELD(var_s0, s32 *, 0x3C) = 0;
    M2C_FIELD(var_s0, f32 *, 0x2C) = (f32) *(f32 *)0x102490;
    M2C_FIELD(var_s0, f32 *, 0x28) = (f32) ((arg4 + arg5) / temp_fv1f);
    M2C_FIELD(var_s0, f32 *, 0x38) = (f32) ((2.0f * arg4 * arg5) / temp_fv1f);
    do {
        var_a0 = 0;
        var_v1 = var_s0;
loop_2:
        var_a0 += 1;
        *var_v1 *= arg6;
        var_v1 += 4;
        if (var_a0 < 4) {
            goto loop_2;
        }
        var_a1 += 1;
        var_s0 += 0x10;
    } while (var_a1 < 4);
    if (arg1 != NULL) {
        temp_fv1 = arg4 + arg5;
        var_v0 = 0xFFFF;
        if (!(temp_fv1 <= *(f32 *)0x102494)) {
            temp_fv0f = *(f32 *)0x10249C;
            temp_fv0 = *(f32 *)0x102498 / temp_fv1;
            if (temp_fv0f <= temp_fv0) {
                temp_v1 = (s32) (temp_fv0 - temp_fv0f) | 0x80000000;
                *arg1 = temp_v1;
                var_v0 = 1;
                if (!(temp_v1 & 0xFFFF)) {
                    goto block_12;
                }
            } else {
                func_80113A90(var_a0, var_a1);
            }
        } else {
block_12:
            *arg1 = var_v0;
        }
    }
}
