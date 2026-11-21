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

extern float D_8006A544;
extern float D_8006A55C;
extern float D_8006A538;
extern float D_8006A550;
extern float D_8006A548;
extern float D_8006A560;
extern float D_8006A53C;
extern float D_8006A554;
extern float D_8006A54C;
extern float D_8006A564;
extern float D_8006A540;
extern float D_8006A558;
extern char D_8006A510[];

s32 func_80240918(void *arg0) {
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv0f_3;
    f32 temp_fv0f_4;
    f32 temp_fv0f_5;
    f32 temp_fv0f_6;
    s32 var_v0;

    temp_fv0f = (f32) M2C_FIELD(arg0, s16 *, 0);
    if ((!(D_8006A544 < temp_fv0f) || !(D_8006A55C < temp_fv0f)) && ((temp_fv0f_2 = (f32) M2C_FIELD(arg0, s16 *, 2), !(temp_fv0f_2 < D_8006A538)) || !(temp_fv0f_2 < D_8006A550)) && ((temp_fv0f_3 = (f32) M2C_FIELD(arg0, s16 *, 4), !(D_8006A548 < temp_fv0f_3)) || !(D_8006A560 < temp_fv0f_3)) && ((temp_fv0f_4 = (f32) M2C_FIELD(arg0, s16 *, 6), !(temp_fv0f_4 < D_8006A53C)) || !(temp_fv0f_4 < D_8006A554))) {
        temp_fv0f_5 = (f32) M2C_FIELD(arg0, s16 *, 8);
        if (D_8006A54C < temp_fv0f_5) {
            if (D_8006A564 < temp_fv0f_5) {
                /* Duplicate return node #10. Try simplifying control flow for better match */
                return 0;
            }
            goto block_12;
        }
block_12:
        temp_fv0f_6 = (f32) M2C_FIELD(arg0, s16 *, 0xA);
        var_v0 = 1;
        if (temp_fv0f_6 < D_8006A540) {
            var_v0 = 0;
            if (!(temp_fv0f_6 < D_8006A558)) {
                var_v0 = 1;
            }
        }
        return var_v0;
    }
    return 0;
}
