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

void func_8026DFDC(void **arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 temp_t3;
    s32 temp_t4;
    s32 temp_t5;
    s32 var_a2;
    s32 var_t0;
    void *temp_a0;
    void *temp_t2;
    void *var_a1;
    void *var_t1;

    temp_a0 = *arg0;
    temp_t2 = M2C_FIELD(temp_a0, void **, 4);
    var_t0 = 0;
    if ((M2C_FIELD(temp_a0, s16 *, 0) - 1) > 0) {
        var_t1 = temp_t2;
        do {
            var_a2 = var_t0 + 1;
            if (var_a2 < (s16) (u16) M2C_FIELD(temp_a0, s16 *, 0)) {
                var_a1 = (var_a2 * 0xC) + temp_t2;
                do {
                    if (M2C_FIELD(var_a1, s16 *, 0) < M2C_FIELD(var_t1, s16 *, 0)) {
                        temp_t3 = (s32) M2C_FIELD(var_t1, s16 *, 0);
                        temp_t4 = M2C_FIELD(var_t1, s32 *, 4);
                        temp_t5 = M2C_FIELD(var_t1, s32 *, 8);
                        sp0 = temp_t3;
                        sp4 = temp_t4;
                        sp8 = temp_t5;
                        M2C_FIELD(var_t1, s16 *, 0) = (s32) M2C_FIELD(var_a1, s16 *, 0);
                        M2C_FIELD(var_t1, s32 *, 4) = (s32) M2C_FIELD(var_a1, s32 *, 4);
                        M2C_FIELD(var_t1, s32 *, 8) = (s32) M2C_FIELD(var_a1, s32 *, 8);
                        M2C_FIELD(var_a1, s16 *, 0) = temp_t3;
                        M2C_FIELD(var_a1, s32 *, 4) = temp_t4;
                        M2C_FIELD(var_a1, s32 *, 8) = temp_t5;
                    }
                    var_a2 += 1;
                    var_a1 += 0xC;
                } while (var_a2 < M2C_FIELD(temp_a0, s16 *, 0));
            }
            var_t0 += 1;
            var_t1 += 0xC;
        } while (var_t0 < (M2C_FIELD(temp_a0, s16 *, 0) - 1));
    }
}
