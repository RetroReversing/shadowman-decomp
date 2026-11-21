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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8023646C();
s16 func_8023648C();
f32 func_80236544();
extern s32 D_8005E9FC;

void func_802336A4(s16 *arg0, s32 arg1) {
    s32 *__base_D_8005E9FC;
    char *var_s2;
    s32 var_s3;
    void *var_s0;

    var_s2 = arg0;
    var_s3 = arg1;
    var_s0 = var_s2 + 0x18;
    __repair_rows: {
        var_s3 -= 1;
        __base_D_8005E9FC = &D_8005E9FC;
        *(s16 *)var_s2 = func_8023646C((*__base_D_8005E9FC)) & 0xFF;
        M2C_FIELD(var_s0, s16 *, -0x16) = func_8023648C((*__base_D_8005E9FC));
        M2C_FIELD(var_s0, f32 *, -0x14) = func_80236544((*__base_D_8005E9FC));
        M2C_FIELD(var_s0, f32 *, -0x10) = func_80236544((*__base_D_8005E9FC));
        M2C_FIELD(var_s0, f32 *, -0xC) = func_80236544((*__base_D_8005E9FC));
        M2C_FIELD(var_s0, f32 *, -8) = func_80236544((*__base_D_8005E9FC));
        M2C_FIELD(var_s0, f32 *, -4) = func_80236544((*__base_D_8005E9FC));
        M2C_FIELD(var_s0, f32 *, 0) = func_80236544((*__base_D_8005E9FC));
        var_s0 += 0x1C;
        var_s2 += 0x1C;
    }
if (var_s3 != 0) goto __repair_rows;
}
