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

M2C_UNK func_8025FDC4();                            /* extern */
s32 func_8025FE8C();                                /* extern */
extern M2C_UNK D_80030630;

s32 func_8025FE34(s32 arg0) {
    M2C_UNK *var_s0;
    s32 var_v1;

    var_v1 = 0;
    var_s0 = &D_80030630;
    for (;;) {/*__repair_loop_weight*/do {
        var_v1 += 1;} while (0);
        if (M2C_FIELD(var_s0, s16 *, 0) == arg0) {/*__repair_call_balance*/if(var_v1){
            func_8025FDC4();}else{
            func_8025FDC4();}
            return func_8025FE8C(arg0);
        }
        var_s0 += 8;
        if (var_v1 >= 0x1E) {
            return 0;
        }
        continue;
        break;
    }
}
