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

f32 func_8023F2B0(f32, f32);                        /* extern */
M2C_UNK func_8023F7BC();                            /* extern */
M2C_UNK func_8023F7E8();                            /* extern */
M2C_UNK func_8023F7EC();                            /* extern */

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x14, 0x18, 0x1c, 0x30, 0x34, 0x40, 0x44, 0x48, 0x4c], gap at: 0x20. */
void func_8023F678(void *arg0, void *arg1, f32 arg2) {
    f32 temp_fs0;
    f32 temp_fs0f;
    f32 temp_fs3;
    f32 var_fs1;
    f32 var_fs1f;
    f32 var_fs2;
    f32 var_fs2f;

    if (arg2 <= 0.0f) {
        M2C_FIELD(arg1, f32 *, 4) = 0.0f;
        M2C_FIELD(arg1, f32 *, 8) = 0.0f;
        func_8023F7E8();
        return;
    }
    temp_fs3 = *(f32 *)0x2026AC;
    if (temp_fs3 <= arg2) {
        M2C_FIELD(arg1, f32 *, 0) = (f32) M2C_FIELD(arg0, f32 *, 0);
        M2C_FIELD(arg1, f32 *, 4) = (f32) M2C_FIELD(arg0, f32 *, 4);
        M2C_FIELD(arg1, f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 8);
        func_8023F7EC();
        return;
    }
    var_fs1 = M2C_FIELD(arg0, f32 *, 0);
    var_fs1f = M2C_FIELD(arg0, f32 *, 4);
    var_fs2 = M2C_FIELD(arg0, f32 *, 8);
    var_fs2f = M2C_FIELD(arg0, f32 *, 0xC);
    if (var_fs1 < 0.0f) {
        var_fs1 = -var_fs1;
        var_fs1f = -var_fs1f;
        var_fs2 = -var_fs2;
        var_fs2f = -var_fs2f;
    }
    temp_fs0f = temp_fs3 - (var_fs1 * var_fs1);
    if (*(f32 *)0x2026B0 < temp_fs0f) {
        temp_fs0 = func_8023F2B0(temp_fs0f, arg2);
        func_8023F2B0(temp_fs0f, temp_fs3 - arg2);
        func_8023F7BC();
        return;
    }
    M2C_FIELD(arg1, f32 *, 4) = (f32) (var_fs1f * arg2);
    M2C_FIELD(arg1, f32 *, 8) = (f32) (var_fs2 * arg2);
    M2C_FIELD(arg1, f32 *, 0xC) = (f32) (var_fs2f * arg2);
    M2C_FIELD(arg1, f32 *, 0) = (f32) ((var_fs1 * arg2) + (temp_fs3 - arg2));
}
