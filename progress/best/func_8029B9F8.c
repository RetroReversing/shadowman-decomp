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

void *func_80296BC0();
extern char D_80036D30[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x20, 0x24, 0x28, 0x2c], gap at: 0x14. */
void *func_8029B9F8(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, s32 arg5, f32 arg6, s32 arg7) {
    f32 temp_fv0f;
    void *temp_v0;

    temp_v0 = func_80296BC0(arg0, arg1, D_80036D30);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x6C) = 7;
        M2C_FIELD(temp_v0, f32 *, 0x5C) = arg2;
        M2C_FIELD(temp_v0, f32 *, 0xC) = arg4;
        temp_fv0f = *(f32 *)0x215BB0;
        M2C_FIELD(temp_v0, f32 *, 0x58) = arg6;
        M2C_FIELD(temp_v0, s8 *, 0x72) = (s8) arg7;
        M2C_FIELD(temp_v0, f32 *, 0x54) = temp_fv0f;
        M2C_FIELD(temp_v0, f32 *, 0x50) = temp_fv0f;
        M2C_FIELD(temp_v0, f32 *, 0x4C) = (f32) *(f32 *)0x215BB4;
        M2C_FIELD(temp_v0, f32 *, 0x4C) = arg4;
        M2C_FIELD(temp_v0, f32 *, 0x54) = arg3;
        M2C_FIELD(temp_v0, f32 *, 0x50) = arg3;
        M2C_FIELD(temp_v0, s32 *, 0x6C) = arg5;
    }
    return temp_v0;
}
