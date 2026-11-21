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

extern char D_8004B420[];

void func_8010798C(s32 *arg0) {
    char *__base_D_8004B420;
    s32 __repair_store_0;
    s32 __repair_store_1;
    s32 __repair_store_2;
    s32 __repair_store_3;
    char *var_a0;
    char *var_v1;

    var_a0 = arg0;
    __base_D_8004B420 = D_8004B420;
    var_v1 = __base_D_8004B420 + 4;
    __repair_rows: {
        __repair_store_0 = M2C_FIELD(var_v1, s32 *, 0);
        __repair_store_1 = (s32) M2C_FIELD(var_v1, s32 *, 4);
        __repair_store_2 = (s32) M2C_FIELD(var_v1, s32 *, 8);
        __repair_store_3 = (s32) M2C_FIELD(var_v1, s32 *, 0xC);
        M2C_FIELD(var_a0, s32 *, 0) = __repair_store_0;
        M2C_FIELD(var_a0, s32 *, 4) = __repair_store_1;
        M2C_FIELD(var_a0, s32 *, 8) = __repair_store_2;
        M2C_FIELD(var_a0, s32 *, 0xC) = __repair_store_3;
        var_v1 += 0x10;
        var_a0 += 0x10;
    }
if (var_v1 != (__base_D_8004B420 + 0x24)) goto __repair_rows;
    *(s32 *)var_a0 = *(s32 *)var_v1;
}
