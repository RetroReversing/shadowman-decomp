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

s32 func_80103B98();
s32 func_8025BF10();
extern char D_80045930[];

void *func_802D5400(void *arg0) {
    char *__base_D_80045930;
    s32 temp_v1;
    void *temp_s0;
    void *temp_s1;
    void *var_v0;

    temp_v1 = M2C_FIELD(arg0, s32 *, 4);
    if ((temp_v1 == 3) || (temp_v1 == 5) || (temp_v1 == 0xF) || (temp_v1 == 0x13) || (temp_v1 == 0x12) || (var_v0 = arg0 + 8, (temp_v1 == 0xD))) {
        __base_D_80045930 = D_80045930;
        temp_s1 = (temp_v1 * 0x14) + __base_D_80045930;
        if (M2C_FIELD(temp_s1, void **, 8) != NULL) {
            temp_s0 = __base_D_80045930 + 0x64;
            if (temp_v1 == 5) {
                func_80103B98(M2C_FIELD(M2C_FIELD(temp_s0, void **, 8), s32 *, 0x64));
                func_80103B98(M2C_FIELD(M2C_FIELD(temp_s0, void **, 8), s32 *, 0x80));
                M2C_FIELD(M2C_FIELD(temp_s0, void **, 8), s32 *, 0x64) = 0;
                M2C_FIELD(M2C_FIELD(temp_s0, void **, 8), s32 *, 0x80) = 0;
            }
            func_8025BF10(arg0, M2C_FIELD(M2C_FIELD(temp_s1, void **, 8), s32 *, 0x88));
            M2C_FIELD(temp_s1, void **, 8) = NULL;
        }
        var_v0 = arg0 + 8;
    }
    return var_v0;
}
