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

s32 func_8021ECEC(void *, s32, f32, f32);           /* extern */
extern u8 D_80056A00[];

s32 func_8021F43C(s32 arg0, void *arg1) {
    s32 var_a2;
s32 __repair_result_var_a2;
    void *var_s0;

    var_s0 = (M2C_FIELD(arg1, u16 *, 2) * 0x18) + D_80056A00;
    var_a2 = arg0;
    if (var_s0 != NULL) {
        do {
            if (M2C_FIELD(var_s0, u8 *, 0) == 0) {
                __repair_result_var_a2 = func_8021ECEC(var_s0, __repair_result_var_a2, (f32) M2C_FIELD(arg1, u8 *, 4), (f32) M2C_FIELD(arg1, u8 *, 5));
            }
            var_s0 = M2C_FIELD(var_s0, void **, 0x14);
        } while (var_s0 != NULL);
    }
    return __repair_result_var_a2;
}
