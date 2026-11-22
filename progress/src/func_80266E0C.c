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

s32 func_80266BA4();
extern s32 *D_8002E0A0;
extern s32 D_80030C58;
extern s32 D_80030C5C;
extern s32 D_8005E9D4;

void func_80266E0C(s32 arg0, s32 arg1) {
    s32 var_s0;
    s32 var_s1;

    var_s1 = 0;
    if ((D_8005E9D4 + 1) > 0) {
        do {
            if (arg0 & 1) {
                func_80266BA4(*(s32 *)*(s32 *)((var_s1 * 4) + D_80030C5C), arg0, arg1);
            }
            if (arg0 & ~1) {
                func_80266BA4(*(s32 *)*(s32 *)((var_s1 * 4) + D_80030C58), arg0, arg1);
            }
            var_s1 += 1;
        } while (var_s1 < (D_8005E9D4 + 1));
    }
    if (arg0 & 2) {
        func_80266BA4(*D_8002E0A0, arg0, arg1);
    }
}
