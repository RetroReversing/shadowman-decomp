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

s32 func_80224E88(s16, u16, void *, void *);        /* extern */
s32 func_80224FBC(s16, u16, void *, void *);        /* extern */
s32 func_80225074(s32, s32, u8, void *);            /* extern */
extern s32 D_800619D4;
extern s32 D_800619D8;

s32 func_80224CFC(void *arg0, u16 *arg1, s32 arg2, s32 arg3, u8 arg4) {
    f32 temp_ft0;
    f32 temp_ft0_2;
    f32 temp_fv1;
    f32 temp_fv1_2;
    s16 temp_a0;
    s16 temp_a0_2;
    s16 var_a0_2;
    s32 temp_t3;
    s32 temp_t4;
    s32 var_a0;
    s32 var_a1;
    s32 var_t1;
    s32 var_t2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    u16 *var_t0;
    u16 *var_v1;
    u16 *var_v1_2;
    u16 temp_a1;
    u16 temp_a1_2;
    u16 var_a1_2;
    u8 temp_a2;
    u8 temp_a2_3;
    void *temp_a2_2;
    void *temp_a2_4;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *var_a3;
    void *var_a3_2;
    void *var_a3_3;

    var_t0 = arg1;
    var_t1 = arg2;
    var_t2 = 0;
    if (arg3 & 1) {
        if (arg4 != 0) {
            var_a3_3 = arg1 + 6;
            if (var_t1 != 0) {
loop_4:
                if (!(M2C_FIELD(var_a3_3, u8 *, -5) & 4)) {
                    temp_t4 = M2C_FIELD(arg0, s32 *, 0x20);
                    temp_t3 = M2C_FIELD(var_a3_3, u16 *, 0) * 6;
                    temp_v1 = temp_t4 + temp_t3;
                    temp_a1_2 = M2C_FIELD((temp_v1 + 6), u16 *, 6);
                    temp_a2_4 = (M2C_FIELD(temp_v1, u16 *, 0) * 6) + D_800619D4;
                    temp_v1_2 = (temp_a1_2 * 6) + D_800619D4;
                    temp_v0 = (M2C_FIELD(temp_v1, u16 *, 6) * 6) + D_800619D4;
                    temp_ft0 = (f32) M2C_FIELD(temp_v0, s16 *, 0);
                    temp_a0_2 = M2C_FIELD(temp_v1_2, s16 *, 2);
                    temp_fv1 = (f32) M2C_FIELD(temp_v0, s16 *, 2);
                    var_v0_2 = 1;
                    if (!((((temp_ft0 - (f32) M2C_FIELD(temp_a2_4, s16 *, 0)) * ((f32) temp_a0_2 - temp_fv1)) - (((f32) M2C_FIELD(temp_v1_2, s16 *, 0) - temp_ft0) * (temp_fv1 - (f32) M2C_FIELD(temp_a2_4, s16 *, 2)))) >= 0.0f)) {
                        var_v0_2 = 0;
                    }
                    var_v1 = temp_t4 + temp_t3;
                    if (var_v0_2 != 0) {
                        return func_80224E88(temp_a0_2, temp_a1_2, temp_a2_4, var_a3_3);
                    }
                    var_a1_2 = 0xFF;
                    temp_a2_3 = (u8) *var_t0;
                    var_a0_2 = 0;
                    if (temp_a2_3 != 0) {
                        do {
                            var_a0_2 += 1;
                            var_a1_2 &= M2C_FIELD(((*var_v1 * 0x10) + D_800619D8), s32 *, 0xC);
                            var_v1 += 6;
                        } while (var_a0_2 < (s32) temp_a2_3);
                    }
                    if (var_a1_2 != 0) {
                        return func_80224E88(var_a0_2, var_a1_2, (void *) temp_a2_3, var_a3_3);
                    }
                    var_t2 += (u8) *var_t0;
                    *var_t0 |= 0x80;
                    goto block_16;
                }
block_16:
                var_t1 -= 1;
                var_a3_3 += 0x12;
                var_t0 += 0x12;
                if (var_t1 == 0) {
                    return var_t2;
                }
                goto loop_4;
            }
            goto block_43;
        }
        var_a3_2 = var_t0 + 6;
        if (var_t1 != 0) {
loop_20:
            if (!(M2C_FIELD(var_a3_2, u8 *, -5) & 4)) {
                temp_v1_3 = M2C_FIELD(arg0, s32 *, 0x20) + (M2C_FIELD(var_a3_2, u16 *, 0) * 6);
                temp_a1 = M2C_FIELD((temp_v1_3 + 6), u16 *, 6);
                temp_a2_2 = (M2C_FIELD(temp_v1_3, u16 *, 0) * 6) + D_800619D4;
                temp_v1_4 = (temp_a1 * 6) + D_800619D4;
                temp_v0_2 = (M2C_FIELD(temp_v1_3, u16 *, 6) * 6) + D_800619D4;
                temp_ft0_2 = (f32) M2C_FIELD(temp_v0_2, s16 *, 0);
                temp_a0 = M2C_FIELD(temp_v1_4, s16 *, 2);
                temp_fv1_2 = (f32) M2C_FIELD(temp_v0_2, s16 *, 2);
                var_v0_3 = 1;
                if (!((((temp_ft0_2 - (f32) M2C_FIELD(temp_a2_2, s16 *, 0)) * ((f32) temp_a0 - temp_fv1_2)) - (((f32) M2C_FIELD(temp_v1_4, s16 *, 0) - temp_ft0_2) * (temp_fv1_2 - (f32) M2C_FIELD(temp_a2_2, s16 *, 2)))) >= 0.0f)) {
                    var_v0_3 = 0;
                }
                if (var_v0_3 != 0) {
                    return func_80224FBC(temp_a0, temp_a1, temp_a2_2, var_a3_2);
                }
                var_t2 += (u8) *var_t0;
                *var_t0 |= 0x80;
                goto block_27;
            }
block_27:
            var_t1 -= 1;
            var_a3_2 += 0x12;
            var_t0 += 0x12;
            if (var_t1 == 0) {
                return var_t2;
            }
            goto loop_20;
        }
        goto block_43;
    }
    if (arg4 & 0xFF) {
        if (var_t1 != 0) {
            var_a3 = var_t0 + 6;
loop_32:
            if (!(M2C_FIELD(var_a3, u8 *, -5) & 4)) {
                var_a1 = 0xFF;
                var_a0 = 0;
                temp_a2 = *var_t0;
                var_v1_2 = M2C_FIELD(arg0, s32 *, 0x20) + (M2C_FIELD(var_a3, u16 *, 0) * 6);
                if (temp_a2 != 0) {
                    __repair_rows: {
                        var_a0 += 1;
                        var_a1 &= M2C_FIELD(((*var_v1_2 * 0x10) + D_800619D8), s32 *, 0xC);
                        var_v1_2 += 6;
                    }
if (var_a0 < (s32) temp_a2) goto __repair_rows;
                }
                if (var_a1 != 0) {
                    return func_80225074(var_a0, var_a1, temp_a2, var_a3);
                }
                var_t2 += *var_t0;
                *var_t0 = (u16) *var_t0 | 0x80;
                goto block_39;
            }
block_39:
            var_t1 -= 1;
            var_a3 += 0x12;
            var_t0 += 0x12;
            if (var_t1 == 0) {
                return var_t2;
            }
            goto loop_32;
        }
        goto block_43;
    }
    var_v0 = 0;
    if (var_t1 != 0) {
        do {
            var_t1 -= 1;
            var_t2 += *var_t0;
            *var_t0 = (u16) *var_t0 | 0x80;
            var_t0 += 0x12;
        } while (var_t1 != 0);
block_43:
        var_v0 = var_t2;
    }
    return var_v0;
}
