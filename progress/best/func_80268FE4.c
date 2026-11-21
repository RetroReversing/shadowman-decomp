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

s32 func_8026908C(M2C_UNK *, M2C_UNK *);            /* extern */
M2C_UNK func_802691D0();                            /* extern */
M2C_UNK func_802692DC();                            /* extern */
M2C_UNK func_80269894();                            /* extern */
M2C_UNK func_8026A5E8(f32, f32, M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK D_80075AA8;

s32 func_80268FE4(void) {
    M2C_UNK *__base_D_80075AA8;
    f32 temp_fv0;
    f32 temp_fv0f;

    func_802691D0();
    func_802692DC();
    do { func_80269894(); } while (0);
    __base_D_80075AA8 = &D_80075AA8;
    temp_fv0 = (f32) M2C_FIELD(__base_D_80075AA8, s32 *, 0x68) * *(f32 *)0x20E1F0;
    temp_fv0f = *(f32 *)0x20E1F4;
    if (!(temp_fv0f <= temp_fv0)) {
        return func_8026908C(__base_D_80075AA8, __base_D_80075AA8);
    }
    func_8026A5E8(M2C_FIELD(__base_D_80075AA8, f32 *, 0), M2C_FIELD(__base_D_80075AA8, f32 *, 4), __base_D_80075AA8, __base_D_80075AA8, 0x40, 0x40, ((s32) (temp_fv0 - temp_fv0f) | 0x80000000) & 0xFF);
    return 1;
}
