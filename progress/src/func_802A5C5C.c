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

extern M2C_UNK D_8007DB88;

void func_802A5C5C(void *arg0, s32 arg1) {
    f32 temp_fv0;
    f32 temp_fv0f;

    temp_fv0 = M2C_FIELD(arg0, f32 *, 0x58) + (M2C_FIELD(arg0, f32 *, 0x5C) * M2C_FIELD(&D_8007DB88, f32 *, 4));
    temp_fv0f = (f32) arg1;
    M2C_FIELD(arg0, f32 *, 0x58) = temp_fv0;
    if (temp_fv0f < temp_fv0) {
        M2C_FIELD(arg0, f32 *, 0x58) = temp_fv0f;
        M2C_FIELD(arg0, s32 *, 0x54) = 0;
    }
}
