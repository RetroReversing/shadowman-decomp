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

s32 func_80113AD0();                                /* extern */
f32 func_8022EC3C(f32);                             /* extern */
M2C_UNK func_8023E724(M2C_UNK *, s32, s32, void *); /* extern */
M2C_UNK func_802A1140(void *, f32 *, M2C_UNK, M2C_UNK, f32, s32, f32, s32, s32, s32, s32); /* extern */
extern M2C_UNK D_80075518;
extern M2C_UNK D_8007DB88;

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x40, 0x44, 0x50, 0x54], gap at: 0x48. */
void func_802A364C(void *arg0) {
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 temp_fs0;
    f32 temp_fv0;

    func_8023E724(&D_80075518, M2C_FIELD(arg0, s32 *, 0x6C), arg0 + 0xC, arg0);
    sp38 = 0.0f;
    sp30 = 0.0f;
    sp34 = func_8022EC3C(*(f32 *)0x2160D0) + *(f32 *)0x2160D4;
    temp_fs0 = func_8022EC3C(*(f32 *)0x2160D8) + *(f32 *)0x2160DC;
    func_802A1140(arg0, &sp30, 0x3F7FBE77, 0x3F4CCCCD, temp_fs0, 0x1C, (f32) (func_80113AD0() % 3), 0x80, 0x80, 0x80, 3);
    temp_fv0 = M2C_FIELD(arg0, f32 *, 0x54) - M2C_FIELD(&D_8007DB88, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0x54) = temp_fv0;
    if (temp_fv0 <= 0.0f) {
        M2C_FIELD(arg0, f32 *, 0x54) = 0.0f;
    }
}
