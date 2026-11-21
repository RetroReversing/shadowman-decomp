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

s32 func_8011BA20();
s32 func_80230BE0();
extern s32 D_80059890;
extern s32 D_80059898;
extern u32 D_8005989C;

s32 func_80230AA8(s32 arg0, s16 arg1) {
    s32 *__base_D_80059890;
    s32 var_s0;
    s32 var_t0;
    u32 temp_t2;
    u32 temp_t3;
    u32 var_a0;
    u32 var_a0_2;
    u32 var_v0;
    u32 var_v0_2;
    u32 var_v1;
    u32 var_v1_2;
    void *temp_v0;

    temp_t3 = (u32) (arg0 + 0xFF) >> 8;
    D_80059898 = 0;
    if (D_8005989C != 0) {
        var_a0 = 1;
        do {
            var_a0 += 1;
        } while (var_a0 < (u32) D_8005989C);
    }
    var_a0_2 = 0;
    if (D_8005989C != 0) {
        temp_t2 = temp_t3 & 0xFFFF;
        var_s0 = 0;
__base_D_80059890 = &D_80059890;
    for (;;) {
        if (*(s32 *)(var_s0 + (*__base_D_80059890)) == 0xFFFF) {
            var_t0 = 1;
            var_v1 = 0;
            if (temp_t2 != 0) {
                var_v0 = var_a0_2;
                do {
                    if (*(s32 *)((var_v0 * 8) + (*__base_D_80059890)) != 0xFFFF) {
                        var_t0 = 0;
                    }
                    var_v1 += 1;
                    var_v0 = var_a0_2 + var_v1;
                } while (var_v1 < (u32) (temp_t3 & 0xFFFF));
            }
            if (var_t0 & 0xFF) {
                var_v1_2 = 0;
                if (temp_t2 != 0) {
                    var_v0_2 = var_a0_2;
                    do {
                        var_v1_2 += 1;
                        temp_v0 = (var_v0_2 * 8) + (*__base_D_80059890);
                        M2C_FIELD(temp_v0, s16 *, 0) = arg1;
                        M2C_FIELD(temp_v0, s16 *, 2) = (s16) temp_t3;
                        var_v0_2 = var_a0_2 + var_v1_2;
                    } while (var_v1_2 < temp_t2);
                }
                func_8011BA20(M2C_FIELD((var_s0 + (*__base_D_80059890)), s32 *, 4), 0, arg0, temp_t2);
                return func_80230BE0();
            }
            goto block_17;
        }
block_17:
        var_a0_2 += 1;
        var_s0 += 8;
        if (var_a0_2 >= (u32) D_8005989C) {
            /* Duplicate return node #18. Try simplifying control flow for better match */
            return 0;
        }
        continue;
        break;
    }
    }
    return 0;
}
