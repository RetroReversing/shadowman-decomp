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

s16 func_8023648C(s32);                             /* extern */
extern s32 D_8005E9FC;

void func_8023317C(f32 *arg0, s32 arg1) {
    s32 *__base_D_8005E9FC;
    f32 *var_s1;
    f32 temp_fs0;
    s32 var_s2;
    void *var_s0;

    temp_fs0 = *(f32 *)0x2022E0;
    var_s1 = arg0;
    var_s0 = var_s1 + 0xC;
    var_s2 = arg1;
    do {
        var_s2 -= 1;
        __base_D_8005E9FC = &D_8005E9FC;
        *var_s1 = (f32) func_8023648C((*__base_D_8005E9FC)) * temp_fs0;
        M2C_FIELD(var_s0, f32 *, -8) = (f32) ((f32) func_8023648C((*__base_D_8005E9FC)) * temp_fs0);
        M2C_FIELD(var_s0, f32 *, -4) = (f32) ((f32) func_8023648C((*__base_D_8005E9FC)) * temp_fs0);
        M2C_FIELD(var_s0, f32 *, 0) = (f32) func_8023648C((*__base_D_8005E9FC));
        var_s0 += 0x10;
        var_s1 += 0x10;
    } while (var_s2 != 0);
}
