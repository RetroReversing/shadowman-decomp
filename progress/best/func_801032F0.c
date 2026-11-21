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

s32 func_801186D0();
s32 func_8011BF20();
extern char D_100530[];
extern char D_100534[];
extern s32 D_8001E410;
extern char D_8004A440[];

u8 *func_801032F0(f32 arg0, s16 arg1) {
    s32 *__base_D_8001E410;
    char *__base_D_8004A440;
    char sp10[0x20];
    f32 temp_fv0;
    f32 var_fv1;
    s32 temp_a0;
    s32 temp_v0;
    s32 var_v1;
    s32 var_v1_2;
    u8 *temp_s2;
    char *var_s0;

    __base_D_8004A440 = D_8004A440;
    __base_D_8001E410 = &D_8001E410;
    temp_s2 = ((*(&D_8001E410)) * 0x14) + __base_D_8004A440;
    temp_a0 = (*__base_D_8001E410) + 1;
    (*__base_D_8001E410) = temp_a0;
    if (temp_a0 >= 0xA) {
        (*__base_D_8001E410) = 0;
    }
    func_801186D0(temp_s2, D_100530, (s32) arg0);
    temp_v0 = arg1 - 1;
    if (arg1 != 0) {
        var_fv1 = *(f32 *)0x100538;
        if (temp_v0 > 0) {
            temp_fv0 = var_fv1;
            var_v1 = 1;
            do {
                var_fv1 *= temp_fv0;
                var_v1 += 1;
            } while (var_v1 < temp_v0);
        }
        func_801186D0(sp10, D_100534, (s32) ((arg0 * var_fv1) - ((f32) (s32) arg0 * var_fv1)));
        func_8011BF20(temp_s2, sp10);
        var_s0 = temp_s2 + 1;
        if (*temp_s2 != 0x2E) {
            do {
                var_s0 += 1;
            } while (*(u8 *)var_s0 != 0x2E);
        }
        var_v1_2 = 0;
        if (*(u8 *)var_s0 != 0) {
            do {
                var_s0 += 1;
                var_v1_2 += 1;
            } while (*(u8 *)var_s0 != 0);
        }
        if (var_v1_2 < arg1) {
            do {
                *(u8 *)var_s0 = 0x30;
                var_v1_2 += 1;
                var_s0 += 1;
            } while (var_v1_2 < arg1);
        }
        *(u8 *)var_s0 = 0;
    }
    return temp_s2;
}
