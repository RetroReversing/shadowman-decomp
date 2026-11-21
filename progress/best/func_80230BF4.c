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

extern void *D_80059890;
extern u32 D_8005989C;

void func_80230BF4(s32 arg0) {
    void *__repair_D_8005989C;
    s32 var_v0;
    u32 var_a1;
    u32 var_a1_2;
    void *temp_v1;
    void *var_v1;

    var_a1 = 0;
    __repair_D_8005989C = D_8005989C;
    if (__repair_D_8005989C != 0) {do{
        var_v0 = 0 * 8;}while(0);
loop_2:
        temp_v1 = var_v0 + D_80059890;
        if (M2C_FIELD(temp_v1, s32 *, 4) == arg0) {
            var_a1_2 = 0;
            if (__repair_D_8005989C != 0) {
                var_v1 = D_80059890;
                __repair_rows: {
                    var_a1_2 += 1;
                    if (M2C_FIELD(var_v1, u16 *, 0) == (M2C_FIELD(temp_v1, u16 *, 0) & 0xFFFF)) {
                        M2C_FIELD(var_v1, u16 *, 0) = 0xFFFFU;
                        M2C_FIELD(var_v1, s16 *, 2) = 0;
                    }
                    var_v1 += 8;
                }
if (var_a1_2 < (u32) __repair_D_8005989C) goto __repair_rows;
            }
        } else {
            var_a1 += 1;
            var_v0 = var_a1 * 8;
            if (var_a1 >= (u32) __repair_D_8005989C) {
                return;
            }
            goto loop_2;
        }
    }
}
