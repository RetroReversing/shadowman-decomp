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

s32 func_80105A68(u32, s32, s32);                        /* extern */

void func_80105730(s32 arg0, u8 arg1) {
int *__repair_home0 = &arg0;

    s32 var_s1;
    s32 var_s4;
    u32 temp_a0;
    u32 var_s2;
    u32 var_s3;
    void *var_s0;

    var_s4 = 1;
    var_s3 = 0;
    var_s2 = 0x80000000;
    do {
        var_s1 = 0;
        if ((u32) (arg1 & 0xFF) > 0U) {
            var_s0 = (*__repair_home0) + 8;
            do {
                if (M2C_FIELD(var_s0, u16 *, 4) == (var_s4 & 0xFFFF)) {
                    temp_a0 = var_s3 / var_s2;
                    var_s3 += var_s2;
                    M2C_FIELD(var_s0, s32 *, 0) = func_80105A68(temp_a0, arg1, var_s4 & 0xFF);
                }
                var_s1 += 1;
                var_s0 += 0x10;
            } while ((u32) (var_s1 & 0xFFFF) < (u32) (arg1 & 0xFF));
        }
        var_s4 += 1;
        var_s2 = var_s2 >> 1;
    } while ((u32) (var_s4 & 0xFFFF) < 0x11U);
}
