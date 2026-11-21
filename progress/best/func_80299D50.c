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

s32 func_80296698(s32);                             /* extern */
void *func_80296BC0(M2C_UNK, M2C_UNK, M2C_UNK *);   /* extern */
extern M2C_UNK D_80036C78;

void *func_80299D50(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, f32 arg3, f32 arg4, s32 arg5) {
    f32 temp_fv0;
    void *temp_v0;

    temp_v0 = func_80296BC0(arg1, arg2, &D_80036C78);
    if (temp_v0 != NULL) {
        M2C_FIELD(temp_v0, s32 *, 0x6C) = arg0;
        temp_fv0 = (f32) func_80296698(arg0);
        M2C_FIELD(temp_v0, f32 *, 0x50) = temp_fv0;
        M2C_FIELD(temp_v0, f32 *, 0x54) = temp_fv0;
        M2C_FIELD(temp_v0, s32 *, 0x58) = 0;
        M2C_FIELD(temp_v0, f32 *, 0x4C) = arg3;
        M2C_FIELD(temp_v0, s8 *, 0x72) = (s8) arg5;
        M2C_FIELD(temp_v0, f32 *, 0x5C) = arg4;
    }
    return temp_v0;
}
