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

s32 func_80103A48();
s32 func_80103BD8();
void *func_80103E10();
s32 func_8010400C();
extern char D_8004AD78[];
extern s32 D_8004AD84;
extern s32 D_8004AD88;

typedef struct { unsigned char pad[4]; void * value; } __repair_field_4;
s32 func_801038FC(u32 arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_s1;
    u32 temp_a3;
    u32 temp_v1;
    void *temp_s2;
    void *temp_s3;
    void *var_s0;

    temp_a1 = arg1 + 3;
    temp_s1 = temp_a1 & ~3;
    if (temp_s1 != 0) {
        var_s0 = M2C_FIELD(D_8004AD78, void **, 0);
        temp_s2 = func_80103E10(arg0, temp_a1);
        temp_s3 = func_80103E10();
        if (var_s0 != NULL) {
            temp_a3 = arg0 + temp_s1;
            for (;;) {
                temp_v1 = M2C_FIELD(var_s0, u32 *, 8);
                if ((arg0 >= temp_v1) && ((u32) (temp_v1 + (M2C_FIELD(var_s0, s32 *, 0xC) & 0xFFFFFF)) >= temp_a3)) {
                    M2C_FIELD(temp_s2, u32 *, 8) = arg0;
                    M2C_FIELD(temp_s2, s32 *, 0xC) = (s32) ((M2C_FIELD(temp_s2, s32 *, 0xC) & 0xFF000000) | (temp_s1 & 0xFFFFFF));
                    M2C_FIELD(temp_s3, u32 *, 8) = temp_a3;
                    M2C_FIELD(temp_s3, s32 *, 0xC) = (s32) ((M2C_FIELD(temp_s3, s32 *, 0xC) & 0xFF000000) | (((M2C_FIELD(var_s0, u32 *, 8) + (M2C_FIELD(var_s0, s32 *, 0xC) & 0xFFFFFF)) - temp_a3) & 0xFFFFFF));
                    M2C_FIELD(var_s0, s32 *, 0xC) = (s32) ((M2C_FIELD(var_s0, s32 *, 0xC) & 0xFF000000) | ((arg0 - M2C_FIELD(var_s0, u32 *, 8)) & 0xFFFFFF));
                    if (((__repair_field_4 *)D_8004AD78)->value == NULL) {
                        ((__repair_field_4 *)D_8004AD78)->value = temp_s2;
                    } else {
                        func_8010400C(temp_s2, ((__repair_field_4 *)D_8004AD78)->value, 0xFFFFFF, temp_a3);
                    }
                    if (((__repair_field_4 *)D_8004AD78)->value != NULL) {
                        func_8010400C(temp_s3, M2C_FIELD(D_8004AD78, void **, 0));
                    }
                    D_8004AD88 = 0;
                    D_8004AD84 = 0;
                    func_80103BD8();
                    return func_80103A48();
                }
                var_s0 = M2C_FIELD(var_s0, void **, 0);
                if (var_s0 == NULL) {
                    /* Duplicate return node #14. Try simplifying control flow for better match */
                    return 0;
                }
                continue;
                break;
            }
        }
    }
    return 0;
}
