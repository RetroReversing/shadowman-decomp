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

s32 func_8010B530(f32, f32, f32);                   /* extern */
s32 func_8010D958();                                /* extern */
s32 func_80113AD0();                                /* extern */
extern void *D_8006A4FC;
extern void *D_8007AFF8;

s32 func_8010D6F8(void *arg0, s32 arg1, s32 arg2) {
    f32 temp_fs0;
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 temp_fv0_4;
    f32 temp_fv0f;
    f32 temp_fv0f_2;
    s32 temp_s5;
    s32 var_s1;
    void **var_s0;
    void **var_s0_2;
    void *temp_v1;
    void *temp_v1_2;

    temp_fs0 = ((f32) M2C_FIELD(D_8007AFF8, s16 *, 0x5A) * *(f32 *)0x102040) / (f32) M2C_FIELD(D_8007AFF8, s16 *, 0x9E);
    var_s1 = func_80113AD0() % arg2;
    temp_s5 = var_s1;
    if ((u32) var_s1 < (u32) arg2) {
        var_s0 = (var_s1 * 4) + arg1;
loop_2:
        if (M2C_FIELD(arg0, u8 *, 1) == 0) {
            if (M2C_FIELD(*var_s0, u8 *, 0xC) == 0) {
                var_s1 += 1;
                goto block_15;
            }
            goto block_6;
        }
block_6:
        temp_v1 = *var_s0;
        temp_fv0 = M2C_FIELD(temp_v1, f32 *, 4);
        temp_fv0f = M2C_FIELD(D_8007AFF8, f32 *, 0x80);
        if (!((temp_fv0 * temp_fv0) <= temp_fv0f)) {
            var_s1 += 1;
            goto block_15;
        }
        temp_fv0_2 = M2C_FIELD(temp_v1, f32 *, 8);
        if (!(temp_fv0f <= (temp_fv0_2 * temp_fv0_2))) {
            var_s1 += 1;
            goto block_15;
        }
        var_s1 += 1;
        if (!((f32) M2C_FIELD(temp_v1, u8 *, 0xD) <= temp_fs0) || !(temp_fs0 <= (f32) M2C_FIELD(temp_v1, u8 *, 0xE)) || !(func_8010B530(M2C_FIELD(D_8006A4FC, f32 *, 0x1C), (f32) M2C_FIELD(temp_v1, u16 *, 0x10), (f32) M2C_FIELD(temp_v1, u16 *, 0x12)) & 0xFF)) {
block_15:
            var_s0 += 4;
            if ((u32) var_s1 >= (u32) arg2) {
                goto block_16;
            }
            goto loop_2;
        }
        /* Duplicate return node #25. Try simplifying control flow for better match */
        return func_8010D958();
    }
block_16:
    if (temp_s5 != 0) {
        var_s0_2 = (temp_s5 * 4) + arg1;
loop_18:
        var_s0_2 -= 4;
        if ((M2C_FIELD(arg0, u8 *, 1) != 0) || (M2C_FIELD(*var_s0_2, u8 *, 0xC) != 0)) {
            temp_v1_2 = *var_s0_2;
            temp_fv0_3 = M2C_FIELD(temp_v1_2, f32 *, 4);
            temp_fv0f_2 = M2C_FIELD(D_8007AFF8, f32 *, 0x80);
            if ((temp_fv0_3 * temp_fv0_3) <= temp_fv0f_2) {
                temp_fv0_4 = M2C_FIELD(temp_v1_2, f32 *, 8);
                if ((temp_fv0f_2 <= (temp_fv0_4 * temp_fv0_4)) && ((f32) M2C_FIELD(temp_v1_2, u8 *, 0xD) <= temp_fs0) && (temp_fs0 <= (f32) M2C_FIELD(temp_v1_2, u8 *, 0xE)) && (func_8010B530(M2C_FIELD(D_8006A4FC, f32 *, 0x1C), (f32) M2C_FIELD(temp_v1_2, u16 *, 0x10), (f32) M2C_FIELD(temp_v1_2, u16 *, 0x12)) & 0xFF)) {
                    return func_8010D958();
                }
            }
        }
        if (var_s0_2 == arg1) {
            /* Duplicate return node #28. Try simplifying control flow for better match */
            return 0;
        }
        goto loop_18;
    }
    return 0;
}
