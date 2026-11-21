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

extern short D_800597BA;
extern short D_800597BC;
extern short D_800597BE;
extern short D_800597C0;
extern short D_800597C2;
extern short D_800597C4;
s32 func_8022D7CC();
extern char D_800597B0[];

void func_8022D6A8(s16 *arg0, s32 arg1) {
    f32 temp_fv1;
    s16 *temp_t1;
    s16 *var_a0;
    char *var_v1;
    char *var_v1_2;
    s16 temp_v1;
    s32 temp_v0;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_t0;
    s8 temp_v1_2;
    s8 temp_v1_3;
    s8 temp_v1_4;
    s8 temp_v1_5;
    s8 temp_v1_6;
    s8 temp_v1_7;
    void *temp_a0;
    void *temp_a1;

    var_a0 = arg0;
    temp_t1 = var_a0;
    var_a3 = 0;
    var_t0 = 0;
    D_800597BA = 0;
    D_800597BC = 0;
    D_800597BE = 0;
    D_800597C0 = 0;
    var_a2 = 0;
    if (*temp_t1 != 0) {
        var_v1 = temp_t1;
        do {
            var_v1 += 0xA;
            var_a2 += 1;
        } while (*(s16 *)var_v1 != 0);
    }
    if (arg1 < *temp_t1) {
        var_t0 = 0;
        var_a3 = 0;
    }
    temp_v0 = var_a2 - 1;
    if (arg1 >= M2C_FIELD(((var_a2 * 0xA) + temp_t1), s16 *, -0xA)) {
        var_t0 = var_a2 - 1;
        var_a3 = var_t0;
    }
    var_a2_2 = 0;
    if (temp_v0 > 0) {
        var_a0 = (s16 *) temp_v0;
        var_v1_2 = temp_t1;
        do {
            if ((arg1 >= M2C_FIELD(var_v1_2, s16 *, 0)) && (arg1 < M2C_FIELD(var_v1_2, s16 *, 0xA))) {
                var_a3 = var_a2_2;
                var_t0 = var_a2_2 + 1;
            }
            var_a2_2 += 1;
            var_v1_2 += 0xA;
        } while (var_a2_2 < (s32) var_a0);
    }
    if (var_t0 == var_a3) {
        func_8022D7CC((s32) var_a0, var_a2_2, var_a3);
        return;
    }
    temp_v1 = *((var_a3 * 0xA) + temp_t1);
    temp_fv1 = (f32) (arg1 - temp_v1) / (f32) (*((var_t0 * 0xA) + temp_t1) - temp_v1);
    temp_a1 = (var_a3 * 0xA) + temp_t1;
    temp_a0 = (var_t0 * 0xA) + temp_t1;
    temp_v1_2 = M2C_FIELD(temp_a1, s8 *, 4);
    D_800597BA = (s16) (s32) ((f32) temp_v1_2 + (temp_fv1 * (f32) (M2C_FIELD(temp_a0, s8 *, 4) - temp_v1_2)));
    temp_v1_3 = M2C_FIELD(temp_a1, s8 *, 5);
    D_800597BC = (s16) (s32) ((f32) temp_v1_3 + (temp_fv1 * (f32) (M2C_FIELD(temp_a0, s8 *, 5) - temp_v1_3)));
    temp_v1_4 = M2C_FIELD(temp_a1, s8 *, 6);
    D_800597BE = (s16) (s32) ((f32) temp_v1_4 + (temp_fv1 * (f32) (M2C_FIELD(temp_a0, s8 *, 6) - temp_v1_4)));
    temp_v1_5 = M2C_FIELD(temp_a1, s8 *, 7);
    D_800597C0 = (s16) (s32) ((f32) temp_v1_5 + (temp_fv1 * (f32) (M2C_FIELD(temp_a0, s8 *, 7) - temp_v1_5)));
    temp_v1_6 = M2C_FIELD(temp_a1, s8 *, 8);
    D_800597C2 = (s16) (s32) ((f32) (temp_v1_6 + 8) + (temp_fv1 * (f32) (M2C_FIELD(temp_a0, s8 *, 8) - temp_v1_6)));
    temp_v1_7 = M2C_FIELD(temp_a1, s8 *, 9);
    D_800597C4 = (s16) (s32) ((f32) (temp_v1_7 + 8) + (temp_fv1 * (f32) (M2C_FIELD(temp_a0, s8 *, 9) - temp_v1_7)));
}
