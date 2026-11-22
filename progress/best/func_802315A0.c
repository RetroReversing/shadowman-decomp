static __inline__ int __repair_inline(s32 a, s32 b) { return a > b; }
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

void func_802315A0(void *arg0, void *arg1) {
    f32 temp_fv0;
    f32 temp_fv0_2;
    f32 temp_fv0_3;
    f32 var_ft0;
    f32 var_ft0f;
    f32 var_ft1;
    f32 var_fv0f;
    f32 var_fv1;
    f32 var_fv1f;
    char *var_a2;
    s32 var_a3;
    s32 temp_v1;
    void *temp_a2;
    void *var_v1;

    temp_a2 = M2C_FIELD(arg0, void **, 0x18);
    var_a3 = 1;
    temp_v1 = M2C_FIELD(arg0, u16 *, 0x32);
    var_ft1 = (f32) M2C_FIELD(temp_a2, s16 *, 0);
    var_ft0 = var_ft1;
    var_ft0f = (f32) M2C_FIELD(temp_a2, s16 *, 2);
    var_fv1 = var_ft0f;
    var_fv1f = (f32) M2C_FIELD(temp_a2, s16 *, 4);
    var_fv0f = var_fv1f;
    if ((s32) __repair_inline(temp_v1, 1)) {
        var_a2 = temp_a2 + 6;
        var_v1 = temp_a2 + 4;
        do { {
            temp_fv0 = (f32) *(s16 *)var_a2;
            var_v1 += 6;
            if (temp_fv0 < var_ft0) {
                var_ft0 = temp_fv0;
            }
            if (var_ft1 < temp_fv0) {
                var_ft1 = temp_fv0;
            }
            temp_fv0_2 = (f32) M2C_FIELD(var_v1, s16 *, -2);
            if (temp_fv0_2 < var_fv1) {
                var_fv1 = temp_fv0_2;
            }
            if (var_ft0f < temp_fv0_2) {
                var_ft0f = temp_fv0_2;
            }
            temp_fv0_3 = (f32) M2C_FIELD(var_v1, s16 *, 0);
            if (temp_fv0_3 < var_fv0f) {
                var_fv0f = temp_fv0_3;
            }
            if (var_fv1f < temp_fv0_3) {
                var_fv1f = temp_fv0_3;
            }/*__repair_loop_weight*/do {do {do {
            var_a3 += 1;} while (0);} while (0);} while (0);
            var_a2 += 6;
        }
} while (var_a3 < (s32) temp_v1);
    }
    M2C_FIELD(arg1, s16 *, 0) = (s16) (s32) var_ft0;
    M2C_FIELD(arg1, s16 *, 4) = (s16) (s32) var_fv1;
    M2C_FIELD(arg1, s16 *, 8) = (s16) (s32) var_fv0f;
    M2C_FIELD(arg1, s16 *, 2) = (s16) (s32) var_ft1;
    M2C_FIELD(arg1, s16 *, 6) = (s16) (s32) var_ft0f;
    M2C_FIELD(arg1, s16 *, 0xA) = (s16) (s32) var_fv1f;
}
