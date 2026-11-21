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

s32 func_80109C88();
s32 func_80236594();
extern char D_2462B0[];
extern s32 D_8002D480;
extern char D_800707A8[];

s32 func_80242B40(s32 arg0, s16 arg1) {
    s32 *__base_D_8002D480;
    char *__base_D_800707A8;
    s32 temp_s0;
    s32 var_s1;
    void *var_s0;

    __base_D_8002D480 = &D_8002D480;
    temp_s0 = (*(&D_8002D480));
    func_80236594(arg0, arg1, D_2462B0);
    temp_s0 = temp_s0;
    if (temp_s0 < (*__base_D_8002D480)) {
        __base_D_800707A8 = D_800707A8;
        var_s0 = (temp_s0 * 0x5C) + __base_D_800707A8;
        do {
            func_80109C88(var_s0);
            M2C_FIELD(var_s0, s32 *, 8) = 0;
            temp_s0 += 1;
            var_s0 += 0x5C;
        } while (temp_s0 < (*__base_D_8002D480));
    }
    return 1;
}
