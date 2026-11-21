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

M2C_UNK func_80109C88(M2C_UNK *);                   /* extern */
s32 func_80236594(s32, s16, M2C_UNK *);             /* extern */
s32 func_80242B20();                                /* extern */
extern M2C_UNK D_245E4C;
extern M2C_UNK D_2462B0;
extern s32 D_8002D480;
extern s32 D_8002D484;
extern M2C_UNK D_8006A9D8;
extern M2C_UNK D_800707A8;

s32 func_80242A20(s32 arg0, s16 arg1, s16 arg2) {
    M2C_UNK *var_s1;
    M2C_UNK *var_v1;
    s32 var_a0;
    s32 var_s0;
    s32 var_s2;

    if ((arg1 == -1) || (arg2 == -1) || (func_80236594(arg0, arg1, &D_2462B0) == 0) || (func_80236594(arg0, arg2, &D_245E4C) == 0)) {
        return func_80242B20();
    }
    var_s2 = 0;
    if (D_8002D480 > 0) {
        var_s1 = &D_800707A8;
        do {
            var_a0 = 0;
            var_s0 = 0;
            if (D_8002D484 > 0) {
                var_v1 = &D_8006A9D8;
                do {
                    if (M2C_FIELD(var_v1, s32 *, 0x10) == var_s1) {
                        var_s0 += 1;
                    }
                    var_a0 += 1;
                    var_v1 += 0x50;
                } while (var_a0 < D_8002D484);
            }
            if (var_s0 == 0) {
                func_80109C88(var_s1);
            }
            M2C_FIELD(var_s1, s32 *, 8) = var_s0;
            var_s2 += 1;
            var_s1 += 0x5C;
        } while (var_s2 < D_8002D480);
    }
    return 1;
}
