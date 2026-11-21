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

s32 func_80113AD0();
void *func_80296BC0();
extern char D_80036C18[];

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x10, 0x14, 0x20, 0x24], gap at: 0x18. */
void *func_8029CFA0(s32 arg0, s32 arg1, f32 arg2, f32 arg3) {
    s32 temp_a0;
    s32 temp_hi;
    s32 temp_ret;
    s32 temp_v0_2;
    void *temp_v0;

    temp_v0 = func_80296BC0(arg0, arg1, D_80036C18);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s8 *, 0x73) = 0;
        M2C_FIELD(temp_v0, f32 *, 0x50) = arg3;
        M2C_FIELD(temp_v0, f32 *, 0x54) = arg3;
        M2C_FIELD(temp_v0, f32 *, 0xC) = arg2;
        M2C_FIELD(temp_v0, f32 *, 0x4C) = arg2;
        temp_ret = func_80113AD0();
        temp_v0_2 = temp_ret;
        temp_hi = temp_ret / 3;
        temp_a0 = temp_v0_2 >> 0x1F;
        M2C_FIELD(temp_v0, s32 *, 0x6C) = 0x1C;
        M2C_FIELD(temp_v0, f32 *, 0x58) = (f32) (temp_v0_2 - ((temp_hi - temp_a0) * 3));
    }
    return temp_v0;
}
