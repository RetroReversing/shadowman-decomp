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

s16 func_80108908(s16, M2C_UNK, M2C_UNK, s16, f32, s32); /* extern */
M2C_UNK func_80108A18(s32, s16, M2C_UNK, M2C_UNK, s32, f32); /* extern */
f32 func_80108D1C(M2C_UNK *, s32);                  /* extern */
M2C_UNK func_80108DA8(M2C_UNK *, M2C_UNK);          /* extern */
s16 func_80109530();                                /* extern */
extern M2C_UNK D_8001E5B0;

s16 func_80109450(s16 arg0, s16 arg1, M2C_UNK arg2) {
    M2C_UNK *__base_D_8001E5B0;
    s16 ret;
s16 __repair_result_ret;
    char sp18[0x10];
    f32 temp_fv0;

    func_80108DA8(sp18, arg2);
    __base_D_8001E5B0 = &D_8001E5B0;
    temp_fv0 = func_80108D1C(sp18, (__base_D_8001E5B0)[arg1 * 3]);
    if (arg0 != -1) {
        func_80108A18(arg0 & 0xFF, arg1, 0, 0x3F, (s32) (s16) (s32) temp_fv0, *(f32 *)0x100690);
        __repair_result_ret = func_80109530();
    } else {
        ret = func_80108908(arg1, 0, 0x3F, (s16) (s32) temp_fv0, *(f32 *)0x100694, 1);
    }
    return ret;
}
