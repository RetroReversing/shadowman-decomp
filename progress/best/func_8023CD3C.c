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

u16 *func_80103878();
s32 func_80103B98();
s32 memcpy();

void func_8023CD3C(void *arg0, void *arg1) {
    s32 __repair_store_0;
    s32 __repair_store_1;
    s32 var_a0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_v1;
    s32 var_v1_2;
    u16 *temp_v0;
    char *var_a0_2;
    char *var_a0_3;
    char *var_t0;
    char *var_t1;
    u16 temp_a2;
    u16 temp_a2_2;
    void *temp_a0;
    void *temp_v0_2;

    if (M2C_FIELD(arg0, u16 *, 4) != 0) {
        memcpy(M2C_FIELD(arg1, u16 **, 0x18), M2C_FIELD(arg0, u16 **, 0x14), M2C_FIELD(arg1, u16 *, 0x32) * 6);
        temp_v0 = func_80103878(M2C_FIELD(arg1, u16 *, 0x32) * 8, 2, 0);
        memcpy(temp_v0, M2C_FIELD(arg1, u16 **, 0x28), M2C_FIELD(arg1, u16 *, 0x32) * 8);
        var_a1 = 0;
        if (M2C_FIELD(arg1, u16 *, 0x32) != 0) {
            var_a0 = 0 * 8;
            do {
                temp_a0 = var_a0 + M2C_FIELD(arg1, u16 **, 0x28);
                temp_v0_2 = (*((var_a1 * 2) + M2C_FIELD(arg0, u16 **, 0x10)) * 8) + temp_v0;
                var_v1 = (s32) M2C_FIELD(temp_v0_2, s32 *, 0);
                __repair_store_1 = (s32) M2C_FIELD(temp_v0_2, s32 *, 4);
                M2C_FIELD(temp_a0, s32 *, 0) = var_v1;
                M2C_FIELD(temp_a0, s32 *, 4) = __repair_store_1;
                var_a1 += 1;
                var_a0 = var_a1 * 8;
            } while (var_a1 < (s32) M2C_FIELD(arg1, u16 *, 0x32));
        }
        var_t0 = M2C_FIELD(arg1, u16 **, 0x20);
        var_a1_2 = 0;
        if (M2C_FIELD(arg1, u16 *, 0x36) != 0) {
            var_t1 = var_t0 + 4;
            do {
                temp_a2 = M2C_FIELD(arg0, u16 *, 4);
                var_v1 = 0;
                if (temp_a2 != 0) {
                    var_a0_2 = M2C_FIELD(arg0, u16 **, 0x10);
loop_8:
                    if (*(u16 *)var_a0_2 != *(u16 *)var_t0) {
                        var_v1 += 1;
                        var_a0_2 += 2;
                        if (var_v1 < (s32) temp_a2) {
                            goto loop_8;
                        }
                    }
                }
                *(u16 *)var_t0 = (u16) var_v1;
                temp_a2_2 = M2C_FIELD(arg0, u16 *, 4);
                var_v1_2 = 0;
                if (temp_a2_2 != 0) {
                    var_a0_3 = M2C_FIELD(arg0, u16 **, 0x10);
loop_12:
                    if (*(u16 *)var_a0_3 != *(u16 *)var_t1) {
                        var_v1_2 += 1;
                        var_a0_3 += 2;
                        if (var_v1_2 < (s32) temp_a2_2) {
                            goto loop_12;
                        }
                    }
                }
                var_a1_2 += 1;
                *(u16 *)var_t1 = (u16) var_v1_2;
                var_t1 += 6;
                var_t0 += 6;
            } while (var_a1_2 < (s32) M2C_FIELD(arg1, u16 *, 0x36));
        }
        func_80103B98(temp_v0, var_a1_2);
        func_80103B98(M2C_FIELD(arg0, u16 **, 0x14));
        func_80103B98(M2C_FIELD(arg0, u16 **, 0x10));
        M2C_FIELD(arg0, u16 **, 0x10) = NULL;
        M2C_FIELD(arg0, u16 *, 4) = 0U;
        M2C_FIELD(arg0, u16 **, 0x14) = (u16 *) M2C_FIELD(arg1, u16 **, 0x18);
        M2C_FIELD(arg1, s16 *, 0x3C) = 0xB;
    }
}
