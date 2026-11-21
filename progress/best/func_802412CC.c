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
/* machine draft (m2c) for gcc-2.7.2-kmc -G0 -mips3 -mgp32 -mfp32 -O2, tried by autopilot */

s32 func_8023959C();
extern char D_24136C[];
extern char D_8006A510[];
extern char D_8006A660[];

void func_802412CC(void) {
    s32 __repair_store_0;
    s32 __repair_store_1;
    s32 __repair_store_2;
    s32 __repair_store_3;
    char *var_v0;
    char *var_v0_2;
    char *var_v1;
    char *var_v1_2;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;

    var_v1 = D_8006A660;
    var_v0 = D_8006A510;
    do {
        temp_a1 = M2C_FIELD(var_v0, s32 *, 0);
        temp_a2 = M2C_FIELD(var_v0, s32 *, 4);
        temp_a3 = M2C_FIELD(var_v0, s32 *, 8);
        M2C_FIELD(var_v1, s32 *, 0) = temp_a1;
        M2C_FIELD(var_v1, s32 *, 4) = temp_a2;
        M2C_FIELD(var_v1, s32 *, 8) = temp_a3;
        M2C_FIELD(var_v1, s32 *, 0xC) = (s32) M2C_FIELD(var_v0, s32 *, 0xC);
        var_v0 += 0x10;
        var_v1 += 0x10;
    } while (var_v0 != (D_8006A510 + 0xA0));
    func_8023959C(D_24136C, temp_a1, temp_a2, temp_a3);
    var_v1_2 = D_8006A510;
    var_v0_2 = D_8006A660;
    do {
        __repair_store_0 = (s32) M2C_FIELD(var_v0_2, s32 *, 0);
        __repair_store_1 = (s32) M2C_FIELD(var_v0_2, s32 *, 4);
        __repair_store_2 = (s32) M2C_FIELD(var_v0_2, s32 *, 8);
        __repair_store_3 = (s32) M2C_FIELD(var_v0_2, s32 *, 0xC);
        M2C_FIELD(var_v1_2, s32 *, 0) = __repair_store_0;
        M2C_FIELD(var_v1_2, s32 *, 4) = __repair_store_1;
        M2C_FIELD(var_v1_2, s32 *, 8) = __repair_store_2;
        M2C_FIELD(var_v1_2, s32 *, 0xC) = __repair_store_3;
        var_v0_2 += 0x10;
        var_v1_2 += 0x10;
    } while (var_v0_2 != (D_8006A660 + 0xA0));
}
