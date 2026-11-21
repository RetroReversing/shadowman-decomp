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

void *func_802A5EC4();
extern char D_21786C[];

void func_802A7E94(s32 arg0, s32 arg1, f32 arg2, s32 arg3, s16 arg4, s32 arg5) {
    f32 temp_fv0;
    void *temp_v0;

    temp_v0 = func_802A5EC4(arg0, arg1, D_21786C, 0, 3, 0);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, f32 *, 0x24) = arg2;
        M2C_FIELD(temp_v0, s32 *, 0x3C) = arg3;
        M2C_FIELD(temp_v0, s8 *, 0x50) = (s8) arg5;
        temp_fv0 = (f32) (arg4 & 0xFFFF);
        M2C_FIELD(temp_v0, f32 *, 0x2C) = temp_fv0;
        M2C_FIELD(temp_v0, f32 *, 0x30) = temp_fv0;
    }
}
