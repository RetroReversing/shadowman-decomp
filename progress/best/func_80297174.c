static __inline__ int __repair_inline(s32 a, s32 b) { return a > b; }
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

extern M2C_UNK D_8007DB88;

void func_80297174(void *arg0, f32 arg1) {
    f32 temp_ft0;
    f32 temp_fv0;
    f32 temp_fv0f;
    f32 temp_fv1;
    f32 var_fv1f;
    s32 temp_a0;
    s32 var_a1;

    temp_fv0f = M2C_FIELD(&D_8007DB88, f32 *, 4) * *(f32 *)0x2158F8;
    temp_a0 = (s32) temp_fv0f / 10;
    var_fv1f = arg1;
    if (__repair_inline(temp_a0, 1)) {
        var_a1 = 2;
        do {
            var_fv1f *= arg1;
            var_a1 += 1;
        } while (var_a1 < temp_a0);
    }
    temp_fv1 = M2C_FIELD(arg0, f32 *, 0x1C) * var_fv1f;
    temp_ft0 = M2C_FIELD(arg0, f32 *, 0x20) * var_fv1f;
    temp_fv0 = (*(f32 *)0x215900 - arg1) * ((f32) (s32) temp_fv0f * *(f32 *)0x2158FC);
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) (M2C_FIELD(arg0, f32 *, 0x18) * var_fv1f);
    M2C_FIELD(arg0, f32 *, 0x20) = temp_ft0;
    M2C_FIELD(arg0, f32 *, 0x1C) = temp_fv1;
    M2C_FIELD(arg0, f32 *, 0x18) = M2C_BITWISE(f64, (temp_fv1 - (temp_fv1 * temp_fv0)));
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) (temp_ft0 - (temp_ft0 * temp_fv0));
}
