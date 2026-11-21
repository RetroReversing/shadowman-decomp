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

void *func_80296BC0();
extern char D_80036D28[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x20, 0x24, 0x28, 0x2c], gap at: 0x14. */
void *func_8029BC3C(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg5, f32 arg6, f32 arg7, s32 arg8) {
    f32 temp_fv0f;
    void *temp_v0;

    temp_v0 = func_80296BC0(arg0, arg1, D_80036D28);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x6C) = 7;
        M2C_FIELD(temp_v0, f32 *, 0x5C) = arg2;
        M2C_FIELD(temp_v0, f32 *, 0xC) = arg4;
        temp_fv0f = *(f32 *)0x215BC0;
        M2C_FIELD(temp_v0, f32 *, 0x10) = arg7;
        M2C_FIELD(temp_v0, f32 *, 0x58) = arg6;
        M2C_FIELD(temp_v0, s8 *, 0x72) = (s8) arg8;
        M2C_FIELD(temp_v0, f32 *, 0x54) = temp_fv0f;
        M2C_FIELD(temp_v0, f32 *, 0x50) = temp_fv0f;
        M2C_FIELD(temp_v0, f32 *, 0x4C) = (f32) *(f32 *)0x215BC4;
        M2C_FIELD(temp_v0, f32 *, 0x4C) = arg4;
        M2C_FIELD(temp_v0, f32 *, 0x54) = arg3;
        M2C_FIELD(temp_v0, f32 *, 0x50) = arg3;
        M2C_FIELD(temp_v0, s32 *, 0x6C) = arg5;
    }
    return temp_v0;
}
