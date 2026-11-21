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

s32 func_8024319C();                                /* extern */
s32 func_80245D1C(s32);                             /* extern */
extern M2C_UNK D_8002DBD0;

s32 func_8024322C(void *arg0) {
    M2C_UNK *__base_D_8002DBD0;
    s32 temp_v0;
    s32 var_v0;

    var_v0 = 0;
    if ((func_8024319C() == 1) && ((temp_v0 = func_80245D1C(M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 0x44)), (M2C_FIELD((__base_D_8002DBD0 = &D_8002DBD0), s32 *, 4) == temp_v0)) || (var_v0 = 0, (M2C_FIELD(__base_D_8002DBD0, s32 *, 0x14) == temp_v0)))) {
        var_v0 = 1;
    }
    return var_v0;
}
