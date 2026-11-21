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
s32 func_8023904C();
extern s32 D_8002D490;
extern s32 D_8002D494;
extern s32 D_8002D498;
extern s32 D_8002E0A0;
extern s32 D_80030C58;
extern s32 D_80030C5C;
extern s32 D_8005E9D4;

void func_802612A8(void) {
    s32 *__base_D_8002D490;
    s32 *__base_D_8002D494;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 *__base_D_8002D498;

    __base_D_8002D498 = &D_8002D498;

    if (D_80030C58 == 0) {
        temp_s1 = D_8005E9D4 + 1;
        temp_v0 = func_801043F8(temp_s1 * 4, 2, 0);
        D_80030C58 = temp_v0;
        if (temp_v0 != 0) {
            var_s0 = 0;
            if (temp_s1 > 0) {
                do {
                    temp_v1 = var_s0 * 4;
                    var_s0 += 1;
                    *(s32 *)(temp_v1 + D_80030C58) = func_8023904C();
                } while (var_s0 < temp_s1);
            }
        }
    }
    if (D_80030C5C == 0) {
        temp_s1_2 = D_8005E9D4 + 1;
        temp_v0_2 = func_801043F8(temp_s1_2 * 4, 2, 0);
        D_80030C5C = temp_v0_2;
        if (temp_v0_2 != 0) {
            var_s0_2 = 0;
            if (temp_s1_2 > 0) {
                do {
                    temp_v1_2 = var_s0_2 * 4;
                    var_s0_2 += 1;
                    *(s32 *)(temp_v1_2 + D_80030C5C) = func_8023904C();
                } while (var_s0_2 < temp_s1_2);
            }
        }
    }
    __base_D_8002D490 = &D_8002D490;
    if ((*__base_D_8002D490) == 0) {
        (*__base_D_8002D490) = func_8023904C();
    }
    __base_D_8002D494 = &D_8002D494;
    if ((*__base_D_8002D494) == 0) {
        (*__base_D_8002D494) = func_8023904C();
    }
    if ((*__base_D_8002D498) == 0) {
        (*__base_D_8002D498) = func_8023904C();
    }
    if (D_8002E0A0 == 0) {
        D_8002E0A0 = func_8023904C();
    }
}
