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

s32 _collectPVoices();
void *func_80110904();
s32 func_80110A50();
s32 func_80110AF8();
extern s32 *D_80027410;

typedef struct { unsigned char pad[28]; int value; } __repair_field_1C;
typedef struct { int value; } __repair_field_0;
void *func_80110784(void *arg0, s32 *arg1, s32 arg2, s32 arg3) {
    void *sp18;
    s16 sp1C;
    s32 *temp_s1;
    s32 temp_v0;
s32 __repair_result_temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_s2;
    s32 var_s3;
    s32 var_s5;
    void *temp_s0;
    void *var_s4;

    temp_s1 = D_80027410;
    var_s3 = arg3;
    var_s4 = arg0;
    var_s5 = arg2;
    sp1C = 0;
    if (((__repair_field_0 *)temp_s1)->value == 0) {
        return func_80110904();
    }
    __repair_result_temp_v0 = func_80110A50(temp_s1, &sp18);
    ((__repair_field_1C *)temp_s1)->value = __repair_result_temp_v0;
    if ((__repair_result_temp_v0 - M2C_FIELD(temp_s1, s32 *, 0x20)) < var_s3) {
        do {
            ((__repair_field_1C *)temp_s1)->value &= ~0xF;
            M2C_FIELD(sp18, s32 *, 0x10) += func_80110AF8(temp_s1, M2C_FIELD(sp18, s32 (**)(void *), 8)(sp18));
            temp_v0 = func_80110A50(temp_s1, &sp18, sp18);
            ((__repair_field_1C *)temp_s1)->value = temp_v0;
        } while ((temp_v0 - M2C_FIELD(temp_s1, s32 *, 0x20)) < var_s3);
    }
    ((__repair_field_1C *)temp_s1)->value &= ~0xF;
    if (var_s3 > 0) {
        do {
            temp_v1 = M2C_FIELD(temp_s1, s32 *, 0x48);
            var_s2 = var_s3;
            if (temp_v1 < var_s3) {
                var_s2 = temp_v1;
            }
            ((__repair_field_0 *)var_s4)->value = 0x07000000;
            M2C_FIELD(var_s4, s32 *, 4) = 0;
            temp_s0 = M2C_FIELD(temp_s1, void **, 0x38);
            M2C_FIELD(temp_s0, s32 (**)(void *, s32, s32), 8)(temp_s0, 6, var_s5);
            var_s4 = M2C_FIELD(temp_s0, void *(**)(void *, s16 *, s32, s32, void *), 4)(temp_s0, &sp1C, var_s2, M2C_FIELD(temp_s1, s32 *, 0x20), var_s4 + 8);
            var_s3 -= var_s2;
            var_s5 += var_s2 * 4;
            M2C_FIELD(temp_s1, s32 *, 0x20) += var_s2;
        } while (var_s3 > 0);
    }
    *arg1 = (s32) (var_s4 - arg0) >> 3;
    _collectPVoices(temp_s1);
    return var_s4;
}
