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

u16 func_8023648C();
extern s32 D_8005E9FC;

typedef struct { short field_0; unsigned short field_2; unsigned short field_4; unsigned short field_6; unsigned short field_8; } __repair_record_var_s3;
void func_80233578(u16 *arg0, s32 arg1) {
    s32 var_s6;
    char *var_s5;
    u16 temp_s0;
    u16 temp_s1;
    u16 temp_s2;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v0_3;
    void *var_s3;
    s32 *__base_D_8005E9FC;

    __base_D_8005E9FC = &D_8005E9FC;

    var_s5 = arg0;
    var_s6 = arg1;
    var_s3 = var_s5 + 0x18;
    __repair_rows: {
        var_s6 -= 1;
        M2C_FIELD(var_s3, u16 *, -0x16) = func_8023648C((*__base_D_8005E9FC));
        M2C_FIELD(var_s3, u16 *, -0x14) = func_8023648C((*__base_D_8005E9FC));
        ((__repair_record_var_s3*)var_s3)->field_2 = func_8023648C((*__base_D_8005E9FC));
        ((__repair_record_var_s3*)var_s3)->field_4 = func_8023648C((*__base_D_8005E9FC));
        ((__repair_record_var_s3*)var_s3)->field_6 = func_8023648C((*__base_D_8005E9FC));
        ((__repair_record_var_s3*)var_s3)->field_8 = func_8023648C((*__base_D_8005E9FC));
        temp_s0 = func_8023648C((*__base_D_8005E9FC));
        temp_s1 = func_8023648C((*__base_D_8005E9FC));
        temp_s2 = func_8023648C((*__base_D_8005E9FC));
        *(u16 *)var_s5 = func_8023648C((*__base_D_8005E9FC));
        var_s5 += 0x22;
        temp_v0 = ((__repair_record_var_s3*)var_s3)->field_2;
        M2C_FIELD(var_s3, s16 *, -0xA) = (s16) (temp_v0 - temp_s0);
        temp_v0_2 = ((__repair_record_var_s3*)var_s3)->field_4;
        M2C_FIELD(var_s3, s16 *, -8) = (s16) (temp_v0 + temp_s0);
        M2C_FIELD(var_s3, s16 *, -6) = (s16) (temp_v0_2 - temp_s1);
        temp_v0 = ((__repair_record_var_s3*)var_s3)->field_6;
        M2C_FIELD(var_s3, s16 *, -4) = (s16) (temp_v0_2 + temp_s1);
        M2C_FIELD(var_s3, s16 *, -2) = (s16) (temp_v0 - temp_s2);
        ((__repair_record_var_s3*)var_s3)->field_0 = (s16) (temp_v0 + temp_s2);
        var_s3 += 0x22;
    }
if (var_s6 != 0) goto __repair_rows;
}
