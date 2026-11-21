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

extern s32 D_8007C8F4;
extern M2C_UNK D_8007C900;
extern s32 D_8007DA60;

s32 func_802D5E30(void) {
    s32 temp_v1;
    s32 var_a1;

    temp_v1 = (&D_8007C900)[D_8007DA60];
    var_a1 = 0;
    if ((temp_v1 == -1) || (D_8007C8F4 < 0)) {
        return 1;
    }
    if (temp_v1 < D_8007C8F4) {
        D_8007DA60 += 1;
        var_a1 = 1;
    }
    return var_a1;
}
