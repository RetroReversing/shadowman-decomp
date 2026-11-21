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

extern u32 D_8002D170;
extern s32 D_800458F0;
extern M2C_UNK D_8004DA90;
extern u32 D_80052768;

s32 func_80108B30(void) {
    s32 ret;
    s32 var_v0;

    if (D_800458F0 != 0) {
        ret = (u32) D_8002D170 >= (u32) D_80052768;
    } else {
        if ((M2C_FIELD(&D_8004DA90, s32 *, 0) == 0) || (var_v0 = 1, (M2C_FIELD(&D_8004DA90, s16 *, 0x14) != 0))) {
            var_v0 = 0;
        }
        ret = var_v0;
    }
    return ret;
}
