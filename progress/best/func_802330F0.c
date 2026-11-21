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

s32 func_80233D40(s32);                             /* extern */
s8 func_8023646C(s32);                              /* extern */
extern s32 D_8005E9FC;

void func_802330F0(s8 *arg0, s32 arg1) {
    s32 var_s2;
    s8 *var_s1;
    void *var_s0;

    var_s1 = arg0;
    var_s2 = arg1;
    var_s0 = var_s1 + 4;
    __repair_rows: {
        var_s2 -= 1;
        *var_s1 = func_8023646C(D_8005E9FC);
        var_s1 += 8;
        M2C_FIELD(var_s0, s8 *, -3) = func_8023646C(D_8005E9FC);
        M2C_FIELD(var_s0, s8 *, -2) = func_8023646C(D_8005E9FC);
        M2C_FIELD(var_s0, s32 *, 0) = func_80233D40(D_8005E9FC);
        var_s0 += 8;
    }
if (var_s2 != 0) goto __repair_rows;
}
