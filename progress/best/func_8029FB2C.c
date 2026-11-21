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
void *func_8029FBB0();
extern char D_80036CD0[];

void *func_8029FB2C(s32 arg0, f32 arg1, f32 arg2, s8 arg3, s32 arg4, u8 arg5) {
    void *temp_v0;

    temp_v0 = func_80296BC0(arg0, 0);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, f32 *, 0x50) = arg1;
        M2C_FIELD(temp_v0, f32 *, 0x54) = arg1;
        M2C_FIELD(temp_v0, u8 *, 0x72) |= 4;
        if (arg2 != 0.0f) {
            return func_8029FBB0();
        }
        M2C_FIELD(temp_v0, f32 *, 0x60) = (f32) *(f32 *)0x215E30;
        M2C_FIELD(temp_v0, s8 *, 0x68) = arg3;
        M2C_FIELD(temp_v0, u8 *, 0x69) = arg4;
        M2C_FIELD(temp_v0, u8 *, 0x6A) = arg5;
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return temp_v0;
    }
    return temp_v0;
}
