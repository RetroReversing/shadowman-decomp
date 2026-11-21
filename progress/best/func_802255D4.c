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

extern void *D_8005387C;
extern s32 D_800591E0;

void func_802255D4(s32 arg0) {
    void **__base_D_8005387C;
    s32 var_a2;
    s32 var_v0;
    void *temp_v1;

    if (arg0 & 9) {
        var_a2 = 0;
        if (arg0 & 1) {
            var_v0 = arg0 & 8;
            if (!(D_800591E0 & 1)) {
                var_a2 = 0x400;
                D_800591E0 |= 1;
                goto block_4;
            }
        } else {
block_4:
            var_v0 = arg0 & 8;
        }
        if ((var_v0 != 0) && !(D_800591E0 & 8)) {
            var_a2 |= 0x20000;
            D_800591E0 |= 8;
        }
        if (var_a2 != 0) {
            __base_D_8005387C = &D_8005387C;
            temp_v1 = (*__base_D_8005387C);
            (*__base_D_8005387C) += 8;
            M2C_FIELD(temp_v1, s32 *, 0) = 0xD9FFFFFF;
            M2C_FIELD(temp_v1, s32 *, 4) = var_a2;
        }
    }
}
