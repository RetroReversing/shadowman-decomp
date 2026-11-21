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

extern M2C_UNK D_8007C8B0;
extern s32 D_8007C8F0;
extern s32 D_8007C8F8;

void func_802D5B40(void) {
    M2C_UNK *var_v1;
    s32 var_a0;

    var_a0 = 0;
    var_v1 = &D_8007C8B0;
    do {
        M2C_FIELD(var_v1, s32 *, 0) = 0;
        M2C_FIELD(var_v1, s32 *, 8) = 0;/*__repair_loop_weight*/do {
        var_a0 += 1;} while (0);
        var_v1 += 4;
    } while (var_a0 < 4);
    D_8007C8F0 = 0;
    D_8007C8F8 = 3;
}
