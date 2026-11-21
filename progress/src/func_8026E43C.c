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

M2C_UNK func_8011BA20(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_8025DF30();                            /* extern */
M2C_UNK func_80268E9C();                            /* extern */
extern M2C_UNK D_80030610;
extern M2C_UNK D_80075F20;
extern s8 D_80075F21;
extern M2C_UNK D_80075F68;
extern s16 D_80075F80;

void func_8026E43C(s32 arg0) {
    M2C_UNK *__base_D_80030610;
    s32 var_v1;
    void *var_v0;

    func_8025DF30();
    func_8011BA20(&D_80075F20, 0, 0x34);
    var_v1 = 0xF;
    __base_D_80030610 = &D_80030610;
    var_v0 = (void *) ((0x1E) + (s32) __base_D_80030610);
    do {
        M2C_FIELD(var_v0, s8 *, 1) = 0;
        var_v1 -= 1;
        var_v0 -= 2;
    } while (var_v1 >= 0);
    func_8011BA20(&D_80075F68, 0, 0x11);
    D_80075F21 = -1;
    if (arg0 != 0) {
        func_80268E9C();
    }
    D_80075F80 = 1;
}
