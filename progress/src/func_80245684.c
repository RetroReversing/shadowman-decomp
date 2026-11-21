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

extern M2C_UNK D_80052770;

s32 func_80245684(void *arg0) {
    s32 temp_v1;
    s32 var_a1;

    var_a1 = 0;
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x34) - M2C_FIELD(&D_80052770, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x34) = temp_v1;
    if (temp_v1 < 0) {
        var_a1 = 1;
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x30);
    }
    return var_a1;
}
