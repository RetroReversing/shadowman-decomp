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

s8 func_8023646C(s32);                              /* extern */
extern void *D_8005E9F0;
extern s32 D_8005E9FC;

s32 func_802D166C(s32 arg0) {
    s16 temp_v1;
    s32 temp_s1;
s32 __repair_phase_temp_s1;
    s32 var_v0;
    s8 *temp_v1_2;
    u32 var_s0;

    temp_s1 = (s16)(M2C_FIELD(D_8005E9F0, s16 *, 0x20));
    M2C_FIELD(D_8005E9F0, s32 *, 0x18) = arg0;
    var_v0 = temp_s1 + 7;
    if (var_v0 < 0) {
        var_v0 = temp_s1 + 0xE;
    }
    __repair_phase_temp_s1 = var_v0 >> 3;
    var_s0 = 0;
    if (__repair_phase_temp_s1 != 0) {
        do {
            temp_v1_2 = M2C_FIELD(D_8005E9F0, s32 *, 0x18) + var_s0;
            var_s0 += 1;
            *temp_v1_2 = func_8023646C(D_8005E9FC);
        } while (var_s0 < (u32) __repair_phase_temp_s1);
    }
    return arg0 + __repair_phase_temp_s1;
}
