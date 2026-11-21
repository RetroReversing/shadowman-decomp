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

extern s32 D_8002E014;

s32 func_8025A390(s32 arg0) {
    char *var_v1;
    s32 var_a1;
    s32 var_v0;

    var_a1 = 0;
    if (D_8002E014 >= 0) {
        var_v1 = &D_8002E014;
        var_v0 = D_8002E014;
loop_2:
        var_v1 += 8;
        if (arg0 != var_v0) {
            var_v0 = *(s32 *)var_v1;
            var_a1 += 1;
            if (var_v0 >= 0) {
                goto loop_2;
            }
        }
    }
    return M2C_FIELD(((var_a1 * 8) + &D_8002E014), s32 *, 4);
}
