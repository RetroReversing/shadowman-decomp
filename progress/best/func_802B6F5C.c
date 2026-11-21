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

M2C_UNK func_802B6F94();                            /* extern */

void func_802B6F5C(void *arg0, f32 arg1, s8 arg2, s8 arg3, u8 arg4) {
    M2C_FIELD(arg0, u8 *, 0x50) = (u8) (M2C_FIELD(arg0, const u8 *, 0x50) | 1);
    if (arg1 != 0.0f) {
        func_802B6F94();
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) *(f32 *)0x217C8C;
    M2C_FIELD(arg0, s8 *, 0x48) = arg2;
    M2C_FIELD(arg0, s8 *, 0x49) = arg3;
    M2C_FIELD(arg0, u8 *, 0x4A) = arg4;
}
