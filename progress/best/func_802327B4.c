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

extern f32 D_8005E6D0;
extern f32 D_8005E6D4;
extern f32 D_8005E6D8;
extern f32 D_8005E6DC;
extern f32 D_8005E6E0;
extern f32 D_8005E6E4;
extern M2C_UNK D_8005E910;

typedef struct { short field_0; short field_2; short field_4; short field_6; short field_8; short field_A; } __repair_record_arg0;
s32 func_802327B4(void *arg0, s32 arg1) {
    M2C_UNK *var_a2;
    f32 temp_ft0;
    f32 temp_ft0f;
    f32 temp_ft1;
    f32 temp_fv1f;
    s32 var_a3;
    s32 var_t0;

    var_t0 = 0;
    var_a2 = &D_8005E910;
    var_a3 = 0;
    D_8005E6D0 = (f32) ((__repair_record_arg0*)arg0)->field_0;
    D_8005E6DC = (f32) ((__repair_record_arg0*)arg0)->field_2;
    D_8005E6D4 = (f32) ((__repair_record_arg0*)arg0)->field_4;
    D_8005E6E0 = (f32) ((__repair_record_arg0*)arg0)->field_6;
    D_8005E6D8 = (f32) ((__repair_record_arg0*)arg0)->field_8;
    D_8005E6E4 = (f32) ((__repair_record_arg0*)arg0)->field_A;
    for (;;) {
        if ((arg1 >> var_a3) & 1) {
            temp_ft1 = M2C_FIELD(var_a2, f32 *, 0);
            temp_ft0f = M2C_FIELD(var_a2, f32 *, 4);
            temp_ft0 = M2C_FIELD(var_a2, f32 *, 8);
            temp_fv1f = M2C_FIELD(var_a2, f32 *, 0xC);
            if (!((((*M2C_FIELD(var_a2, f32 **, 0x10) * temp_ft1) + (*M2C_FIELD(var_a2, f32 **, 0x14) * temp_ft0f) + (*M2C_FIELD(var_a2, f32 **, 0x18) * temp_ft0)) - temp_fv1f) > 0.0f)) {
                if ((((*M2C_FIELD(var_a2, f32 **, 0x1C) * temp_ft1) + (*M2C_FIELD(var_a2, f32 **, 0x20) * temp_ft0f) + (*M2C_FIELD(var_a2, f32 **, 0x24) * temp_ft0)) - temp_fv1f) > 0.0f) {
                    var_t0 |= 1 << var_a3;
                }
                goto block_5;
            }
            return -1;
        }
block_5:
        var_a3 += 1;
        var_a2 += 10;
        if (var_a3 >= 4) {
            return var_t0;
        }
        continue;
        break;
    }
}
