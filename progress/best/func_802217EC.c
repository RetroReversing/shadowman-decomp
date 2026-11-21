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

extern float D_8002D200;
extern float D_8002D204;
s32 func_8021FB8C();
s32 func_8022197C();
extern char D_8002C260[];

s32 func_802217EC(void *arg0, s16 arg1, s16 arg2, s32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, u8 arg8, u8 arg9, u8 arg10, u8 arg11) {
    s32 temp_s0;
    s32 temp_t0;
    u16 temp_a0;
    void *temp_a3;

    temp_s0 = arg3 & 0xFF;
    if (temp_s0 == 0) {
        return func_8022197C();
    }
    temp_a3 = arg0 + (temp_s0 * 8);
    temp_t0 = M2C_FIELD(temp_a3, s32 *, 0xE4);
    if (temp_t0 != 0) {
        temp_a0 = M2C_FIELD(temp_a3, u16 *, 0xE0);
        func_8021FB8C((s16) (s32) (((((f32) arg1 - arg6) * arg4) + arg6) * D_8002D200), (s16) (s32) ((((((f32) arg2 + (f32) M2C_FIELD(temp_a3, u8 *, 0xE2)) - arg7) * arg5) + arg7) * D_8002D204), (s16) (s32) ((f32) temp_a0 * arg4 * D_8002D200), (s16) (s32) ((f32) M2C_FIELD(temp_a3, u8 *, 0xE3) * arg5 * D_8002D204), (s32) (s16) temp_a0, (s32) M2C_FIELD(temp_a3, u8 *, 0xE3), temp_t0, 0, 3, (s32) *((M2C_FIELD(arg0, s32 *, 0) < 0) + D_8002C260), arg8 & 0xFF, arg9 & 0xFF, arg10 & 0xFF, arg11 & 0xFF);
    }
    return M2C_FIELD((arg0 + temp_s0), u8 *, 1) + 1;
}
