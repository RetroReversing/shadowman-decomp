/* Partial candidate from function #85899348231 in project #20; rechecked locally. */
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

M2C_UNK alLink(void *, M2C_UNK *, M2C_UNK *);       /* extern */
M2C_UNK alUnlink(void *);                           /* extern */
M2C_UNK func_8010FBE0(M2C_UNK, void *, M2C_UNK);    /* extern */
s32 func_80118570(s32);                             /* extern */

void func_8010F9A4(void **arg0, M2C_UNK arg1, s32 arg2) {
    M2C_UNK *temp_a2;
    M2C_UNK *var_a1;
    s32 temp_s5;
    s32 temp_v1;
    s32 var_s1;
    s32 var_s2;
    void *temp_s0;

    var_s1 = arg2;
    var_s2 = 0;
    temp_s0 = *arg0;
    temp_s5 = func_80118570(1);
    if (temp_s0 == NULL) {

    } else {
        alUnlink(temp_s0);
        func_8010FBE0(arg1, temp_s0 + 0xC, 0x10);
        if (var_s1 == 0x7FFFFFFF) {
            var_s2 = -1;
        }
        var_a1 = arg0 + 8;
        if (var_a1 != NULL) {
loop_6:
            temp_a2 = *var_a1;
            if (temp_a2 == NULL) {
                if (var_s2 == 0) {
                    M2C_FIELD(temp_s0, s32 *, 8) = var_s1;
                } else {
                    M2C_FIELD(temp_s0, s32 *, 8) = 0;
                }
                alLink(temp_s0, var_a1, temp_a2);
            } else {
                temp_v1 = M2C_FIELD(temp_a2, s32 *, 8);
                if (var_s1 >= temp_v1) {
                    var_s1 -= temp_v1;
                    var_a1 = temp_a2;
                    goto loop_6;
                }
                M2C_FIELD(temp_s0, s32 *, 8) = var_s1;
                M2C_FIELD(temp_a2, s32 *, 8) = (s32) (M2C_FIELD(temp_a2, s32 *, 8) - var_s1);
                alLink(temp_s0, var_a1, temp_a2);
            }
        }
    }
    func_80118570(temp_s5);
}
