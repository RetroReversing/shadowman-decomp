/* machine draft (m2c) for sn-n64-272-0004 -G0 -mips3 -O1 -mgas -meb -mhard-float, tried by autopilot */
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

extern char D_8002D270[];
extern char D_8005E6C0[];

void func_80230DC0(void) {
    s32 *var_a0;
    s32 var_v1;

    var_v1 = 0;
    var_a0 = D_8002D270;
    do {
        *(var_v1 + D_8005E6C0) = 0;
        M2C_FIELD(var_a0, s16 *, 0xA) = 0;
        var_v1 += 1;
        var_a0 += 0xC;
    } while (var_v1 < 2);
}
