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

extern s32 D_8005E9EC;
extern char D_8005EA80[];
extern s32 D_8006196C;
extern void *D_80061A10;

void func_80234F44(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    f32 temp_ft0;
    f32 temp_ft0f;
    f32 temp_ft1;
    f32 temp_ft1f;
    f32 temp_ft2;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv1;
    f32 temp_fv1_2;
    f32 temp_fv1f;
    f32 temp_fv1f_2;
    s32 var_a3;
    s32 var_t0;
    s32 var_v1;
    void **var_t1;
    void *temp_v0;
    void *var_a0;
    void *var_a1;

    temp_ft0 = M2C_FIELD(arg1, f32 *, 0xC);
    temp_fv1f = (f32) M2C_FIELD(arg0, u16 *, 6);
    temp_ft2 = temp_ft0 * temp_ft0 * *(f32 *)0x2023A4;
    temp_ft1f = M2C_FIELD(arg1, f32 *, 0);
    temp_fv0f = (f32) M2C_FIELD(arg0, s16 *, 0) - temp_ft1f;
    temp_ft1 = M2C_FIELD(arg1, f32 *, 4);
    temp_fv1 = (f32) M2C_FIELD(arg0, s16 *, 2) - temp_ft1;
    temp_ft0f = M2C_FIELD(arg1, f32 *, 8);
    temp_fv0 = (f32) M2C_FIELD(arg0, s16 *, 4) - temp_ft0f;
    if (((temp_fv0f * temp_fv0f) + (temp_fv1 * temp_fv1) + (temp_fv0 * temp_fv0)) < ((temp_fv1f * temp_fv1f) + temp_ft2)) {
        var_a3 = arg3 - 1;
        var_t0 = D_8006196C;
        var_t1 = (var_t0 * 0xC) + D_8005EA80;
        var_v1 = M2C_FIELD(D_80061A10, s32 *, 0x14) + (arg2 * 0x12);
        if (var_a3 != -1) {
            var_a0 = var_v1 + 0xE;
            var_a1 = var_t1 + 4;
loop_3:
            if (!(M2C_FIELD(var_a0, u8 *, -0xD) & 1) && (temp_v0 = M2C_FIELD(D_80061A10, s32 *, 0x1C) + (M2C_FIELD(var_a0, u16 *, -6) * 0x10), (fabsf((M2C_FIELD(temp_v0, f32 *, 0) * temp_ft1f) + (M2C_FIELD(temp_v0, f32 *, 4) * temp_ft1) + (M2C_FIELD(temp_v0, f32 *, 8) * temp_ft0f) + M2C_FIELD(temp_v0, f32 *, 0xC)) < temp_ft0)) && (temp_fv1f_2 = (f32) M2C_FIELD(var_a0, u16 *, 2), temp_fv0f_2 = temp_ft1f - (f32) M2C_FIELD(var_a0, s16 *, -4), temp_fv1_2 = temp_ft1 - (f32) M2C_FIELD(var_a0, s16 *, -2), temp_fv0_2 = temp_ft0f - (f32) M2C_FIELD(var_a0, s16 *, 0), (((temp_fv0f_2 * temp_fv0f_2) + (temp_fv1_2 * temp_fv1_2) + (temp_fv0_2 * temp_fv0_2)) < ((temp_fv1f_2 * temp_fv1f_2) + temp_ft2)))) {
                if (var_t0 < 0x3E8) {
                    *var_t1 = D_80061A10;
                    M2C_FIELD(var_a1, s32 *, 4) = var_v1;
                    M2C_FIELD(var_a1, s32 *, 0) = (s32) D_8005E9EC;
                    var_a1 += 0xC;
                    var_t1 += 0xC;
                    var_t0 += 1;
                    goto block_8;
                }
            } else {
block_8:
                var_a0 += 0x12;
                var_a3 -= 1;
                var_v1 += 0x12;
                if (var_a3 == -1) {

                } else {
                    goto loop_3;
                }
            }
        }
        D_8006196C = var_t0;
    }
}
