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

s32 func_80113F30();                                /* extern */
s32 func_801176C0(s32);                             /* extern */
extern u8 D_800276E0;
extern s32 D_A4500000;

s32 func_80113EA0(s32 arg0, s32 arg1) {
    u8 *__base_D_800276E0;
    s32 var_s0;

    var_s0 = arg0;
    __base_D_800276E0 = &D_800276E0;
    if ((*__base_D_800276E0) != 0) {
        var_s0 -= 0x2000;
    }
    if ((arg0 + arg1) & 0x1FFF) {
        (*__base_D_800276E0) = 0;
    } else {
        (*__base_D_800276E0) = 1;
    }
    if (func_80113F30() == 0) {
        *(volatile s32 *)0xA4500000 = func_801176C0(var_s0);
        *(volatile s32 *)0xA4500004 = arg1;
        return 0;
    }
    return -1;
}
