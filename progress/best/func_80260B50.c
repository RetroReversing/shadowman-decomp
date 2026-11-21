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

s32 *func_801043F8();
s32 func_8011BA20();
void *func_80233CD8();
extern s32 *D_80030C54;
extern s32 D_8005E9D4;
extern s32 D_8005EA14;

s32 *func_80260B50(void) {
    s16 temp_v1_2;
    char *var_s1;
    char *var_t2;
    char *var_v1;
    s32 temp_s3;
    
    s32 var_a1;
    s32 var_a3;
    s32 var_s2;
    s32 var_t0;
    s32 var_t1;
    void *temp_s0;
    union { void * pointer; s32 value; } __repair_phase_storage;
    void *temp_v1;

    if (D_80030C54 == NULL) {
        var_s2 = 0;
        temp_s3 = D_8005E9D4 + 1;
        var_s1 = func_801043F8(temp_s3 << 5, 2, 0);
        D_80030C54 = var_s1;
        if (temp_s3 > 0) {
            do {
                __repair_phase_storage.pointer = func_80233CD8(D_8005EA14, var_s2);
                if (__repair_phase_storage.pointer != NULL) {
                    temp_s0 = M2C_FIELD(__repair_phase_storage.pointer, void **, 0x6C);
                    func_8011BA20(var_s1, -1, 0x20);
                    if (temp_s0 != NULL) {
                        var_t0 = 0;
                        var_t1 = 0;
                        if (M2C_FIELD(temp_s0, s16 *, 0x22) > 0) {
                            var_a3 = 0;
                            var_t2 = var_s1;
                            do {
                                temp_v1 = var_a3 + M2C_FIELD(temp_s0, s32 *, 0xC);
                                if (M2C_FIELD(temp_v1, s16 *, 0) == 0) {
                                    __repair_phase_storage.value = 0;
                                    var_a1 = 0;
                                    if (var_t0 > 0) {
                                        var_v1 = var_s1;
                                        do {
                                            if (*(s32 *)var_v1 == M2C_FIELD(temp_v1, s16 *, 2)) {
                                                var_a1 = 1;
                                            }
                                            __repair_phase_storage.value += 1;
                                            var_v1 += 4;
                                        } while (__repair_phase_storage.value < var_t0);
                                    }
                                    if (var_a1 == 0) {
                                        temp_v1_2 = M2C_FIELD((var_a3 + M2C_FIELD(temp_s0, s32 *, 0xC)), s16 *, 2);
                                        if (temp_v1_2 < temp_s3) {
                                            *(s32 *)var_t2 = (s32) temp_v1_2;
                                            var_t2 += 4;
                                            var_t0 += 1;
                                        }
                                    }
                                }
                                var_t1 += 1;
                                var_a3 += 0x1C;
                            } while (var_t1 < M2C_FIELD(temp_s0, s16 *, 0x22));
                        }
                    }
                }
                var_s2 += 1;
                var_s1 += 0x20;
            } while (var_s2 < temp_s3);
        }
    }
    return D_80030C54;
}
