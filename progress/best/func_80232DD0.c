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

s32 func_8023648C();
extern s32 D_8005E9FC;

typedef struct { unsigned short field_0; short field_2; } __repair_record_var_s0;
void func_80232DD0(u16 *arg0, s32 arg1) {
    s32 *__base_D_8005E9FC;
    s16 temp_v0;
    s16 var_s5;
    s32 var_s3;
    char *var_s1;
    u16 var_s2;
    u16 var_s4;
    void *var_s0;

    var_s1 = arg0;
    var_s3 = arg1;
    var_s5 = 0;
    var_s4 = 0;
    var_s2 = 0;
    var_s0 = var_s1 + 2;
    do {
        var_s3 -= 1;
        __base_D_8005E9FC = &D_8005E9FC;
        *(u16 *)var_s1 = var_s2 + func_8023648C((*__base_D_8005E9FC));
        ((__repair_record_var_s0*)var_s0)->field_0 = (u16) (var_s4 + func_8023648C((*__base_D_8005E9FC)));
        temp_v0 = var_s5 + func_8023648C((*__base_D_8005E9FC));
        var_s4 = ((__repair_record_var_s0*)var_s0)->field_0;
        var_s5 = temp_v0;
        ((__repair_record_var_s0*)var_s0)->field_2 = temp_v0;
        var_s0 += 6;
        var_s2 = *(u16 *)var_s1;
        var_s1 += 6;
    } while (var_s3 != 0);
}
