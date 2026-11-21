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

f32 func_8023F2B0(f32, f32);                        /* extern */
M2C_UNK func_8023F4F4();                            /* extern */
M2C_UNK func_8023F550();                            /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x14, 0x20, 0x24, 0x38, 0x3c, 0x48, 0x4c, 0x58, 0x5c, 0x68, 0x6c, 0x70, 0x74], gap at: 0x18. */
void func_8023F364(void *arg0, void *arg1, void *arg2, f32 arg3) {
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_fs3f;
    f32 temp_fs4;
    f32 temp_fs5;
    f32 temp_fs5f;
    f32 temp_ft0f;
    f32 var_fs1;
    f32 var_fs1f;
    f32 var_fs2f;
    f32 var_fs3;

    if (arg3 <= 0.0f) {
        M2C_FIELD(arg2, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0);
        M2C_FIELD(arg2, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 4);
        M2C_FIELD(arg2, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 8);
        func_8023F550();
        return;
    }
    temp_fs3f = *(f32 *)0x2026A0;
    if (temp_fs3f <= arg3) {
        M2C_FIELD(arg2, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
        M2C_FIELD(arg2, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
        M2C_FIELD(arg2, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
        func_8023F550();
        return;
    }
    var_fs3 = M2C_FIELD(arg1, f32 *, 0);
    temp_fs5f = M2C_FIELD(arg0, f32 *, 0);
    var_fs2f = M2C_FIELD(arg1, f32 *, 4);
    temp_fs5 = M2C_FIELD(arg0, f32 *, 4);
    var_fs1f = M2C_FIELD(arg1, f32 *, 0xC);
    temp_fs4 = M2C_FIELD(arg0, f32 *, 0xC);
    var_fs1 = (temp_fs5f * var_fs3) + (temp_fs5 * var_fs2f) + (M2C_FIELD(arg0, f32 *, 8) * M2C_FIELD(arg1, f32 *, 8)) + (temp_fs4 * var_fs1f);
    if (var_fs1 < 0.0f) {
        var_fs1 = -var_fs1;
        var_fs3 = -var_fs3;
        var_fs2f = -var_fs2f;
        var_fs1f = -var_fs1f;
    }
    temp_fs0f = temp_fs3f - (var_fs1 * var_fs1);
    if (*(f32 *)0x2026A4 < temp_fs0f) {
        temp_fs0 = func_8023F2B0(temp_fs0f, arg3);
        func_8023F2B0(temp_fs0f, temp_fs3f - arg3);
        func_8023F4F4();
        return;
    }
    temp_ft0f = temp_fs3f - arg3;
    M2C_FIELD(arg2, f32 *, 0) = (f32) ((temp_fs5f * temp_ft0f) + (var_fs3 * arg3));
    M2C_FIELD(arg2, f32 *, 4) = (f32) ((temp_fs5 * temp_ft0f) + (var_fs2f * arg3));
    M2C_FIELD(arg2, f32 *, 8) = M2C_BITWISE(f64, ((temp_fs4 * temp_ft0f) + (var_fs1f * arg3)));
}
