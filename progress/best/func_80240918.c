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

extern M2C_UNK D_8006A510;

s32 func_80240918(void *arg0) {
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    f32 temp_fv0f_3;
    f32 temp_fv0f_4;
    f32 temp_fv0f_5;
    f32 temp_fv0f_6;
    s32 var_v0;

    temp_fv0f = (f32) M2C_FIELD(arg0, s16 *, 0);
    if ((!(M2C_FIELD(&D_8006A510, f32 *, 0x34) < temp_fv0f) || !(M2C_FIELD(&D_8006A510, f32 *, 0x4C) < temp_fv0f)) && ((temp_fv0f_2 = (f32) M2C_FIELD(arg0, s16 *, 2), !(temp_fv0f_2 < M2C_FIELD(&D_8006A510, f32 *, 0x28))) || !(temp_fv0f_2 < M2C_FIELD(&D_8006A510, f32 *, 0x40))) && ((temp_fv0f_3 = (f32) M2C_FIELD(arg0, s16 *, 4), !(M2C_FIELD(&D_8006A510, f32 *, 0x38) < temp_fv0f_3)) || !(M2C_FIELD(&D_8006A510, f32 *, 0x50) < temp_fv0f_3)) && ((temp_fv0f_4 = (f32) M2C_FIELD(arg0, s16 *, 6), !(temp_fv0f_4 < M2C_FIELD(&D_8006A510, f32 *, 0x2C))) || !(temp_fv0f_4 < M2C_FIELD(&D_8006A510, f32 *, 0x44)))) {
        temp_fv0f_5 = (f32) M2C_FIELD(arg0, s16 *, 8);
        if (M2C_FIELD(&D_8006A510, f32 *, 0x3C) < temp_fv0f_5) {
            if (M2C_FIELD(&D_8006A510, f32 *, 0x54) < temp_fv0f_5) {
                /* Duplicate return node #10. Try simplifying control flow for better match */
                return 0;
            }
            goto block_12;
        }
block_12:
        temp_fv0f_6 = (f32) M2C_FIELD(arg0, s16 *, 0xA);
        var_v0 = 1;
        if (temp_fv0f_6 < M2C_FIELD(&D_8006A510, f32 *, 0x30)) {
            var_v0 = 0;
            if (!(temp_fv0f_6 < M2C_FIELD(&D_8006A510, f32 *, 0x48))) {
                var_v0 = 1;
            }
        }
        return var_v0;
    }
    return 0;
}
