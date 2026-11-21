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

s32 func_801066F0();

void func_801066B8(s32 *arg0, s32 arg1, u16 *arg2, s32 arg3) {
    char *var_a0;
    s32 var_a1;
    s32 var_t0;
    char *var_a2;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a2 = arg2;
    var_t0 = 0;
    if (arg3 >= 0) {
loop_1:
        if (*(u16 *)var_a2 & 1) {
            *(s32 *)var_a0 = var_a1 | 1;
            func_801066F0(var_a0, var_a1, var_a2);
            return;
        }
        *(s32 *)var_a0 = var_a1;
        var_a1 += *(u16 *)var_a2;
        var_a2 += 2;/*__repair_loop_weight*/__repair_rows: {do {do {
        var_t0 += 1;} while (0);} while (0);}
if (0) goto __repair_rows;
        var_a0 += 4;
        if (arg3 < var_t0) {

        } else {
            goto loop_1;
        }
    }
}
