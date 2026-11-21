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

s32 alLink();
s32 alUnlink();
s32 func_80106240();
s32 func_8010B288();
s32 func_8010B28C();
s32 func_8010B300();
s32 func_801176C0();
extern s32 D_8001FE00;
extern s32 D_8001FE08;
extern s32 D_8004AEA8;
extern char D_8004E120[];
extern void *D_8004E124;
extern char D_8004E630[];
extern char D_8004E648[];

typedef struct { void * value; } __repair_field_0;
typedef struct { unsigned char pad[4]; int value; } __repair_field_4;
s32 func_8010B17C(s32 arg0, s32 arg1) {
    s32 ret;
s32 __repair_result_ret;
    s32 *temp_a0;
    s32 *temp_a1;
    s32 *temp_s0_2;
    s32 *temp_s1;
    s32 temp_s0;
    s32 temp_s3_2;
    u32 temp_s2;
    u32 temp_s3;
    u32 temp_v0;
    void *temp_a0_2;
    void *var_s0;
    void *var_s1;

    var_s0 = NULL;
    var_s1 = D_8004E124;
    temp_s3 = arg0 + D_8004AEA8;
    if ((temp_s3 & 0xF0000000) == 0x80000000) {
        func_801176C0(temp_s3);
        return func_8010B300();
    }
    if (var_s1 != NULL) {
loop_4:
        temp_v0 = M2C_FIELD(var_s1, u32 *, 8);
        if (temp_s3 >= temp_v0) {
            var_s0 = var_s1;
            if ((temp_v0 + 0x300) < (temp_s3 + arg1)) {
                var_s1 = ((__repair_field_0 *)var_s1)->value;
                if (var_s1 == NULL) {
                    goto block_7;
                }
                goto loop_4;
            }
            M2C_FIELD(var_s1, s32 *, 0xC) = (s32) D_8001FE00;
            func_801176C0((M2C_FIELD(var_s1, s32 *, 0x10) + temp_s3) - M2C_FIELD(var_s1, u32 *, 8));
            return func_8010B300();
        }
block_7:
        goto block_8;
    }
block_8:
    temp_s1 = M2C_FIELD(D_8004E120, s32 **, 8);
    temp_a0 = temp_s1;
    M2C_FIELD(D_8004E120, s32 **, 8) = (s32 *) ((__repair_field_0 *)temp_s1)->value;
    alUnlink(temp_a0);
    if (var_s0 != NULL) {
        alLink(temp_s1, var_s0);
        return func_8010B28C();
    }
    temp_a1 = ((__repair_field_4 *)D_8004E120)->value;
    temp_s0_2 = temp_a1;
    if (temp_a1 != NULL) {
        ((__repair_field_4 *)D_8004E120)->value = temp_s1;
        ((__repair_field_0 *)temp_s1)->value = temp_s0_2;
        ((__repair_field_4 *)temp_s1)->value = 0;
        __repair_result_ret = func_8010B288(temp_s1, temp_a1);
    } else {
        ((__repair_field_4 *)D_8004E120)->value = temp_s1;
        ((__repair_field_0 *)temp_s1)->value = NULL;
        ((__repair_field_4 *)temp_s1)->value = 0;
        temp_s0 = temp_s3 & 1;
        temp_s3_2 = temp_s3 - temp_s0;
        temp_s2 = M2C_FIELD(temp_s1, u32 *, 0x10);
        M2C_FIELD(temp_s1, s32 *, 8) = temp_s3_2;
        temp_a0_2 = (D_8001FE08 * 0x14) + D_8004E648;
        M2C_FIELD(temp_s1, s32 *, 0xC) = (s32) D_8001FE00;
        D_8001FE08 += 1;
        func_80106240(temp_a0_2, 1, 0, temp_s3_2, temp_s2, 0x300, D_8004E630);
        ret = func_801176C0(temp_s2) + temp_s0;
    }
    return ret;
}
