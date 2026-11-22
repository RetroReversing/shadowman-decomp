/* Partial candidate from function #85899348492 in project #20; rechecked locally. */
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

extern char D_800B9FE0[];
extern char D_800BA004[];
extern u16 D_800BA148;
extern u16 D_8011EC60;

s32 func_8011A160(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4) {
    s16 *temp_a3_2;
    s16 temp_a0_3;
    s16 temp_v0_2;
    s16 var_t1;
    s32 temp_a0;
    s32 temp_t0;
    s32 temp_t7;
    s32 temp_v1;
    s32 var_v0;
    u16 *temp_a3;
    u16 *temp_t4;
    u16 *temp_t6;
    u16 *temp_v0;
    u16 *temp_v0_3;
    u16 temp_a0_2;
    u16 temp_v1_2;
    u16 var_v0_2;
    u32 temp_t5;

    var_v0 = arg2 & 0xFFFF;
    if (D_800BA148 == 0) {
        temp_v0 = M2C_FIELD(arg4, u16 **, 0x14);
        M2C_FIELD(arg4, u16 **, 0x14) = (u16 *) (temp_v0 + 2);
        D_800BA148 = 0x10;
        D_8011EC60 = *temp_v0;
        var_v0 = arg2 & 0xFFFF;
    }
    var_t1 = 0;
    if (var_v0 != 0) {
        temp_t7 = (s32) (arg3 << 0x10) >> 0x10;
        temp_t5 = arg1 & 0xFFFF;
        temp_v1 = temp_t5 * 2;
        temp_t6 = temp_v1 + D_800BA004;
        temp_t4 = temp_v1 + D_800B9FE0;
        do {
            if ((u16) D_800BA148 < temp_t5) {
                temp_t0 = arg1 - D_800BA148;
                temp_a3 = ((s32) (var_t1 << 0x10) >> 0xF) + arg0;
                temp_a0 = temp_t0 & 0xFFFF;
                *temp_a3 = (D_8011EC60 & *(((D_800BA148 & 0xFFFF) * 2) + D_800B9FE0)) << temp_a0;
                temp_v0_3 = M2C_FIELD(arg4, u16 **, 0x14);
                temp_v1_2 = *temp_v0_3;
                M2C_FIELD(arg4, u16 **, 0x14) = (u16 *) (temp_v0_3 + 2);
                D_8011EC60 = temp_v1_2;
                temp_a0_2 = *temp_a3 | (((s32) (temp_v1_2 & 0xFFFF) >> (0x10 - temp_a0)) & *((temp_a0 * 2) + D_800B9FE0));
                *temp_a3 = temp_a0_2;
                if (temp_t7 != 0) {
                    if (!((s16) temp_a0_2 & *temp_t6)) {
                        var_v0_2 = 0x10 - temp_t0;
                    } else {
                        *temp_a3 = temp_a0_2 | ~*temp_t4;
                        goto block_10;
                    }
                } else {
block_10:
                    var_v0_2 = 0x10 - temp_t0;
                }
            } else {
                temp_a0_3 = ((s32) D_8011EC60 >> (D_800BA148 - temp_t5)) & *temp_t4;
                temp_a3_2 = ((s32) (var_t1 << 0x10) >> 0xF) + arg0;
                *temp_a3_2 = temp_a0_3;
                if ((temp_t7 != 0) && (temp_a0_3 & *temp_t6)) {
                    *temp_a3_2 = temp_a0_3 | ~*temp_t4;
                }
                var_v0_2 = D_800BA148 - arg1;
            }
            D_800BA148 = var_v0_2;
            temp_v0_2 = var_t1 + 1;
            var_t1 = temp_v0_2;
        } while (temp_v0_2 < (arg2 & 0xFFFF));
    }
    return 1;
}
