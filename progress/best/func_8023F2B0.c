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

f32 func_8023F2B0(f32 arg0, f32 arg1) {
    f32 temp_ft0;
    f32 temp_fv1f;

    temp_fv1f = arg1 * arg1;
    temp_ft0 = arg0 * arg0;
    return arg1 + (arg0 * ((arg1 - (arg1 * temp_fv1f)) * *(f32 *)0x202680)) + (temp_ft0 * (arg1 * (*(f32 *)0x202688 - (temp_fv1f * (temp_fv1f + *(f32 *)0x202684))) * *(f32 *)0x20268C)) + (temp_ft0 * arg0 * (arg1 * (*(f32 *)0x202698 - (temp_fv1f * ((temp_fv1f * (*(f32 *)0x202690 - temp_fv1f)) + *(f32 *)0x202694))) * *(f32 *)0x20269C));
}
