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

s32 func_801043F8();
s32 func_802333B8();
extern void *D_8005E9F0;

void func_802332F8(s32 arg0, s32 arg1, s32 arg2, void *arg3) {
    s16 temp_v1;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s32 var_a0;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a3_2;
    s32 var_t1;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    void *temp_v1_2;
    void *var_a1;
    void *var_a3;

    var_a3 = arg3;
    var_a0 = 0;
    var_a2 = 0;
    if (M2C_FIELD(D_8005E9F0, s16 *, 0x20) > 0) {
        var_a3 = D_8005E9F0;
        var_a1 = M2C_FIELD(var_a3, void **, 8);
        __repair_rows: {
            if (M2C_FIELD(var_a1, s32 *, 0x20) == 0) {
                temp_v1 = M2C_FIELD(var_a3, s16 *, 0x20);
                var_v0 = temp_v1 + 7;
                if (var_v0 < 0) {
                    var_v0 = temp_v1 + 0xE;
                }
                var_a0 += var_v0 >> 3;
            }
            var_a2 += 1;
            var_a1 += 0x28;
        }
if (var_a2 < M2C_FIELD(D_8005E9F0, s16 *, 0x20)) goto __repair_rows;
    }
    if ((var_a0 != 0) && (var_t1 = func_801043F8(var_a0, 2, 0, var_a3), var_a2_2 = 0, (M2C_FIELD(D_8005E9F0, s16 *, 0x20) > 0))) {
        var_a3_2 = 0;
loop_10:
        temp_v1_2 = var_a3_2 + M2C_FIELD(D_8005E9F0, void **, 8);
        if (M2C_FIELD(temp_v1_2, s32 *, 0x20) == 0) {
            M2C_FIELD(temp_v1_2, s32 *, 0x20) = var_t1;
            temp_v1_3 = M2C_FIELD(D_8005E9F0, s16 *, 0x20);
            var_v0_2 = temp_v1_3 + 7;
            if (var_v0_2 < 0) {
                var_v0_2 = temp_v1_3 + 0xE;
            }
            if ((var_v0_2 >> 3) > 0) {
                func_802333B8(D_8005E9F0, 1, var_a2_2, var_a3_2);
                return;
            }
            temp_v1_4 = M2C_FIELD(D_8005E9F0, s16 *, 0x20);
            var_v0_3 = temp_v1_4 + 7;
            if (var_v0_3 < 0) {
                var_v0_3 = temp_v1_4 + 0xE;
            }
            var_t1 += var_v0_3 >> 3;
            goto block_19;
        }
block_19:
        var_a2_2 += 1;
        var_a3_2 += 0x28;
        if (var_a2_2 >= M2C_FIELD(D_8005E9F0, s16 *, 0x20)) {

        } else {
            goto loop_10;
        }
    }
}
