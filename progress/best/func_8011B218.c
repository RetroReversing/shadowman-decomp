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

void func_8011B218(s32 *arg0, s32 arg1) {
    s32 *temp_a0;
    s32 *temp_v0;
    char *var_v1;
    s32 temp_a1;
    s32 temp_t0;
    s32 var_a2;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_v0;
    s32 var_v1_2;

    var_a3 = 0;do{do{do{
    temp_t0 = arg1 * 2;}while(0);}while(0);}while(0);
    if (arg1 > 0) {
        var_v1 = arg0;
        do {
            *(s32 *)var_v1 = var_a3;
            var_a3 += 1;
            var_v1 += 4;
        } while (var_a3 < arg1);
    }
    var_a2 = 1;
    var_a3_2 = 1;
    if (temp_t0 > 0) {
        do {
            if (var_a3_2 < var_a2) {
                temp_a0 = (void *) (((((s32) (var_a2 - 1) / 2) * 4)) + (s32) arg0);
                temp_v0 = (void *) (((((s32) (var_a3_2 - 1) / 2) * 4)) + (s32) arg0);
                temp_a1 = *temp_a0;
                *temp_a0 = *temp_v0;
                *temp_v0 = temp_a1;
            }
            var_v1_2 = arg1;
            if (var_v1_2 >= 2) {
                var_v0 = var_v1_2 < var_a2;
loop_8:
                if (var_v0 != 0) {
                    var_a2 -= var_v1_2;
                    var_v1_2 = var_v1_2 >> 1;
                    var_v0 = var_v1_2 < var_a2;
                    if (var_v1_2 >= 2) {
                        goto loop_8;
                    }
                }
            }
            var_a3_2 += 2;
            var_a2 += var_v1_2;
        } while (temp_t0 >= var_a3_2);
    }
}
